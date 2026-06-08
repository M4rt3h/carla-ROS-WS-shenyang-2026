#!/usr/bin/env python3
import sys
import os
import math
import glob

sys.path.insert(0, '/home/martin/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.15/PythonAPI/carla/dist/carla-0.9.15-py3.8-linux-x86_64.egg')
sys.path.insert(0, '/home/martin/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.15/PythonAPI/carla')
sys.path.insert(0, '/home/martin/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.15/PythonAPI')

import carla

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
        
        # --- Paramètres ---
        self.declare_parameter('safety_distance', 1.5)
        self.declare_parameter('target_speed', 5.0)
        self.safety_distance = self.get_parameter('safety_distance').value
        self.target_speed = self.get_parameter('target_speed').value
        
        # --- État du système ---
        self.ego_pose = None
        self.ego_twist = None
        self.best_control = (0.0, 0.0)  # (v, steer)
        self.target_waypoint = None 
        self.path_waypoints = []
        
        # Watchdog (Mécanisme anti-blocage)
        self.stuck_time = 0.0
        self.recovery_time = 0.0
        self.is_recovering = False
        self.recovery_steer = 0.0
        self.last_obstacles = []

        # --- Subscribers ---
        self.create_subscription(PoseStamped, '/goal_pose', self.goal_callback, 10)
        self.create_subscription(Odometry, '/carla/hero/odometry', self.odom_callback, 10)
        self.create_subscription(MarkerArray, '/carla/prediction/trajectories', self.prediction_callback, 10)
            
        # --- Publishers ---
        self.pub_cmd = self.create_publisher(CarlaEgoVehicleControl, '/carla/hero/vehicle_control_cmd', 10)
        self.pub_viz = self.create_publisher(Marker, '/carla/planning/chosen_trajectory', 10)
        self.pub_path = self.create_publisher(MarkerArray, '/carla/planning/path', 10)
        
        # Publishers (Forçage des droits d'accès avec QoS Latched)
        latched_qos = QoSProfile(depth=1, durability=DurabilityPolicy.TRANSIENT_LOCAL)
        self.pub_autopilot = self.create_publisher(Bool, '/carla/hero/enable_autopilot', latched_qos)
        self.pub_override = self.create_publisher(Bool, '/carla/hero/vehicle_control_manual_override', latched_qos)

        # --- Initialisation CARLA ---
        try:
            self._carla_map = carla.Client('localhost', 2000).get_world().get_map()
            self._grp = GlobalRoutePlanner(self._carla_map, sampling_resolution=4.0)
            self.get_logger().info('GlobalRoutePlanner initialisé.')
        except Exception as e:
            self._grp = None
            self.get_logger().error(f'CARLA connexion échouée: {e}')

        # --- Timers ---
        self.create_timer(0.1, self._control_loop)  # 10 Hz

    def goal_callback(self, msg: PoseStamped):
        self.target_waypoint = (msg.pose.position.x, -msg.pose.position.y)  # ROS frame, inversion Y
        self.get_logger().info(f'Nouvelle cible : {self.target_waypoint}')
        self._replan()

    def _replan(self):
        if self._grp is None or self.ego_pose is None or self.target_waypoint is None:
            return
            
        ex, ey = self.ego_pose.position.x, -self.ego_pose.position.y
        gx, gy = self.target_waypoint
        
        # ROS → CARLA : inversion Y
        start = carla.Location(x=ex, y=ey, z=0.0)
        end = carla.Location(x=gx, y=gy, z=0.0)
        
        try:
            route = self._grp.trace_route(start, end)
            raw = [(wp.transform.location.x, -wp.transform.location.y) for wp, _ in route]
            
            if not raw:
                return
                
            self.path_waypoints = [raw[0]]
            for pt in raw[1:]:
                # Conservation d'un waypoint tous les 4 mètres minimum
                if math.hypot(pt[0] - self.path_waypoints[-1][0], pt[1] - self.path_waypoints[-1][1]) >= 4.0:
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
        m.ns = 'planned_path'
        m.id = 0
        m.type = Marker.LINE_STRIP
        m.action = Marker.ADD
        m.scale.x = 0.25
        m.color.r, m.color.g, m.color.b, m.color.a = 0.0, 1.0, 0.5, 0.9
        
        for wx, wy in self.path_waypoints:
            m.points.append(Point(x=float(wx), y=float(wy), z=0.1))
            
        ma.markers.append(m)
        self.pub_path.publish(ma)

    def _control_loop(self):
        # Force ROS control (écrase autopilot)
        msg = Bool()
        msg.data = False
        self.pub_autopilot.publish(msg)
        self.pub_override.publish(msg)

        if not self.ego_pose or not self.path_waypoints:
            return

        ex = self.ego_pose.position.x
        ey = self.ego_pose.position.y
        gx, gy = self.path_waypoints[-1]

        # Arrivée détectée (Tolérance : 2.0 mètres)
        if math.hypot(ex - gx, ey - gy) < 2.0:
            self.get_logger().info('Destination atteinte.')
            self.target_waypoint = None
            self.path_waypoints.clear()
            self._publish_control(0.0, 1.0, 0.0)
            return

        # Mise à jour des waypoints en fonction de la position du véhicule
        yaw_now = get_yaw(self.ego_pose.orientation)
        fx, fy = math.cos(yaw_now), math.sin(yaw_now)
        
        while len(self.path_waypoints) > 1:
            dx = self.path_waypoints[0][0] - ex
            dy = self.path_waypoints[0][1] - ey
            
            # Élimination du waypoint si le véhicule est proche ou l'a dépassé (produit scalaire négatif)
            if math.hypot(dx, dy) < 2.0 or (dx * fx + dy * fy) < 0:
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
            
        obstacles, _ = self._parse_marker_array(msg)
        candidates = self._generate_candidates()
        
        best, min_cost = None, float('inf')
        for c in candidates:
            cost = self._evaluate_cost(c, obstacles)
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

        # Vecteur directeur du véhicule
        fx = math.cos(yaw)
        fy = math.sin(yaw)

        for m in marker_array.markers:
            if m.type != Marker.LINE_STRIP or not m.points:
                continue
                
            pts = [(p.x, p.y) for p in m.points]
            
            # Isolement de la prédiction de l'Ego (ligne rouge)
            if m.color.r > 0.8 and m.color.b < 0.2 and m.color.g < 0.2:
                ego_prediction = pts
                continue
                
            if m.color.a < 0.5:
                continue
                            
            # Filtrage des agents par produit scalaire (ignorer ce qui est derrière)
            start_x, start_y = pts[0][0], pts[0][1]
            dx, dy = start_x - ego_x, start_y - ego_y
            dot_product = dx * fx + dy * fy
            
            # Tolérance de -2.0m pour les angles morts
            if dot_product >= -2.0:
                obstacles.append({'prob': m.color.a, 'points': pts})
            
        return obstacles, ego_prediction

    def _generate_candidates(self):
        candidates = []
        x = self.ego_pose.position.x
        y = self.ego_pose.position.y
        base_yaw = get_yaw(self.ego_pose.orientation)

        speeds = [self.target_speed, self.target_speed / 2.0, 0.0]
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
                
                for _ in range(12):
                    current_x += step_dist * math.cos(current_yaw)
                    current_y += step_dist * math.sin(current_yaw)
                    pts.append((current_x, current_y))
                    current_yaw += yaw_rate * step_dist
                
                # Pénalité de vitesse (le braquage n'est plus pénalisé ici)
                speed_penalty = (self.target_speed - v) * 20.0 
                
                candidates.append({
                    'v': v, 
                    'steer': s, 
                    'points': pts, 
                    'base_cost': speed_penalty
                })
                
        return candidates

    def _evaluate_cost(self, candidate, obstacles):
        if self.target_waypoint is None:
            return 9999.0

        # Priorité absolue : vérifier si la trajectoire mène à la cible
        dist_to_goal = math.hypot(
            candidate['points'][-1][0] - self.target_waypoint[0],
            candidate['points'][-1][1] - self.target_waypoint[1]
        )
        if dist_to_goal < 2.0:
            return -500.0
        
        cost = candidate['base_cost']
        cost += self._evaluate_collision_cost(candidate, obstacles)
        cost += self._evaluate_route_following_cost(candidate)
            
        return cost

    def _evaluate_collision_cost(self, candidate, obstacles):
        max_collision_cost = 0.0
        proximity_cost = 0.0
        
        for mode in obstacles:
            for t_idx, ego_pt in enumerate(candidate['points']):
                if t_idx >= len(mode['points']):
                    break
                    
                agent_pt = mode['points'][t_idx]
                dist = math.hypot(ego_pt[0] - agent_pt[0], ego_pt[1] - agent_pt[1])

                if dist < self.safety_distance:
                    # Vérification d'approche réelle
                    if t_idx > 0:
                        prev_ego = candidate['points'][t_idx-1]
                        prev_agent = mode['points'][t_idx-1]
                        prev_dist = math.hypot(prev_ego[0] - prev_agent[0], prev_ego[1] - prev_agent[1])
                        
                        if prev_dist <= dist:
                            break  # Agent en phase d'éloignement, ignoré

                    time_future = t_idx * 0.5
                    if time_future > 4.0:
                        break
                        
                    impact_penalty = 1000.0 * mode['prob'] * math.exp(-0.8 * time_future)
                    max_collision_cost = max(max_collision_cost, impact_penalty)
                    break
                else:
                    time_future = t_idx * 0.5
                    proximity_cost += (1.0 / dist) * mode['prob'] * math.exp(-0.4 * time_future)

        return max_collision_cost + proximity_cost

    def _evaluate_route_following_cost(self, candidate):
        if not self.path_waypoints:
            return 0.0
            
        ego_x, ego_y = candidate['points'][0]
        target_pt = self.path_waypoints[-1]
        
        # Recherche du prochain point de suivi à au moins 3 mètres
        for pt in self.path_waypoints:
            if math.hypot(pt[0] - ego_x, pt[1] - ego_y) > 3.0:
                target_pt = pt
                break
                
        min_dist = min(
            math.hypot(cp[0] - target_pt[0], cp[1] - target_pt[1]) 
            for cp in candidate['points']
        )
        
        return min(min_dist, 3.0) ** 2 * 80.0
            
    def _publish_control(self, target_v, target_steer, min_cost):
        cmd = CarlaEgoVehicleControl()
        current_v = math.hypot(self.ego_twist.linear.x, self.ego_twist.linear.y)
        
        # --- Constantes de contrôle (à passer en paramètres ROS idéalement) ---
        EMERGENCY_COST_THRESHOLD = 800.0
        STUCK_TIME_LIMIT = 4.0
        RECOVERY_DURATION = 3.0
        RECOVERY_THROTTLE = 0.4
        RECOVERY_STEER_ANGLE = 0.7
        
        # 1. MACHINE À ÉTATS : EXÉCUTION DE LA MARCHE ARRIÈRE
        if self.is_recovering:
            self.recovery_time -= 0.5 
            if self.recovery_time <= 0:
                self.is_recovering = False
                self.stuck_time = 0.0
                self.get_logger().info("Fin du dégagement. Nouveau cap établi, retour à l'IA.")
            else:
                cmd.throttle = RECOVERY_THROTTLE 
                cmd.brake = 0.0
                cmd.steer = self.recovery_steer 
                cmd.reverse = True
                cmd.hand_brake = False
                cmd.manual_gear_shift = False
                self.pub_cmd.publish(cmd)
                return

        # 2. LOGIQUE NORMALE DU PLANIFICATEUR
        action_pedale = "Inconnu"
        if min_cost >= EMERGENCY_COST_THRESHOLD:
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
        is_tactically_blocked = (min_cost >= EMERGENCY_COST_THRESHOLD and current_v < 0.1)
        is_physically_blocked = (cmd.throttle > 0.1 and current_v < 0.1)

        if is_tactically_blocked or is_physically_blocked:
            self.stuck_time += 0.5
            if self.stuck_time >= STUCK_TIME_LIMIT:
                self.is_recovering = True
                self.recovery_time = RECOVERY_DURATION 
                
                # Calcul du braquage de dégagement (ROS inversé)
                if target_steer > 0.05:
                    self.recovery_steer = -RECOVERY_STEER_ANGLE 
                elif target_steer < -0.05:
                    self.recovery_steer = RECOVERY_STEER_ANGLE 
                else:
                    self.recovery_steer = RECOVERY_STEER_ANGLE 
                
                log_msg = "COLLISION AVEUGLE" if (is_physically_blocked and not is_tactically_blocked) else "IMPASSE DÉTECTÉE"
                self.get_logger().error(f"{log_msg} : Recul avec modification de cap !")
                
                cmd.throttle = RECOVERY_THROTTLE
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
        
        if min_cost < EMERGENCY_COST_THRESHOLD:
            if target_steer == 0.0:
                self.get_logger().info(f"[{action_pedale}] Suivi IA | Cible: {target_v} m/s | Coût: {min_cost:.1f}")
            else:
                direction = "DROITE" if target_steer < 0 else "GAUCHE"
                self.get_logger().info(f"[{action_pedale}] Évitement {direction} | Cible: {target_v} m/s | Coût: {min_cost:.1f}")
            
        cmd.hand_brake = False
        cmd.manual_gear_shift = False
        self.pub_cmd.publish(cmd)

    def _publish_visualization(self, candidate):
        marker = Marker()
        marker.header.frame_id = "map"
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = "planning_tentacle"
        marker.id = 0
        marker.type = Marker.LINE_STRIP
        marker.action = Marker.ADD
        
        marker.scale.x = 0.3 
        marker.color.r = 0.0
        marker.color.g = 1.0
        marker.color.b = 0.0
        marker.color.a = 1.0

        for pt in candidate['points']:
            p = Point()
            p.x = float(pt[0])
            p.y = float(pt[1])
            p.z = 0.5 
            marker.points.append(p)

        self.pub_viz.publish(marker)


def main(args=None):
    rclpy.init(args=args)
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