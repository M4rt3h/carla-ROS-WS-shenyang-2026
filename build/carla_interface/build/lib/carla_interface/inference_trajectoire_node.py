#!/usr/bin/env python3
import os
import sys
import json
import time
import math
from collections import deque

import cv2
import numpy as np
import torch
from scipy.signal import savgol_filter

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry, Path
from geometry_msgs.msg import PoseStamped
from rcl_interfaces.srv import SetParameters
from rcl_interfaces.msg import Parameter, ParameterValue, ParameterType

chemin_carla_egg = '/home/martin/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.13/PythonAPI/carla/dist/carla-0.9.13-py3.7-linux-x86_64.egg'

if not os.path.exists(chemin_carla_egg):
    print(f"ATTENTION : Le fichier .egg est introuvable au chemin : {chemin_carla_egg}")
elif chemin_carla_egg not in sys.path:
    sys.path.append(chemin_carla_egg)

import carla
import pygame
from carla_interface.render import BirdeyeRender

# --- GESTION DES CHEMINS ---
chemin_fonctions = os.path.expanduser("~/Desktop/Stage/Projet/Fonctions_et_data")
if chemin_fonctions not in sys.path:
    sys.path.append(chemin_fonctions)

from classes import CerveauMultiAgent

def get_actor_polygons(world, filt):
    """Fonction issue du script de demo pour récupérer les polygones (bounding boxes) des acteurs."""
    actor_poly_dict = {}
    for actor in world.get_actors().filter(filt):
        trans = actor.get_transform()
        x = trans.location.x
        y = trans.location.y
        yaw = trans.rotation.yaw / 180 * np.pi
        
        bb = actor.bounding_box
        l = bb.extent.x
        w = bb.extent.y
        
        poly_local = np.array([[l, w], [l, -w], [-l, -w], [-l, w]]).transpose()
        R = np.array([[np.cos(yaw), -np.sin(yaw)], [np.sin(yaw), np.cos(yaw)]])
        poly = np.matmul(R, poly_local).transpose() + np.repeat([[x, y]], 4, axis=0)
        actor_poly_dict[actor.id] = poly
    return actor_poly_dict


class InferenceTrajectoireNode(Node):
    def __init__(self):
        super().__init__('inference_trajectoire_node')
        
        # --- CONFIGURATION MATÉRIELLE ET MODÈLE ---
        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        
        config_path = os.path.expanduser("~/Desktop/Stage/Projet/Fonctions_et_data/config.json")
        try:
            with open(config_path, 'r') as f:
                config = json.load(f)
            
            # --- CHARGEMENT HKR-NET ---
            config_hkr = config.get("hkr_net", None)
            self.modele = CerveauMultiAgent(num_modes=3, config_hkr=config_hkr).to(self.device)

            self.modele.load_state_dict(
                torch.load(config["chemins"]["modele_ia"], map_location=self.device, weights_only=True),
                strict=False
            )
            self.modele.eval()
            self.get_logger().info("Cerveau HKR-Net initialisé avec paramètres physiques.")
        except Exception as e:
            self.get_logger().error(f"Erreur d'initialisation du modèle : {e}")

        # --- VARIABLES D'ÉTAT ---
        self.last_odom_time = 0.0
        self.derniere_odometrie_ros = None
        self.derniere_image_bev = None

        try:
            self.history_frames = config["parametres"]["history_sec"] * 20
        except Exception:
            self.history_frames = 100
        self.ego_buffer = deque(maxlen=self.history_frames)

        # --- BUFFERS DES AGENTS SOCIAUX ---
        self.social_buffers = {}
        self.max_agents = 6

        # --- CONSTANTES DE VISUALISATION ET DE CALCUL ---
        self.PIXELS_PAR_METRE = 8.0
        self.OFFSET_VOITURE_Y = 160   
        self.OFFSET_PARE_CHOCS = 141  
        self.AFFICHER_BEV = True      

        # --- INITIALISATION CLIENT CARLA ET MOTEUR PYGAME ---
        self.get_logger().info("Connexion au serveur CARLA...")
        self.carla_client = carla.Client('localhost', 2000)
        self.carla_client.set_timeout(10.0)
        self.world = self.carla_client.get_world()
        
        pygame.init()
        pygame.display.set_mode((256, 256), pygame.HIDDEN)
        self.dummy_surface = pygame.Surface((1024, 1024)) 

        display_size = 256
        obs_range = 32
        pixels_per_meter = display_size / obs_range
        d_behind = 12
        pixels_ahead_vehicle = (obs_range/2 - d_behind) * pixels_per_meter
        birdeye_params = {
            'screen_size': [display_size, display_size],
            'pixels_per_meter': pixels_per_meter,
            'pixels_ahead_vehicle': pixels_ahead_vehicle
        }
        self.birdeye_render = BirdeyeRender(world=self.world, params=birdeye_params)
        
        self.ego_vehicle = None
        for actor in self.world.get_actors():
            if actor.attributes.get('role_name') == 'hero':
                self.ego_vehicle = actor
                break
        
        if self.ego_vehicle is not None:
            self.birdeye_render.set_hero(self.ego_vehicle, self.ego_vehicle.id)
            self.get_logger().info("Véhicule Ego ('hero') connecté au rendu BEV.")
        else:
            self.get_logger().warning("Véhicule Ego non trouvé au lancement. Le rendu BEV échouera.")

        # --- COMMUNICATION ROS ---
        self.sub_ego_odom = self.create_subscription(Odometry, '/carla/hero/odometry', self.ego_odom_callback, 1)
        self.pub_trajectory = self.create_publisher(Path, '/carla/hero/waypoints', 10)
        self.client_vitesse = self.create_client(SetParameters, '/carla_stanley_pid_control/set_parameters')

        self.timer = self.create_timer(0.1, self.inference_callback)
        self._last_path_publish_time = 0.0

        # --- DEBUG VISION OPENCV ---
        if self.AFFICHER_BEV:
            cv2.namedWindow("Vision IA (BEV)", cv2.WINDOW_NORMAL)
            cv2.resizeWindow("Vision IA (BEV)", 512, 512)
            cv2.createTrackbar("Manuel (0/1)", "Vision IA (BEV)", 0, 1, self.on_trackbar)
            cv2.createTrackbar("Vitesse km/h", "Vision IA (BEV)", 0, 40, self.on_trackbar)
            cv2.createTrackbar("Ligne Droite", "Vision IA (BEV)", 0, 1, self.on_trackbar)
            
    def on_trackbar(self, val):
        pass

    def update_bev_image(self):
        """Génère l'image BEV Pygame et la convertit en format utilisable pour le modèle (OpenCV/Numpy)."""
        if self.ego_vehicle is None:
            return

        pygame.event.pump()

        vehicle_poly_dict = get_actor_polygons(self.world, "vehicle.*")
        self.birdeye_render.vehicle_polygons = [vehicle_poly_dict]

        # FIX: walker_polygons était manquant → AttributeError dans render_actors()
        walker_poly_dict = get_actor_polygons(self.world, "walker.*")
        self.birdeye_render.walker_polygons = [walker_poly_dict]

        bev_surface = self.birdeye_render.render(self.dummy_surface, ['roadmap', 'actors'])
        
        if bev_surface is not None:
            bev_array = pygame.surfarray.pixels3d(bev_surface)
            bev_array = np.swapaxes(bev_array, 0, 1)
            self.derniere_image_bev = cv2.cvtColor(bev_array, cv2.COLOR_RGB2BGR)

    def update_social_buffers(self):
        """
        FIX: Met à jour les buffers d'historique des véhicules voisins à 20Hz.
        Reproduit exactement la logique de Absolute2Ego_Coordinates_Dataset.py :
        les coordonnées sont en brut CARLA (la transformation ego-centrique
        se fait au moment de l'inférence, comme dans le dataset).
        """
        if self.ego_vehicle is None:
            return

        ego_trans = self.ego_vehicle.get_transform()
        ids_vus = set()

        for v in self.world.get_actors().filter('vehicle.*'):
            if v.id == self.ego_vehicle.id:
                continue

            v_trans = v.get_transform()
            dist = ego_trans.location.distance(v_trans.location)
            if dist > 50.0:  # même seuil que dans carla_demo16.py
                continue

            ids_vus.add(v.id)
            v_vel = v.get_velocity()
            speed = math.sqrt(v_vel.x**2 + v_vel.y**2 + v_vel.z**2)

            if v.id not in self.social_buffers:
                self.social_buffers[v.id] = deque(maxlen=self.history_frames)

            self.social_buffers[v.id].append({
                'x': v_trans.location.x,
                'y': v_trans.location.y,
                'yaw': v_trans.rotation.yaw,
                'speed': speed
            })

        # Supprime les véhicules qui ont quitté la zone ou disparu
        for old_id in list(self.social_buffers.keys()):
            if old_id not in ids_vus:
                del self.social_buffers[old_id]

    def ego_odom_callback(self, msg):
        current_time = msg.header.stamp.sec + (msg.header.stamp.nanosec * 1e-9)
        
        if current_time - self.last_odom_time >= 0.05:
            pos = msg.pose.pose.position
            ori = msg.pose.pose.orientation
            twist = msg.twist.twist.linear

            x = pos.x
            y = -pos.y
            
            yaw_ros = math.atan2(2.0 * (ori.w * ori.z), 1.0 - 2.0 * (ori.z * ori.z))
            yaw_carla_deg = -math.degrees(yaw_ros) 
            speed = math.sqrt(twist.x**2 + twist.y**2)
            
            self.ego_buffer.append({'x': x, 'y': y, 'yaw': yaw_carla_deg, 'speed': speed})
            self.derniere_odometrie_ros = (x, pos.y, yaw_ros)
            self.last_odom_time = current_time
            
            self.update_social_buffers()

    def inference_callback(self):
        t_debut_boucle = time.perf_counter()
        
        t0 = time.perf_counter()
        self.update_bev_image()
        t_image = time.perf_counter() - t0

        # 1. CLICHÉ SYNCHRONISÉ : On fige l'état des buffers pour le calcul
        ego_snapshot = list(self.ego_buffer)
        social_snapshot = {k: list(v) for k, v in self.social_buffers.items()}

        if len(ego_snapshot) < self.history_frames or self.derniere_image_bev is None or self.derniere_odometrie_ros is None:
            return 
            
        mode_test_actif = 0
        if self.AFFICHER_BEV:
            try:
                mode_test_actif = cv2.getTrackbarPos("Ligne Droite", "Vision IA (BEV)")
            except cv2.error:
                pass
                
        if mode_test_actif == 1:
            traj_test = np.zeros((60, 2))
            traj_test[:, 0] = np.arange(1, 61) * 0.5  
            if self.AFFICHER_BEV:
                img_visu = self.derniere_image_bev.copy()
                points_visuels = []
                for pt in traj_test:
                    pixel_x = int(128 + (pt[1] * self.PIXELS_PAR_METRE)) 
                    pixel_y = int(self.OFFSET_PARE_CHOCS - (pt[0] * self.PIXELS_PAR_METRE))
                    points_visuels.append([pixel_x, pixel_y])
                pts_array = np.array(points_visuels, np.int32).reshape((-1, 1, 2))
                cv2.polylines(img_visu, [pts_array], isClosed=False, color=(0, 255, 255), thickness=2) 
                cv2.imshow("Vision IA (BEV)", img_visu)
                cv2.waitKey(1)
                
            ego_ros_x, ego_ros_y, yaw_ros = self.derniere_odometrie_ros
            self.publier_tout(traj_test, ego_ros_x, ego_ros_y, yaw_ros)
            return 
        
        t0 = time.perf_counter()
        img_array = self.derniere_image_bev.copy()
        img_t = torch.tensor(img_array, dtype=torch.float32).unsqueeze(0).to(self.device)
        
        ego_now = ego_snapshot[-1]
        ego_x_T  = ego_now['x']
        ego_y_T  = ego_now['y']
        ego_yaw_T = ego_now['yaw']
        yaw_rad = math.radians(ego_yaw_T)
        c = math.cos(-yaw_rad)
        s = math.sin(-yaw_rad)

        tensor_phys = torch.zeros((1, self.max_agents, self.history_frames, 5), dtype=torch.float32).to(self.device)

        # Slot 0 : Ego
        for i, state in enumerate(ego_snapshot):
            tx = state['x'] - ego_x_T
            ty = state['y'] - ego_y_T
            
            yaw_diff_deg = (state['yaw'] - ego_yaw_T + 180) % 360 - 180
            yaw_rad_rel = math.radians(yaw_diff_deg)
            cos_y = math.cos(yaw_rad_rel)
            sin_y = math.sin(yaw_rad_rel)
            speed_norm = state['speed'] / 30.0        
            
            tensor_phys[0, 0, i] = torch.tensor([tx*c - ty*s, tx*s + ty*c, cos_y, sin_y, speed_norm])
        
        # Slots sociaux
        agent_slot = 1
        for actor_id, buf in social_snapshot.items():
            if agent_slot >= self.max_agents:
                break
            hist_len = len(buf)
            if hist_len < 2:
                continue
                
            pad_len = self.history_frames - hist_len
            for i, state in enumerate(buf):
                tx = state['x'] - ego_x_T
                ty = state['y'] - ego_y_T
                
                yaw_diff_deg = (state['yaw'] - ego_yaw_T + 180) % 360 - 180
                yaw_rad_rel = math.radians(yaw_diff_deg)
                cos_y = math.cos(yaw_rad_rel)
                sin_y = math.sin(yaw_rad_rel)
                speed_norm = state['speed'] / 30.0
                
                if i == 0 and pad_len > 0:
                    tensor_pad = torch.tensor([tx*c - ty*s, tx*s + ty*c, cos_y, sin_y, 0.0])
                    tensor_phys[0, agent_slot, :pad_len] = tensor_pad
                    
                tensor_phys[0, agent_slot, pad_len + i] = torch.tensor([tx*c - ty*s, tx*s + ty*c, cos_y, sin_y, speed_norm])
            
            agent_slot += 1

        t0 = time.perf_counter()
        with torch.no_grad():
            preds, conf_tensor = self.modele(tensor_phys, img_t)
        t_ia = time.perf_counter() - t0

        preds_np = preds[0].cpu().numpy()         
        conf_np = conf_tensor[0].cpu().numpy()    

        if self.AFFICHER_BEV:
            img_visu = self.derniere_image_bev.copy()

            for slot_idx in range(agent_slot):
                trajs_modes = preds_np[slot_idx]
                conf_scores = conf_np[slot_idx]
                meilleur_mode_idx = int(np.argmax(conf_scores))

                if slot_idx == 0:
                    couleurs = [(0, 0, 255), (0, 255, 0), (255, 0, 0)]  
                else:
                    couleurs = [(0, 165, 255), (255, 0, 255), (255, 255, 0)] 
                    
                # 2. FIX DESSIN : On récupère l'état (t=0) pour l'accrocher au pare-chocs
                pt_depart = tensor_phys[0, slot_idx, -1, :2].cpu().numpy()

                for idx_mode, mode_traj in enumerate(trajs_modes):
                    # On place le point présent au début de la prédiction future
                    mode_traj_complet = np.vstack([pt_depart, mode_traj])
                    
                    points_visuels = []
                    for pt in mode_traj_complet:
                        pixel_x = int(128 + (pt[1] * self.PIXELS_PAR_METRE))
                        pixel_y = int(self.OFFSET_VOITURE_Y - (pt[0] * self.PIXELS_PAR_METRE))
                        points_visuels.append([pixel_x, pixel_y])

                    pts_array = np.array(points_visuels, np.int32).reshape((-1, 1, 2))
                    epaisseur = 3 if idx_mode == meilleur_mode_idx else 1
                    
                    cv2.polylines(img_visu, [pts_array], isClosed=False, color=couleurs[idx_mode], thickness=epaisseur)

                    if slot_idx == 0 or idx_mode == meilleur_mode_idx:
                        pt_fin = points_visuels[-1]
                        label_conf = f"{conf_scores[idx_mode]*100:.0f}%"
                        cv2.putText(img_visu, label_conf,
                                    (pt_fin[0] + 4, pt_fin[1]),
                                    cv2.FONT_HERSHEY_SIMPLEX, 0.35,
                                    couleurs[idx_mode], 1, cv2.LINE_AA)

            cv2.imshow("Vision IA (BEV)", img_visu)
            cv2.waitKey(1)

        meilleur_mode_ego = int(np.argmax(conf_np[0]))
        traj_predite_ego = preds_np[0][meilleur_mode_ego]
        
        points_a_ignorer = 5
        traj_pour_controleur = traj_predite_ego[points_a_ignorer:]

        ego_ros_x, ego_ros_y, yaw_ros = self.derniere_odometrie_ros
        self.publier_tout(traj_pour_controleur, ego_ros_x, ego_ros_y, yaw_ros)

        t_total = time.perf_counter() - t_debut_boucle
        conf_str_ego = " | ".join([f"M{i}={conf_np[0][i]*100:.0f}%" for i in range(len(conf_np[0]))])
        self.get_logger().info(
            f"Latence: {t_total*1000:.1f} ms | IA: {t_ia*1000:.1f} ms | "
            f"Ego Mode: {meilleur_mode_ego} | Confiances Ego: [{conf_str_ego}] | Voisins: {agent_slot - 1}"
        )
    
    def publier_tout(self, traj, ego_ros_x, ego_ros_y, yaw_ros):
        dist = math.sqrt(traj[-1][0]**2 + traj[-1][1]**2)
        v_ms = max(2.8, dist / 3.0) if dist > 0.5 else 0.0

        if self.AFFICHER_BEV:
            try:
                mode_manuel = cv2.getTrackbarPos("Manuel (0/1)", "Vision IA (BEV)")
                if mode_manuel == 1:
                    vitesse_kmh = cv2.getTrackbarPos("Vitesse km/h", "Vision IA (BEV)")
                    v_ms = vitesse_kmh / 3.6 
            except cv2.error:
                pass

        path = Path()
        path.header.frame_id = "map"
        path.header.stamp = self.get_clock().now().to_msg()

        points_globaux = []
        for pt in traj:
            local_x = float(pt[0])
            local_y = float(pt[1])
            global_x = ego_ros_x + local_x * math.cos(yaw_ros) + local_y * math.sin(yaw_ros)
            global_y = ego_ros_y + local_x * math.sin(yaw_ros) - local_y * math.cos(yaw_ros)
            points_globaux.append((global_x, global_y))

        waypoint_yaw = yaw_ros
        for i in range(len(points_globaux)):
            p = PoseStamped()
            p.pose.position.x = points_globaux[i][0]
            p.pose.position.y = points_globaux[i][1]
            p.pose.position.z = 0.0

            lookahead_index = min(i + 5, len(points_globaux) - 1)
            if i < lookahead_index:
                dx = points_globaux[lookahead_index][0] - points_globaux[i][0]
                dy = points_globaux[lookahead_index][1] - points_globaux[i][1]
                waypoint_yaw = math.atan2(dy, dx)

            p.pose.orientation.x = 0.0
            p.pose.orientation.y = 0.0
            p.pose.orientation.z = math.sin(waypoint_yaw / 2.0)
            p.pose.orientation.w = math.cos(waypoint_yaw / 2.0)
            path.poses.append(p)

        self.pub_trajectory.publish(path)
        
        if self.client_vitesse.service_is_ready():
            req = SetParameters.Request()
            valeur_param = ParameterValue(type=ParameterType.PARAMETER_DOUBLE, double_value=float(v_ms))
            req.parameters = [Parameter(name='speed_target', value=valeur_param)]
            self.client_vitesse.call_async(req)

def main():
    rclpy.init()
    node = InferenceTrajectoireNode()
    try: 
        rclpy.spin(node)
    except KeyboardInterrupt: 
        pass
    finally:
        cv2.destroyAllWindows()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()