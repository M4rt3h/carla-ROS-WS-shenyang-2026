#!/usr/bin/env python3
import os
import sys
import json
import math
from collections import deque

import cv2
import numpy as np
import torch
from scipy.signal import savgol_filter

import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
from nav_msgs.msg import Odometry, Path
from geometry_msgs.msg import PoseStamped
from rcl_interfaces.srv import SetParameters
from rcl_interfaces.msg import Parameter, ParameterValue, ParameterType

# --- GESTION DES CHEMINS ---
chemin_fonctions = os.path.expanduser("~/Desktop/Stage/Projet/Fonctions_et_data")
if chemin_fonctions not in sys.path:
    sys.path.append(chemin_fonctions)

from classes import CerveauMultiAgent


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
        self.bridge = CvBridge()

        # --- CONSTANTES DE VISUALISATION ET DE CALCUL ---
        self.PIXELS_PAR_METRE = 8.0
        self.OFFSET_VOITURE_Y = 160   # Pour correspondre au format BEV de l'entraînement
        self.OFFSET_PARE_CHOCS = 141  # Décalage pour démarrer la prédiction au niveau du pare-chocs
        self.AFFICHER_BEV = True      # Activer/Désactiver l'affichage de la fenêtre BEV

        # --- COMMUNICATION ROS ---
        self.sub_bev = self.create_subscription(Image, '/carla/hero/semantic_view/image', self.bev_callback, 1) 
        self.sub_ego_odom = self.create_subscription(Odometry, '/carla/hero/odometry', self.ego_odom_callback, 1)
        self.pub_trajectory = self.create_publisher(Path, '/carla/hero/waypoints', 10)
        self.client_vitesse = self.create_client(SetParameters, '/carla_stanley_pid_control/set_parameters')

        self.timer = self.create_timer(0.1, self.inference_callback)
        self._last_path_publish_time = 0.0
        self._path_publish_interval = 1.0 

        # --- DEBUG VISION ---
        if self.AFFICHER_BEV:
            cv2.namedWindow("Vision IA (BEV)", cv2.WINDOW_NORMAL)
            cv2.resizeWindow("Vision IA (BEV)", 512, 512)
            
            # Création de l'interrupteur : 0 = FALSE (Vitesse Auto), 1 = TRUE (Vitesse Manuelle)
            cv2.createTrackbar("Manuel (0/1)", "Vision IA (BEV)", 0, 1, self.on_trackbar)
            
            # Création de la jauge de vitesse : de 0 à 40 km/h (initialisée à 0)
            cv2.createTrackbar("Vitesse km/h", "Vision IA (BEV)", 0, 40, self.on_trackbar)

    def on_trackbar(self, val):
        pass  # OpenCV a besoin d'un callback, même s'il ne fait rien

    def bev_callback(self, msg):
        try:
            # Récupération de l'image (OpenCV lit en BGR)
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            
            # Redimensionnement sans lissage (INTER_NEAREST)
            resized = cv2.resize(cv_image, (256, 256), interpolation=cv2.INTER_NEAREST)
            
            # Préparation de la toile noire
            fake_bev = np.zeros((256, 256, 3), dtype=np.uint8)
            
            # Masques de détection (Couleurs CityScapes -> Conversion BGR)
            mask_route     = cv2.inRange(resized, np.array([127, 63, 127]), np.array([129, 65, 129]))
            mask_lignes    = cv2.inRange(resized, np.array([49, 233, 156]), np.array([51, 235, 158]))
            mask_voitures  = cv2.inRange(resized, np.array([141, 0, 0]), np.array([143, 0, 0]))
            #mask_trottoirs = cv2.inRange(resized, np.array([231, 34, 243]), np.array([233, 36, 245]))

            # Application des couleurs d'entraînement (en BGR)
            fake_bev[mask_route > 0]     = [46, 52, 54]     # Route (Gris foncé)
            fake_bev[mask_lignes > 0]    = [182, 189, 186]  # Lignes (Blanc/Gris clair)
            fake_bev[mask_voitures > 0]  = [0, 255, 0]      # Véhicules (Vert)
            #fake_bev[mask_trottoirs > 0] = [133, 138, 136]  # Trottoirs (Gris moyen)
            
            # Recentrage de l'Ego-véhicule
            # Dessine le véhicule en rouge au centre mathématique (128, 128)
            # Taille standard : 14 pixels de large, 38 de long
            # Taille augmentée : 18 de large (9 de chaque côté) et 48 de long (24 de chaque côté)
            pt_haut_gauche = (128 - 9, self.OFFSET_VOITURE_Y - 24)
            pt_bas_droit = (128 + 9, self.OFFSET_VOITURE_Y + 24)
            cv2.rectangle(fake_bev, pt_haut_gauche, pt_bas_droit, (0, 0, 255), -1)

            self.derniere_image_bev = fake_bev
            
        except Exception as e:
            self.get_logger().error(f"Erreur lors du traitement BEV : {e}")

    def ego_odom_callback(self, msg):
        # Utilisation du temps de la simulation CARLA au lieu de l'horloge système
        current_time = msg.header.stamp.sec + (msg.header.stamp.nanosec * 1e-9)
        
        # Acquisition d'une frame toutes les 0.05 secondes (20 FPS)
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
            
            # Sauvegarde de l'odométrie pour la publication de la trajectoire
            self.derniere_odometrie_ros = (x, pos.y, yaw_ros)
            self.last_odom_time = current_time

    def inference_callbackTEST(self): 
        """Méthode de test : vérifie si le véhicule roule droit avec une consigne rectiligne."""
        if self.derniere_odometrie_ros is None or self.derniere_image_bev is None:
            return 
        
        # --- 1. Ligne droite mathématique ---
        # Création d'une trajectoire de 60 points (3 secondes à 20 FPS)
        traj_test = np.zeros((60, 2))
        traj_test[:, 0] = np.arange(1, 61) * 0.5  # X avance de 0.5m par point
        # L'axe Y reste à 0.0

        # --- 2. Affichage en direct ---
        if self.AFFICHER_BEV:
            img_visu = self.derniere_image_bev.copy()
            
            points_visuels = []
            for pt in traj_test:
                pixel_x = int(128 + (pt[1] * self.PIXELS_PAR_METRE)) 
                pixel_y = int(self.OFFSET_VOITURE_Y - (pt[0] * self.PIXELS_PAR_METRE))
                points_visuels.append([pixel_x, pixel_y])
            
            pts_array = np.array(points_visuels, np.int32).reshape((-1, 1, 2))
            cv2.polylines(img_visu, [pts_array], isClosed=False, color=(0, 255, 255), thickness=1)

            cv2.imshow("Vision IA (BEV)", img_visu)
            cv2.waitKey(1)
        
        # --- 3. Envoi à ROS / CARLA ---
        ego_ros_x, ego_ros_y, yaw_ros = self.derniere_odometrie_ros
        self.publier_tout(traj_test, ego_ros_x, ego_ros_y, yaw_ros)

    def inference_callback(self):
        if len(self.ego_buffer) < self.history_frames or self.derniere_image_bev is None or self.derniere_odometrie_ros is None:
            return 
        
        img_t = torch.tensor(np.array(self.derniere_image_bev), dtype=torch.float32).unsqueeze(0).to(self.device)
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

        # Calcul des prédictions
        with torch.no_grad():
            preds = self.modele(tensor_phys, img_t)
            
        traj_predite = preds[0, 0, 0].cpu().numpy()  # Trajectoire de l'Ego, Mode 1
        traj_predite = np.cumsum(traj_predite, axis=0)
        traj_predite = traj_predite[1:]

        # --- Lissage de la trajectoire ---
        # Adoucit la trajectoire brute pour limiter les oscillations du volant
        try:
            traj_predite[:, 0] = savgol_filter(traj_predite[:, 0], window_length=15, polyorder=3)
            traj_predite[:, 1] = savgol_filter(traj_predite[:, 1], window_length=15, polyorder=3)
        except ValueError:
            pass  # Ignore le lissage si la trajectoire est trop courte

        # --- Affichage en direct des intentions du modèle ---
        if self.AFFICHER_BEV:
            img_visu = self.derniere_image_bev.copy()
            points_visuels = []
            
            for pt in traj_predite:
                pixel_x = int(128 + (pt[1] * self.PIXELS_PAR_METRE)) 
                pixel_y = int(self.OFFSET_PARE_CHOCS - (pt[0] * self.PIXELS_PAR_METRE))
                points_visuels.append([pixel_x, pixel_y])
            
            pts_array = np.array(points_visuels, np.int32).reshape((-1, 1, 2))
            cv2.polylines(img_visu, [pts_array], isClosed=False, color=(0, 255, 255), thickness=1)

            cv2.imshow("Vision IA (BEV)", img_visu)
            cv2.waitKey(1)

        # Envoi à ROS / CARLA
        ego_ros_x, ego_ros_y, yaw_ros = self.derniere_odometrie_ros
        self.publier_tout(traj_predite, ego_ros_x, ego_ros_y, yaw_ros)

    def publier_tout(self, traj, ego_ros_x, ego_ros_y, yaw_ros):
        dist = math.sqrt(traj[-1][0]**2 + traj[-1][1]**2)
        v_ms = max(2.8, dist / 3.0) if dist > 0.5 else 0.0

        # --- LECTURE DE L'INTERFACE OPENCV ---
        if self.AFFICHER_BEV:
            try:
                # Lecture de l'état de l'interrupteur
                mode_manuel = cv2.getTrackbarPos("Manuel (0/1)", "Vision IA (BEV)")
                
                # Si l'interrupteur est sur TRUE (1)
                if mode_manuel == 1:
                    vitesse_kmh = cv2.getTrackbarPos("Vitesse km/h", "Vision IA (BEV)")
                    # CARLA utilise des mètres par seconde (m/s), on convertit les km/h
                    v_ms = vitesse_kmh / 3.6 
            except cv2.error:
                # Évite un crash si la fenêtre OpenCV est fermée inopinément
                pass

        path = Path()

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
        #Publication de la vitesse
        if self.client_vitesse.service_is_ready():
            req = SetParameters.Request()
            valeur_param = ParameterValue(type=ParameterType.PARAMETER_DOUBLE, double_value=float(v_ms))
            req.parameters = [Parameter(name='speed_target', value=valeur_param)]
            
            # call_async permet de ne pas bloquer l'IA pendant qu'elle envoie l'ordre
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