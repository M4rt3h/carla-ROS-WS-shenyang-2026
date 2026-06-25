import os
import json
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image as RosImage
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
import numpy as np
from ament_index_python.packages import get_package_share_directory

import torch
import torch.nn as nn
from torchvision import transforms

# --- ARCHITECTURE DU MODÈLE ---
class TinySpeedNet(nn.Module):
    def __init__(self, num_classes=9): #Nombre de classes du modele de reconnaissance des panneaux de limitation de vitesse
        super(TinySpeedNet, self).__init__()
        self.features = nn.Sequential(
            nn.Conv2d(3, 16, kernel_size=3, padding=1),
            nn.ReLU(),
            nn.MaxPool2d(2, 2),
            
            nn.Conv2d(16, 32, kernel_size=3, padding=1),
            nn.ReLU(),
            nn.MaxPool2d(2, 2)
        )
        self.classifier = nn.Sequential(
            nn.Flatten(),
            nn.Linear(32 * 16 * 16, 128),
            nn.ReLU(),
            nn.Linear(128, num_classes)
        )

    def forward(self, x):
        x = self.features(x)
        x = self.classifier(x)
        return x
# -----------------------------------------------------------------------------

class SpeedLimitNode(Node):
    def __init__(self):
        super().__init__('speed_limit_node')
        self.bridge = CvBridge()
        self.latest_image = None

        # Machine d'état (Debouncing)
        self._state = 'unknown'
        self._state_hold_until = 0.0
        self._candidate_state = 'unknown'
        self._candidate_count = 0
        self._STATE_MIN_HOLD = 2.0 

        self.get_logger().info('Chargement du modèle TinySpeedNet (Classification)...')
        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        self.speed_mapping = {
            0: '15', 1: '20', 2: '30', 3: '40', 
            4: '50', 5: '60', 6: '70', 7: '80', 8: '90'
        }
        
        # Récupération propre du modèle
        package_share_directory = get_package_share_directory('carla_planning')
        model_path = os.path.join(package_share_directory, 'YOLO', 'speed_classifier.pth')
        
        self.classifier = None
        try:
            self.classifier = torch.load(model_path, map_location=self.device)
            self.classifier = self.classifier.to(self.device)
            self.classifier.eval()
            self.get_logger().info(f'Modèle chargé avec succès sur {self.device}')
        except Exception as e:
            self.get_logger().error(f"Erreur de chargement du modèle : {e}")

        # Transformation
        self.transform = transforms.Compose([
            transforms.ToPILImage(),
            transforms.Resize((64, 64)),
            transforms.ToTensor(),
            transforms.Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225])
        ])

        # Souscriptions sur le pipeline JSON
        self.sub_image = self.create_subscription(RosImage, '/carla/hero/rgb_front/image', self.image_callback, 10)
        self.sub_detections = self.create_subscription(String, '/carla/perception/yolo_detections', self.detections_callback, 10)

        # Publications
        self._pub = self.create_publisher(String, '/carla/perception/speed_limit', 10)
        self._pub_dbg = self.create_publisher(RosImage, '/carla/perception/debug_speed_image', 10)

        self.get_logger().info("Nœud Limitation de Vitesse initialisé.")

    def image_callback(self, msg):
        self.latest_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')

    def detections_callback(self, msg):
        if self.latest_image is None or self.classifier is None:
            return

        try:
            detections = json.loads(msg.data)
            best_crop = None
            best_area = 0

            # class_id == 2 correspond au speed_limit_sign
            for det in detections:
                if det['class_id'] == 2: 
                    x1, y1, x2, y2 = det['bbox']
                    area = (x2 - x1) * (y2 - y1)
                    if area > best_area:
                        best_area = area
                        best_crop = self.latest_image[y1:y2, x1:x2]

            if best_crop is not None and best_crop.size > 0:
                self.process_speed_sign(best_crop)

        except Exception as e:
            self.get_logger().error(f'Erreur traitement JSON : {e}')

    def process_speed_sign(self, img_sign):
        raw_speed = 'unknown'
        
        try:
            crop_rgb = cv2.cvtColor(img_sign, cv2.COLOR_BGR2RGB)
            input_tensor = self.transform(crop_rgb).unsqueeze(0).to(self.device)

            with torch.no_grad():
                outputs = self.classifier(input_tensor)
                _, predicted_idx = torch.max(outputs, 1)
                raw_speed = self.speed_mapping[predicted_idx.item()]
        except Exception as e:
            self.get_logger().error(f"Erreur d'inférence CNN : {e}")

        # --- MACHINE D'ÉTAT ROBUSTE ---
        now = self.get_clock().now().nanoseconds / 1e9
        
        # Logique anti-chute aberrante
        high_speeds = ['40', '50', '60', '70', '80']
        low_speeds = ['5', '15']
        is_suspicious_drop = self._state in high_speeds and raw_speed in low_speeds
        
        # Seuil dynamique : 15 frames (très long) si suspect, sinon 5 frames (standard)
        required_frames = 15 if is_suspicious_drop else 5
        
        if now >= self._state_hold_until:
            if raw_speed == self._candidate_state:
                self._candidate_count += 1
                
                # Validation finale
                if self._candidate_count >= required_frames:
                    self._state = raw_speed
                    self._state_hold_until = now + self._STATE_MIN_HOLD
                    self._candidate_count = 0
            else:
                self._candidate_state = raw_speed
                self._candidate_count = 1

        # Publication au planificateur
        out = String()
        out.data = self._state
        self._pub.publish(out)

        # Mise à jour du debug visuel
        self._publish_debug(img_sign, raw_speed, self._candidate_count, required_frames)

    def _publish_debug(self, img_sign, raw_speed, current_count, required_frames):
        TARGET_H = 200
        SEP_W = 4
        SEP = np.full((TARGET_H, SEP_W, 3), 80, dtype=np.uint8)

        def resize_h(img):
            if img is None or img.size == 0:
                return np.zeros((TARGET_H, TARGET_H, 3), dtype=np.uint8)
            r = TARGET_H / img.shape[0]
            return cv2.resize(img, (max(1, int(img.shape[1] * r)), TARGET_H))

        img_sign_resized = resize_h(img_sign)
        
        text_panel = np.zeros((TARGET_H, 250, 3), dtype=np.uint8)
        cv2.putText(text_panel, "Limite:", (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (255, 255, 255), 2)
        
        color = (0, 255, 0) if raw_speed != "unknown" else (0, 0, 255)
        cv2.putText(text_panel, f"{raw_speed} km/h", (10, 75), cv2.FONT_HERSHEY_SIMPLEX, 1.2, color, 3)
        cv2.putText(text_panel, f"ETAT: {self._state}", (10, 120), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (255, 255, 255), 2)
        
        # Affichage de la jauge de confirmation pour le debug
        progression = f"Valid: {current_count}/{required_frames}"
        color_prog = (0, 150, 255) if current_count > 0 else (100, 100, 100)
        cv2.putText(text_panel, progression, (10, 170), cv2.FONT_HERSHEY_SIMPLEX, 0.7, color_prog, 2)

        row = np.hstack([img_sign_resized, SEP, text_panel])
        self._pub_dbg.publish(self.bridge.cv2_to_imgmsg(row, encoding='bgr8'))

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