#!/usr/bin/env python3
"""
traffic_sign_node.py — Détection basique feux / stop par traitement d'image HSV.
Publie sur /carla/perception/traffic_state : "red"|"yellow"|"green"|"stop"|"unknown"

Scalable réel : remplacer le subscriber caméra par n'importe quelle source Image ROS2.
"""
import rclpy
import math
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
import numpy as np


# ─── CONSTANTES HSV ────────────────────────────────────────────────────────────
# Rouge : deux plages (hue wraparound)
RED_LOW_1  = np.array([0,   120, 70])
RED_HIGH_1 = np.array([10,  255, 255])
RED_LOW_2  = np.array([160, 120, 70])
RED_HIGH_2 = np.array([180, 255, 255])

YELLOW_LOW  = np.array([18, 120, 100])
YELLOW_HIGH = np.array([35, 255, 255])

GREEN_LOW  = np.array([40,  80, 70])
GREEN_HIGH = np.array([90, 255, 255])

# Taille minimale d'un blob pour être considéré (px²)
MIN_BLOB_AREA = 30    # stop sign (inchangé)
MIN_LIGHT_AREA = 80   # feux : ignorés si trop petits (trop loin)

# Fraction de la hauteur image dédiée à la recherche de feux (moitié haute)
LIGHT_ROI_FRACTION = 0.55


class TrafficSignNode(Node):
    def __init__(self):
        super().__init__('traffic_sign_node')
        self.declare_parameter('image_topic', '/carla/hero/rgb_front/image')
        self.declare_parameter('debug_image', False)

        topic = self.get_parameter('image_topic').value
        self._debug = self.get_parameter('debug_image').value

        self._bridge = CvBridge()
        self._state = 'unknown'

        self.create_subscription(Image, topic, self._image_callback, 10)
        self._pub = self.create_publisher(String, '/carla/perception/traffic_state', 10)

        self._state = 'unknown'
        self._candidate_state = 'unknown'
        self._candidate_count = 0
        self._state_hold_until = 0.0       # timestamp jusqu'auquel l'état est verrouillé
        CONFIRM_FRAMES = 3                 # frames consécutives avant adoption
        STATE_MIN_HOLD = {                 # durée min en secondes par état
            'red':     4.0,
            'yellow':  2.0,
            'stop':    3.0,
            'green':   1.5,
            'unknown': 0.5,
        }
        self._CONFIRM_FRAMES = CONFIRM_FRAMES
        self._STATE_MIN_HOLD = STATE_MIN_HOLD

        if self._debug:
            self._pub_dbg = self.create_publisher(Image, '/carla/perception/debug_image', 10)

        self.get_logger().info(f'TrafficSignNode prêt — topic: {topic}')

    # ───────────────────────────────────────────────────────────────────────────
    def _image_callback(self, msg: Image):
        frame = self._bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        hsv   = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
        h, w  = frame.shape[:2]

        # ROI haute : recherche des feux
        roi_h = int(h * LIGHT_ROI_FRACTION)
        hsv_roi = hsv[:roi_h, :]

        red_mask    = self._red_mask(hsv_roi)
        yellow_mask = cv2.inRange(hsv_roi, YELLOW_LOW, YELLOW_HIGH)
        green_mask  = cv2.inRange(hsv_roi, GREEN_LOW,  GREEN_HIGH)

        r_area = self._best_blob(red_mask)
        y_area = self._best_blob(yellow_mask)
        g_area = self._best_blob(green_mask)

        # Feu détecté = le plus grand blob au-dessus du seuil
        light_state = 'unknown'
        best = max(r_area, y_area, g_area)
        if best >= MIN_BLOB_AREA:
            if best == r_area:   light_state = 'red'
            elif best == y_area: light_state = 'yellow'
            else:                light_state = 'green'
            
        stop_detected = self._detect_stop_sign(hsv)
        raw = 'stop' if (stop_detected and light_state not in ('red', 'yellow')) else light_state

        now = self.get_clock().now().nanoseconds / 1e9

        # État verrouillé → on ne change pas encore
        if now < self._state_hold_until:
            pass  # publie l'état courant sans modification

        # Même candidat que la frame précédente → incrémenter
        elif raw == self._candidate_state:
            self._candidate_count += 1
            if self._candidate_count >= self._CONFIRM_FRAMES:
                # Adoption : verrouiller le nouvel état
                self._state = raw
                hold = self._STATE_MIN_HOLD.get(raw, 1.0)
                self._state_hold_until = now + hold
                self._candidate_count = 0

        # Nouveau candidat → reset compteur
        else:
            self._candidate_state = raw
            self._candidate_count = 1

        out = String()
        out.data = self._state
        self._pub.publish(out)

        if self._debug:
            self._publish_debug(frame, hsv_roi, red_mask, yellow_mask, green_mask, roi_h)

    # ───────────────────────────────────────────────────────────────────────────
    def _red_mask(self, hsv_img):
        m1 = cv2.inRange(hsv_img, RED_LOW_1, RED_HIGH_1)
        m2 = cv2.inRange(hsv_img, RED_LOW_2, RED_HIGH_2)
        return cv2.bitwise_or(m1, m2)

    def _best_blob(self, mask):
        """
        Retourne l'aire du meilleur blob circulaire.
        Filtre : circularité > seuil + taille bornée + position centrale.
        """
        h, w = mask.shape[:2]
        # Bande centrale horizontale : 20%–80% de la largeur
        strip = mask.copy()
        strip[:, :int(w * 0.20)] = 0
        strip[:, int(w * 0.80):] = 0

        contours, _ = cv2.findContours(strip, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        best = 0
        for c in contours:
            area = cv2.contourArea(c)
            if area < MIN_LIGHT_AREA or area > 2000:
                continue
            peri = cv2.arcLength(c, True)
            if peri == 0:
                continue
            circularity = (4 * math.pi * area) / (peri ** 2)
            if circularity < 0.75:                    # cercle=1.0, rectangle~0.78, blob=<0.5
                continue
            best = max(best, area)
        return best

    def _detect_stop_sign(self, hsv_full):
        """
        Détecte un panneau STOP : blob rouge + forme ~8 côtés (octogone).
        Robuste aux variations d'éclairage CARLA.
        """
        red_mask = self._red_mask(hsv_full)
        # Morphologie pour fermer les petits trous
        kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (5, 5))
        red_mask = cv2.morphologyEx(red_mask, cv2.MORPH_CLOSE, kernel)

        contours, _ = cv2.findContours(red_mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        for c in contours:
            area = cv2.contourArea(c)
            if area < 200:   # trop petit pour un panneau
                continue
            peri = cv2.arcLength(c, True)
            approx = cv2.approxPolyDP(c, 0.04 * peri, True)
            # Octogone : 7–9 sommets (tolérance)
            if 7 <= len(approx) <= 9:
                return True
        return False

    # ───────────────────────────────────────────────────────────────────────────
    def _publish_debug(self, frame, hsv_roi, r_mask, y_mask, g_mask, roi_h):
        """Superpose les masques colorés sur l'image pour visualisation RViz."""
        dbg = frame.copy()
        # Ligne de la ROI
        cv2.line(dbg, (0, roi_h), (dbg.shape[1], roi_h), (255, 255, 0), 1)

        overlay = np.zeros_like(frame)
        h_roi = roi_h
        overlay[:h_roi][r_mask > 0] = (0,   0,   200)
        overlay[:h_roi][y_mask > 0] = (0,   200, 200)
        overlay[:h_roi][g_mask > 0] = (0,   200, 0)
        dbg = cv2.addWeighted(dbg, 0.7, overlay, 0.3, 0)

        # Texte état
        color_map = {'red': (0,0,255), 'yellow': (0,200,200),
                     'green': (0,200,0), 'stop': (0,0,255), 'unknown': (180,180,180)}
        cv2.putText(dbg, f'STATE: {self._state}', (10, 25),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.7, color_map.get(self._state, (255,255,255)), 2)

        self._pub_dbg.publish(self._bridge.cv2_to_imgmsg(dbg, encoding='bgr8'))


def main(args=None):
    rclpy.init(args=args)
    node = TrafficSignNode()
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
