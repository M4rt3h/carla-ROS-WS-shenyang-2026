import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
import numpy as np
from ultralytics import YOLO

import torch
import torch.nn as nn
from torchvision import transforms, models
from PIL import Image as PILImage

class SpeedLimitNode(Node):
    def __init__(self):
        super().__init__('speed_limit_node')

        # --- Configuration ROS ---
        self.topic_name = '/carla/hero/rgb_front/image'
        self.timer_period = 0.5  # 2 Hz

        self._pub     = self.create_publisher(String, '/carla/perception/speed_limit', 10)
        self._pub_dbg = self.create_publisher(Image,  '/carla/perception/debug_speed_image', 10)
        
        # --- Machine d'état (Debouncing) ---
        self._state = 'unknown'
        self._state_hold_until = 0.0
        self._candidate_state = 'unknown'
        self._candidate_count = 0
        # Durée minimale de maintien d'une vitesse détectée (en secondes)
        self._STATE_MIN_HOLD = 2.0 

        # --- Initialisation des Modèles ---
        self.bridge = CvBridge()
        self.latest_msg = None
        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

        # 1. Modèle YOLO (Détection de la zone du panneau)
        self.get_logger().info('Chargement du modèle YOLO (Détection)...')
        # ATTENTION : Remplacer par un modèle YOLO entraîné pour détecter les panneaux
        self.yolo_model = YOLO('YOLO/yolov8n.pt') 
        self.SIGN_CLASS_ID = 11 # À adapter selon ton modèle YOLO (11 = Stop en COCO standard)

        # 2. Modèle ResNet18 (Classification de la vitesse)
        self.get_logger().info('Chargement du modèle ResNet18 (Classification)...')
        self.num_classes = 8
        self.speed_mapping = {
            0: '5', 1: '15', 2: '30', 3: '40', 
            4: '50', 5: '60', 6: '70', 7: '80'
        }
        
        self.resnet = models.resnet18(weights=None)
        self.resnet.fc = nn.Linear(self.resnet.fc.in_features, self.num_classes)
        
        # Chargement des poids (assure-toi que le chemin est correct depuis ton workspace)
        resnet_weights_path = 'speed_sign_model_imagefolder.pth'
        try:
            self.resnet.load_state_dict(torch.load(resnet_weights_path, map_location=self.device, weights_only=True))
            self.resnet.to(self.device)
            self.resnet.eval()
        except Exception as e:
            self.get_logger().error(f"Erreur chargement ResNet : {e}")

        # Transformations pour le ResNet
        self.transform = transforms.Compose([
            transforms.ToPILImage(),
            transforms.Resize((224, 224)),
            transforms.ToTensor(),
            transforms.Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225])
        ])

        # --- Souscriptions & Timers ---
        self.subscription = self.create_subscription(
            Image, self.topic_name, self.image_callback, 10
        )
        self.timer = self.create_timer(self.timer_period, self.process_image_callback)
        self.get_logger().info("Nœud Limitation de Vitesse initialisé.")

    def image_callback(self, msg):
        self.latest_msg = msg

    def process_image_callback(self):
        if self.latest_msg is None:
            return

        try:
            # 1. Conversion de l'image ROS en OpenCV
            cv_image = self.bridge.imgmsg_to_cv2(self.latest_msg, 'bgr8')
            h, w, _ = cv_image.shape
            
            # (Optionnel) Définir une ROI spécifique pour les panneaux (ex: moitié droite de l'image)
            # roi = cv_image[0:h//2, w//2:w]
            roi = cv_image
            roi_h, roi_w = roi.shape[:2]

            # 2. Détection YOLO (Recherche de la Bounding Box)
            # Remplacer classes=[self.SIGN_CLASS_ID] par l'ID de la classe panneau de ton modèle
            results = self.yolo_model.predict(roi, verbose=False) # classes=[self.SIGN_CLASS_ID]

            best_crop = None
            best_area = 0
            best_bbox = None

            for result in results:
                for det in result.boxes:
                    # Extraction des coordonnées de la bounding box
                    cx, cy, bw, bh = det.xywhn[0]
                    px_x1 = int((cx - bw / 2) * roi_w)
                    px_y1 = int((cy - bh / 2) * roi_h)
                    px_x2 = int((cx + bw / 2) * roi_w)
                    px_y2 = int((cy + bh / 2) * roi_h)
                    
                    # Sécurité pour éviter les débordements d'index
                    px_x1, px_y1 = max(0, px_x1), max(0, px_y1)
                    px_x2, px_y2 = min(roi_w, px_x2), min(roi_h, px_y2)

                    area = (px_x2 - px_x1) * (px_y2 - px_y1)
                    
                    # On garde le panneau le plus proche/le plus grand
                    if area > best_area:
                        best_area = area
                        best_crop = roi[px_y1:px_y2, px_x1:px_x2]
                        best_bbox = (px_x1, px_y1, px_x2, px_y2)

            # 3. Classification ResNet (si un panneau est détecté)
            raw_speed = 'unknown'
            
            if best_crop is not None and best_crop.size > 0:
                # Préparation du tenseur
                crop_rgb = cv2.cvtColor(best_crop, cv2.COLOR_BGR2RGB)
                input_tensor = self.transform(crop_rgb).unsqueeze(0).to(self.device)

                # Inférence ResNet
                with torch.no_grad():
                    outputs = self.resnet(input_tensor)
                    _, predicted_idx = torch.max(outputs, 1)
                    raw_speed = self.speed_mapping[predicted_idx.item()]

            # 4. Machine d'état (Filtrage et Debouncing)
            now = self.get_clock().now().nanoseconds / 1e9
            
            if now >= self._state_hold_until:
                if raw_speed == self._candidate_state:
                    self._candidate_count += 1
                    # Il faut 3 prédictions identiques consécutives pour valider un changement
                    if self._candidate_count >= 3:
                        self._state = raw_speed
                        self._state_hold_until = now + self._STATE_MIN_HOLD
                        self._candidate_count = 0
                else:
                    self._candidate_state = raw_speed
                    self._candidate_count = 1

            # 5. Publication de la vitesse
            out = String()
            out.data = self._state
            self._pub.publish(out)

            # 6. Publication de l'image de Debug
            debug_img = roi.copy()
            if best_bbox is not None:
                x1, y1, x2, y2 = best_bbox
                cv2.rectangle(debug_img, (x1, y1), (x2, y2), (0, 255, 0), 2)
                
                # Affichage de la vitesse brute lue au-dessus du panneau
                label = f"{raw_speed} km/h" if raw_speed != 'unknown' else "Panneau inconnu"
                cv2.putText(debug_img, label, (x1, max(y1 - 10, 0)), 
                            cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 255, 0), 2)
                
            # Affichage de la vitesse filtrée (Etat actuel) en haut à gauche
            cv2.putText(debug_img, f"ETAT: {self._state}", (20, 40), 
                        cv2.FONT_HERSHEY_SIMPLEX, 1.0, (255, 255, 255), 3)

            self._pub_dbg.publish(self.bridge.cv2_to_imgmsg(debug_img, encoding='bgr8'))
            self.latest_msg = None

        except Exception as e:
            self.get_logger().error(f'Erreur traitement vision : {e}')


def main(args=None):
    rclpy.init(args=args)
    node = SpeedLimitNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()