#!/usr/bin/env python3

import datetime
import math
from threading import Thread
import numpy as np
from transforms3d.euler import quat2euler

import pygame

import ros_compatibility as roscomp
from ros_compatibility.node import CompatibleNode
from ros_compatibility.qos import QoSProfile, DurabilityPolicy

from carla_msgs.msg import CarlaStatus
from carla_msgs.msg import CarlaEgoVehicleInfo
from carla_msgs.msg import CarlaEgoVehicleStatus
from carla_msgs.msg import CarlaLaneInvasionEvent
from carla_msgs.msg import CarlaCollisionEvent
from nav_msgs.msg import Odometry
from sensor_msgs.msg import Image
from sensor_msgs.msg import NavSatFix
from std_msgs.msg import Bool

class DisplayNode(CompatibleNode):
    """
    ROS Node: 只显示车辆图像和状态（无键盘控制）
    """
    def __init__(self, resolution):
        super().__init__("DisplayNode")
        self._surface = None
        self.role_name = self.get_param("role_name", "hero")
        self.hud = HUD(self.role_name, resolution['width'], resolution['height'], self)

        self.image_subscriber = self.new_subscription(
            Image, f"/carla/{self.role_name}/rgb_view/image",
            self.on_view_image, qos_profile=10)

        self.collision_subscriber = self.new_subscription(
            CarlaCollisionEvent, f"/carla/{self.role_name}/collision",
            self.on_collision, qos_profile=10)

        self.lane_invasion_subscriber = self.new_subscription(
            CarlaLaneInvasionEvent, f"/carla/{self.role_name}/lane_invasion",
            self.on_lane_invasion, qos_profile=10)

    def on_collision(self, data):
        intensity = math.sqrt(
            data.normal_impulse.x ** 2 + data.normal_impulse.y ** 2 + data.normal_impulse.z ** 2)
        self.hud.notification(
            f'Collision with {data.other_actor_id} (impulse {intensity:.2f})')

    def on_lane_invasion(self, data):
        text = []
        for marking in data.crossed_lane_markings:
            if marking == CarlaLaneInvasionEvent.LANE_MARKING_OTHER:
                text.append("Other")
            elif marking == CarlaLaneInvasionEvent.LANE_MARKING_BROKEN:
                text.append("Broken")
            elif marking == CarlaLaneInvasionEvent.LANE_MARKING_SOLID:
                text.append("Solid")
            else:
                text.append("Unknown ")
        self.hud.notification('Crossed line %s' % ' and '.join(text))

    def on_view_image(self, image):
        array = np.frombuffer(image.data, dtype=np.dtype("uint8"))
        array = np.reshape(array, (image.height, image.width, 4))
        array = array[:, :, :3]
        array = array[:, :, ::-1]
        surf = pygame.surfarray.make_surface(array.swapaxes(0, 1))
        self._surface = pygame.transform.scale(surf, (self.hud.dim[0], self.hud.dim[1]))

    def render(self, game_clock, display):
        self.hud.tick(game_clock)
        if self._surface is not None:
            display.blit(self._surface, (0, 0))
        else:
            display.fill((0, 0, 0))
        self.hud.render(display)

class HUD(object):
    def __init__(self, role_name, width, height, node):
        self.role_name = role_name
        self.dim = (width, height)
        self.node = node
        font = pygame.font.Font(pygame.font.get_default_font(), 20)
        fonts = [x for x in pygame.font.get_fonts() if 'mono' in x]
        default_font = 'ubuntumono'
        mono = default_font if default_font in fonts else fonts[0]
        mono = pygame.font.match_font(mono)
        self._font_mono = pygame.font.Font(mono, 14)
        self._notifications = FadingText(font, (width, 40), (0, height - 40))
        self._show_info = True
        self._info_text = []
        self.vehicle_status = CarlaEgoVehicleStatus()

        self.vehicle_status_subscriber = node.new_subscription(
            CarlaEgoVehicleStatus, f"/carla/{self.role_name}/vehicle_status",
            self.vehicle_status_updated, qos_profile=10)

        self.vehicle_info = CarlaEgoVehicleInfo()
        self.vehicle_info_subscriber = node.new_subscription(
            CarlaEgoVehicleInfo, f"/carla/{self.role_name}/vehicle_info",
            self.vehicle_info_updated,
            qos_profile=QoSProfile(depth=10, durability=DurabilityPolicy.TRANSIENT_LOCAL))

        self.x, self.y, self.z = 0, 0, 0
        self.yaw = 0
        self.latitude = 0
        self.longitude = 0

        self.gnss_subscriber = node.new_subscription(
            NavSatFix, f"/carla/{self.role_name}/gnss",
            self.gnss_updated, qos_profile=10)

        self.odometry_subscriber = node.new_subscription(
            Odometry, f"/carla/{self.role_name}/odometry",
            self.odometry_updated, qos_profile=10)

        self.carla_status = CarlaStatus()
        self.status_subscriber = node.new_subscription(
            CarlaStatus, "/carla/status",
            self.carla_status_updated, qos_profile=10)

    def tick(self, clock):
        self._notifications.tick(clock)

    def carla_status_updated(self, data):
        self.carla_status = data
        self.update_info_text()

    def vehicle_status_updated(self, vehicle_status):
        self.vehicle_status = vehicle_status
        self.update_info_text()

    def vehicle_info_updated(self, vehicle_info):
        self.vehicle_info = vehicle_info
        self.update_info_text()

    def gnss_updated(self, data):
        self.latitude = data.latitude
        self.longitude = data.longitude
        self.update_info_text()

    def odometry_updated(self, data):
        self.x = data.pose.pose.position.x
        self.y = data.pose.pose.position.y
        self.z = data.pose.pose.position.z
        _, _, yaw = quat2euler([
            data.pose.pose.orientation.w,
            data.pose.pose.orientation.x,
            data.pose.pose.orientation.y,
            data.pose.pose.orientation.z])
        self.yaw = math.degrees(yaw)
        self.update_info_text()

    def update_info_text(self):
        x, y, z = self.x, self.y, self.z
        yaw = self.yaw
        fps = 0
        time = str(datetime.timedelta(seconds=self.node.get_time()))[:10]
        if getattr(self.carla_status, 'fixed_delta_seconds', None):
            fps = 1 / self.carla_status.fixed_delta_seconds
        self._info_text = [
            'Frame: % 22s' % getattr(self.carla_status, 'frame', 0),
            'Simulation time: % 12s' % time,
            'FPS: % 24.1f' % fps, '',
            'Vehicle: % 20s' % (' '.join(getattr(self.vehicle_info.type, "title", lambda: "")().split('.')[1:]) if hasattr(self.vehicle_info, "type") else ''),
            'Speed:   % 15.0f km/h' % (3.6 * getattr(self.vehicle_status, 'velocity', 0.0)),
            u'Heading:% 16.0f°' % yaw,
            'Location:% 20s' % ('(% 5.1f, % 5.1f)' % (x, y)),
            'GNSS:% 24s' % ('(% 2.6f, % 3.6f)' % (self.latitude, self.longitude)),
            'Height:  % 18.0f m' % z, ''
        ]
        if hasattr(self.vehicle_status, "control"):
            self._info_text += [
                ('Throttle:', getattr(self.vehicle_status.control, 'throttle', 0.0), 0.0, 1.0),
                ('Steer:', getattr(self.vehicle_status.control, 'steer', 0.0), -1.0, 1.0),
                ('Brake:', getattr(self.vehicle_status.control, 'brake', 0.0), 0.0, 1.0),
                ('Reverse:', getattr(self.vehicle_status.control, 'reverse', False)),
                ('Hand brake:', getattr(self.vehicle_status.control, 'hand_brake', False)),
                ('Manual:', getattr(self.vehicle_status.control, 'manual_gear_shift', False)),
                'Gear:        %s' % {
                    -1: 'R', 0: 'N'
                }.get(getattr(self.vehicle_status.control, 'gear', 0), getattr(self.vehicle_status.control, 'gear', 0)), ''
            ]
        self._info_text += ['', '', '']

    def notification(self, text, seconds=2.0):
        self._notifications.set_text(text, seconds=seconds)

    def error(self, text):
        self._notifications.set_text('Error: %s' % text, (255, 0, 0))

    def render(self, display):
        if self._show_info:
            info_surface = pygame.Surface((240, self.dim[1]))
            info_surface.set_alpha(120)
            display.blit(info_surface, (0, 0))
            v_offset = 4
            bar_h_offset = 100
            bar_width = 106
            for item in self._info_text:
                if v_offset + 18 > self.dim[1]:
                    break
                if isinstance(item, tuple):
                    if isinstance(item[1], bool):
                        rect = pygame.Rect((bar_h_offset + 50, v_offset + 8), (6, 6))
                        pygame.draw.rect(display, (255, 255, 255), rect, 0 if item[1] else 1)
                    else:
                        rect_border = pygame.Rect((bar_h_offset, v_offset + 8), (bar_width, 6))
                        pygame.draw.rect(display, (255, 255, 255), rect_border, 1)
                        f = (item[1] - item[2]) / (item[3] - item[2])
                        rect = pygame.Rect((bar_h_offset, v_offset + 8), (int(f * bar_width), 6))
                        pygame.draw.rect(display, (255, 255, 255), rect)
                    item = item[0]
                if item:
                    surface = self._font_mono.render(str(item), True, (255, 255, 255))
                    display.blit(surface, (8, v_offset))
                v_offset += 18
        self._notifications.render(display)

class FadingText(object):
    def __init__(self, font, dim, pos):
        self.font = font
        self.dim = dim
        self.pos = pos
        self.seconds_left = 0
        self.surface = pygame.Surface(self.dim)

    def set_text(self, text, color=(255, 255, 255), seconds=2.0):
        text_texture = self.font.render(text, True, color)
        self.surface = pygame.Surface(self.dim)
        self.seconds_left = seconds
        self.surface.fill((0, 0, 0, 0))
        self.surface.blit(text_texture, (10, 11))

    def tick(self, clock):
        delta_seconds = 1e-3 * clock.get_time()
        self.seconds_left = max(0.0, self.seconds_left - delta_seconds)
        self.surface.set_alpha(500.0 * self.seconds_left)

    def render(self, display):
        display.blit(self.surface, self.pos)

def main(args=None):
    roscomp.init("display_node", args=args)
    resolution = {"width": 1024, "height": 768}

    pygame.init()
    pygame.font.init()
    pygame.display.set_caption("CARLA Vehicle Status Display (No Control)")
    try:
        display = pygame.display.set_mode((resolution['width'], resolution['height']),
                                          pygame.HWSURFACE | pygame.DOUBLEBUF)
        node = DisplayNode(resolution)
        clock = pygame.time.Clock()

        executor = roscomp.executors.MultiThreadedExecutor()
        executor.add_node(node)
        spin_thread = Thread(target=node.spin)
        spin_thread.start()

        while roscomp.ok():
            clock.tick_busy_loop(30)
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    roscomp.shutdown()
            node.render(clock, display)
            pygame.display.flip()
    except KeyboardInterrupt:
        roscomp.loginfo("User requested shut down.")
    finally:
        roscomp.shutdown()
        spin_thread.join()
        pygame.quit()

if __name__ == '__main__':
    main()