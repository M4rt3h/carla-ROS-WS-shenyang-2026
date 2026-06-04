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
import threading

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from visualization_msgs.msg import MarkerArray, Marker
from geometry_msgs.msg import Point
from builtin_interfaces.msg import Duration


_CARLA_PRED = Path.home() / 'Desktop/CarlaPrediction'
for _p in [_CARLA_PRED, _CARLA_PRED / 'model', _CARLA_PRED / 'map_vis', _CARLA_PRED / 'scripts']:
    if str(_p) not in sys.path:
        sys.path.insert(0, str(_p))

#  derived_object_msgs (optionnel au build, requis au runtime) 
try:
    from derived_object_msgs.msg import ObjectArray
    _HAS_OBJ_MSG = True
except ImportError:
    _HAS_OBJ_MSG = False

#  CarlaPrediction imports 
_CARLA_PRED = Path.home() / 'Desktop/CarlaPrediction/'
sys.path.insert(0, str(_CARLA_PRED))
sys.path.insert(0, str(_CARLA_PRED / 'model'))

from train import CarlaLightningModel                            # modèle PL
from map_vis.vectormapbuilder import VectorNetMapBuilder          # carte OSM


#  Helpers géométriques (réutilisés depuis 03_scene_mining.py) 
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


#  Mapping type CARLA → NuScenes 
# derived_object_msgs.Object.classification : UNKNOWN=0, UNKNOWN_SMALL=1,
# UNKNOWN_MEDIUM=2, UNKNOWN_BIG=3, PEDESTRIAN=4, BIKE=5, CAR=6, TRUCK=7,
# MOTORCYCLE=8, OTHER_VEHICLE=9, BARRIER=10, SIGN=11
_OBJ_TYPE_MAP = {4: 4, 5: 3, 6: 2, 7: 2, 8: 3}   # → NuScenes : Car=2, Cycle=3, Ped=4

def obj_classification_to_nuscenes(classification: int) -> int:
    return _OBJ_TYPE_MAP.get(classification, 2)


# 
class CarlaPredictionNode(Node):

    def __init__(self):
        super().__init__('carla_prediction_node')

        #  Paramètres ROS2 
        self.declare_parameter('model_ckpt',   '')
        self.declare_parameter('config_path',  str(_CARLA_PRED / 'config.yaml'))
        self.declare_parameter('osm_path',     str(_CARLA_PRED / 'map_data/osm/Town03.osm'))
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

        #  Config YAML 
        with open(cfg_path) as f:
            self.cfg = yaml.safe_load(f)

        #  Modèle 
        self.device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
        if ckpt and Path(ckpt).exists():
            self.model = CarlaLightningModel.load_from_checkpoint(ckpt, cfg=self.cfg)
            self.model.eval().to(self.device)
            self.get_logger().info(f'Modèle chargé : {ckpt}')
        else:
            self.model = None
            self.get_logger().warn('Pas de checkpoint — inférence désactivée (dry-run OK)')

        #  Carte OSM 
        self.map_builder = VectorNetMapBuilder(osm_path)
        self.get_logger().info(f'Carte OSM chargée : {osm_path}')
        self.osm_dir     = _CARLA_PRED / 'map_data/osm'
        self.current_town = Path(osm_path).stem   # ex: "Town03"
        self.map_lock    = threading.Lock()

        # Subscriber world_info — détection automatique de la ville
        try:
            from carla_msgs.msg import CarlaWorldInfo
            self.create_subscription(
                CarlaWorldInfo, '/carla/world_info',
                self.world_info_callback, 10)
        except ImportError:
            self.get_logger().warn('carla_msgs introuvable — multi-town désactivé')

        #  Buffers 
        # Chaque entrée : {'x': float, 'y': float, 'yaw': float, 'frame': int}
        buf_size = self.raw_fps * 3           # 3 secondes de mémoire brute
        self.ego_buffer    = deque(maxlen=buf_size)
        self.agent_buffers = {}               # dict[id → deque]
        self.agent_types   = {}               # dict[id → int (NuScenes)]
        self.frame_count   = 0

        #  Publishers 
        self.pub_traj = self.create_publisher(
            MarkerArray, '/carla/prediction/trajectories', 10)
        self.pub_hist = self.create_publisher(
            MarkerArray, '/carla/prediction/history', 10)

        #  Subscribers 
        self.create_subscription(
            Odometry, '/carla/hero/odometry', self.odom_callback, 10)

        if _HAS_OBJ_MSG:
            self.create_subscription(
                ObjectArray, '/carla/objects', self.objects_callback, 10)
                
        else:
            self.get_logger().warn('derived_object_msgs introuvable — agents désactivés')

        #  Timer 2 Hz 
        self.create_timer(1.0 / hz, self.prediction_timer_callback)

        self.get_logger().info('CarlaPredictionNode prêt.')

    #  Callback odométrie 
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

    #  Callback agents 
    def objects_callback(self, msg):
        """Met à jour les buffers agents à 20 Hz. Prune les agents perdus."""
        if not self.ego_buffer:
            return

        seen_ids = set()

        for obj in msg.objects:
            
            aid = obj.id
            seen_ids.add(aid)
            pos = obj.pose.position
            ori = obj.pose.orientation

            ego_last = self.ego_buffer[-1] if self.ego_buffer else None
            if ego_last and abs(pos.x - ego_last['x']) < 0.5 and abs(-pos.y - ego_last['y']) < 0.5:
                continue

            if aid not in self.agent_buffers:
                buf_size = self.raw_fps * 3
                self.agent_buffers[aid] = deque(maxlen=buf_size)
                self.agent_types[aid]   = obj_classification_to_nuscenes(
                    obj.classification)

            
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

    def world_info_callback(self, msg):
        """Recharge la carte OSM si la ville CARLA change."""
        town = msg.map_name.split('/')[-1]   # "/Game/Carla/Maps/Town03" → "Town03"
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

    #  Sous-échantillonnage 
    def _downsample(self, buf, n=5):
        """
        Renvoie n frames régulièrement espacées (step=10) depuis le buffer brut.
        Index 0 = le plus ancien, index n-1 = le plus récent (t=0).
        """
        frames = list(buf)
        indices = [max(0, len(frames) - 1 - i * self.step) for i in range(n)]
        indices.reverse()
        return [frames[i] for i in indices]

    # Callback timer 2 Hz 
    def prediction_timer_callback(self):
        """Appelée 2x/seconde. Orchestre tout : buffer → modèle → RViz."""
        try:
            # 1. Attendre un cycle complet (avoir l'historique necessaire)
            if len(self.ego_buffer) < self.step:
                return

            # 2. Sous-échantillonnage
            # On passe de 60 frames brutes (20Hz × 3s) à 5 frames espacées de 0.5s
            # -liste de dicts {x, y, yaw} du plus ancien au plus récent
            ego_frames = self._downsample(self.ego_buffer, n=self.past_frames)

            #  3. Référence ego (t=0) 
            # Toutes les coordonnées seront exprimées relativement à cette pose
            ref = ego_frames[-1]   # le plus récent = la position "maintenant"
            ref_pose = (ref['x'], ref['y'], ref['yaw'])
            if len(self.agent_buffers) > 0:
                aid = list(self.agent_buffers.keys())[0]
                buf = self.agent_buffers[aid]
                

            #  4. Historique ego en repère local 
            # convert_global_to_local_pose transforme chaque (x,y,yaw) monde
            # en (x,y,yaw) relatif à l'ego courant.
            # À t=0 (la dernière frame), le résultat sera toujours (0, 0, 0).
            ego_past = np.zeros((self.past_frames, 3), dtype=np.float32)
            for i, frame in enumerate(ego_frames):
                lx, ly, lyaw = convert_global_to_local_pose(
                    (frame['x'], frame['y'], frame['yaw']), ref_pose)
                ego_past[i] = [lx, ly, lyaw]

            # Masque : True pour chaque frame qu'on a réellement (toujours 5/5 ici)
            ego_mask = np.ones(self.past_frames, dtype=bool)
        except Exception as e:
            self.get_logger().error(f'Erreur timer: {e}')

        #  5. Agents : sélection + historique en repère local 
        # On trie les agents par distance à l'ego et on garde les max_agents plus proches
        def dist_to_ego(buf):
            last = buf[-1]
            return math.hypot(last['x'] - ref['x'], last['y'] - ref['y'])

        close_agents = sorted(
            [(aid, buf) for aid, buf in self.agent_buffers.items()
             if dist_to_ego(buf) < self.max_dist],
            key=lambda t: dist_to_ego(t[1])
        )[:self.max_agents]

        # Tenseurs agents — initialisés à zéro (padding pour les slots vides)
        agents_past  = np.zeros((self.max_agents, self.past_frames, 3), dtype=np.float32)
        agents_mask  = np.zeros((self.max_agents, self.past_frames), dtype=bool)
        agent_types  = np.zeros(self.max_agents, dtype=np.int64)

        for slot, (aid, buf) in enumerate(close_agents):
            frames = self._downsample(buf, n=self.past_frames)
            for i, frame in enumerate(frames):
                lx, ly, lyaw = convert_global_to_local_pose(
                    (frame['x'], frame['y'], frame['yaw']), ref_pose)
                agents_past[slot, i] = [lx, ly, lyaw]
                agents_mask[slot, i] = True
            agent_types[slot] = self.agent_types.get(aid, 2)

        #  6. Carte OSM → tenseurs lane 
        # VectorNetMapBuilder retourne les segments de route autour de l'ego
        # sous la forme de deux tableaux numpy prêts pour le modèle
        with self.map_lock:
            map_data = self.map_builder.build(ref_pose)
        # map_data['lane']      : [50, 19, 5]  float32
        # map_data['lane_avail']: [50, 19]      bool

        #  7. Construction du data_batch 
        # Le modèle attend des tenseurs PyTorch avec une dimension batch B=1.
        # np → torch, ajout de la dim batch avec unsqueeze(0), envoi sur GPU/CPU.
        def t(arr):
            return torch.from_numpy(arr).unsqueeze(0).to(self.device)

        batch = {
            'ego_past_poses':       t(ego_past),                    # [1, 5, 3]
            'ego_past_mask':        t(ego_mask),                    # [1, 5]
            'agents_past_av_poses': t(agents_past),                 # [1, 10, 5, 3]
            'agents_past_mask':     t(agents_mask),                 # [1, 10, 5]
            'agent_type':           t(agent_types.astype(np.float32)),  # [1, 10]
            'lane':                 t(map_data['lane']),            # [1, 50, 19, 5]
            'lane_avail':           t(map_data['lane_avail'].astype(bool)),  # [1, 50, 19]
            'ego_future_poses':     torch.zeros(1, 12, 3,     device=self.device),
            'agents_future_poses':  torch.zeros(1, 10, 12, 3, device=self.device),
            'ego_future_mask':      torch.zeros(1, 12,         dtype=torch.bool, device=self.device),
            'agents_future_mask':   torch.zeros(1, 10, 12,     dtype=torch.bool, device=self.device),
        }

        #  8. Inférence 
        if self.model is None:
            self.get_logger().info(f"Agents proches: {len(close_agents)} | tenseur_agents_non_zero: {np.count_nonzero(agents_past[:,:,:2])}", throttle_duration_sec=2.0)
            return

        with torch.no_grad():
            result = self.model(batch)

        # Sortie : [1, 11, 5, 12, 3] et [1, 11, 5]
        # On retire la dim batch (squeeze) et on passe en numpy
        pred_traj = result['prediction']['traj'].squeeze(0).cpu().numpy()
        probs     = result['prediction']['probs'].squeeze(0).cpu().numpy()

        #  9. Publication 
        self.pub_traj.publish(self.build_marker_array(pred_traj, probs, ref_pose, agents_past))
        self.pub_hist.publish(self.build_history_array(ego_frames, close_agents, ref_pose))

    #  Construction MarkerArray 
    def build_marker_array(self, pred_traj, probs, ref_pose, agents_past=None) -> MarkerArray:
        ma  = MarkerArray()
        now = self.get_clock().now().to_msg()
        lifetime = Duration()
        lifetime.sec = 1   

        for agent_idx in range(pred_traj.shape[0]):
            
            # Ignorer les agents vides
            if np.all(pred_traj[agent_idx, 0, :, :2] == 0.0) and agent_idx > 0:
                continue

            best_mode = int(np.argmax(probs[agent_idx]))
            prob_softmax = np.exp(probs[agent_idx]) / np.sum(np.exp(probs[agent_idx]))

            for mode_idx in range(pred_traj.shape[1]):
                traj = pred_traj[agent_idx, mode_idx]
                
                m = Marker()
                m.header.frame_id = 'map'
                m.header.stamp    = now
                m.ns              = 'prediction'
                m.id              = agent_idx * 10 + mode_idx  
                m.type            = Marker.LINE_STRIP
                m.action          = Marker.ADD
                m.lifetime        = lifetime
                
                # --- GESTION STRICTE DES COULEURS ---
                if agent_idx == 0:
                    if mode_idx == best_mode:
                        m.color.r, m.color.g, m.color.b = 1.0, 0.0, 0.0
                        m.color.a = 1.0
                        m.scale.x = 0.25
                    else:
                        m.color.r, m.color.g, m.color.b = 0.5, 0.0, 0.0
                        m.color.a = max(0.15, float(prob_softmax[mode_idx]))
                        m.scale.x = 0.15
                else:
                    is_cycle = False
                    if agent_idx <= len(self.agent_buffers):
                        try:
                            is_cycle = list(self.agent_types.values())[agent_idx - 1] == 3
                        except IndexError:
                            pass
                    
                    if is_cycle:
                        m.color.r, m.color.g, m.color.b = 0.0, 0.9, 0.2 
                    else:
                        m.color.r, m.color.g, m.color.b = 0.0, 0.4, 1.0 
                    
                    if mode_idx == best_mode:
                        m.color.a = 1.0
                        m.scale.x = 0.20
                    else:
                        m.color.a = max(0.1, float(prob_softmax[mode_idx]))
                        m.scale.x = 0.15

                # --- CORRECTION DU CAP (YAW) DES AGENTS ---
                if agent_idx == 0:
                    ox, oy, oyaw = 0.0, 0.0, 0.0
                elif agents_past is not None:
                    # Rétabli : X (0), Y (1) et on récupère le Yaw (2)
                    ox = float(agents_past[agent_idx - 1, -1, 0])
                    oy = float(agents_past[agent_idx - 1, -1, 1])
                    oyaw = float(agents_past[agent_idx - 1, -1, 2])
                else:
                    ox, oy, oyaw = 0.0, 0.0, 0.0

                # Rotation de l'ego-véhicule
                c = math.cos(ref_pose[2])
                s = math.sin(ref_pose[2])
                
                # Rotation propre à l'agent
                c_a = math.cos(oyaw)
                s_a = math.sin(oyaw)
                
                for pt in traj:
                    pt_x = float(pt[1])
                    pt_y = float(pt[0])
                    
                    # 1. On applique l'orientation de l'agent
                    x_rot = c_a * pt_x - s_a * pt_y
                    y_rot = s_a * pt_x + c_a * pt_y
                    
                    # 2. On translate à la position de l'agent par rapport à l'Ego
                    x_l = x_rot + ox
                    y_l = y_rot + oy
                    
                    # 3. On repasse le tout dans le repère de la Map
                    x_w = ref_pose[0] + c * x_l - s * y_l
                    y_w = ref_pose[1] + s * x_l + c * y_l
                    
                    p = Point()
                    p.x = x_w
                    p.y = -y_w
                    p.z = 0.0
                    m.points.append(p)
                
                ma.markers.append(m)

        return ma


    def build_history_array(self, ego_frames, close_agents, ref_pose) -> MarkerArray:
        """Publie l'historique passé : ego=cyan, agents=gris."""
        ma  = MarkerArray()
        now = self.get_clock().now().to_msg()
        lifetime = Duration()
        lifetime.sec = 1

        # Ego — cyan
        m = Marker()
        m.header.frame_id = 'map'
        m.header.stamp    = now
        m.ns      = 'history'
        m.id      = 0
        m.type    = Marker.LINE_STRIP
        m.action  = Marker.ADD
        m.lifetime = lifetime
        m.scale.x  = 0.20  #taille trait historique (thickness)
        m.color.r, m.color.g, m.color.b, m.color.a = 0.0, 1.0, 1.0, 1.0
        for frame in ego_frames:
            p = Point()
            p.x = float(frame['x'])
            p.y = float(-frame['y'])
            p.z = 0.0
            m.points.append(p)
        ma.markers.append(m)

        # Agents — gris
        for slot, (aid, buf) in enumerate(close_agents):
            frames = self._downsample(buf, n=self.past_frames)
            m = Marker()
            m.header.frame_id = 'map'
            m.header.stamp    = now
            m.ns      = 'history'
            m.id      = slot + 1
            m.type    = Marker.LINE_STRIP
            m.action  = Marker.ADD
            m.lifetime = lifetime
            m.scale.x  = 0.20  #taille trait agents (thickness)
            m.color.r, m.color.g, m.color.b, m.color.a = 0.5, 0.5, 0.5, 1.0
            for frame in frames:
                p = Point()
                p.x = float(frame['x'])
                p.y = float(-frame['y'])
                p.z = 0.0
                m.points.append(p)
            ma.markers.append(m)

        return ma

#  Entrypoint 
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