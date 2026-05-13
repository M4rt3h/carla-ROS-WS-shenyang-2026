# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/HostVehicleState2806.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HostVehicleState2806(type):
    """Metaclass of message 'HostVehicleState2806'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ibeo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ibeo_msgs.msg.HostVehicleState2806')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__host_vehicle_state2806
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__host_vehicle_state2806
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__host_vehicle_state2806
            cls._TYPE_SUPPORT = module.type_support_msg__msg__host_vehicle_state2806
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__host_vehicle_state2806

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from ibeo_msgs.msg import IbeoDataHeader
            if IbeoDataHeader.__class__._TYPE_SUPPORT is None:
                IbeoDataHeader.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HostVehicleState2806(metaclass=Metaclass_HostVehicleState2806):
    """Message class 'HostVehicleState2806'."""

    __slots__ = [
        '_header',
        '_ibeo_header',
        '_timestamp',
        '_distance_x',
        '_distance_y',
        '_course_angle',
        '_longitudinal_velocity',
        '_yaw_rate',
        '_steering_wheel_angle',
        '_cross_acceleration',
        '_front_wheel_angle',
        '_vehicle_width',
        '_vehicle_front_to_front_axle',
        '_rear_axle_to_front_axle',
        '_rear_axle_to_vehicle_rear',
        '_steer_ratio_poly_0',
        '_steer_ratio_poly_1',
        '_steer_ratio_poly_2',
        '_steer_ratio_poly_3',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ibeo_header': 'ibeo_msgs/IbeoDataHeader',
        'timestamp': 'builtin_interfaces/Time',
        'distance_x': 'int32',
        'distance_y': 'int32',
        'course_angle': 'float',
        'longitudinal_velocity': 'float',
        'yaw_rate': 'float',
        'steering_wheel_angle': 'float',
        'cross_acceleration': 'float',
        'front_wheel_angle': 'float',
        'vehicle_width': 'float',
        'vehicle_front_to_front_axle': 'float',
        'rear_axle_to_front_axle': 'float',
        'rear_axle_to_vehicle_rear': 'float',
        'steer_ratio_poly_0': 'float',
        'steer_ratio_poly_1': 'float',
        'steer_ratio_poly_2': 'float',
        'steer_ratio_poly_3': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'IbeoDataHeader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ibeo_msgs.msg import IbeoDataHeader
        self.ibeo_header = kwargs.get('ibeo_header', IbeoDataHeader())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.distance_x = kwargs.get('distance_x', int())
        self.distance_y = kwargs.get('distance_y', int())
        self.course_angle = kwargs.get('course_angle', float())
        self.longitudinal_velocity = kwargs.get('longitudinal_velocity', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.steering_wheel_angle = kwargs.get('steering_wheel_angle', float())
        self.cross_acceleration = kwargs.get('cross_acceleration', float())
        self.front_wheel_angle = kwargs.get('front_wheel_angle', float())
        self.vehicle_width = kwargs.get('vehicle_width', float())
        self.vehicle_front_to_front_axle = kwargs.get('vehicle_front_to_front_axle', float())
        self.rear_axle_to_front_axle = kwargs.get('rear_axle_to_front_axle', float())
        self.rear_axle_to_vehicle_rear = kwargs.get('rear_axle_to_vehicle_rear', float())
        self.steer_ratio_poly_0 = kwargs.get('steer_ratio_poly_0', float())
        self.steer_ratio_poly_1 = kwargs.get('steer_ratio_poly_1', float())
        self.steer_ratio_poly_2 = kwargs.get('steer_ratio_poly_2', float())
        self.steer_ratio_poly_3 = kwargs.get('steer_ratio_poly_3', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.ibeo_header != other.ibeo_header:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.distance_x != other.distance_x:
            return False
        if self.distance_y != other.distance_y:
            return False
        if self.course_angle != other.course_angle:
            return False
        if self.longitudinal_velocity != other.longitudinal_velocity:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.steering_wheel_angle != other.steering_wheel_angle:
            return False
        if self.cross_acceleration != other.cross_acceleration:
            return False
        if self.front_wheel_angle != other.front_wheel_angle:
            return False
        if self.vehicle_width != other.vehicle_width:
            return False
        if self.vehicle_front_to_front_axle != other.vehicle_front_to_front_axle:
            return False
        if self.rear_axle_to_front_axle != other.rear_axle_to_front_axle:
            return False
        if self.rear_axle_to_vehicle_rear != other.rear_axle_to_vehicle_rear:
            return False
        if self.steer_ratio_poly_0 != other.steer_ratio_poly_0:
            return False
        if self.steer_ratio_poly_1 != other.steer_ratio_poly_1:
            return False
        if self.steer_ratio_poly_2 != other.steer_ratio_poly_2:
            return False
        if self.steer_ratio_poly_3 != other.steer_ratio_poly_3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def ibeo_header(self):
        """Message field 'ibeo_header'."""
        return self._ibeo_header

    @ibeo_header.setter
    def ibeo_header(self, value):
        if __debug__:
            from ibeo_msgs.msg import IbeoDataHeader
            assert \
                isinstance(value, IbeoDataHeader), \
                "The 'ibeo_header' field must be a sub message of type 'IbeoDataHeader'"
        self._ibeo_header = value

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @property
    def distance_x(self):
        """Message field 'distance_x'."""
        return self._distance_x

    @distance_x.setter
    def distance_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'distance_x' field must be an integer in [-2147483648, 2147483647]"
        self._distance_x = value

    @property
    def distance_y(self):
        """Message field 'distance_y'."""
        return self._distance_y

    @distance_y.setter
    def distance_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'distance_y' field must be an integer in [-2147483648, 2147483647]"
        self._distance_y = value

    @property
    def course_angle(self):
        """Message field 'course_angle'."""
        return self._course_angle

    @course_angle.setter
    def course_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'course_angle' field must be of type 'float'"
        self._course_angle = value

    @property
    def longitudinal_velocity(self):
        """Message field 'longitudinal_velocity'."""
        return self._longitudinal_velocity

    @longitudinal_velocity.setter
    def longitudinal_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_velocity' field must be of type 'float'"
        self._longitudinal_velocity = value

    @property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
        self._yaw_rate = value

    @property
    def steering_wheel_angle(self):
        """Message field 'steering_wheel_angle'."""
        return self._steering_wheel_angle

    @steering_wheel_angle.setter
    def steering_wheel_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_angle' field must be of type 'float'"
        self._steering_wheel_angle = value

    @property
    def cross_acceleration(self):
        """Message field 'cross_acceleration'."""
        return self._cross_acceleration

    @cross_acceleration.setter
    def cross_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cross_acceleration' field must be of type 'float'"
        self._cross_acceleration = value

    @property
    def front_wheel_angle(self):
        """Message field 'front_wheel_angle'."""
        return self._front_wheel_angle

    @front_wheel_angle.setter
    def front_wheel_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_wheel_angle' field must be of type 'float'"
        self._front_wheel_angle = value

    @property
    def vehicle_width(self):
        """Message field 'vehicle_width'."""
        return self._vehicle_width

    @vehicle_width.setter
    def vehicle_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_width' field must be of type 'float'"
        self._vehicle_width = value

    @property
    def vehicle_front_to_front_axle(self):
        """Message field 'vehicle_front_to_front_axle'."""
        return self._vehicle_front_to_front_axle

    @vehicle_front_to_front_axle.setter
    def vehicle_front_to_front_axle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_front_to_front_axle' field must be of type 'float'"
        self._vehicle_front_to_front_axle = value

    @property
    def rear_axle_to_front_axle(self):
        """Message field 'rear_axle_to_front_axle'."""
        return self._rear_axle_to_front_axle

    @rear_axle_to_front_axle.setter
    def rear_axle_to_front_axle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_axle_to_front_axle' field must be of type 'float'"
        self._rear_axle_to_front_axle = value

    @property
    def rear_axle_to_vehicle_rear(self):
        """Message field 'rear_axle_to_vehicle_rear'."""
        return self._rear_axle_to_vehicle_rear

    @rear_axle_to_vehicle_rear.setter
    def rear_axle_to_vehicle_rear(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_axle_to_vehicle_rear' field must be of type 'float'"
        self._rear_axle_to_vehicle_rear = value

    @property
    def steer_ratio_poly_0(self):
        """Message field 'steer_ratio_poly_0'."""
        return self._steer_ratio_poly_0

    @steer_ratio_poly_0.setter
    def steer_ratio_poly_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_ratio_poly_0' field must be of type 'float'"
        self._steer_ratio_poly_0 = value

    @property
    def steer_ratio_poly_1(self):
        """Message field 'steer_ratio_poly_1'."""
        return self._steer_ratio_poly_1

    @steer_ratio_poly_1.setter
    def steer_ratio_poly_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_ratio_poly_1' field must be of type 'float'"
        self._steer_ratio_poly_1 = value

    @property
    def steer_ratio_poly_2(self):
        """Message field 'steer_ratio_poly_2'."""
        return self._steer_ratio_poly_2

    @steer_ratio_poly_2.setter
    def steer_ratio_poly_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_ratio_poly_2' field must be of type 'float'"
        self._steer_ratio_poly_2 = value

    @property
    def steer_ratio_poly_3(self):
        """Message field 'steer_ratio_poly_3'."""
        return self._steer_ratio_poly_3

    @steer_ratio_poly_3.setter
    def steer_ratio_poly_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_ratio_poly_3' field must be of type 'float'"
        self._steer_ratio_poly_3 = value
