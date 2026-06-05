#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import math

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

        parsed_predictions = self._parse_marker_array(msg)
        candidates = self._generate_candidates()
        
        best_candidate = None
        min_cost = float('inf')
        
        for candidate in candidates:
            cost = self._evaluate_cost(candidate, parsed_predictions)
            if cost < min_cost:
                min_cost = cost
                best_candidate = candidate

        if best_candidate:
            self._publish_visualization(best_candidate)

            # On passe la vitesse ET l'angle de volant
            self._publish_control(best_candidate['v'], best_candidate['steer'], min_cost)

    def _parse_marker_array(self, marker_array: MarkerArray):
        predictions = []
        ego_x = self.ego_pose.position.x
        ego_y = self.ego_pose.position.y
        yaw = get_yaw(self.ego_pose.orientation)
        
        fx = math.cos(yaw)
        fy = math.sin(yaw)

        for m in marker_array.markers:
            if m.type != 4 or not m.points:
                continue
                
            start_x, start_y = m.points[0].x, m.points[0].y
            dist_to_ego = math.hypot(start_x - ego_x, start_y - ego_y)
            
            if dist_to_ego < 2.5 or m.color.r > 0.8:
                continue
                
            dx = start_x - ego_x
            dy = start_y - ego_y
            if (dx * fx + dy * fy) < 0.0:
                continue
                
            predictions.append({'id': m.id, 'prob': m.color.a, 'points': [(p.x, p.y) for p in m.points]})
            
        return predictions

    def _generate_candidates(self):
        candidates = []
        x = self.ego_pose.position.x
        y = self.ego_pose.position.y
        base_yaw = get_yaw(self.ego_pose.orientation)

        speeds = [self.target_speed, self.target_speed / 2.0, 0.0]
        # Angles de braquage (0 = tout droit, < 0 = gauche, > 0 = droite)
        steers = [0.0, -0.15, 0.15, -0.4, 0.4] 

        for v in speeds:
            for s in steers:
                # Inutile d'évaluer le braquage si on décide de s'arrêter
                if v == 0.0 and s != 0.0:
                    continue
                    
                pts = []
                current_yaw = base_yaw
                current_x = x
                current_y = y
                step_dist = v * 0.5 # Avancée par pas de 0.5s
                
                # Approximation de la rotation du véhicule (Bicycle model simplifié)
                yaw_rate = s * 0.15 
                
                for i in range(12):
                    current_x += step_dist * math.cos(current_yaw)
                    current_y += step_dist * math.sin(current_yaw)
                    pts.append((current_x, current_y))
                    current_yaw += yaw_rate * step_dist # Le cap tourne au fil de l'avancée
                
                # Pénalités : On préfère la vitesse max ET la ligne droite
                speed_penalty = (self.target_speed - v) * 10.0 
                steer_penalty = abs(s) * 30.0 # Pénalise fort le braquage pour éviter le zigzag
                
                candidates.append({
                    'v': v, 
                    'steer': s, 
                    'points': pts, 
                    'base_cost': speed_penalty + steer_penalty
                })
                
        return candidates
    
    def _evaluate_cost(self, candidate, predictions):
        cost = candidate['base_cost']
        for t_idx, ego_pt in enumerate(candidate['points']):
            for mode in predictions:
                if t_idx < len(mode['points']):
                    agent_pt = mode['points'][t_idx]
                    dist = math.hypot(ego_pt[0] - agent_pt[0], ego_pt[1] - agent_pt[1])
                    
                    if dist < self.safety_distance:
                        cost += 1000.0 * mode['prob']
                    else:
                        cost += (1.0 / dist) * mode['prob']
        return cost

    def _publish_control(self, target_v, target_steer, min_cost):
        cmd = CarlaEgoVehicleControl()
        
        if min_cost >= 1000.0 or target_v == 0.0:
            self.get_logger().warn("Obstacle inévitable : Freinage d'urgence !")
            cmd.throttle = 0.0
            cmd.brake = 1.0
            cmd.steer = 0.0
        else:
            current_v = math.hypot(self.ego_twist.linear.x, self.ego_twist.linear.y)
            error = target_v - current_v
            
            if error > 0:
                cmd.throttle = min(error * 0.3, 0.8)
                cmd.brake = 0.0
            else:
                cmd.throttle = 0.0
                cmd.brake = 0.1 
                
            # Application de l'angle du volant avec INVERSION d'axe pour CARLA
            cmd.steer = -target_steer 
            
            # Affichage dans le terminal
            if target_steer == 0.0:
                if target_v == self.target_speed:
                    self.get_logger().info(f"Voie libre. Vitesse: {target_v} m/s.")
                else:
                    self.get_logger().info(f"Ralentissement préventif à {target_v} m/s.")
            else:
                # Mathématiquement dans ROS : < 0 c'est à Droite
                direction = "DROITE" if target_steer < 0 else "GAUCHE"
                self.get_logger().info(f"ÉVITEMENT par la {direction} (steer math: {target_steer:.2f}) à {target_v} m/s.")
                
        cmd.hand_brake = False
        cmd.manual_gear_shift = False
        self.pub_cmd.publish(cmd)
                
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