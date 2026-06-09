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
        # --- Paramètres de dynamique (PID & Virage) ---
        self.declare_parameter('kp', 1.0)           # Agressivité de l'accélération (ex: 0.5 lent, 1.5 brutal)
        self.declare_parameter('ki', 0.2)           # Correction du maintien de vitesse
        self.declare_parameter('max_throttle', 1.0) # Plafond de la pédale (1.0 = 100%)
        self.declare_parameter('cornering_agg', 0.8)# Agressivité du freinage en courbe (plus c'est bas, plus ça passe vite)
        
        # --- État du système ---
        self.ego_pose = None
        self.ego_twist = None
        self.best_control = (0.0, 0.0)  # (v, steer)
        self.ego_pose = None
        self.ego_twist = None
        self.best_control = (0.0, 0.0)  # (v, steer)
        self.best_cost = 0.0            # <-- AJOUT : Stockage du niveau de danger
        self.target_waypoint = None
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

    def _smooth_path(self, waypoints, iterations=3):
        """
        Lisse une trajectoire 2D en utilisant l'algorithme de Chaikin (Corner Cutting).
        """
        if len(waypoints) < 3:
            return waypoints
            
        smooth_path = waypoints
        for _ in range(iterations):
            new_path = [smooth_path[0]]  # Conserver le point de départ
            
            for i in range(len(smooth_path) - 1):
                p0 = smooth_path[i]
                p1 = smooth_path[i+1]
                
                # Création de deux nouveaux points à 25% et 75% du segment
                Q = (0.75 * p0[0] + 0.25 * p1[0], 0.75 * p0[1] + 0.25 * p1[1])
                R = (0.25 * p0[0] + 0.75 * p1[0], 0.25 * p0[1] + 0.75 * p1[1])
                
                new_path.extend([Q, R])
                
            new_path.append(smooth_path[-1])  # Conserver le point d'arrivée
            smooth_path = new_path
            
        return smooth_path

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
                
            # 1. Sous-échantillonnage fin (2.0m au lieu de 4.0m) pour mieux capturer la géométrie
            sampled = [raw[0]]
            for pt in raw[1:]:
                if math.hypot(pt[0] - sampled[-1][0], pt[1] - sampled[-1][1]) >= 2.0:
                    sampled.append(pt)
                    
            # 2. Lissage mathématique de la courbe (Chaikin)
            self.path_waypoints = self._smooth_path(sampled, iterations=3)
                    
            self._publish_path()
            self.get_logger().info(f'Route calculée et lissée : {len(self.path_waypoints)} waypoints.')
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

        # --- NOUVELLE MISE À JOUR ROBUSTE DES WAYPOINTS ---
        if self.path_waypoints:
            # On limite la recherche aux 20 prochains points pour ne pas accrocher une route parallèle
            horizon = min(20, len(self.path_waypoints))
            closest_idx = 0
            min_dist = float('inf')
            
            # 1. Trouver le waypoint le plus proche de l'Ego
            for i in range(horizon):
                dist = math.hypot(self.path_waypoints[i][0] - ex, self.path_waypoints[i][1] - ey)
                if dist < min_dist:
                    min_dist = dist
                    closest_idx = i
                    
            # 2. Supprimer tous les waypoints qui sont "derrière" (avant le point le plus proche)
            self.path_waypoints = self.path_waypoints[closest_idx:]
            
            # 3. Si le waypoint actuel est très proche ou sous la voiture (< 2.5m), on l'élimine
            # pour forcer la voiture à regarder devant elle ("Look-ahead").
            if len(self.path_waypoints) > 1 and min_dist < 2.5:
                self.path_waypoints.pop(0)

        # ---------------------------------------------------

        # --- ENVOI AUX PÉDALES ---
        v, steer = self.best_control
        self._publish_control(v, steer, self.best_cost) # <-- CORRECTION : Utilisation du vrai coût

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
            self.best_cost = min_cost  # <-- AJOUT : On mémorise le coût réel

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

        target_v = self.get_parameter('target_speed').value

        # 1. Éventail complet : On autorise la voiture à tourner le volant à 100%
        # L'ajout des extrêmes (-1.0, 1.0) et des intermédiaires permet de corriger finement la dérive.
        steers = [0.0, -0.1, 0.1, -0.3, 0.3, -0.6, 0.6, -1.0, 1.0]

        for s in steers:
            pts = []
            current_yaw = base_yaw
            current_x = x
            current_y = y
            
            # 2. Raccourcissement de l'horizon de prédiction spatiale
            # Au lieu de prévoir sur 6 secondes (ce qui donne des tentacules géants à haute vitesse),
            # on force des pas plus courts. À 5 m/s, le tentacule fera ~12 mètres (parfait pour un virage).
            step_dist = max(1.0, target_v * 0.2) 
            
            # 3. Rayon de braquage mathématique ajusté
            # Ce multiplicateur (0.35) traduit l'angle du volant en courbure physique par mètre parcouru.
            # Il permet de générer des trajectoires en arc de cercle suffisamment serrées.
            yaw_rate = s * 0.35 
            
            for _ in range(12):
                current_x += step_dist * math.cos(current_yaw)
                current_y += step_dist * math.sin(current_yaw)
                pts.append((current_x, current_y))
                current_yaw += yaw_rate * step_dist
            
            candidates.append({
                'v': target_v, 
                'steer': s, 
                'points': pts, 
                'base_cost': 0.0  # La pénalité de vitesse est gérée par le régulateur PI
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
        
        actual_safety_dist = max(2.5, self.safety_distance)

        for mode in obstacles:
            for t_idx, ego_pt in enumerate(candidate['points']):
                if t_idx >= len(mode['points']):
                    break
                    
                agent_pt = mode['points'][t_idx]
                dist = math.hypot(ego_pt[0] - agent_pt[0], ego_pt[1] - agent_pt[1])

                if dist < actual_safety_dist:
                    time_future = t_idx * 0.5

                    if time_future < 2.5:
                        return 9999.0  
                        
                    impact_penalty = 1000.0 / time_future
                    max_collision_cost = max(max_collision_cost, impact_penalty)
                    break
                else:
                    time_future = t_idx * 0.5
                    if dist < actual_safety_dist * 3.0:
                        proximity_cost += (1.0 / dist) * mode['prob'] * 50.0

        return max_collision_cost + proximity_cost

    def _evaluate_route_following_cost(self, candidate):
        if not self.path_waypoints:
            return 0.0
            
        cte_cost = 0.0
        local_path = self.path_waypoints[:15]
        
        for cp in candidate['points']:
            min_dist = min(math.hypot(cp[0] - wp[0], cp[1] - wp[1]) for wp in local_path)
            
            # Plafond à 5.0 mètres pour éviter une explosion quadratique exponentielle
            cte_cost += min(min_dist, 5.0) ** 2
            
        # Facteur de multiplication légèrement adouci
        return cte_cost * 1.5
            
    def _publish_control(self, target_v, target_steer, min_cost):
        cmd = CarlaEgoVehicleControl()
        current_v = math.hypot(self.ego_twist.linear.x, self.ego_twist.linear.y)
        
        EMERGENCY_COST_THRESHOLD = 800.0
        
        # --- Lecture des paramètres ROS2 (Modularité) ---
        Kp = self.get_parameter('kp').value
        Ki = self.get_parameter('ki').value
        max_throttle = self.get_parameter('max_throttle').value
        corner_agg = self.get_parameter('cornering_agg').value

        # 1. MACHINE À ÉTATS : DÉGAGEMENT (inchangé)
        if self.is_recovering:
            self.recovery_time -= 0.1 
            if self.recovery_time <= 0:
                self.is_recovering = False
                self.stuck_time = 0.0
            else:
                cmd.throttle = 0.5 
                cmd.steer = self.recovery_steer 
                cmd.reverse = True
                cmd.brake = 0.0
                cmd.hand_brake = False
                cmd.manual_gear_shift = False
                self.pub_cmd.publish(cmd)
                return

        # 2. RALENTISSEMENT EN COURBE (Ajustable)
        if target_v > 0.0 and min_cost < EMERGENCY_COST_THRESHOLD:
            # Plus 'corner_agg' est faible, moins la voiture ralentit
            cornering_factor = max(0.5, 1.0 - abs(target_steer) * corner_agg)
            target_v = target_v * cornering_factor

        # 3. RÉGULATEUR PID
        if not hasattr(self, 'speed_integral'):
            self.speed_integral = 0.0

        error = target_v - current_v
        
        # Limite anti-windup élargie pour permettre une correction en côte forte
        self.speed_integral = max(-5.0, min(5.0, self.speed_integral + error * 0.1))
        control_signal = (Kp * error) + (Ki * self.speed_integral)

        # 4. LOGIQUE DES PÉDALES
        action_pedale = "Inconnu"
        
        if min_cost >= EMERGENCY_COST_THRESHOLD or target_v == 0.0:
            cmd.throttle = 0.0
            cmd.brake = 1.0
            self.speed_integral = 0.0
            action_pedale = "Arrêt absolu"
            
            # Affichage du coût pour identifier la source du blocage
            self.get_logger().info(f"[{action_pedale}] V_cible: 0.0 | Cost: {min_cost:.0f}")
            
        elif control_signal > 0:
            # Accélération libérée jusqu'au max_throttle (1.0 par défaut)
            cmd.throttle = min(control_signal, max_throttle)
            cmd.brake = 0.0
            action_pedale = "Accélération"
            
        else:
            cmd.throttle = 0.0
            cmd.brake = min(abs(control_signal), 1.0)
            action_pedale = "Freinage"

        # 5. WATCHDOG HYBRIDE
        is_tactically_blocked = (min_cost >= EMERGENCY_COST_THRESHOLD and current_v < 0.1)
        is_physically_blocked = (cmd.throttle > 0.1 and current_v < 0.1)

        if is_tactically_blocked or is_physically_blocked:
            self.stuck_time += 0.
            if self.stuck_time >= 4.0:
                self.is_recovering = True
                self.recovery_time = 3.0 
                self.recovery_steer = -0.7 if target_steer > 0.05 else 0.7
                
                cmd.throttle = 0.5
                cmd.brake = 0.0
                cmd.steer = self.recovery_steer
                cmd.reverse = True
                self.pub_cmd.publish(cmd)
                return
        else:
            self.stuck_time = 0.0 

        # 6. PUBLICATION NORMALE
        cmd.steer = -target_steer
        cmd.reverse = False
        
        if min_cost < EMERGENCY_COST_THRESHOLD:
            self.get_logger().info(f"[{action_pedale}] V_cible: {target_v:.1f} | V_réel: {current_v:.1f} | Thr: {cmd.throttle:.2f}")
            
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