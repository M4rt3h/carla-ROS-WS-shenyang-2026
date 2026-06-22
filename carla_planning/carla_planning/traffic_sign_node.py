import os
from ament_index_python.packages import get_package_share_directory
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
from ultralytics import YOLO
from std_msgs.msg import String


class YoloInferenceNode(Node):
    def __init__(self):
        super().__init__('yolo_traffic_sign_node')

        self.topic_name = '/carla/hero/rgb_front/image'
        self.timer_period = 0.5  # 2 Hz

        self._pub     = self.create_publisher(String, '/carla/perception/traffic_state', 10)
        self._pub_dbg = self.create_publisher(Image,  '/carla/perception/debug_image',   10)
        self._state = 'unknown'
        self._state_hold_until = 0.0
        self._candidate_state = 'unknown'
        self._candidate_count = 0
        self._STATE_MIN_HOLD = {'red': 4.0, 'yellow': 2.0, 'green': 1.5, 'unknown': 0.5}

        self.get_logger().info('Chargement du modèle YOLOv8n...')
        package_share_directory = get_package_share_directory('carla_planning')
        model_path = os.path.join(package_share_directory, 'YOLO', 'yolov8n_finetune.pt')
        self.model = YOLO(model_path)
        #self.model = YOLO('YOLO/yolov8n_finetune.pt')

        self.bridge = CvBridge()
        self.latest_msg = None

        self.boundaries = [
            ([170, 120, 120], [179, 255, 255], "Rouge1"),
            ([0,   120, 120], [10,  255, 255], "Rouge2"),
            ([10,  120, 120], [25,  255, 255], "Orange"),
            ([45,  100, 100], [90,  255, 255], "Vert"),
        ]
        self.kernel = np.ones((5, 5), np.uint8)

        self.subscription = self.create_subscription(
            Image, self.topic_name, self.image_callback, 10
        )
        self.timer = self.create_timer(self.timer_period, self.process_image_callback)
        self.get_logger().info("Nœud initialisé. En attente d'images...")

    def image_callback(self, msg):
        self.latest_msg = msg

    def _publish_debug(self, roi_annotated, img_feu, hsv):
        TARGET_H = 400
        SEP = np.full((TARGET_H, 4, 3), 80, dtype=np.uint8)

        SCALE = 8
        def resize_h(img, use_nn=False):
            if img is None or img.size == 0:
                return np.zeros((TARGET_H, TARGET_H, 3), dtype=np.uint8)
            interp = cv2.INTER_NEAREST if use_nn else cv2.INTER_LINEAR
            r = TARGET_H / img.shape[0]
            return cv2.resize(img, (max(1, int(img.shape[1] * r)), TARGET_H), interpolation=interp)

        def upscale_small(img):
            if img is None or img.size == 0:
                return np.zeros((TARGET_H, TARGET_H, 3), dtype=np.uint8)
            up = cv2.resize(img, (img.shape[1]*SCALE, img.shape[0]*SCALE), interpolation=cv2.INTER_NEAREST)
            return up

        # Ligne 1 : ROI annotée | feu BGR
        row1_panels = [resize_h(roi_annotated), SEP, resize_h(img_feu)]
        row1 = np.hstack(row1_panels)

        # Ligne 2 : masques HSV côte à côte
        if hsv is not None:
            masks = []
            for (lower, upper, label) in self.boundaries:
                mask = cv2.inRange(hsv, np.array(lower, dtype="uint8"), np.array(upper, dtype="uint8"))
                m_bgr = cv2.cvtColor(mask, cv2.COLOR_GRAY2BGR)
                cv2.putText(m_bgr, label, (4, 30), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 255, 255), 2)
                masks.append(resize_h(m_bgr))
                masks.append(SEP)
            row2 = np.hstack(masks[:-1])  # retire le dernier SEP
        else:
            row2 = np.zeros((TARGET_H, row1.shape[1], 3), dtype=np.uint8)

        # Uniformise la largeur
        max_w = max(row1.shape[1], row2.shape[1])
        def pad_w(img):
            dw = max_w - img.shape[1]
            return np.hstack([img, np.zeros((TARGET_H, dw, 3), dtype=np.uint8)]) if dw > 0 else img

        composite = np.vstack([pad_w(row1), np.full((4, max_w, 3), 80, dtype=np.uint8), pad_w(row2)])
        self._pub_dbg.publish(self.bridge.cv2_to_imgmsg(composite, encoding='bgr8'))

    def process_image_callback(self):
        if self.latest_msg is None:
            return

        try:
            cv_image = self.bridge.imgmsg_to_cv2(self.latest_msg, 'bgr8')
            h, w, _ = cv_image.shape

            y1, y2 = 0, h // 2
            x1, x2 = 3 * w // 8, 5 * w // 8
            roi = cv_image[y1:y2, x1:x2]
            roi_h, roi_w = roi.shape[:2]

            results = self.model.predict(roi, verbose=False, classes=[0]) #Classe 0 pour le modele finetune 9 sinon

            img_feu, best_area = None, 0
            for result in results:
                for det in result.boxes:
                    cx, cy, bw, bh = det.xywhn[0]
                    px_x1 = int((cx - bw / 2) * roi_w)
                    px_y1 = int((cy - bh / 2) * roi_h)
                    px_x2 = int((cx + bw / 2) * roi_w)
                    px_y2 = int((cy + bh / 2) * roi_h)
                    area = (px_x2 - px_x1) * (px_y2 - px_y1)
                    if area > best_area:
                        best_area = area
                        img_feu = roi[px_y1:px_y2, px_x1:px_x2]

            hsv = None
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
                    else:                        raw = 'unknown'
                else:
                    raw = 'unknown'
            else:
                raw = 'unknown'

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
            self._pub.publish(out)

            self._publish_debug(results[0].plot(), img_feu, hsv)

            self.latest_msg = None

        except Exception as e:
            self.get_logger().error(f'Erreur traitement : {e}')


def main(args=None):
    rclpy.init(args=args)
    node = YoloInferenceNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
