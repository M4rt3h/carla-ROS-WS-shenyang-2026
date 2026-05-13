#!/usr/bin/env python3
"""
Task 09 — CarlaPrediction ROS2 Node
Real-time multi-agent trajectory prediction → MarkerArray RViz

Pipeline: /carla/ego_vehicle/odometry + /carla/objects
       → buffer 20Hz → downsample 2Hz → ego-centric transform
       → VectorNetMapBuilder → CarlaLightningModel → MarkerArray
"""
import os
import sys
import math
from pathlib import Path
from collections import deque

import numpy as np
import torch
import yaml

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from visualization_msgs.msg import MarkerArray, Marker
from geometry_msgs.msg import Point
from builtin_interfaces.msg import Duration

# ── CARLA egg ────────────────────────────────────────────────────────────────
_CARLA_EGG = Path.home() / (
    'Desktop/Stage/Documents fournis/Carla/'
    'CARLA_0.9.13/PythonAPI/carla/dist/'
    'carla-0.9.13-py3.7-linux-x86_64.egg'
)
if _CARLA_EGG.exists() and str(_CARLA_EGG) not in sys.path:
    sys.path.append(str(_CARLA_EGG))

# ── derived_object_msgs (optionnel au build, requis au runtime) ───────────────
try:
    from derived_object_msgs.msg import ObjectArray
    _HAS_OBJ_MSG = True
except ImportError:
    _HAS_OBJ_MSG = False

# ── CarlaPrediction imports ───────────────────────────────────────────────────
_CARLA_PRED = Path.home() / 'Desktop/CarlaPrediction'
sys.path.insert(0, str(_CARLA_PRED))
sys.path.insert(0, str(_CARLA_PRED / 'model'))

from train import CarlaLightningModel                            # modèle PL
from map_vis.vectormapbuilder import VectorNetMapBuilder          # carte OSM


# ── Helpers géométriques (réutilisés depuis 03_scene_mining.py) ──────────────
def wrap_to_pi(angle: float) -> float:
    """Ramène un angle dans [-π, π]."""
    return (angle + math.pi) % (2 * math.pi) - math.pi


def rotation_global_to_local(x_g, y_g, yaw_ref):
    """Rotation 2D: repère global → repère local (ego-centric)."""
    c, s = math.cos(-yaw_ref), math.sin(-yaw_ref)
    return c * x_g - s * y_g, s * x_g + c * y_g


def convert_global_to_local_pose(pose_global, ref_pose):
    """
    Convertit (x,y,yaw) global en (x,y,yaw) ego-centric.
    ref_pose = (x_ego, y_ego, yaw_ego) au temps courant.
    """
    dx = pose_global[0] - ref_pose[0]
    dy = pose_global[1] - ref_pose[1]
    lx, ly = rotation_global_to_local(dx, dy, ref_pose[2])
    lyaw = wrap_to_pi(pose_global[2] - ref_pose[2])
    return lx, ly, lyaw


# ── Mapping type CARLA → NuScenes ────────────────────────────────────────────
# derived_object_msgs.Object.classification : UNKNOWN=0, UNKNOWN_SMALL=1,
# UNKNOWN_MEDIUM=2, UNKNOWN_BIG=3, PEDESTRIAN=4, BIKE=5, CAR=6, TRUCK=7,
# MOTORCYCLE=8, OTHER_VEHICLE=9, BARRIER=10, SIGN=11
_OBJ_TYPE_MAP = {4: 4, 5: 3, 6: 2, 7: 2, 8: 3}   # → NuScenes : Car=2, Cycle=3, Ped=4

def obj_classification_to_nuscenes(classification: int) -> int:
    return _OBJ_TYPE_MAP.get(classification, 2)


# ─────────────────────────────────────────────────────────────────────────────
class CarlaPredictionNode(Node):

    def __init__(self):
        super().__init__('carla_prediction_node')

        # ── Paramètres ROS2 ──────────────────────────────────────────────────
        self.declare_parameter('model_ckpt',   '')
        self.declare_parameter('config_path',  str(_CARLA_PRED / 'config.yaml'))
        self.declare_parameter('osm_path',     str(_CARLA_PRED / 'data/maps/Town03.osm'))
        self.declare_parameter('publish_hz',   2.0)
        self.declare_parameter('past_frames',  5)
        self.declare_parameter('raw_fps',      20)
        self.declare_parameter('max_agents',   10)
        self.declare_parameter('max_agent_distance', 50.0)

        ckpt     = self.get_parameter('model_ckpt').value
        cfg_path = self.get_parameter('config_path').value
        osm_path = self.get_parameter('osm_path').value
        hz       = self.get_parameter('publish_hz').value

        self.past_frames  = self.get_parameter('past_frames').value   # 5
        self.raw_fps      = self.get_parameter('raw_fps').value        # 20
        self.max_agents   = self.get_parameter('max_agents').value     # 10
        self.max_dist     = self.get_parameter('max_agent_distance').value

        # downsample step : 20 FPS → 2 Hz = 1 frame / 10
        self.step = self.raw_fps // int(hz)   # = 10

        # ── Config YAML ──────────────────────────────────────────────────────
        with open(cfg_path) as f:
            self.cfg = yaml.safe_load(f)

        # ── Modèle ───────────────────────────────────────────────────────────
        self.device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
        if ckpt and Path(ckpt).exists():
            self.model = CarlaLightningModel.load_from_checkpoint(ckpt, cfg=self.cfg)
            self.model.eval().to(self.device)
            self.get_logger().info(f'Modèle chargé : {ckpt}')
        else:
            self.model = None
            self.get_logger().warn('Pas de checkpoint — inférence désactivée (dry-run OK)')

        # ── Carte OSM ────────────────────────────────────────────────────────
        self.map_builder = VectorNetMapBuilder(osm_path)
        self.get_logger().info(f'Carte OSM chargée : {osm_path}')

        # ── Buffers ──────────────────────────────────────────────────────────
        # Chaque entrée : {'x': float, 'y': float, 'yaw': float, 'frame': int}
        buf_size = self.raw_fps * 3           # 3 secondes de mémoire brute
        self.ego_buffer    = deque(maxlen=buf_size)
        self.agent_buffers = {}               # dict[id → deque]
        self.agent_types   = {}               # dict[id → int (NuScenes)]
        self.frame_count   = 0

        # ── Publishers ───────────────────────────────────────────────────────
        self.pub_traj = self.create_publisher(
            MarkerArray, '/carla/prediction/trajectories', 10)
        self.pub_hist = self.create_publisher(
            MarkerArray, '/carla/prediction/history', 10)

        # ── Subscribers ──────────────────────────────────────────────────────
        self.create_subscription(
            Odometry, '/carla/ego_vehicle/odometry', self.odom_callback, 10)

        if _HAS_OBJ_MSG:
            self.create_subscription(
                ObjectArray, '/carla/objects', self.objects_callback, 10)
        else:
            self.get_logger().warn('derived_object_msgs introuvable — agents désactivés')

        # ── Timer 2 Hz ───────────────────────────────────────────────────────
        self.create_timer(1.0 / hz, self.prediction_timer_callback)

        self.get_logger().info('CarlaPredictionNode prêt.')

    # ── Callback odométrie ────────────────────────────────────────────────────
    def odom_callback(self, msg: Odometry):
        """Stocke l'état ego brut à 20 Hz. Conversion ROS → CARLA (inversion Y)."""
        self.frame_count += 1

        pos = msg.pose.pose.position
        ori = msg.pose.pose.orientation

        # ROS (main droite, Y-gauche) → CARLA (main gauche, Y-droite)
        x   =  pos.x
        y   = -pos.y

        # Quaternion → yaw, puis inversion signe pour CARLA
        siny_cosp = 2.0 * (ori.w * ori.z + ori.x * ori.y)
        cosy_cosp = 1.0 - 2.0 * (ori.y ** 2 + ori.z ** 2)
        yaw = -math.atan2(siny_cosp, cosy_cosp)

        self.ego_buffer.append({
            'x': x, 'y': y, 'yaw': yaw,
            'frame': self.frame_count
        })

    # ── Callback agents ───────────────────────────────────────────────────────
    def objects_callback(self, msg):
        """Met à jour les buffers agents à 20 Hz. Prune les agents perdus."""
        if not self.ego_buffer:
            return

        seen_ids = set()

        for obj in msg.objects:
            aid = obj.id
            seen_ids.add(aid)

            if aid not in self.agent_buffers:
                buf_size = self.raw_fps * 3
                self.agent_buffers[aid] = deque(maxlen=buf_size)
                self.agent_types[aid]   = obj_classification_to_nuscenes(
                    obj.classification)

            pos = obj.pose.position
            ori = obj.pose.orientation
            x   =  pos.x
            y   = -pos.y
            siny = 2.0 * (ori.w * ori.z + ori.x * ori.y)
            cosy = 1.0 - 2.0 * (ori.y ** 2 + ori.z ** 2)
            yaw  = -math.atan2(siny, cosy)

            self.agent_buffers[aid].append({
                'x': x, 'y': y, 'yaw': yaw,
                'frame': self.frame_count
            })

        # Supprime les agents absents depuis > 2s
        stale_threshold = self.raw_fps * 2
        stale = [
            aid for aid, buf in self.agent_buffers.items()
            if aid not in seen_ids and
               self.frame_count - buf[-1]['frame'] > stale_threshold
        ]
        for aid in stale:
            self.agent_buffers.pop(aid)
            self.agent_types.pop(aid)

    # ── Sous-échantillonnage ──────────────────────────────────────────────────
    def _downsample(self, buf, n=5):
        """
        Renvoie n frames régulièrement espacées (step=10) depuis le buffer brut.
        Index 0 = le plus ancien, index n-1 = le plus récent (t=0).
        """
        frames = list(buf)
        indices = [max(0, len(frames) - 1 - i * self.step) for i in range(n)]
        indices.reverse()
        return [frames[i] for i in indices]

    # ── Callback timer 2 Hz ───────────────────────────────────────────────────
    def prediction_timer_callback(self):
        """
        TODO (étape suivante) :
        1. Vérifier que ego_buffer contient assez de frames
        2. Sous-échantillonner ego + agents
        3. convert_global_to_local_pose → repère ego-centric
        4. map_builder.build(ego_global_pose) → tenseurs lane
        5. Construire data_batch (toutes les clés du modèle)
        6. model(data_batch) avec torch.no_grad()
        7. build_marker_array() → pub_traj + pub_hist
        """
        if len(self.ego_buffer) < self.step:
            return   # pas encore assez d'historique
        pass

    # ── Construction MarkerArray ──────────────────────────────────────────────
    def build_marker_array(self, pred_traj: np.ndarray, probs: np.ndarray) -> MarkerArray:
        """
        TODO (étape suivante) :
        pred_traj : [11, 5, 12, 3]  (ego + 10 agents, 5 modes, 12 steps, x/y/yaw)
        probs     : [11, 5]

        Publie uniquement le meilleur mode par agent (argmax probs).
        Couleurs : Ego=rouge, Véhicule=bleu, Cycle=vert.
        """
        ma = MarkerArray()
        return ma


# ── Entrypoint ────────────────────────────────────────────────────────────────
def main():
    rclpy.init()
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
