import time
import carla
import rclpy
from rclpy.node import Node
from std_msgs.msg import ColorRGBA
from visualization_msgs.msg import Marker, MarkerArray
from geometry_msgs.msg import Point

COLOR_RED = ColorRGBA(r=1.0, g=0.0, b=0.0, a=1.0)
COLOR_YELLOW = ColorRGBA(r=1.0, g=1.0, b=0.0, a=1.0)
COLOR_GREEN = ColorRGBA(r=0.0, g=1.0, b=0.0, a=1.0)
COLOR_NORMAL = ColorRGBA(r=0.0, g=0.0, b=0.0, a=1.0)

class CarlaMapVisualization(Node):
    def __init__(self):
        super().__init__('carla_map_visualization')
        self.declare_parameter('host', 'localhost')
        self.declare_parameter('port', 2000)
        self.declare_parameter('timeout', 30)
        self.declare_parameter('topic', '/carla/map_visualization')

        host = self.get_parameter('host').get_parameter_value().string_value
        port = self.get_parameter('port').get_parameter_value().integer_value
        timeout = self.get_parameter('timeout').get_parameter_value().integer_value
        topic = self.get_parameter('topic').get_parameter_value().string_value

        self.get_logger().info(f'Connecting to CARLA server at {host}:{port}...')
        client = carla.Client(host, port)
        client.set_timeout(timeout)
        self.world = client.get_world()
        time.sleep(1)
        self.map = self.world.get_map()

        self.publisher = self.create_publisher(MarkerArray, topic, 1)
        self.id_counter = 0

        self.static_markers = []         # 道路边界线和箭头
        self.lane_markers_map = {}       # (road_id, section_id, lane_id): static marker下标

        self.draw_map()                  # 静态道路与箭头

        self.timer = self.create_timer(0.5, self.publish_all)  # 实时刷新红绿灯

    def next_id(self):
        self.id_counter += 1
        return self.id_counter - 1

    def lateral_shift(self, transform, shift):
        t = carla.Transform(transform.location, carla.Rotation(transform.rotation.pitch, transform.rotation.yaw + 90, transform.rotation.roll))
        return t.location + shift * t.get_forward_vector()

    def draw_map(self):
        """画道路边界、中心线、方向箭头"""
        precision = 0.3  # 采样间隔，越小线越密
        topology = self.map.get_topology()
        all_wps = set()
        for seg in topology:
            w0 = seg[0]
            road_id, section_id, lane_id = w0.road_id, w0.section_id, w0.lane_id
            if (road_id, section_id, lane_id) in all_wps:
                continue
            all_wps.add((road_id, section_id, lane_id))
            waypoints = [w0]
            nxt = w0.next(precision)
            while nxt and len(nxt) > 0 and nxt[0].road_id == road_id and nxt[0].lane_id == lane_id:
                waypoints.append(nxt[0])
                nxt = nxt[0].next(precision)
            # 跳过非行车车道
            if w0.lane_type != carla.LaneType.Driving:
                continue

            # 绘制两侧车道线
            left_side = [self.lateral_shift(w.transform, -w.lane_width / 2.0) for w in waypoints]
            right_side = [self.lateral_shift(w.transform, w.lane_width / 2.0) for w in waypoints]

            # 判定每一侧是否是车道外侧还是内侧
            left_lane = w0.get_left_lane()
            right_lane = w0.get_right_lane()
            # 外侧判断：没有左/右车道 或者是shoulder/none
            left_is_outer = left_lane is None or left_lane.lane_type != carla.LaneType.Driving
            right_is_outer = right_lane is None or right_lane.lane_type != carla.LaneType.Driving

            white_color = ColorRGBA(r=1.0, g=1.0, b=1.0, a=0.95)  # 白线
            yellow_color = ColorRGBA(r=0.97, g=0.70, b=0.32, a=0.75) # 黄线

            # 左侧线
            if len(left_side) > 1:
                if left_is_outer:
                    # 外侧白实线
                    self.static_markers.append(self.create_line_strip_marker(
                        left_side, ns="lane_line_left", color=white_color, width=0.20, dashed=False))
                else:
                    # 内侧黄虚线
                    self.static_markers.append(self.create_line_strip_marker(
                        left_side, ns="lane_line_left_inner", color=yellow_color, width=0.13, dashed=True))

            # 右侧线
            if len(right_side) > 1:
                if right_is_outer:
                    # 外侧白实线
                    self.static_markers.append(self.create_line_strip_marker(
                        right_side, ns="lane_line_right", color=white_color, width=0.20, dashed=False))
                else:
                    # 内侧黄虚线
                    self.static_markers.append(self.create_line_strip_marker(
                        right_side, ns="lane_line_right_inner", color=yellow_color, width=0.13, dashed=True))

    def create_line_strip_marker(self, points, ns="lane_line", color=COLOR_NORMAL, width=0.2, dashed=False):
        marker = Marker()
        marker.id = self.next_id()
        marker.type = Marker.LINE_LIST if dashed else Marker.LINE_STRIP
        marker.header.frame_id = "map"
        marker.ns = ns
        marker.color = color
        marker.scale.x = width
        marker.pose.orientation.w = 1.0

        if not dashed:
            for p in points:
                pt = Point(x=p.x, y=-p.y, z=0.05)
                marker.points.append(pt)
        else:
            # 虚线用短段line_list拼接
            gap = 5    # 每n个点一个段
            for i in range(0, len(points) - gap, gap * 2):
                start = points[i]
                end = points[i + gap]
                marker.points.append(Point(x=start.x, y=-start.y, z=0.05))
                marker.points.append(Point(x=end.x, y=-end.y, z=0.05))
        return marker

    def create_arrow_marker(self, transform):
        """画方向箭头，类型为LINE_LIST"""
        marker = Marker()
        marker.id = self.next_id()
        marker.type = Marker.LINE_LIST
        marker.header.frame_id = "map"
        marker.ns = "arrow"
        marker.color = ColorRGBA(r=0.8, g=0.8, b=0.8, a=1.0)
        marker.scale.x = 0.2
        marker.pose.orientation.w = 1.0

        t = carla.Transform(transform.location, carla.Rotation(transform.rotation.pitch, transform.rotation.yaw + 180, transform.rotation.roll))
        forward = t.get_forward_vector()
        t2 = carla.Transform(transform.location, carla.Rotation(transform.rotation.pitch, transform.rotation.yaw + 90, transform.rotation.roll))
        right_dir = t2.get_forward_vector()
        end = transform.location
        start = end - 2.0 * forward
        right = start + 0.8 * forward + 0.4 * right_dir
        left = start + 0.8 * forward - 0.4 * right_dir
        for seg in [(start, end), (start, left), (start, right)]:
            for p in seg:
                pt = Point()
                pt.x = p.x
                pt.y = -p.y
                pt.z = 0.0
                marker.points.append(pt)
        return marker

    def create_traffic_light_lane_markers(self, width=0.25):
        """红绿灯动态车道线染色和球体Marker"""
        tl_lane_markers = []
        tl_ball_markers = []
        traffic_lights = self.world.get_actors().filter('traffic.traffic_light')
        for light in traffic_lights:
            state = light.state
            color = (
                COLOR_RED if state == carla.TrafficLightState.Red else
                COLOR_YELLOW if state == carla.TrafficLightState.Yellow else
                COLOR_GREEN if state == carla.TrafficLightState.Green else
                COLOR_NORMAL
            )
            # 球体marker
            marker = Marker()
            marker.id = self.next_id()
            marker.type = Marker.SPHERE
            marker.header.frame_id = "map"
            marker.ns = "traffic_light"
            marker.scale.x = 0.5
            marker.scale.y = 0.5
            marker.scale.z = 0.5
            marker.color = color
            marker.pose.position.x = light.get_transform().location.x
            marker.pose.position.y = -light.get_transform().location.y
            marker.pose.position.z = light.get_transform().location.z + 2.0
            marker.pose.orientation.w = 1.0
            tl_ball_markers.append(marker)
            # lane受控段
            try:
                affected_wps = light.get_affected_lane_waypoints()
            except Exception as e:
                self.get_logger().warn(f"traffic_light.get_affected_lane_waypoints() failed: {e}")
                continue
            for w in affected_wps:
                key = (w.road_id, w.section_id, w.lane_id)
                idx = self.lane_markers_map.get(key, None)
                if idx is not None:
                    orig_marker = self.static_markers[idx]
                    lane_marker = Marker()
                    lane_marker.id = self.next_id()
                    lane_marker.type = Marker.LINE_STRIP
                    lane_marker.header.frame_id = "map"
                    lane_marker.ns = "tl_lanes"
                    lane_marker.scale.x = width
                    lane_marker.color = color
                    lane_marker.pose.orientation.w = 1.0
                    lane_marker.points = orig_marker.points.copy()
                    tl_lane_markers.append(lane_marker)
        return tl_lane_markers, tl_ball_markers

    def publish_all(self):
        # tl_lane_markers, tl_ball_markers = self.create_traffic_light_lane_markers()
        # all_markers = self.static_markers + tl_lane_markers + tl_ball_markers
        all_markers = self.static_markers
        now = self.get_clock().now().to_msg()
        for marker in all_markers:
            marker.header.stamp = now
        self.publisher.publish(MarkerArray(markers=all_markers))
        self.get_logger().info(f"Published {len(all_markers)} markers.", throttle_duration_sec=5.0)

def main(args=None):
    rclpy.init(args=args)
    node = CarlaMapVisualization()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()
