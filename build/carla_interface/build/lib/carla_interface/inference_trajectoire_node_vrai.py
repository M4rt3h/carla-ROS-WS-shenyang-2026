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
        self.modele = CerveauMultiAgent(num_modes=3).to(self.device)
        
        config_path = os.path.expanduser("~/Desktop/Stage/Projet/config.json")
        try:
            with open(config_path, 'r') as f:
                config = json.load(f)
            self.modele.load_state_dict(torch.load(config["chemin_modele"], map_location=self.device))
            self.modele.eval()
            self.get_logger().info("Cerveau prêt (Traducteur CARLA activé)")
        except Exception as e:
            self.get_logger().error(f"Erreur d'initialisation du modèle : {e}")

        # --- VARIABLES D'ÉTAT ---
        self.last_odom_time = 0.0
        self.derniere_odometrie_ros = None
        self.derniere_image_bev = None
        
        self.history_frames = 100
        self.ego_buffer = deque(maxlen=self.history_frames)

        # --- CONSTANTES DE VISUALISATION ET DE CALCUL ---
        self.PIXELS_PAR_METRE = 8.0
        self.OFFSET_VOITURE_Y = 160   
        self.OFFSET_PARE_CHOCS = 141  
        self.AFFICHER_BEV = True      

        # --- INITIALISATION CLIENT CARLA ET MOTEUR PYGAME (NOUVEAU) ---
        self.get_logger().info("Connexion au serveur CARLA...")
        self.carla_client = carla.Client('localhost', 2000)
        self.carla_client.set_timeout(10.0)
        self.world = self.carla_client.get_world()
        
        pygame.init()
        # On initialise une fenêtre Pygame cachée pour activer le contexte de rendu matériel
        pygame.display.set_mode((256, 256), pygame.HIDDEN)
        self.dummy_surface = pygame.Surface((1024, 1024)) 

        # Paramètres identiques à carla_demo16.py
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
        
        # Identification du véhicule Ego
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
        # Note : On ne s'abonne plus à l'image, on la génère directement via CARLA/Pygame
        self.sub_ego_odom = self.create_subscription(Odometry, '/carla/hero/odometry', self.ego_odom_callback, 1)
        self.pub_trajectory = self.create_publisher(Path, '/carla/hero/waypoints', 10)
        self.client_vitesse = self.create_client(SetParameters, '/carla_stanley_pid_control/set_parameters')

        self.timer = self.create_timer(0.1, self.inference_callback) # 10Hz
        self._last_path_publish_time = 0.0

        # --- DEBUG VISION OPENCV ---
        if self.AFFICHER_BEV:
            cv2.namedWindow("Vision IA (BEV)", cv2.WINDOW_NORMAL)
            cv2.resizeWindow("Vision IA (BEV)", 512, 512)
            cv2.createTrackbar("Manuel (0/1)", "Vision IA (BEV)", 0, 1, self.on_trackbar)
            cv2.createTrackbar("Vitesse km/h", "Vision IA (BEV)", 0, 40, self.on_trackbar)
        
        # --- NOUVEAU : Bouton Ligne Droite ---
            cv2.createTrackbar("Ligne Droite", "Vision IA (BEV)", 0, 1, self.on_trackbar)

    def on_trackbar(self, val):
        pass

    def update_bev_image(self):
        """Génère l'image BEV Pygame et la convertit en format utilisable pour le modèle (OpenCV/Numpy)."""
        if self.ego_vehicle is None:
            return

        # Purge la file d'attente des événements Pygame pour éviter un crash
        pygame.event.pump()

        # Mise à jour des polygones des acteurs pour le rendu
        vehicle_poly_dict = get_actor_polygons(self.world, "vehicle.*")
        self.birdeye_render.vehicle_polygons = [vehicle_poly_dict]
        
        # Le script render.py dessine la roadmap et les acteurs
        bev_surface = self.birdeye_render.render(self.dummy_surface, ['roadmap', 'actors'])
        
        if bev_surface is not None:
            # Extraction des pixels de Pygame
            bev_array = pygame.surfarray.pixels3d(bev_surface)
            # Pygame utilise le format (X, Y, RGB). OpenCV utilise (Y, X, BGR).
            bev_array = np.swapaxes(bev_array, 0, 1)
            self.derniere_image_bev = cv2.cvtColor(bev_array, cv2.COLOR_RGB2BGR)

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

    def inference_callback(self):
        # --- CHRONO GLOBAL START ---
        t_debut_boucle = time.perf_counter()
        
        # 1. Génération de l'image Pygame mise à jour via CARLA Client
        t0 = time.perf_counter()
        self.update_bev_image()
        t_image = time.perf_counter() - t0

        if len(self.ego_buffer) < self.history_frames or self.derniere_image_bev is None or self.derniere_odometrie_ros is None:
            return 
            
        # ==========================================
        # --- MODE TEST : LIGNE DROITE FORCÉE ---
        # ==========================================
        mode_test_actif = 0
        if self.AFFICHER_BEV:
            try:
                mode_test_actif = cv2.getTrackbarPos("Ligne Droite", "Vision IA (BEV)")
            except cv2.error:
                pass
                
        if mode_test_actif == 1:
            # Trajectoire mathématique parfaitement droite
            traj_test = np.zeros((60, 2))
            traj_test[:, 0] = np.arange(1, 61) * 0.5  # Avance de 0.5m par point, Y reste à 0
            
            if self.AFFICHER_BEV:
                img_visu = self.derniere_image_bev.copy()
                points_visuels = []
                for pt in traj_test:
                    pixel_x = int(128 + (pt[1] * self.PIXELS_PAR_METRE)) 
                    pixel_y = int(self.OFFSET_PARE_CHOCS - (pt[0] * self.PIXELS_PAR_METRE))
                    points_visuels.append([pixel_x, pixel_y])
                pts_array = np.array(points_visuels, np.int32).reshape((-1, 1, 2))
                # On dessine la ligne test en Jaune
                cv2.polylines(img_visu, [pts_array], isClosed=False, color=(0, 255, 255), thickness=2) 
                cv2.imshow("Vision IA (BEV)", img_visu)
                cv2.waitKey(1)
                
            ego_ros_x, ego_ros_y, yaw_ros = self.derniere_odometrie_ros
            self.publier_tout(traj_test, ego_ros_x, ego_ros_y, yaw_ros)
            return # On arrête la fonction ici, l'IA ne calcule rien
        # ==========================================
        
        # ==========================================
        # --- MODE NORMAL : CERVEAU IA ---
        # ==========================================
        
        t0 = time.perf_counter()
        img_array = self.derniere_image_bev.copy()
        img_t = torch.tensor(img_array, dtype=torch.float32).unsqueeze(0).to(self.device)
        
        ego_now = self.ego_buffer[-1]
        yaw_rad = math.radians(ego_now['yaw'])
        c, s = math.cos(-yaw_rad), math.sin(-yaw_rad)
        
        tensor_phys = torch.zeros((1, 6, self.history_frames, 4), dtype=torch.float32).to(self.device)
        
        for i, state in enumerate(self.ego_buffer):
            tx = state['x'] - ego_now['x']
            ty = state['y'] - ego_now['y']
            
            yaw_diff = ((state['yaw'] - ego_now['yaw'] + 180) % 360 - 180) / 180.0
            norm_speed = state['speed'] / 30.0

            tensor_phys[0, 0, i] = torch.tensor([
                tx * c - ty * s, 
                tx * s + ty * c, 
                yaw_diff,
                norm_speed
            ])
        t_prep = time.perf_counter() - t0

        # Calcul des prédictions IA
        t0 = time.perf_counter()
        with torch.no_grad():
            preds = self.modele(tensor_phys, img_t)
        t_ia = time.perf_counter() - t0
            
        # preds a la forme : [Batch, Agent_Ego, 3 Modes, 60 frames, 2 coordonnées]
        trajs_modes = preds[0, 0].cpu().numpy()

        # SUPPRESSION DU CUMSUM (Le modèle prédit déjà les bonnes coordonnées finales)

        # Lissage des 3 modes
        for idx in range(3):
            try:
                trajs_modes[idx, :, 0] = savgol_filter(trajs_modes[idx, :, 0], window_length=15, polyorder=3)
                trajs_modes[idx, :, 1] = savgol_filter(trajs_modes[idx, :, 1], window_length=15, polyorder=3)
            except ValueError:
                pass

        # --- HEURISTIQUE DE SÉLECTION DU MODE ---
        # On choisit le mode qui avance le plus loin (plus grande distance parcourue)
        distances = [math.hypot(mode[-1, 0], mode[-1, 1]) for mode in trajs_modes]
        meilleur_mode_idx = np.argmax(distances)
        
        # C'est ce mode qu'on enverra à la voiture
        traj_predite = trajs_modes[meilleur_mode_idx]

        points_a_ignorer = 20 
        traj_pour_controleur = traj_predite[points_a_ignorer:]

        # --- Affichage en direct des intentions du modèle ---
        if self.AFFICHER_BEV:
            img_visu = self.derniere_image_bev.copy()
            
            # Couleurs (BGR OpenCV) : Rouge (Mode 0), Vert (Mode 1), Bleu (Mode 2)
            couleurs = [(0, 0, 255), (0, 255, 0), (255, 0, 0)] 
            
            for idx_mode, mode_traj in enumerate(trajs_modes):
                points_visuels = []
                for pt in mode_traj:
                    pixel_x = int(128 + (pt[1] * self.PIXELS_PAR_METRE)) 
                    pixel_y = int(self.OFFSET_PARE_CHOCS - (pt[0] * self.PIXELS_PAR_METRE))
                    points_visuels.append([pixel_x, pixel_y])
                
                pts_array = np.array(points_visuels, np.int32).reshape((-1, 1, 2))
                
                # On met en gras le mode "Gagnant" envoyé à CARLA
                epaisseur = 3 if idx_mode == meilleur_mode_idx else 1
                cv2.polylines(img_visu, [pts_array], isClosed=False, color=couleurs[idx_mode], thickness=epaisseur)

            cv2.imshow("Vision IA (BEV)", img_visu)
            cv2.waitKey(1)

        # Envoi à ROS / CARLA
        ego_ros_x, ego_ros_y, yaw_ros = self.derniere_odometrie_ros
        self.publier_tout(traj_pour_controleur, ego_ros_x, ego_ros_y, yaw_ros)
        
        # --- CHRONO GLOBAL END ---
        t_total = time.perf_counter() - t_debut_boucle
        
        # Affichage dans le terminal ROS (en millisecondes)
        self.get_logger().info(
            f"Latence Totale: {t_total*1000:.1f} ms | "
            f"Image CARLA: {t_image*1000:.1f} ms | "
            f"Prep Tenseurs: {t_prep*1000:.1f} ms | "
            f"Reseau IA: {t_ia*1000:.1f} ms"
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
            global_x = ego_ros_x + local_x * math.cos(yaw_ros) - local_y * math.sin(yaw_ros)
            global_y = ego_ros_y + local_x * math.sin(yaw_ros) + local_y * math.cos(yaw_ros)
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