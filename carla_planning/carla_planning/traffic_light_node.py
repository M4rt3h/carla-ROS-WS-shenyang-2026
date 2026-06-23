import json
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
import numpy as np

class TrafficLightProcessorNode(Node):
    def __init__(self):
        super().__init__('traffic_light_processor_node')
        self.bridge = CvBridge()
        self.latest_image = None

        # Variables d'état (Machine à états)
        self._state = 'unknown'
        self._state_hold_until = 0.0
        self._candidate_state = 'unknown'
        self._candidate_count = 0
        self._STATE_MIN_HOLD = {'red': 4.0, 'yellow': 2.0, 'green': 1.5, 'unknown': 0.5}

        # Seuils HSV
        self.boundaries = [
            ([170, 120, 120], [179, 255, 255], "Rouge1"),
            ([0,   120, 120], [10,  255, 255], "Rouge2"),
            ([10,  120, 120], [25,  255, 255], "Orange"),
            ([45,  100, 100], [90,  255, 255], "Vert"),
        ]

        # Souscriptions
        self.sub_image = self.create_subscription(Image, '/carla/hero/rgb_front/image', self.image_callback, 10)
        self.sub_detections = self.create_subscription(String, '/carla/perception/yolo_detections', self.detections_callback, 10)

        # Publications (celles attendues par ton planner)
        self.pub_state = self.create_publisher(String, '/carla/perception/traffic_state', 10)
        self.pub_debug = self.create_publisher(Image, '/carla/perception/tl_debug_image', 10)

        self.get_logger().info("Nœud Spécialiste Feux initialisé.")

    def image_callback(self, msg):
        # On garde toujours la dernière image en mémoire
        self.latest_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')

    def detections_callback(self, msg):
        if self.latest_image is None:
            return

        try:
            detections = json.loads(msg.data)
            img_feu = None
            best_area = 0

            # Chercher le plus grand feu (class_id == 0 selon ton data.yaml)
            for det in detections:
                if det['class_id'] == 0: 
                    x1, y1, x2, y2 = det['bbox']
                    area = (x2 - x1) * (y2 - y1)
                    if area > best_area:
                        best_area = area
                        # Crop direct depuis l'image complète
                        img_feu = self.latest_image[y1:y2, x1:x2]

            self.process_traffic_light(img_feu)

        except Exception as e:
            self.get_logger().error(f'Erreur traitement JSON : {e}')

    def process_traffic_light(self, img_feu):
        hsv = None
        raw = 'unknown'

        if img_feu is not None and img_feu.size > 0:
            hsv = cv2.cvtColor(img_feu, cv2.COLOR_BGR2HSV)
            scores = {}
            for (lower, upper, label) in self.boundaries:
                mask = cv2.inRange(hsv, np.array(lower, dtype="uint8"), np.array(upper, dtype="uint8"))
                scores[label] = cv2.countNonZero(mask)
            
            best_label = max(scores, key=scores.get)
            if scores[best_label] > 10:
                if 'Rouge' in best_label:    raw = 'red'
                elif best_label == 'Orange': raw = 'yellow'
                elif best_label == 'Vert':   raw = 'green'

        now = self.get_clock().now().nanoseconds / 1e9
        if now >= self._state_hold_until:
            if raw == self._candidate_state:
                self._candidate_count += 1
                if self._candidate_count >= 3:
                    self._state = raw
                    self._state_hold_until = now + self._STATE_MIN_HOLD.get(raw, 1.0)
                    self._candidate_count = 0
            else:
                self._candidate_state = raw
                self._candidate_count = 1

        out = String()
        out.data = self._state
        self.pub_state.publish(out)

        self._publish_debug(img_feu, hsv)

    def _publish_debug(self, img_feu, hsv):
        # Version allégée de ton interface de debug
        TARGET_H = 200
        SEP = np.full((TARGET_H, 4, 3), 80, dtype=np.uint8)

        def resize_h(img):
            if img is None or img.size == 0:
                return np.zeros((TARGET_H, TARGET_H, 3), dtype=np.uint8)
            r = TARGET_H / img.shape[0]
            return cv2.resize(img, (max(1, int(img.shape[1] * r)), TARGET_H))

        img_feu_resized = resize_h(img_feu)

        if hsv is not None:
            masks = []
            for (lower, upper, label) in self.boundaries:
                mask = cv2.inRange(hsv, np.array(lower, dtype="uint8"), np.array(upper, dtype="uint8"))
                m_bgr = cv2.cvtColor(mask, cv2.COLOR_GRAY2BGR)
                cv2.putText(m_bgr, label, (4, 30), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 255), 1)
                masks.append(resize_h(m_bgr))
                masks.append(SEP)
            row = np.hstack([img_feu_resized, SEP] + masks[:-1])
        else:
            row = np.hstack([img_feu_resized, SEP, np.zeros((TARGET_H, TARGET_H, 3), dtype=np.uint8)])

        self.pub_debug.publish(self.bridge.cv2_to_imgmsg(row, encoding='bgr8'))

def main(args=None):
    rclpy.init(args=args)
    node = TrafficLightProcessorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()