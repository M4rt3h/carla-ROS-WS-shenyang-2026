#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import math
import carla

from rclpy.qos import QoSProfile, DurabilityPolicy
from visualization_msgs.msg import MarkerArray, Marker
from geometry_msgs.msg import Point
from nav_msgs.msg import Odometry
from std_msgs.msg import Bool
from carla_msgs.msg import CarlaEgoVehicleControl

def get_yaw(q):
    siny_cosp = 2 * (q.w * q.z + q.x * q.y)
    cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z)
    return math.atan2(siny_cosp, cosy_cosp)

class MotionPlannerNode(Node):
    def __init__(self):
        super().__init__('motion_planner_node')
        
        self.declare_parameter('safety_distance', 1.5)
        self.declare_parameter('target_speed', 5.0)
        self.safety_distance = self.get_parameter('safety_distance').value
        self.target_speed = self.get_parameter('target_speed').value
        
        self.ego_pose = None
        self.ego_twist = None
        
        # Subscribers
        self.create_subscription(Odometry, '/carla/hero/odometry', self.odom_callback, 10)
        self.create_subscription(MarkerArray, '/carla/prediction/trajectories', self.prediction_callback, 10)
            
        # Publishers : Contrôle physique des pédales et du volant
        self.pub_cmd = self.create_publisher(CarlaEgoVehicleControl, '/carla/hero/vehicle_control_cmd', 10)
        
        # Création d'un profil QoS "Transient Local" (Latched)
        latched_qos = QoSProfile(
            depth=1,
            durability=DurabilityPolicy.TRANSIENT_LOCAL
        )

        # Publisher : Visualisation de la trajectoire choisie dans RViz
        self.pub_viz = self.create_publisher(Marker, '/carla/planning/chosen_trajectory', 10)

        # Publishers : Forçage des droits d'accès
        self.pub_autopilot = self.create_publisher(Bool, '/carla/hero/enable_autopilot', latched_qos)
        self.pub_override = self.create_publisher(Bool, '/carla/hero/vehicle_control_manual_override', latched_qos)
        
        # Verrouillage du contrôle à 2 Hz (Écrase tes actions manuelles après 0.5s)
        self.create_timer(0.5, self._force_ros_control)

    def _force_ros_control(self):
        msg = Bool()
        msg.data = False
        self.pub_autopilot.publish(msg)
        self.pub_override.publish(msg)

    def odom_callback(self, msg: Odometry):
        self.ego_pose = msg.pose.pose
        self.ego_twist = msg.twist.twist

    def prediction_callback(self, msg: MarkerArray):
        if not self.ego_pose:
            return

        obstacles, ego_prediction = self._parse_marker_array(msg)
        
        # Sécurité : Arrêt si l'IA crashe ou ne fournit pas de cap
        if not ego_prediction or len(ego_prediction) < 5:
            self.get_logger().warn("Perte du signal de l'IA (Pas de ref Ego). Arrêt.")
            self._publish_control(0.0, 0.0, 1000.0)
            return

        candidates = self._generate_candidates()
        
        best_candidate = None
        min_cost = float('inf')
        
        for candidate in candidates:
            cost = self._evaluate_cost(candidate, obstacles, ego_prediction)
            if cost < min_cost:
                min_cost = cost
                best_candidate = candidate

        if best_candidate:
            self._publish_visualization(best_candidate)
            self._publish_control(best_candidate['v'], best_candidate['steer'], min_cost)

    def _parse_marker_array(self, marker_array: MarkerArray):
        obstacles = []
        ego_prediction = None
        ego_x = self.ego_pose.position.x
        ego_y = self.ego_pose.position.y
        yaw = get_yaw(self.ego_pose.orientation)
        
        fx = math.cos(yaw)
        fy = math.sin(yaw)

        for m in marker_array.markers:
            if m.type != 4 or not m.points:
                continue
                
            pts = [(p.x, p.y) for p in m.points]
            
            # Isolement de la prédiction Ego (Rouge pur)
            if m.color.r > 0.8 and m.color.b < 0.2 and m.color.g < 0.2:
                ego_prediction = pts
                continue
                
            start_x, start_y = pts[0][0], pts[0][1]
            dx = start_x - ego_x
            dy = start_y - ego_y
            
            # Ignorer les agents derrière
            if (dx * fx + dy * fy) < 0.0:
                continue
                
            obstacles.append({'prob': m.color.a, 'points': pts})
            
        return obstacles, ego_prediction

    def _generate_candidates(self):
        candidates = []
        x = self.ego_pose.position.x
        y = self.ego_pose.position.y
        base_yaw = get_yaw(self.ego_pose.orientation)

        speeds = [self.target_speed, self.target_speed / 2.0, 0.0]
        steers = [0.0, -0.15, 0.15, -0.4, 0.4] 

        for v in speeds:
            for s in steers:
                if v == 0.0 and s != 0.0:
                    continue
                    
                pts = []
                current_yaw = base_yaw
                current_x = x
                current_y = y
                step_dist = v * 0.5 
                yaw_rate = s * 0.15 
                
                for i in range(12):
                    current_x += step_dist * math.cos(current_yaw)
                    current_y += step_dist * math.sin(current_yaw)
                    pts.append((current_x, current_y))
                    current_yaw += yaw_rate * step_dist
                
                speed_penalty = (self.target_speed - v) * 20.0 
                # Chute drastique de la pénalité (de 30.0 à 2.0)
                steer_penalty = abs(s) * 2.0 
                
                candidates.append({
                    'v': v, 
                    'steer': s, 
                    'points': pts, 
                    'base_cost': speed_penalty + steer_penalty
                })
                
        return candidates

    def _evaluate_cost(self, candidate, obstacles, ego_prediction):
        cost = candidate['base_cost']
        
        # 1. ÉVALUATION DES OBSTACLES DYNAMIQUES
        for t_idx, ego_pt in enumerate(candidate['points']):
            time_future = t_idx * 0.5 
            time_discount = math.exp(-0.4 * time_future) 
            
            for mode in obstacles:
                if t_idx < len(mode['points']):
                    agent_pt = mode['points'][t_idx]
                    dist = math.hypot(ego_pt[0] - agent_pt[0], ego_pt[1] - agent_pt[1])
                    
                    if dist < self.safety_distance:
                        cost += 1000.0 * mode['prob'] * time_discount
                    else:
                        cost += (1.0 / dist) * mode['prob'] * time_discount
                        
        # 2. PURE PURSUIT SPATIAL (Suivi de l'intuition IA)
        if len(ego_prediction) > 1:
            ego_x, ego_y = candidate['points'][0][0], candidate['points'][0][1]
            target_pt = ego_prediction[-1] # Par défaut, le bout de la ligne rouge
            
            # On cherche un "point de mire" situé à environ 5 mètres devant le véhicule
            for pt in ego_prediction:
                if math.hypot(pt[0] - ego_x, pt[1] - ego_y) > 5.0:
                    target_pt = pt
                    break
                    
            # On cherche à quelle distance minimale le tentacule passe de ce point de mire
            min_dist = float('inf')
            for cand_pt in candidate['points']:
                dist = math.hypot(cand_pt[0] - target_pt[0], cand_pt[1] - target_pt[1])
                if dist < min_dist:
                    min_dist = dist
                    
            # Plafonnement de l'erreur spatiale (Max 5 mètres pris en compte)
            # Évite que l'erreur de suivi de ligne ne dépasse le coût d'une collision (1000)
            capped_dist = min(min_dist, 5.0) 
            cost += (capped_dist ** 2) * 25.0 
            
        return cost
            
    def _publish_control(self, target_v, target_steer, min_cost):
        cmd = CarlaEgoVehicleControl()
        current_v = math.hypot(self.ego_twist.linear.x, self.ego_twist.linear.y)
        
        # 1. Calcul des pédales
        if min_cost >= 800.0:
            self.get_logger().warn(f"URGENCE : Freinage absolu ! (Coût: {min_cost:.1f})")
            cmd.throttle = 0.0
            cmd.brake = 1.0
        else:
            error = target_v - current_v
            
            if error > 0.5: 
                cmd.throttle = min(error * 0.3, 0.8)
                cmd.brake = 0.0
                action_pedale = "Accélération"
            elif error < -0.5: 
                cmd.throttle = 0.0
                cmd.brake = min(abs(error) * 0.2, 0.8) 
                action_pedale = "Ralentissement"
            else: 
                cmd.throttle = 0.0
                cmd.brake = 0.0
                action_pedale = "Maintien vitesse"
                
            if target_v == 0.0 and current_v < 0.2:
                cmd.brake = 1.0
                action_pedale = "Arrêt complet"
                
        # 2. Application du volant (Inversion d'axe pour CARLA)
        cmd.steer = -target_steer
        
        # 3. Retour terminal permanent
        if min_cost < 800.0:
            if target_steer == 0.0:
                self.get_logger().info(f"[{action_pedale}] Suivi de voie | Cible: {target_v} m/s | Coût: {min_cost:.1f}")
            else:
                direction = "DROITE" if target_steer < 0 else "GAUCHE"
                self.get_logger().info(f"[{action_pedale}] Évitement {direction} (steer math: {target_steer:.2f}) | Cible: {target_v} m/s | Coût: {min_cost:.1f}")
            
        cmd.hand_brake = False
        cmd.manual_gear_shift = False
        self.pub_cmd.publish(cmd)

    def _publish_visualization(self, candidate):
        """Dessine une ligne verte vif dans RViz représentant la trajectoire choisie."""
        marker = Marker()
        marker.header.frame_id = "map"  # Référentiel global
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = "planning_tentacle"
        marker.id = 0
        marker.type = Marker.LINE_STRIP
        marker.action = Marker.ADD
        
        # Style de la ligne : Verte, opaque, 30cm de large
        marker.scale.x = 0.3 
        marker.color.r = 0.0
        marker.color.g = 1.0
        marker.color.b = 0.0
        marker.color.a = 1.0

        # Ajout des points calculés par le planificateur
        for pt in candidate['points']:
            p = Point()
            p.x = float(pt[0])
            p.y = float(pt[1])
            p.z = 0.5  # Légèrement au-dessus du sol pour être visible
            marker.points.append(p)

        self.pub_viz.publish(marker)

def main():
    rclpy.init()
    node = MotionPlannerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()