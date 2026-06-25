import os
import json
from ament_index_python.packages import get_package_share_directory
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
from ultralytics import YOLO

class YoloDetectorNode(Node):
    def __init__(self):
        super().__init__('yolo_detector_node')
        self.bridge = CvBridge()

        self.get_logger().info('Chargement du modèle YOLOv8n finetuné...')
        package_share_directory = get_package_share_directory('carla_planning')
        model_path = os.path.join(package_share_directory, 'YOLO', 'yolov8n_finetune.pt')
        self.model = YOLO(model_path)

        # On s'abonne à la caméra
        self.sub_image = self.create_subscription(Image, '/carla/hero/rgb_front/image', self.image_callback, 10)
        
        # On publie les détections (JSON) et une image de debug globale
        self.pub_detections = self.create_publisher(String, '/carla/perception/yolo_detections', 10)
        self.pub_debug = self.create_publisher(Image, '/carla/perception/yolo_debug_image', 10)

        self.get_logger().info("Nœud YOLO initialisé. En attente d'images...")

    def image_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
            h, w, _ = cv_image.shape

            # Définition de la ROI stricte (uniquement utilisée pour filtrer les feux a posteriori)
            roi_y1, roi_y2 = 0, h // 2
            roi_x1, roi_x2 = 3 * w // 8, 5 * w // 8

            # 1. Inférence sur TOUTE l'image (pour voir les panneaux sur les bords)
            results = self.model.predict(cv_image, verbose=False)

            detections = []
            for det in results[0].boxes:
                class_id = int(det.cls[0].item())
                confidence = float(det.conf[0].item())
                
                # Coordonnées absolues sur l'image complète
                x1, y1, x2, y2 = det.xyxy[0].tolist()
                x1, y1, x2, y2 = int(x1), int(y1), int(x2), int(y2)

                # 2. Filtrage spatial conditionnel
                # Si c'est un feu tricolore (classe 0), on vérifie sa position
                if class_id == 0:
                    # On calcule le point central de la détection du feu
                    cx = (x1 + x2) / 2
                    cy = (y1 + y2) / 2
                    
                    # Si le centre du feu n'est pas dans notre zone de tolérance, on l'ignore
                    if not (roi_x1 <= cx <= roi_x2 and roi_y1 <= cy <= roi_y2):
                        continue

                # Si on arrive ici, c'est soit un panneau, soit un feu valide
                detections.append({
                    "class_id": class_id,
                    "confidence": confidence,
                    "bbox": [x1, y1, x2, y2]
                })

            # Publication JSON
            msg_det = String()
            msg_det.data = json.dumps(detections)
            self.pub_detections.publish(msg_det)

            # 3. Image de debug
            debug_img = results[0].plot()
            
            # Dessin d'un cadre bleu clair pour visualiser la ROI des feux sur RViz
            cv2.rectangle(debug_img, (roi_x1, roi_y1), (roi_x2, roi_y2), (255, 150, 0), 2)
            cv2.putText(debug_img, "Zone Feux", (roi_x1, roi_y2 - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (255, 150, 0), 2)
            
            self.pub_debug.publish(self.bridge.cv2_to_imgmsg(debug_img, encoding='bgr8'))

        except Exception as e:
            self.get_logger().error(f'Erreur YOLO : {e}')

def main(args=None):
    rclpy.init(args=args)
    node = YoloDetectorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()