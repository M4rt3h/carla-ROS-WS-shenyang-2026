#!/usr/bin/env python3
import sys
import math

sys.path.insert(0, '/home/martin/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.15/PythonAPI/carla/dist/carla-0.9.15-py3.8-linux-x86_64.egg')
sys.path.insert(0, '/home/martin/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.15/PythonAPI/carla')
sys.path.insert(0, '/home/martin/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.15/PythonAPI')

import carla
from agents.navigation.global_route_planner import GlobalRoutePlanner

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, DurabilityPolicy

from visualization_msgs.msg import MarkerArray, Marker
from geometry_msgs.msg import Point, PoseStamped

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
        self.best_control = (0.0, 0.0)  # (v, steer)
        self.target_waypoint = None 
        self.create_subscription(PoseStamped, '/goal_pose', self.goal_callback, 10)

        # Subscribers
        self.create_subscription(Odometry, '/carla/hero/odometry', self.odom_callback, 10)
        self.create_subscription(MarkerArray, '/carla/prediction/trajectories', self.prediction_callback, 10)
            
        # Publishers : Contrôle physique des pédales et du volant
        self.pub_cmd = self.create_publisher(CarlaEgoVehicleControl, '/carla/hero/vehicle_control_cmd', 10)
        
        # Publisher : Visualisation de la trajectoire choisie dans RViz
        self.pub_viz = self.create_publisher(Marker, '/carla/planning/chosen_trajectory', 10)
        
        # Création d'un profil QoS "Transient Local" (Latched)
        latched_qos = QoSProfile(
            depth=1,
            durability=DurabilityPolicy.TRANSIENT_LOCAL
        )

        # Publishers : Forçage des droits d'accès
        self.pub_autopilot = self.create_publisher(Bool, '/carla/hero/enable_autopilot', latched_qos)
        self.pub_override = self.create_publisher(Bool, '/carla/hero/vehicle_control_manual_override', latched_qos)

        

        # --- Watchdog (Mécanisme anti-blocage) ---
        self.stuck_time = 0.0
        self.recovery_time = 0.0
        self.is_recovering = False
        self.recovery_steer = 0.0
        self.last_obstacles = []

        # CARLA map connection
        try:
            self._carla_map = carla.Client('localhost', 2000).get_world().get_map()
            self._grp = GlobalRoutePlanner(self._carla_map, sampling_resolution=4.0)
            self.get_logger().info('GlobalRoutePlanner initialisé.')
        except Exception as e:
            self._grp = None
            self.get_logger().error(f'CARLA connexion échouée: {e}')

        ##
        self.path_waypoints = []
        self.pub_path = self.create_publisher(MarkerArray, '/carla/planning/path', 10)
        
        self.create_timer(0.1, self._control_loop)  # 10 Hz

        self.target_waypoint = None
        self.create_subscription(PoseStamped, '/goal_pose', self.goal_callback, 10)

    def goal_callback(self, msg: PoseStamped):
        self.target_waypoint = (msg.pose.position.x, -msg.pose.position.y)  # ROS frame, inversion Y
        self.get_logger().info(f'Nouvelle cible : {self.target_waypoint}')
        self._replan()

    def _replan(self):
        if self._grp is None or self.ego_pose is None:
            return
        ex, ey = self.ego_pose.position.x, -self.ego_pose.position.y
        gx, gy = self.target_waypoint
        # ROS → CARLA : inversion Y
        start = carla.Location(x=ex,  y=ey,  z=0.0)
        end   = carla.Location(x=gx,  y=gy,  z=0.0)
        """try:
            route = self._grp.trace_route(start, end)
            # Stockage en ROS frame
            self.path_waypoints = [(wp.transform.location.x, -wp.transform.location.y)
                                for wp, _ in route]
            self._publish_path()
            self.get_logger().info(f'Route calculée : {len(self.path_waypoints)} waypoints.')
        except Exception as e:
            self.get_logger().error(f'Replanning échoué: {e}')
        raw = [(wp.transform.location.x, -wp.transform.location.y) for wp, _ in route]
        # Garde 1 WP tous les 4m minimum
        self.path_waypoints = [raw[0]]
        for pt in raw[1:]:
            if math.hypot(pt[0]-self.path_waypoints[-1][0], pt[1]-self.path_waypoints[-1][1]) >= 4.0:
                self.path_waypoints.append(pt)"""
        
        try:
            route = self._grp.trace_route(start, end)
            raw = [(wp.transform.location.x, -wp.transform.location.y) for wp, _ in route]
            self.path_waypoints = [raw[0]]
            for pt in raw[1:]:
                if math.hypot(pt[0]-self.path_waypoints[-1][0], pt[1]-self.path_waypoints[-1][1]) >= 4.0:
                    self.path_waypoints.append(pt)
            self._publish_path()
            self.get_logger().info(f'Route calculée : {len(self.path_waypoints)} waypoints.')
        except Exception as e:
            self.get_logger().error(f'Replanning échoué: {e}')
    
    def _publish_path(self):
        ma = MarkerArray()
        m = Marker()
        m.header.frame_id = 'map'
        m.header.stamp = self.get_clock().now().to_msg()
        m.ns = 'planned_path'; m.id = 0
        m.type = Marker.LINE_STRIP; m.action = Marker.ADD
        m.scale.x = 0.25
        m.color.r, m.color.g, m.color.b, m.color.a = 0.0, 1.0, 0.5, 0.9
        for wx, wy in self.path_waypoints:
            m.points.append(Point(x=float(wx), y=float(wy), z=0.1))
        ma.markers.append(m)
        self.pub_path.publish(ma)

    def _control_loop(self):
        # Force ROS control (écrase autopilot)
        msg = Bool(); msg.data = False
        self.pub_autopilot.publish(msg)
        self.pub_override.publish(msg)

        if not self.ego_pose or not self.path_waypoints:
            return

        # Arrivée détectée
        ex, ey = self.ego_pose.position.x, self.ego_pose.position.y
        gx, gy = self.path_waypoints[-1]
        if math.hypot(ex - gx, ey - gy) < 2.0:
            self.get_logger().info('Destination atteinte.')
            self.target_waypoint = None
            self.path_waypoints = []
            self._publish_control(0.0, 1.0, 0.0)
            return

        if not self.best_control[0] and not self.path_waypoints:
            return  # Pas de goal, on ne publie rien

        ex, ey = self.ego_pose.position.x, self.ego_pose.position.y
        yaw_now = get_yaw(self.ego_pose.orientation)
        fx, fy = math.cos(yaw_now), math.sin(yaw_now)
        while len(self.path_waypoints) > 1:
            dx = self.path_waypoints[0][0] - ex
            dy = self.path_waypoints[0][1] - ey
            if math.hypot(dx, dy) < 2.0 or (dx*fx + dy*fy) < 0:
                self.path_waypoints.pop(0)
            else:
                break

        # Avancement waypoints
        yaw_now = get_yaw(self.ego_pose.orientation)
        fx, fy = math.cos(yaw_now), math.sin(yaw_now)
        while len(self.path_waypoints) > 1:
            dx = self.path_waypoints[0][0] - ex
            dy = self.path_waypoints[0][1] - ey
            if math.hypot(dx, dy) < 2.0 or (dx*fx + dy*fy) < 0:
                self.path_waypoints.pop(0)
            else:
                break

        v, steer = self.best_control
        self._publish_control(v, steer, 0.0)

    def odom_callback(self, msg: Odometry):
        self.ego_pose = msg.pose.pose
        self.ego_twist = msg.twist.twist

    def prediction_callback(self, msg: MarkerArray):
        if not self.ego_pose or not self.path_waypoints:
            return
        obstacles, ego_prediction = self._parse_marker_array(msg)
        candidates = self._generate_candidates()
        best, min_cost = None, float('inf')
        for c in candidates:
            cost = self._evaluate_cost(c, obstacles, ego_prediction)
            if cost < min_cost:
                min_cost, best = cost, c
        if best:
            self._publish_visualization(best)
            self.best_control = (best['v'], best['steer'])

    def _parse_marker_array(self, marker_array: MarkerArray):
        obstacles = []
        ego_prediction = None
        
        if not self.ego_pose:
            return obstacles, ego_prediction

        ego_x = self.ego_pose.position.x
        ego_y = self.ego_pose.position.y
        yaw = get_yaw(self.ego_pose.orientation)

        # Calcul du vecteur directeur de notre voiture (L'avant)
        fx = math.cos(yaw)
        fy = math.sin(yaw)

        for m in marker_array.markers:
            # Type 4 = LINE_STRIP dans RViz
            if m.type != 4 or not m.points:
                continue
                
            pts = [(p.x, p.y) for p in m.points]
            
            # 1. Isolement de l'intuition IA (La ligne Rouge de l'Ego)
            if m.color.r > 0.8 and m.color.b < 0.2 and m.color.g < 0.2:
                ego_prediction = pts
                continue
            if m.color.a < 0.5:
                continue
                            
            # 2. Filtrage des agents par produit scalaire
            start_x, start_y = pts[0][0], pts[0][1]
            dx = start_x - ego_x
            dy = start_y - ego_y
            
            dot_product = dx * fx + dy * fy
            
            # Si l'agent est derrière nous, on l'ignore.
            # On laisse une tolérance de -2.0 mètres pour ne pas ignorer 
            # un véhicule qui serait exactement dans notre angle mort.
            if dot_product < -2.0:
                continue
                
            # L'agent est devant ou sur le côté, on l'ajoute aux calculs de collision
            obstacles.append({'prob': m.color.a, 'points': pts})
            
        return obstacles, ego_prediction

    def _generate_candidates(self):
        candidates = []
        x = self.ego_pose.position.x
        y = self.ego_pose.position.y
        base_yaw = get_yaw(self.ego_pose.orientation)

        speeds = [self.target_speed, self.target_speed / 2.0, 0.0]
        # Angles de braquage intermédiaires ajoutés
        steers = [0.0, -0.1, 0.1, -0.25, 0.25, -0.5, 0.5] 

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
                # Pénalité de braquage ramenée à 0
                steer_penalty = 0.0 
                
                candidates.append({
                    'v': v, 
                    'steer': s, 
                    'points': pts, 
                    'base_cost': speed_penalty + steer_penalty
                })
                
        return candidates

    def _evaluate_cost(self, candidate, obstacles, ego_prediction):

        # 1. Sécurité : Si pas de cible, on renvoie un coût énorme pour forcer l'arrêt
        if self.target_waypoint is None:
            return 9999.0

        # 2. Calcul distance cible
        dist_to_goal = math.hypot(
            candidate['points'][-1][0] - self.target_waypoint[0],
            candidate['points'][-1][1] - self.target_waypoint[1]
        )
        
        # 3. Si arrivé (< 2m), on favorise cette trajectoire (-500)
        if dist_to_goal < 2.0:
            return -500.0
        
        cost = candidate['base_cost']
        
        # 1. ÉVALUATION DES OBSTACLES DYNAMIQUES (Time-To-Collision)
        max_collision_cost = 0.0
        
        for mode in obstacles:
            for t_idx, ego_pt in enumerate(candidate['points']):
                if t_idx >= len(mode['points']):
                    break
                agent_pt = mode['points'][t_idx]
                dist = math.hypot(ego_pt[0]-agent_pt[0], ego_pt[1]-agent_pt[1])

                if dist < self.safety_distance:
                    # Vérifie que la distance diminuait avant l'impact (approche réelle)
                    if t_idx > 0:
                        prev_ego   = candidate['points'][t_idx-1]
                        prev_agent = mode['points'][t_idx-1]
                        prev_dist  = math.hypot(prev_ego[0]-prev_agent[0],
                                                prev_ego[1]-prev_agent[1])
                        if prev_dist <= dist:
                            # Distance stable ou croissante = agent qui passe, ignore
                            break

                    time_future = t_idx * 0.5
                    if time_future > 4.0:
                        break
                    impact_penalty = 1000.0 * mode['prob'] * math.exp(-0.8 * time_future)
                    if impact_penalty > max_collision_cost:
                        max_collision_cost = impact_penalty
                    break
                else:
                    time_future = t_idx * 0.5
                    proximity = (1.0 / dist) * mode['prob'] * math.exp(-0.4 * time_future)
                    cost += proximity

        cost += max_collision_cost

        # 2. ROUTE FOLLOWING (Pure Pursuit sur la route planifiée)
        if self.path_waypoints:
            ego_x, ego_y = candidate['points'][0]
            target_pt = self.path_waypoints[-1]
            for pt in self.path_waypoints:
                if math.hypot(pt[0] - ego_x, pt[1] - ego_y) > 3.0:
                    target_pt = pt
                    break
            min_dist = min(math.hypot(cp[0] - target_pt[0], cp[1] - target_pt[1])
                        for cp in candidate['points'])
            cost += min(min_dist, 3.0) ** 2 * 80.0
            
        return cost
            
    def _publish_control(self, target_v, target_steer, min_cost):
        cmd = CarlaEgoVehicleControl()
        current_v = math.hypot(self.ego_twist.linear.x, self.ego_twist.linear.y)
        
        # 1. MACHINE À ÉTATS : EXÉCUTION DE LA MARCHE ARRIÈRE
        if self.is_recovering:
            self.recovery_time -= 0.5 
            if self.recovery_time <= 0:
                self.is_recovering = False
                self.stuck_time = 0.0
                self.get_logger().info("Fin du dégagement. Nouveau cap établi, retour à l'IA.")
            else:
                cmd.throttle = 0.4 
                cmd.brake = 0.0
                # On utilise l'angle de dégagement calculé lors du crash
                cmd.steer = self.recovery_steer 
                cmd.reverse = True
                cmd.hand_brake = False
                cmd.manual_gear_shift = False
                self.pub_cmd.publish(cmd)
                return

        # 2. LOGIQUE NORMALE DU PLANIFICATEUR
        action_pedale = "Inconnu"
        if min_cost >= 800.0:
            cmd.throttle = 0.0
            cmd.brake = 1.0
            action_pedale = "Arrêt urgence"
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

        # 3. WATCHDOG HYBRIDE (Tactique + Physique)
        is_tactically_blocked = (min_cost >= 800.0 and current_v < 0.1)
        is_physically_blocked = (cmd.throttle > 0.1 and current_v < 0.1)

        if is_tactically_blocked or is_physically_blocked:
            self.stuck_time += 0.5
            if self.stuck_time >= 4.0:
                self.is_recovering = True
                self.recovery_time = 3.0 
                
                # --- CALCUL DU BRAQUAGE DE DÉGAGEMENT ---
                # Rappel : Dans CARLA, steer < 0 = Gauche, steer > 0 = Droite.
                # target_steer (ROS) est inversé : > 0 = Gauche.
                if target_steer > 0.05:
                    # Bloqué en voulant aller à gauche. Recule roues à gauche pour que l'avant balaye à droite.
                    self.recovery_steer = -0.7 
                elif target_steer < -0.05:
                    # Bloqué en voulant aller à droite. Recule roues à droite pour que l'avant balaye à gauche.
                    self.recovery_steer = 0.7 
                else:
                    # Bloqué tout droit : on casse la ligne droite arbitrairement vers la droite
                    self.recovery_steer = 0.7 
                
                if is_physically_blocked and not is_tactically_blocked:
                    self.get_logger().error("COLLISION AVEUGLE : Recul avec modification de cap !")
                else:
                    self.get_logger().error("IMPASSE DÉTECTÉE : Recul avec modification de cap !")
                
                cmd.throttle = 0.4
                cmd.brake = 0.0
                cmd.steer = self.recovery_steer
                cmd.reverse = True
                self.pub_cmd.publish(cmd)
                return
        else:
            self.stuck_time = 0.0 

        # 4. PUBLICATION NORMALE (Marche avant)
        cmd.steer = -target_steer
        cmd.reverse = False
        
        if min_cost < 800.0:
            if target_steer == 0.0:
                self.get_logger().info(f"[{action_pedale}] Suivi IA | Cible: {target_v} m/s | Coût: {min_cost:.1f}")
            else:
                direction = "DROITE" if target_steer < 0 else "GAUCHE"
                self.get_logger().info(f"[{action_pedale}] Évitement {direction} | Cible: {target_v} m/s | Coût: {min_cost:.1f}")
            
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