"""
Task 09 — CarlaPrediction ROS2 Node
Real-time multi-agent trajectory prediction → MarkerArray RViz

Pipeline: /carla/ego_vehicle/odometry + /carla/objects
       → buffer 20Hz → downsample 2Hz → ego-centric transform
       → VectorNetMapBuilder → CarlaLightningModel → MarkerArray
"""

#!/usr/bin/env python3
import os
import sys
import math
import threading
from pathlib import Path
from collections import deque

import numpy as np
import yaml
import torch
import json

# --- PATH SETUP (Lecture du fichier de configuration) ---
# Le script cherche paths.json dans son propre dossier. 
# S'il ne le trouve pas, il tente de le chercher dans le dossier parent.
config_filename = "paths.json"
current_dir = Path(__file__).resolve().parent
config_path = current_dir / config_filename

if not config_path.exists():
    config_path = current_dir.parent / config_filename

# Chemin par défaut en cas d'absence totale du fichier
carla_pred_root = Path.home() / 'Desktop/CarlaPrediction'

try:
    with open(config_path, 'r') as f:
        paths_config = json.load(f)
        if "CARLA_PREDICTION_ROOT" in paths_config:
            carla_pred_root = Path(paths_config["CARLA_PREDICTION_ROOT"])
except FileNotFoundError:
    print(f"[Avertissement] Fichier {config_filename} introuvable. Utilisation du chemin par défaut : {carla_pred_root}")
except json.JSONDecodeError:
    print(f"[Erreur] Fichier {config_path} mal formaté. Utilisation du chemin par défaut : {carla_pred_root}")

# Injection des chemins dans le PYTHONPATH
for _p in [carla_pred_root, carla_pred_root / 'model', carla_pred_root / 'map_vis', carla_pred_root / 'scripts']:
    if str(_p) not in sys.path:
        sys.path.insert(0, str(_p))

# --- IMPORTS CARLA PREDICTION ---
from train import CarlaLightningModel
from map_vis.vectormapbuilder import VectorNetMapBuilder

# --- IMPORTS ROS2 ---
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, Point
from nav_msgs.msg import Odometry
from visualization_msgs.msg import MarkerArray, Marker
from builtin_interfaces.msg import Duration

try:
    from derived_object_msgs.msg import ObjectArray
    _HAS_OBJ_MSG = True
except ImportError:
    _HAS_OBJ_MSG = False


# --- HELPERS GÉOMÉTRIQUES ---
def wrap_to_pi(angle: float) -> float:
    return (angle + math.pi) % (2 * math.pi) - math.pi

def get_yaw(q) -> float:
    """Convertit un quaternion en angle de lacet (yaw)."""
    siny_cosp = 2.0 * (q.w * q.z + q.x * q.y)
    cosy_cosp = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)
    return math.atan2(siny_cosp, cosy_cosp)

def rotation_global_to_local(x_g, y_g, yaw_ref):
    angle = (math.pi / 2.0) - yaw_ref
    c, s = math.cos(angle), math.sin(angle)
    return c * x_g - s * y_g, s * x_g + c * y_g

def convert_global_to_local_pose(pose_global, ref_pose):
    dx = pose_global[0] - ref_pose[0]
    dy = pose_global[1] - ref_pose[1]
    lx, ly = rotation_global_to_local(dx, dy, ref_pose[2])
    lyaw = wrap_to_pi(pose_global[2] - ref_pose[2])
    return lx, ly, lyaw

_OBJ_TYPE_MAP = {4: 4, 5: 3, 6: 2, 7: 2, 8: 3}

def obj_classification_to_nuscenes(classification: int) -> int:
    return _OBJ_TYPE_MAP.get(classification, 2)


class CarlaPredictionNode(Node):
    def __init__(self):
        super().__init__('carla_prediction_node')

        # --- Paramètres ROS2 ---
        self.declare_parameter('model_ckpt', '')
        self.declare_parameter('config_path', str(carla_pred_root / 'config.yaml'))
        self.declare_parameter('osm_path', str(carla_pred_root / 'map_data/osm/Town03.osm'))
        self.declare_parameter('publish_hz', 2.0)
        self.declare_parameter('past_frames', 5)
        self.declare_parameter('raw_fps', 20)
        self.declare_parameter('max_agents', 10)
        self.declare_parameter('max_agent_distance', 50.0)

        ckpt = self.get_parameter('model_ckpt').value
        cfg_path = self.get_parameter('config_path').value
        osm_path = self.get_parameter('osm_path').value
        hz = self.get_parameter('publish_hz').value

        self.past_frames = self.get_parameter('past_frames').value
        self.raw_fps = self.get_parameter('raw_fps').value
        self.max_agents = self.get_parameter('max_agents').value
        self.max_dist = self.get_parameter('max_agent_distance').value

        self.step = int(self.raw_fps // hz)

        # --- Initialisation Modèle ---
        self.device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
        if ckpt and Path(ckpt).exists():
            with open(cfg_path) as f:
                cfg = yaml.safe_load(f)
            self.model = CarlaLightningModel.load_from_checkpoint(ckpt, cfg=cfg)
            self.model.eval().to(self.device)
            self.get_logger().info(f'Modèle chargé : {ckpt}')
        else:
            self.model = None
            self.get_logger().warn('Pas de checkpoint — inférence désactivée (dry-run OK)')

        # --- Initialisation Carte OSM ---
        self.map_builder = VectorNetMapBuilder(osm_path)
        self.osm_dir = carla_pred_root / 'map_data/osm'
        self.current_town = Path(osm_path).stem
        self.map_lock = threading.Lock()
        self.get_logger().info(f'Carte OSM chargée : {osm_path}')

        # --- Variables d'état et Buffers ---
        self.target_waypoint = None
        self.path_waypoints = []
        self.frame_count = 0
        
        buf_size = self.raw_fps * 3
        self.ego_buffer = deque(maxlen=buf_size)
        self.agent_buffers = {}
        self.agent_types = {}

        # --- Publishers ---
        self.pub_traj = self.create_publisher(MarkerArray, '/carla/prediction/trajectories', 10)
        self.pub_hist = self.create_publisher(MarkerArray, '/carla/prediction/history', 10)
        self.pub_goal = self.create_publisher(Marker, '/carla/prediction/target_goal', 10)

        # --- Subscribers ---
        self.create_subscription(PoseStamped, '/goal_pose', self.goal_callback, 10)
        self.create_subscription(MarkerArray, '/carla/planning/path', self._path_callback, 10)
        self.create_subscription(Odometry, '/carla/hero/odometry', self.odom_callback, 10)

        if _HAS_OBJ_MSG:
            self.create_subscription(ObjectArray, '/carla/objects', self.objects_callback, 10)
        else:
            self.get_logger().warn('derived_object_msgs introuvable — agents désactivés')

        try:
            from carla_msgs.msg import CarlaWorldInfo
            self.create_subscription(CarlaWorldInfo, '/carla/world_info', self.world_info_callback, 10)
        except ImportError:
            self.get_logger().warn('carla_msgs introuvable — multi-town désactivé')

        # --- Timer ---
        self.create_timer(1.0 / hz, self.prediction_timer_callback)
        self.get_logger().info('CarlaPredictionNode prêt.')

    def _path_callback(self, msg: MarkerArray):
        if msg.markers:
            self.path_waypoints = [(p.x, p.y) for p in msg.markers[0].points]

    def goal_callback(self, msg: PoseStamped):
        self.target_waypoint = (msg.pose.position.x, -msg.pose.position.y)
        self.get_logger().info(f"Cible reçue : {self.target_waypoint}")
        
        # --- CRÉATION DU MARQUEUR VISUEL (Cible) ---
        m = Marker()
        m.header = msg.header
        m.ns = "goal"
        m.id = 999
        m.type = Marker.SPHERE
        m.action = Marker.ADD
        m.pose = msg.pose
        m.scale.x = m.scale.y = m.scale.z = 2.0
        m.color.r, m.color.g, m.color.b, m.color.a = 1.0, 0.5, 0.0, 0.8
        self.pub_goal.publish(m)

    def odom_callback(self, msg: Odometry):
        """Stocke l'état ego brut à 20 Hz. Conversion ROS → CARLA (inversion Y et Yaw)."""
        self.frame_count += 1
        pos = msg.pose.pose.position
        ori = msg.pose.pose.orientation

        # Inversion Y et Yaw (Main droite ROS -> Main gauche CARLA)
        self.ego_buffer.append({
            'x': pos.x,
            'y': -pos.y,
            'yaw': -get_yaw(ori),
            'frame': self.frame_count
        })

    def objects_callback(self, msg):
        """Met à jour les buffers agents à 20 Hz. Prune les agents perdus."""
        if not self.ego_buffer:
            return

        seen_ids = set()
        ego_last = self.ego_buffer[-1]

        for obj in msg.objects:
            aid = obj.id
            seen_ids.add(aid)
            pos = obj.pose.position

            # Ignorer l'agent s'il est physiquement confondu avec l'Ego
            if abs(pos.x - ego_last['x']) < 0.5 and abs(-pos.y - ego_last['y']) < 0.5:
                continue

            if aid not in self.agent_buffers:
                self.agent_buffers[aid] = deque(maxlen=self.raw_fps * 3)
                self.agent_types[aid] = obj_classification_to_nuscenes(obj.classification)

            self.agent_buffers[aid].append({
                'x': pos.x,
                'y': -pos.y,
                'yaw': -get_yaw(obj.pose.orientation),
                'frame': self.frame_count
            })

        # Nettoyage des agents absents depuis > 2s
        stale_threshold = self.raw_fps * 2
        stale_agents = [
            aid for aid, buf in self.agent_buffers.items()
            if aid not in seen_ids and (self.frame_count - buf[-1]['frame']) > stale_threshold
        ]
        
        for aid in stale_agents:
            del self.agent_buffers[aid]
            del self.agent_types[aid]

    def world_info_callback(self, msg):
        """Recharge la carte OSM si la ville CARLA change."""
        town = msg.map_name.split('/')[-1]
        if town == self.current_town:
            return
            
        osm_path = self.osm_dir / f'{town}.osm'
        if not osm_path.exists():
            self.get_logger().warn(f'OSM introuvable pour {town} : {osm_path}')
            return
            
        with self.map_lock:
            self.map_builder = VectorNetMapBuilder(str(osm_path))
            self.current_town = town
            
        self.get_logger().info(f'Carte rechargée : {town}')

    def _downsample(self, buf, n=5):
        """
        Renvoie n frames régulièrement espacées (step) depuis le buffer brut.
        Index 0 = le plus ancien, index n-1 = le plus récent (t=0).
        """
        frames = list(buf)
        indices = [max(0, len(frames) - 1 - i * self.step) for i in range(n)]
        indices.reverse()
        return [frames[i] for i in indices]

    # Callback timer 2 Hz 
    def prediction_timer_callback(self):
        """Orchestre le pipeline : données -> tenseurs -> modèle -> RViz."""
        if len(self.ego_buffer) < self.step:
            return

        try:
            # 1. Échantillonnage Ego et création du repère
            ego_frames = self._downsample(self.ego_buffer, n=self.past_frames)
            ref_pose = (ego_frames[-1]['x'], ego_frames[-1]['y'], ego_frames[-1]['yaw'])

            # 2. Préparation du batch PyTorch
            model_data = self._prepare_model_input(ego_frames, ref_pose)
            if not model_data:
                return
                
            batch, close_agents, ego_past, agents_past, agents_mask = model_data

            # 3. Inférence
            if self.model is None:
                self.get_logger().info(f"Agents proches: {len(close_agents)} (Dry Run)", throttle_duration_sec=2.0)
                return

            with torch.no_grad():
                result = self.model(batch)

            # Extraction (Squeeze de la dimension batch B=1)
            pred_traj = result['prediction']['traj'].squeeze(0).cpu().numpy()
            probs = result['prediction']['probs'].squeeze(0).cpu().numpy()

            # 4. Publication
            self.pub_traj.publish(self.build_marker_array(pred_traj, probs, ref_pose, agents_past, agents_mask))
            self.pub_hist.publish(self.build_history_array(ego_frames, close_agents, ref_pose))

        except Exception as e:
            self.get_logger().error(f'Erreur timer de prédiction: {e}')

    def _prepare_model_input(self, ego_frames, ref_pose):
        """Construit le dictionnaire de tenseurs attendu par le modèle."""
        
        # 1. Historique Ego en repère local
        ego_past = np.zeros((self.past_frames, 3), dtype=np.float32)
        for i, frame in enumerate(ego_frames):
            ego_past[i] = convert_global_to_local_pose((frame['x'], frame['y'], frame['yaw']), ref_pose)
        ego_mask = np.ones(self.past_frames, dtype=bool)

        # 2. Sélection des agents par distance
        ref_x, ref_y = ref_pose[0], ref_pose[1]
        def dist_to_ego(buf):
            return math.hypot(buf[-1]['x'] - ref_x, buf[-1]['y'] - ref_y)

        close_agents = sorted(
            [(aid, buf) for aid, buf in self.agent_buffers.items() if dist_to_ego(buf) < self.max_dist],
            key=lambda t: dist_to_ego(t[1])
        )[:self.max_agents]

        # 3. Historique Agents en repère local
        agents_past = np.zeros((self.max_agents, self.past_frames, 3), dtype=np.float32)
        agents_mask = np.zeros((self.max_agents, self.past_frames), dtype=bool)
        agent_types_arr = np.zeros(self.max_agents, dtype=np.int64)

        for slot, (aid, buf) in enumerate(close_agents):
            frames = self._downsample(buf, n=self.past_frames)
            for i, frame in enumerate(frames):
                agents_past[slot, i] = convert_global_to_local_pose((frame['x'], frame['y'], frame['yaw']), ref_pose)
                agents_mask[slot, i] = True
            agent_types_arr[slot] = self.agent_types.get(aid, 2)

        # 4. Carte OSM
        with self.map_lock:
            map_data = self.map_builder.build(ref_pose)

        # 5. Helper de conversion NumPy -> Tenseur PyTorch (Batch B=1)
        def t(arr, dtype=None):
            tensor = torch.from_numpy(arr)
            if dtype: tensor = tensor.to(dtype)
            return tensor.unsqueeze(0).to(self.device)

        batch = {
            'ego_past_poses': t(ego_past),
            'ego_past_mask': t(ego_mask),
            'agents_past_av_poses': t(agents_past),
            'agents_past_mask': t(agents_mask),
            'agent_type': t(agent_types_arr, dtype=torch.float32),
            'lane': t(map_data['lane']),
            'lane_avail': t(map_data['lane_avail'], dtype=torch.bool),
            'ego_future_poses': torch.zeros(1, 12, 3, device=self.device),
            'agents_future_poses': torch.zeros(1, 10, 12, 3, device=self.device),
            'ego_future_mask': torch.zeros(1, 12, dtype=torch.bool, device=self.device),
            'agents_future_mask': torch.zeros(1, 10, 12, dtype=torch.bool, device=self.device),
        }
        
        return batch, close_agents, ego_past, agents_past, agents_mask

    def build_marker_array(self, pred_traj, probs, ref_pose, agents_past, agents_mask):
        ma = MarkerArray()
        now = self.get_clock().now().to_msg()
        
        # --- 1. TRAJECTOIRES EGO ---
        best_ego_mode = int(np.argmax(probs[0]))
        for mode_idx in range(pred_traj.shape[1]):
            is_best = (mode_idx == best_ego_mode)
            m = self._create_line_marker(now, ns="ego_traj", marker_id=mode_idx)
            
            m.color.r, m.color.g, m.color.b = (1.0, 0.0, 0.0) if is_best else (0.5, 0.0, 0.0)
            m.color.a = 1.0 if is_best else 0.3
            m.scale.x = 0.3 if is_best else 0.1
            
            # L'Ego n'a pas de décalage initial (0.0, 0.0, 0.0)
            m.points = self._project_traj_to_map(pred_traj[0, mode_idx], ref_pose, 0.0, 0.0, 0.0)
            
            ma.markers.append(m)

        # --- 2. TRAJECTOIRES AGENTS ---
        for agent_idx in range(1, pred_traj.shape[0]):
            if not agents_mask[agent_idx - 1].any(): 
                continue
            
            best_agent_mode = int(np.argmax(probs[agent_idx]))
            
            # Extraction de la position ET de l'orientation de l'agent au temps t=0
            ox = float(agents_past[agent_idx - 1, -1, 0])
            oy = float(agents_past[agent_idx - 1, -1, 1])
            oyaw = float(agents_past[agent_idx - 1, -1, 2])
            
            for mode_idx in range(pred_traj.shape[1]):
                is_best = (mode_idx == best_agent_mode)
                m = self._create_line_marker(now, ns="agent_traj", marker_id=agent_idx * 10 + mode_idx)
                
                m.color.r, m.color.g, m.color.b = (0.0, 0.4, 1.0)
                m.color.a = 1.0 if is_best else 0.2
                m.scale.x = 0.2 if is_best else 0.1
                
                # Projection avec le yaw de l'agent
                m.points = self._project_traj_to_map(pred_traj[agent_idx, mode_idx], ref_pose, ox, oy, oyaw)
                
                ma.markers.append(m)

        # --- 3. NAVIGATION ---
        if hasattr(self, 'path_waypoints') and self.path_waypoints:
            m = self._create_line_marker(now, ns="navigation", marker_id=998)
            m.scale.x = 0.5
            m.color.b, m.color.a = 1.0, 0.8
            m.points = [Point(x=wp[0], y=wp[1], z=0.1) for wp in self.path_waypoints]
            ma.markers.append(m)
            
        return ma

    def build_history_array(self, ego_frames, close_agents, ref_pose) -> MarkerArray:
        ma = MarkerArray()
        now = self.get_clock().now().to_msg()

        def _create_hist_marker(marker_id, color_rgb):
            m = self._create_line_marker(now, ns='history', marker_id=marker_id)
            m.scale.x = 0.20
            m.color.r, m.color.g, m.color.b = color_rgb
            m.color.a = 1.0
            return m

        # Ego — cyan
        m_ego = _create_hist_marker(0, (0.0, 1.0, 1.0))
        m_ego.points = [Point(x=float(f['x']), y=float(-f['y']), z=0.0) for f in ego_frames]
        ma.markers.append(m_ego)

        # Agents — gris
        for slot, (_, buf) in enumerate(close_agents):
            frames = self._downsample(buf, n=self.past_frames)
            m_agent = _create_hist_marker(slot + 1, (0.5, 0.5, 0.5))
            m_agent.points = [Point(x=float(f['x']), y=float(-f['y']), z=0.0) for f in frames]
            ma.markers.append(m_agent)

        return ma

    def _create_line_marker(self, stamp, ns, marker_id):
        m = Marker()
        m.header.frame_id = 'map'
        m.header.stamp = stamp
        m.ns = ns
        m.id = marker_id
        m.type = Marker.LINE_STRIP
        m.action = Marker.ADD
        m.lifetime = Duration(sec=1)
        return m

    def _project_traj_to_map(self, traj, ref_pose, ox, oy, oyaw=0.0):
        points = []
        sin_ref = math.sin(ref_pose[2])
        cos_ref = math.cos(ref_pose[2])
        
        # Pré-calcul de la rotation locale de l'agent
        cos_agent = math.cos(oyaw)
        sin_agent = math.sin(oyaw)
        
        for pt in traj:
            px, py = float(pt[0]), float(pt[1])
            
            # 1. Rotation et translation : Repère Agent -> Repère Ego
            lx = px * cos_agent - py * sin_agent + ox
            ly = px * sin_agent + py * cos_agent + oy
            
            # 2. Rotation inverse : Repère Ego -> Repère Global (Monde)
            dx_g = sin_ref * lx + cos_ref * ly
            dy_g = -cos_ref * lx + sin_ref * ly
            
            points.append(Point(x=ref_pose[0] + dx_g, y=-(ref_pose[1] + dy_g), z=0.0))
            
        return points

def main(args=None):
    rclpy.init(args=args)
    node = CarlaPredictionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()