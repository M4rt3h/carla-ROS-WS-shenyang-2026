import os
import json
from ament_index_python.packages import get_package_share_directory
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
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

            # ROI pour limiter la zone de recherche (comme ton ancien code)
            y1, y2 = 0, h // 2
            x1, x2 = 3 * w // 8, 5 * w // 8
            roi = cv_image[y1:y2, x1:x2]

            # Inférence SANS préciser la classe (il détecte les 3 classes)
            results = self.model.predict(roi, verbose=False)

            detections = []
            for det in results[0].boxes:
                # Coordonnées relatives à la ROI
                rx1, ry1, rx2, ry2 = det.xyxy[0].tolist()
                
                # Conversion des coordonnées pour qu'elles correspondent à l'image complète
                abs_x1, abs_y1 = int(rx1 + x1), int(ry1 + y1)
                abs_x2, abs_y2 = int(rx2 + x1), int(ry2 + y1)

                detections.append({
                    "class_id": int(det.cls[0].item()),
                    "confidence": float(det.conf[0].item()),
                    "bbox": [abs_x1, abs_y1, abs_x2, abs_y2] # Format facile à recadrer
                })

            # Publication des détections
            msg_det = String()
            msg_det.data = json.dumps(detections)
            self.pub_detections.publish(msg_det)

            # Publication du debug (l'image de la ROI avec les boîtes YOLO)
            debug_img = results[0].plot()
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