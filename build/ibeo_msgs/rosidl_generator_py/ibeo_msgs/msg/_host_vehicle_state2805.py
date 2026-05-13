# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/HostVehicleState2805.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HostVehicleState2805(type):
    """Metaclass of message 'HostVehicleState2805'."""

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
                'ibeo_msgs.msg.HostVehicleState2805')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__host_vehicle_state2805
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__host_vehicle_state2805
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__host_vehicle_state2805
            cls._TYPE_SUPPORT = module.type_support_msg__msg__host_vehicle_state2805
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__host_vehicle_state2805

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


class HostVehicleState2805(metaclass=Metaclass_HostVehicleState2805):
    """Message class 'HostVehicleState2805'."""

    __slots__ = [
        '_header',
        '_ibeo_header',
        '_timestamp',
        '_scan_number',
        '_error_flags',
        '_longitudinal_velocity',
        '_steering_wheel_angle',
        '_front_wheel_angle',
        '_x_position',
        '_y_position',
        '_course_angle',
        '_time_difference',
        '_x_difference',
        '_y_difference',
        '_heading_difference',
        '_current_yaw_rate',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ibeo_header': 'ibeo_msgs/IbeoDataHeader',
        'timestamp': 'builtin_interfaces/Time',
        'scan_number': 'uint16',
        'error_flags': 'uint16',
        'longitudinal_velocity': 'double',
        'steering_wheel_angle': 'double',
        'front_wheel_angle': 'double',
        'x_position': 'int32',
        'y_position': 'int32',
        'course_angle': 'int16',
        'time_difference': 'uint16',
        'x_difference': 'int16',
        'y_difference': 'int16',
        'heading_difference': 'int16',
        'current_yaw_rate': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'IbeoDataHeader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
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
        self.scan_number = kwargs.get('scan_number', int())
        self.error_flags = kwargs.get('error_flags', int())
        self.longitudinal_velocity = kwargs.get('longitudinal_velocity', float())
        self.steering_wheel_angle = kwargs.get('steering_wheel_angle', float())
        self.front_wheel_angle = kwargs.get('front_wheel_angle', float())
        self.x_position = kwargs.get('x_position', int())
        self.y_position = kwargs.get('y_position', int())
        self.course_angle = kwargs.get('course_angle', int())
        self.time_difference = kwargs.get('time_difference', int())
        self.x_difference = kwargs.get('x_difference', int())
        self.y_difference = kwargs.get('y_difference', int())
        self.heading_difference = kwargs.get('heading_difference', int())
        self.current_yaw_rate = kwargs.get('current_yaw_rate', int())

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
        if self.scan_number != other.scan_number:
            return False
        if self.error_flags != other.error_flags:
            return False
        if self.longitudinal_velocity != other.longitudinal_velocity:
            return False
        if self.steering_wheel_angle != other.steering_wheel_angle:
            return False
        if self.front_wheel_angle != other.front_wheel_angle:
            return False
        if self.x_position != other.x_position:
            return False
        if self.y_position != other.y_position:
            return False
        if self.course_angle != other.course_angle:
            return False
        if self.time_difference != other.time_difference:
            return False
        if self.x_difference != other.x_difference:
            return False
        if self.y_difference != other.y_difference:
            return False
        if self.heading_difference != other.heading_difference:
            return False
        if self.current_yaw_rate != other.current_yaw_rate:
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
    def scan_number(self):
        """Message field 'scan_number'."""
        return self._scan_number

    @scan_number.setter
    def scan_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scan_number' field must be an unsigned integer in [0, 65535]"
        self._scan_number = value

    @property
    def error_flags(self):
        """Message field 'error_flags'."""
        return self._error_flags

    @error_flags.setter
    def error_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_flags' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'error_flags' field must be an unsigned integer in [0, 65535]"
        self._error_flags = value

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
    def x_position(self):
        """Message field 'x_position'."""
        return self._x_position

    @x_position.setter
    def x_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x_position' field must be an integer in [-2147483648, 2147483647]"
        self._x_position = value

    @property
    def y_position(self):
        """Message field 'y_position'."""
        return self._y_position

    @y_position.setter
    def y_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y_position' field must be an integer in [-2147483648, 2147483647]"
        self._y_position = value

    @property
    def course_angle(self):
        """Message field 'course_angle'."""
        return self._course_angle

    @course_angle.setter
    def course_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'course_angle' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'course_angle' field must be an integer in [-32768, 32767]"
        self._course_angle = value

    @property
    def time_difference(self):
        """Message field 'time_difference'."""
        return self._time_difference

    @time_difference.setter
    def time_difference(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_difference' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'time_difference' field must be an unsigned integer in [0, 65535]"
        self._time_difference = value

    @property
    def x_difference(self):
        """Message field 'x_difference'."""
        return self._x_difference

    @x_difference.setter
    def x_difference(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_difference' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'x_difference' field must be an integer in [-32768, 32767]"
        self._x_difference = value

    @property
    def y_difference(self):
        """Message field 'y_difference'."""
        return self._y_difference

    @y_difference.setter
    def y_difference(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_difference' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'y_difference' field must be an integer in [-32768, 32767]"
        self._y_difference = value

    @property
    def heading_difference(self):
        """Message field 'heading_difference'."""
        return self._heading_difference

    @heading_difference.setter
    def heading_difference(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heading_difference' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'heading_difference' field must be an integer in [-32768, 32767]"
        self._heading_difference = value

    @property
    def current_yaw_rate(self):
        """Message field 'current_yaw_rate'."""
        return self._current_yaw_rate

    @current_yaw_rate.setter
    def current_yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_yaw_rate' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'current_yaw_rate' field must be an integer in [-32768, 32767]"
        self._current_yaw_rate = value
