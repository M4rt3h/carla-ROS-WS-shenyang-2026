#!/usr/bin/env python3
import sys
import math
import cv2
import numpy as np
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
import os
import glob

# Détection du chemin CARLA (variable d'environnement ou fallback sur la version 0.9.13)
carla_root = os.environ.get('CARLA_ROOT', '/home/martin/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.13')
carla_api_path = os.path.join(carla_root, 'PythonAPI', 'carla')

# Injection des chemins pour trouver le dossier 'agents'
sys.path.insert(0, carla_api_path)
sys.path.insert(0, os.path.join(carla_root, 'PythonAPI'))

# Recherche et injection automatique du bon fichier .egg selon la version de Python
try:
    sys.path.insert(0, glob.glob(os.path.join(carla_api_path, 'dist', 'carla-*%d.%d-%s.egg' % (
        sys.version_info.major,
        sys.version_info.minor,
        'win-amd64' if os.name == 'nt' else 'linux-x86_64')))[0])
except IndexError:
    pass

import carla
from agents.navigation.global_route_planner import GlobalRoutePlanner

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, DurabilityPolicy

from visualization_msgs.msg import MarkerArray, Marker
from geometry_msgs.msg import Point, PoseStamped
from nav_msgs.msg import Odometry
from std_msgs.msg import Bool, String
from carla_msgs.msg import CarlaEgoVehicleControl, CarlaWorldInfo


def get_yaw(q):
    siny_cosp = 2 * (q.w * q.z + q.x * q.y)
    cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z)
    return math.atan2(siny_cosp, cosy_cosp)


class MotionPlannerNode(Node):
    def __init__(self):
        super().__init__('motion_planner_node')
        
        self.declare_parameter('target_speed', 5.0)
        self.declare_parameter('kp', 1.0)           
        self.declare_parameter('ki', 0.2)           
        self.declare_parameter('max_throttle', 1.0) 
        self.declare_parameter('cornering_agg', 0.8)
        
        self.target_speed = self.get_parameter('target_speed').value

        self.ego_pose = None
        self.ego_twist = None
        self.best_control = (0.0, 0.0)  
        self.best_cost = 0.0
        self.target_waypoint = None 
        self.path_waypoints = []
        self.active_path = []
        
        self.current_lane = 'RIGHT'
        self.last_lane_change_time = 0.0
        self._lane_block_count = 0
        self.dynamic_lane_offset = 0.0
        
        self.stuck_time = 0.0
        self.recovery_time = 0.0
        self.is_recovering = False
        self.recovery_steer = 0.0
        self.speed_integral = 0.0
        self.is_in_intersection = False

        self.create_subscription(PoseStamped, '/goal_pose', self.goal_callback, 10)
        self.create_subscription(Odometry, '/carla/hero/odometry', self.odom_callback, 10)
        self.create_subscription(MarkerArray, '/carla/prediction/trajectories', self.prediction_callback, 10)
            
        self.pub_cmd = self.create_publisher(CarlaEgoVehicleControl, '/carla/hero/vehicle_control_cmd', 10)
        self.pub_viz = self.create_publisher(Marker, '/carla/planning/chosen_trajectory', 10)
        self.pub_path = self.create_publisher(MarkerArray, '/carla/planning/path', 10)
        
        latched_qos = QoSProfile(depth=1, durability=DurabilityPolicy.TRANSIENT_LOCAL)
        self.pub_autopilot = self.create_publisher(Bool, '/carla/hero/enable_autopilot', latched_qos)
        self.pub_override = self.create_publisher(Bool, '/carla/hero/vehicle_control_manual_override', latched_qos)

        self.pub_dash = self.create_publisher(Image, '/carla/planning/dashboard', 10)
        self.cv_bridge = CvBridge()

        self.current_town = None
        self._carla_map = None
        self._grp = None

        self._traffic_state = 'unknown'
        self.create_subscription(String, '/carla/perception/traffic_state',
            lambda msg: setattr(self, '_traffic_state', msg.data), 10)
                
        latched_qos = QoSProfile(depth=1, durability=DurabilityPolicy.TRANSIENT_LOCAL)
        self.create_subscription(CarlaWorldInfo, '/carla/world_info', self.world_info_callback, latched_qos)

        self.create_timer(0.1, self._control_loop)

    def world_info_callback(self, msg):
        town = msg.map_name.split('/')[-1]
        if town != self.current_town:
            try:
                self._carla_map = carla.Client('localhost', 2000).get_world().get_map()
                self._grp = GlobalRoutePlanner(self._carla_map, sampling_resolution=4.0)
                self.current_town = town
                self.get_logger().info(f'GlobalRoutePlanner mis à jour pour : {town}')
            except Exception as e:
                self.get_logger().error(f'Erreur de mise à jour topologique : {e}')

    def goal_callback(self, msg: PoseStamped):
        self.target_waypoint = (msg.pose.position.x, -msg.pose.position.y)
        self.current_lane = 'RIGHT'
        self.get_logger().info(f'Nouvelle cible : {self.target_waypoint}')
        self._replan()

    def odom_callback(self, msg: Odometry):
        self.ego_pose = msg.pose.pose
        self.ego_twist = msg.twist.twist

    def prediction_callback(self, msg: MarkerArray):
        if not self.ego_pose or not self.path_waypoints:
            return
        
        if self._get_traffic_light_state() in ('red', 'stop'):
            self.best_control = (0.0, 0.0)
            return
        
        obstacles, _ = self._parse_marker_array(msg)
        
        # --- MACHINE À ÉTATS (IA & CARTE SÉMANTIQUE HD) ---
        current_time = self.get_clock().now().nanoseconds / 1e9
        can_change = (current_time - self.last_lane_change_time) > 4.0 
        
        is_turn, turn_angle = self._is_turn_upcoming(look_ahead_dist=25.0, turn_threshold=0.35)
        self.is_in_intersection = is_turn  
        
        right_path = self.path_waypoints
        left_path = self._get_offset_path(self.path_waypoints, 3.5)
        
        if is_turn:
            self._lane_block_count = 0
            if self.current_lane != 'RIGHT' and self._right_lane_exists():
                self.current_lane = 'RIGHT'
                self.last_lane_change_time = current_time
        elif self.current_lane == 'RIGHT':
            if self._is_path_blocked(obstacles, right_path, look_ahead_dist=15.0):
                self._lane_block_count += 1
                if self._lane_block_count >= 5 and can_change:
                    # 1. Validation Sémantique (Structure de la route)
                    if self._is_semantic_lane_valid(direction='LEFT'):
                        # 2. Validation Dynamique (Prédictions des agents)
                        if not self._is_path_blocked(obstacles, left_path, look_ahead_dist=30.0):
                            self.current_lane = 'LEFT'
                            self.last_lane_change_time = current_time
                            self._lane_block_count = 0
                            self.get_logger().info("Dépassement autorisé par la carte HD et initié.")
            else:
                self._lane_block_count = 0 
        else:
            self._lane_block_count = 0
            if not self._is_path_blocked(obstacles, right_path, look_ahead_dist=25.0) and can_change:
                self.current_lane = 'RIGHT'
                self.last_lane_change_time = current_time
                self.get_logger().info("Rabattement en cours.")
        # --------------------------------------------

        candidates = self._generate_candidates()
        best, min_cost = None, float('inf')
        
        for c in candidates:
            cost = self._evaluate_cost(c, obstacles)
            if cost < min_cost:
                min_cost, best = cost, c
                
        if best:
            self._publish_visualization(best)
            self.best_control = (best['v'], best['steer'])
            self.best_cost = min_cost

    def _control_loop(self):
        msg = Bool()
        msg.data = False
        self.pub_autopilot.publish(msg)
        self.pub_override.publish(msg)

        if not self.ego_pose or not self.path_waypoints:
            return

        ex = self.ego_pose.position.x
        ey = self.ego_pose.position.y
        gx, gy = self.path_waypoints[-1]

        if math.hypot(ex - gx, ey - gy) < 2.0:
            self.get_logger().info('Destination atteinte.')
            self.target_waypoint = None
            self.path_waypoints.clear()
            self.active_path.clear()
            self._publish_control(0.0, 1.0, 0.0)
            return

        self._update_active_path()
        
        if self.active_path:
            horizon = min(20, len(self.active_path))
            closest_idx = 0
            min_dist = float('inf')
            
            for i in range(horizon):
                dist = math.hypot(self.active_path[i][0] - ex, self.active_path[i][1] - ey)
                if dist < min_dist:
                    min_dist = dist
                    closest_idx = i
                    
            self.path_waypoints = self.path_waypoints[closest_idx:]
            self.active_path = self.active_path[closest_idx:]
            
            if len(self.active_path) > 1 and min_dist < 1.5:
                self.path_waypoints.pop(0)
                self.active_path.pop(0)
                
        self._publish_path() 
        v, steer = self.best_control
        now = self.get_clock().now().nanoseconds / 1e9

        # ── Détection blocage ──────────────────────────────────────────
        current_speed = math.hypot(
            self.ego_twist.linear.x,
            self.ego_twist.linear.y) if self.ego_twist else 0.0

        traffic_blocking = self._traffic_state in ('red', 'stop')

        if current_speed < 0.3 and v < 0.05 and not traffic_blocking:
            if self.stuck_time == 0.0:
                self.stuck_time = now
            elif now - self.stuck_time > 3.0 and not self.is_recovering:
                self.get_logger().warn('Véhicule bloqué — recovery engagé')
                self.is_recovering = True
                self.recovery_time = now
                # Garde le dernier steer connu, ou neutre si inconnu
                self.recovery_steer = steer if abs(steer) > 0.05 else 0.0
        else:
            self.stuck_time = 0.0

        # ── Recovery : pousse douce jusqu'à ce que la vitesse reprenne ─
        if self.is_recovering:
            if current_speed > 1.0:
                self.is_recovering = False
                self.stuck_time = 0.0
                self.get_logger().info('Recovery terminé')
            elif now - self.recovery_time > 4.0:
                # Recovery throttle inefficace → nudge du waypoint cible
                if self.path_waypoints:
                    wx, wy = self.path_waypoints[0]
                    import random
                    self.path_waypoints[0] = (
                        wx + random.uniform(-0.05, 0.05),
                        wy + random.uniform(-0.05, 0.05)
                    )
                    self.get_logger().warn('Recovery: nudge waypoint cible')
                self.recovery_time = now  # reset timer pour laisser le nudge agir
            else:
                self._publish_control(0.35, self.recovery_steer, 0.0)
                return

        self._publish_control(v, steer, self.best_cost)

    def _replan(self):
        if self._grp is None or self.ego_pose is None or self.target_waypoint is None:
            return
            
        ex, ey = self.ego_pose.position.x, -self.ego_pose.position.y
        gx, gy = self.target_waypoint
        
        start = carla.Location(x=ex, y=ey, z=0.0)
        end = carla.Location(x=gx, y=gy, z=0.0)
        
        try:
            route = self._grp.trace_route(start, end)
            raw = [(wp.transform.location.x, -wp.transform.location.y) for wp, _ in route]
            
            if not raw:
                return
                
            sampled = [raw[0]]
            for pt in raw[1:]:
                if math.hypot(pt[0] - sampled[-1][0], pt[1] - sampled[-1][1]) >= 2.0:
                    sampled.append(pt)
                    
            self.path_waypoints = self._smooth_path(sampled, iterations=3)
            self._update_active_path()
            self._publish_path()
            self.get_logger().info(f'Route calculée et lissée : {len(self.path_waypoints)} waypoints.')
        except Exception as e:
            self.get_logger().error(f'Replanning échoué: {e}')

    def _get_traffic_light_state(self) -> str:
        return self._traffic_state

    def _right_lane_exists(self) -> bool:
        if self._carla_map is None or self.ego_pose is None:
            return True  # on ne sait pas → on laisse passer
        ex = self.ego_pose.position.x
        ey = -self.ego_pose.position.y
        wp = self._carla_map.get_waypoint(carla.Location(x=ex, y=ey, z=0.0))
        if wp is None:
            return True
        right = wp.get_right_lane()
        return right is not None and right.lane_type == carla.LaneType.Driving

    def _generate_candidates(self):
        candidates = []
        x = self.ego_pose.position.x
        y = self.ego_pose.position.y
        base_yaw = get_yaw(self.ego_pose.orientation)

        state = self._get_traffic_light_state()
        if state in ('red', 'stop'):
            return []
        target_v = self.get_parameter('target_speed').value
        if state == 'yellow':
            target_v *= 0.3
        steers = [0.0, -0.05, 0.05, -0.15, 0.15, -0.4, 0.4, -0.7, 0.7]

        for s in steers:
            pts = []
            current_yaw = base_yaw
            current_x = x
            current_y = y
            yaw_rate = (target_v / 3.0) * math.tan(s * 0.7) 
            
            t_sim = 0.0
            next_sample = 0.5
            
            for _ in range(25):
                t_sim += 0.1
                current_x += target_v * 0.1 * math.cos(current_yaw)
                current_y += target_v * 0.1 * math.sin(current_yaw)
                current_yaw += yaw_rate * 0.1
                
                if t_sim >= next_sample - 0.01:
                    pts.append((current_x, current_y, current_yaw)) 
                    next_sample += 0.5
            
            candidates.append({
                'v': target_v, 
                'steer': s, 
                'points': pts, 
                'base_cost': 0.0 
            })
            
        return candidates

    def _evaluate_cost(self, candidate, obstacles):
        if self.target_waypoint is None:
            return 9999.0

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
        max_proximity_cost = 0.0
        fatal_dist = 3.0 

        for mode in obstacles:
            for t_idx, ego_pt in enumerate(candidate['points']):
                if t_idx >= len(mode['points']):
                    break
                    
                agent_pt = mode['points'][t_idx]
                dx = agent_pt[0] - ego_pt[0]
                dy = agent_pt[1] - ego_pt[1]
                eyaw = ego_pt[2]  
                
                cos_y = math.cos(eyaw)
                sin_y = math.sin(eyaw)
                
                lon = dx * cos_y + dy * sin_y
                lat = -dx * sin_y + dy * cos_y
                dist = math.hypot(lon, lat)

                if dist < fatal_dist:
                    if t_idx < len(candidate['points']) - 1 and t_idx < len(mode['points']) - 1:
                        next_ego = candidate['points'][t_idx+1]
                        next_agent = mode['points'][t_idx+1]
                        next_dist = math.hypot(next_ego[0] - next_agent[0], next_ego[1] - next_agent[1])
                        if next_dist >= dist - 0.1:
                            continue
                    return 9999.0  
                    
                elif lon > 0.0 and abs(lat) < 1.8:
                    if lon < 12.0:
                        cost_p = (800.0 / max(0.5, lon - 2.5)) * mode['prob']
                        max_proximity_cost = max(max_proximity_cost, cost_p)

        return max_proximity_cost

    def _evaluate_route_following_cost(self, candidate):
        if not self.active_path:
            return 0.0
            
        cte_cost = 0.0
        local_path = self.active_path[:40] 
        base_tolerance = 4.0 if self.is_in_intersection else 2.2
        
        current_time = self.get_clock().now().nanoseconds / 1e9
        if current_time - self.last_lane_change_time < 4.0:
            base_tolerance = max(base_tolerance, 4.5) 
        
        for t_idx, cp in enumerate(candidate['points']):
            min_dist = min(math.hypot(cp[0] - wp[0], cp[1] - wp[1]) for wp in local_path)
            cte_cost += min(min_dist, 5.0) ** 2
            
            tolerance = base_tolerance + (t_idx * 0.25)
            if min_dist > tolerance:
                cte_cost += 1000.0
            
        return cte_cost * 1.5

    def _publish_dashboard(self, current_v, target_v, action_pedale, min_cost):
        # Rendu "flat design" avec OpenCV
        img = np.zeros((210, 350, 3), dtype=np.uint8)
        img[:] = (35, 35, 35) # Fond gris anthracite
        
        font = cv2.FONT_HERSHEY_SIMPLEX
        
        # --- En-tête ---
        cv2.rectangle(img, (0, 0), (350, 40), (50, 50, 50), -1)
        cv2.putText(img, "HUD - PLANIFICATEUR", (15, 25), font, 0.6, (255, 255, 255), 2)
        
        # --- Ligne 1 : Vitesse ---
        v_ratio = min(1.0, current_v / max(0.1, target_v)) if target_v > 0 else 0.0
        cv2.putText(img, f"Vitesse : {current_v:.1f} / {target_v:.1f} m/s", (15, 75), font, 0.5, (220, 220, 220), 1)
        # Barre de progression
        cv2.rectangle(img, (15, 85), (335, 95), (60, 60, 60), -1)
        cv2.rectangle(img, (15, 85), (15 + int(320 * v_ratio), 95), (0, 200, 100), -1)
        
        # --- Ligne 2 : État et Action ---
        cv2.putText(img, f"Voie : {self.current_lane}", (15, 130), font, 0.5, (220, 220, 220), 1)
        
        # Normalisation de l'action (OpenCV ne gère pas les accents par défaut)
        action_map = {"Accélère": "Accel", "Freine": "Frein", "Arrêt": "Arret", "Inconnu": "Inconnu"}
        action_clean = action_map.get(action_pedale, action_pedale)
        
        color_action = (0, 200, 100) if action_clean == "Accel" else (0, 100, 255)
        cv2.putText(img, f"Action : {action_clean}", (180, 130), font, 0.5, color_action, 1)
        
        # --- Ligne 3 : Coût et Intersections ---
        color_cost = (0, 100, 255) if min_cost >= 800.0 else (0, 200, 100)
        cv2.putText(img, f"Cout : {min_cost:.0f}", (15, 170), font, 0.5, color_cost, 1)

        if self.is_in_intersection:
            cv2.putText(img, "INTERSECTION", (180, 170), font, 0.5, (255, 200, 0), 1)

        # --- Ligne 4 : Feux / Signalisation ---
        state = self._traffic_state
        state_color = {
            'red':     (0,   0,   220),
            'yellow':  (0,   200, 220),
            'green':   (0,   200, 0),
            'stop':    (0,   0,   220),
            'unknown': (120, 120, 120),
        }.get(state, (120, 120, 120))

        # Pastille colorée + texte
        cv2.circle(img, (25, 193), 8, state_color, -1)
        cv2.putText(img, state.upper(), (40, 198), font, 0.5, state_color, 1)

        # --- Publication ---
        img_msg = self.cv_bridge.cv2_to_imgmsg(img, encoding="bgr8")
        self.pub_dash.publish(img_msg)

    def _publish_control(self, target_v, target_steer, min_cost):
        cmd = CarlaEgoVehicleControl()
        current_v = math.hypot(self.ego_twist.linear.x, self.ego_twist.linear.y)
        EMERGENCY_COST_THRESHOLD = 800.0
        
        Kp = self.get_parameter('kp').value
        Ki = self.get_parameter('ki').value
        max_throttle = self.get_parameter('max_throttle').value
        corner_agg = self.get_parameter('cornering_agg').value

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

        if target_v > 0.0 and min_cost < EMERGENCY_COST_THRESHOLD:
            cornering_factor = max(0.4, 1.0 - abs(target_steer) * corner_agg)
            obstacle_factor = 1.0
            if min_cost > 100.0:
                obstacle_factor = max(0.0, 1.0 - ((min_cost - 100.0) / (EMERGENCY_COST_THRESHOLD - 100.0)))
                
            target_v = target_v * min(cornering_factor, obstacle_factor)
            
            if 0.0 < target_v < 0.8:
                target_v = 0.8

        error = target_v - current_v
        self.speed_integral = max(-5.0, min(5.0, self.speed_integral + error * 0.1))
        control_signal = (Kp * error) + (Ki * self.speed_integral)

        action_pedale = "Inconnu"
        
        if min_cost >= EMERGENCY_COST_THRESHOLD or target_v == 0.0:
            cmd.throttle = 0.0
            cmd.brake = 1.0
            self.speed_integral = 0.0
            action_pedale = "Arrêt"
        elif control_signal > 0:
            cmd.throttle = min(control_signal, max_throttle)
            cmd.brake = 0.0
            action_pedale = "Accélère"
        else:
            cmd.throttle = 0.0
            cmd.brake = min(abs(control_signal), 1.0)
            action_pedale = "Freine"

        is_tactically_blocked = (min_cost >= EMERGENCY_COST_THRESHOLD and current_v < 0.1) or (target_v == 0.0 and current_v < 0.1)
        is_physically_blocked = (cmd.throttle > 0.1 and current_v < 0.1)

        if is_physically_blocked and not is_tactically_blocked:
            self.stuck_time += 0.1
            if self.stuck_time >= 4.0:
                self.is_recovering = True
                self.recovery_time = 3.0 
                self.recovery_steer = -0.7 if target_steer > 0.05 else 0.7
                
                self.get_logger().warn("Blocage physique. Dégagement...")
                cmd.throttle = 0.5
                cmd.brake = 0.0
                cmd.steer = self.recovery_steer
                cmd.reverse = True
                self.pub_cmd.publish(cmd)
                return
        else:
            self.stuck_time = 0.0 

        cmd.steer = -target_steer
        cmd.reverse = False
        cmd.hand_brake = False
        cmd.manual_gear_shift = False
        
        if min_cost < EMERGENCY_COST_THRESHOLD and target_v > 0.0:
            self.get_logger().info(f"[{action_pedale}] V_cible: {target_v:.1f} | V_réel: {current_v:.1f} | Cost: {min_cost:.0f}")
            
        if min_cost < EMERGENCY_COST_THRESHOLD and target_v > 0.0:
            self.get_logger().info(f"[{action_pedale}] V_cible: {target_v:.1f} | V_réel: {current_v:.1f} | Cost: {min_cost:.0f}")
            
        # NOUVELLE LIGNE ICI
        self._publish_dashboard(current_v, target_v, action_pedale, min_cost)
            
        self.pub_cmd.publish(cmd)

    def _publish_path(self):
        if not self.active_path:
            return
            
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
        
        for wx, wy in self.active_path:
            m.points.append(Point(x=float(wx), y=float(wy), z=0.1))
            
        ma.markers.append(m)
        self.pub_path.publish(ma)

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

    def _parse_marker_array(self, marker_array: MarkerArray):
        obstacles = []
        ego_prediction = None
        
        if not self.ego_pose:
            return obstacles, ego_prediction

        ego_x = self.ego_pose.position.x
        ego_y = self.ego_pose.position.y
        yaw = get_yaw(self.ego_pose.orientation)
        fx = math.cos(yaw)
        fy = math.sin(yaw)

        for m in marker_array.markers:
            if m.type != Marker.LINE_STRIP or not m.points:
                continue
                
            pts = [(p.x, p.y) for p in m.points]
            
            if m.color.r > 0.8 and m.color.b < 0.2 and m.color.g < 0.2:
                ego_prediction = pts
                continue
                
            if m.color.a < 0.5:
                continue
                            
            start_x, start_y = pts[0][0], pts[0][1]
            dx, dy = start_x - ego_x, start_y - ego_y
            dot_product = dx * fx + dy * fy
            
            if dot_product >= -2.0:
                start_dist = math.hypot(dx, dy)
                if start_dist < 3.0:   
                    continue
                obstacles.append({'prob': m.color.a, 'points': pts})
            
        return obstacles, ego_prediction

    def _get_offset_path(self, base_path, offset):
        if offset == 0.0 or len(base_path) < 2:
            return list(base_path)
            
        offset_path = []
        for i in range(len(base_path)):
            if i < len(base_path) - 1:
                dx = base_path[i+1][0] - base_path[i][0]
                dy = base_path[i+1][1] - base_path[i][1]
            else:
                dx = base_path[i][0] - base_path[i-1][0]
                dy = base_path[i][1] - base_path[i-1][1]
                
            length = math.hypot(dx, dy)
            if length > 0:
                nx, ny = -dy / length, dx / length
                offset_path.append((base_path[i][0] + nx * offset, base_path[i][1] + ny * offset))
            else:
                offset_path.append(base_path[i])
        return offset_path

    def _update_active_path(self):
        target_offset = 3.5 if self.current_lane == 'LEFT' else 0.0
        
        if self.dynamic_lane_offset < target_offset:
            self.dynamic_lane_offset = min(target_offset, self.dynamic_lane_offset + 0.15)
        elif self.dynamic_lane_offset > target_offset:
            self.dynamic_lane_offset = max(target_offset, self.dynamic_lane_offset - 0.15)
            
        self.active_path = self._get_offset_path(self.path_waypoints, self.dynamic_lane_offset)

    def _is_path_blocked(self, obstacles, path_to_check, look_ahead_dist=15.0):
        if not path_to_check or not self.ego_pose:
            return False
            
        ego_x = self.ego_pose.position.x
        ego_y = self.ego_pose.position.y
        path_length = 0.0
        check_points = [path_to_check[0]]
        
        for i in range(1, len(path_to_check)):
            dx = path_to_check[i][0] - path_to_check[i-1][0]
            dy = path_to_check[i][1] - path_to_check[i-1][1]
            path_length += math.hypot(dx, dy)
            check_points.append(path_to_check[i])
            if path_length > look_ahead_dist:
                break
                
        for mode in obstacles:
            for t_idx in range(min(5, len(mode['points']))): 
                obs_pt = mode['points'][t_idx]
                dist_to_ego = math.hypot(obs_pt[0] - ego_x, obs_pt[1] - ego_y)
                
                if dist_to_ego < 4.0:
                    continue
                    
                min_dist = min(math.hypot(obs_pt[0] - wp[0], obs_pt[1] - wp[1]) for wp in check_points)
                if min_dist < 1.8:  
                    return True
                    
        return False

    def _is_turn_upcoming(self, look_ahead_dist=25.0, turn_threshold=0.35):
        if len(self.path_waypoints) < 10:
            return False, 0.0
            
        dx_start = self.path_waypoints[2][0] - self.path_waypoints[0][0]
        dy_start = self.path_waypoints[2][1] - self.path_waypoints[0][1]
        yaw_start = math.atan2(dy_start, dx_start)
        
        dist = 0.0
        for i in range(len(self.path_waypoints) - 1):
            dx = self.path_waypoints[i+1][0] - self.path_waypoints[i][0]
            dy = self.path_waypoints[i+1][1] - self.path_waypoints[i][1]
            dist += math.hypot(dx, dy)
            
            if dist >= look_ahead_dist:
                yaw_end = math.atan2(dy, dx)
                diff = (yaw_end - yaw_start + math.pi) % (2 * math.pi) - math.pi
                if abs(diff) > turn_threshold:
                    return True, diff  
                return False, 0.0
                
        return False, 0.0

    def _is_semantic_lane_valid(self, direction='LEFT'):
        """Reproduit le filtrage sémantique HD en validant la géométrie de la voie."""
        if self._carla_map is None or self.ego_pose is None:
            return False

        ex = self.ego_pose.position.x
        ey = -self.ego_pose.position.y # Conversion ROS -> CARLA

        current_wp = self._carla_map.get_waypoint(carla.Location(x=ex, y=ey, z=0.0))
        if not current_wp:
            return False

        if direction == 'LEFT':
            target_wp = current_wp.get_left_lane()
        else:
            target_wp = current_wp.get_right_lane()

        # Validation de l'existence de la voie et de son type (carrossable)
        if target_wp and target_wp.lane_type == carla.LaneType.Driving:
            # Vérification du contresens : les identifiants de voie doivent être de même signe
            if current_wp.lane_id * target_wp.lane_id > 0:
                return True

        return False

    def _smooth_path(self, waypoints, iterations=3):
        if len(waypoints) < 3:
            return waypoints
            
        smooth_path = waypoints
        for _ in range(iterations):
            new_path = [smooth_path[0]] 
            for i in range(len(smooth_path) - 1):
                p0 = smooth_path[i]
                p1 = smooth_path[i+1]
                Q = (0.75 * p0[0] + 0.25 * p1[0], 0.75 * p0[1] + 0.25 * p1[1])
                R = (0.25 * p0[0] + 0.75 * p1[0], 0.25 * p0[1] + 0.75 * p1[1])
                new_path.extend([Q, R])
            new_path.append(smooth_path[-1])
            smooth_path = new_path
            
        return smooth_path


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