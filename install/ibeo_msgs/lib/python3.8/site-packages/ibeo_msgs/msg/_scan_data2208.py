# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/ScanData2208.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScanData2208(type):
    """Metaclass of message 'ScanData2208'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SCALA_B2': 11520,
        'CLOCKWISE': 0,
        'COUNTER_CLOCKWISE': 1,
        'FRONT_MIRROR': 0,
        'REAR_MIRROR': 1,
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
                'ibeo_msgs.msg.ScanData2208')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scan_data2208
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scan_data2208
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scan_data2208
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scan_data2208
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scan_data2208

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from ibeo_msgs.msg import IbeoDataHeader
            if IbeoDataHeader.__class__._TYPE_SUPPORT is None:
                IbeoDataHeader.__class__.__import_type_support__()

            from ibeo_msgs.msg import ScanPoint2208
            if ScanPoint2208.__class__._TYPE_SUPPORT is None:
                ScanPoint2208.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SCALA_B2': cls.__constants['SCALA_B2'],
            'CLOCKWISE': cls.__constants['CLOCKWISE'],
            'COUNTER_CLOCKWISE': cls.__constants['COUNTER_CLOCKWISE'],
            'FRONT_MIRROR': cls.__constants['FRONT_MIRROR'],
            'REAR_MIRROR': cls.__constants['REAR_MIRROR'],
        }

    @property
    def SCALA_B2(self):
        """Message constant 'SCALA_B2'."""
        return Metaclass_ScanData2208.__constants['SCALA_B2']

    @property
    def CLOCKWISE(self):
        """Message constant 'CLOCKWISE'."""
        return Metaclass_ScanData2208.__constants['CLOCKWISE']

    @property
    def COUNTER_CLOCKWISE(self):
        """Message constant 'COUNTER_CLOCKWISE'."""
        return Metaclass_ScanData2208.__constants['COUNTER_CLOCKWISE']

    @property
    def FRONT_MIRROR(self):
        """Message constant 'FRONT_MIRROR'."""
        return Metaclass_ScanData2208.__constants['FRONT_MIRROR']

    @property
    def REAR_MIRROR(self):
        """Message constant 'REAR_MIRROR'."""
        return Metaclass_ScanData2208.__constants['REAR_MIRROR']


class ScanData2208(metaclass=Metaclass_ScanData2208):
    """
    Message class 'ScanData2208'.

    Constants:
      SCALA_B2
      CLOCKWISE
      COUNTER_CLOCKWISE
      FRONT_MIRROR
      REAR_MIRROR
    """

    __slots__ = [
        '_header',
        '_ibeo_header',
        '_scan_number',
        '_scanner_type',
        '_motor_on',
        '_laser_on',
        '_frequency_locked',
        '_motor_rotating_direction',
        '_angle_ticks_per_rotation',
        '_scan_flags',
        '_mounting_yaw_angle_ticks',
        '_mounting_pitch_angle_ticks',
        '_mounting_roll_angle_ticks',
        '_mounting_position_x',
        '_mounting_position_y',
        '_mounting_position_z',
        '_device_id',
        '_scan_start_time',
        '_scan_end_time',
        '_start_angle_ticks',
        '_end_angle_ticks',
        '_mirror_side',
        '_mirror_tilt',
        '_scan_point_list',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ibeo_header': 'ibeo_msgs/IbeoDataHeader',
        'scan_number': 'uint16',
        'scanner_type': 'uint16',
        'motor_on': 'boolean',
        'laser_on': 'boolean',
        'frequency_locked': 'boolean',
        'motor_rotating_direction': 'uint8',
        'angle_ticks_per_rotation': 'uint16',
        'scan_flags': 'uint32',
        'mounting_yaw_angle_ticks': 'int16',
        'mounting_pitch_angle_ticks': 'int16',
        'mounting_roll_angle_ticks': 'int16',
        'mounting_position_x': 'int16',
        'mounting_position_y': 'int16',
        'mounting_position_z': 'int16',
        'device_id': 'uint8',
        'scan_start_time': 'builtin_interfaces/Time',
        'scan_end_time': 'builtin_interfaces/Time',
        'start_angle_ticks': 'int16',
        'end_angle_ticks': 'int16',
        'mirror_side': 'uint8',
        'mirror_tilt': 'int16',
        'scan_point_list': 'sequence<ibeo_msgs/ScanPoint2208>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'IbeoDataHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'ScanPoint2208')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ibeo_msgs.msg import IbeoDataHeader
        self.ibeo_header = kwargs.get('ibeo_header', IbeoDataHeader())
        self.scan_number = kwargs.get('scan_number', int())
        self.scanner_type = kwargs.get('scanner_type', int())
        self.motor_on = kwargs.get('motor_on', bool())
        self.laser_on = kwargs.get('laser_on', bool())
        self.frequency_locked = kwargs.get('frequency_locked', bool())
        self.motor_rotating_direction = kwargs.get('motor_rotating_direction', int())
        self.angle_ticks_per_rotation = kwargs.get('angle_ticks_per_rotation', int())
        self.scan_flags = kwargs.get('scan_flags', int())
        self.mounting_yaw_angle_ticks = kwargs.get('mounting_yaw_angle_ticks', int())
        self.mounting_pitch_angle_ticks = kwargs.get('mounting_pitch_angle_ticks', int())
        self.mounting_roll_angle_ticks = kwargs.get('mounting_roll_angle_ticks', int())
        self.mounting_position_x = kwargs.get('mounting_position_x', int())
        self.mounting_position_y = kwargs.get('mounting_position_y', int())
        self.mounting_position_z = kwargs.get('mounting_position_z', int())
        self.device_id = kwargs.get('device_id', int())
        from builtin_interfaces.msg import Time
        self.scan_start_time = kwargs.get('scan_start_time', Time())
        from builtin_interfaces.msg import Time
        self.scan_end_time = kwargs.get('scan_end_time', Time())
        self.start_angle_ticks = kwargs.get('start_angle_ticks', int())
        self.end_angle_ticks = kwargs.get('end_angle_ticks', int())
        self.mirror_side = kwargs.get('mirror_side', int())
        self.mirror_tilt = kwargs.get('mirror_tilt', int())
        self.scan_point_list = kwargs.get('scan_point_list', [])

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
        if self.scan_number != other.scan_number:
            return False
        if self.scanner_type != other.scanner_type:
            return False
        if self.motor_on != other.motor_on:
            return False
        if self.laser_on != other.laser_on:
            return False
        if self.frequency_locked != other.frequency_locked:
            return False
        if self.motor_rotating_direction != other.motor_rotating_direction:
            return False
        if self.angle_ticks_per_rotation != other.angle_ticks_per_rotation:
            return False
        if self.scan_flags != other.scan_flags:
            return False
        if self.mounting_yaw_angle_ticks != other.mounting_yaw_angle_ticks:
            return False
        if self.mounting_pitch_angle_ticks != other.mounting_pitch_angle_ticks:
            return False
        if self.mounting_roll_angle_ticks != other.mounting_roll_angle_ticks:
            return False
        if self.mounting_position_x != other.mounting_position_x:
            return False
        if self.mounting_position_y != other.mounting_position_y:
            return False
        if self.mounting_position_z != other.mounting_position_z:
            return False
        if self.device_id != other.device_id:
            return False
        if self.scan_start_time != other.scan_start_time:
            return False
        if self.scan_end_time != other.scan_end_time:
            return False
        if self.start_angle_ticks != other.start_angle_ticks:
            return False
        if self.end_angle_ticks != other.end_angle_ticks:
            return False
        if self.mirror_side != other.mirror_side:
            return False
        if self.mirror_tilt != other.mirror_tilt:
            return False
        if self.scan_point_list != other.scan_point_list:
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
    def scanner_type(self):
        """Message field 'scanner_type'."""
        return self._scanner_type

    @scanner_type.setter
    def scanner_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scanner_type' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scanner_type' field must be an unsigned integer in [0, 65535]"
        self._scanner_type = value

    @property
    def motor_on(self):
        """Message field 'motor_on'."""
        return self._motor_on

    @motor_on.setter
    def motor_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_on' field must be of type 'bool'"
        self._motor_on = value

    @property
    def laser_on(self):
        """Message field 'laser_on'."""
        return self._laser_on

    @laser_on.setter
    def laser_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'laser_on' field must be of type 'bool'"
        self._laser_on = value

    @property
    def frequency_locked(self):
        """Message field 'frequency_locked'."""
        return self._frequency_locked

    @frequency_locked.setter
    def frequency_locked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'frequency_locked' field must be of type 'bool'"
        self._frequency_locked = value

    @property
    def motor_rotating_direction(self):
        """Message field 'motor_rotating_direction'."""
        return self._motor_rotating_direction

    @motor_rotating_direction.setter
    def motor_rotating_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_rotating_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_rotating_direction' field must be an unsigned integer in [0, 255]"
        self._motor_rotating_direction = value

    @property
    def angle_ticks_per_rotation(self):
        """Message field 'angle_ticks_per_rotation'."""
        return self._angle_ticks_per_rotation

    @angle_ticks_per_rotation.setter
    def angle_ticks_per_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angle_ticks_per_rotation' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'angle_ticks_per_rotation' field must be an unsigned integer in [0, 65535]"
        self._angle_ticks_per_rotation = value

    @property
    def scan_flags(self):
        """Message field 'scan_flags'."""
        return self._scan_flags

    @scan_flags.setter
    def scan_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'scan_flags' field must be an unsigned integer in [0, 4294967295]"
        self._scan_flags = value

    @property
    def mounting_yaw_angle_ticks(self):
        """Message field 'mounting_yaw_angle_ticks'."""
        return self._mounting_yaw_angle_ticks

    @mounting_yaw_angle_ticks.setter
    def mounting_yaw_angle_ticks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mounting_yaw_angle_ticks' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'mounting_yaw_angle_ticks' field must be an integer in [-32768, 32767]"
        self._mounting_yaw_angle_ticks = value

    @property
    def mounting_pitch_angle_ticks(self):
        """Message field 'mounting_pitch_angle_ticks'."""
        return self._mounting_pitch_angle_ticks

    @mounting_pitch_angle_ticks.setter
    def mounting_pitch_angle_ticks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mounting_pitch_angle_ticks' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'mounting_pitch_angle_ticks' field must be an integer in [-32768, 32767]"
        self._mounting_pitch_angle_ticks = value

    @property
    def mounting_roll_angle_ticks(self):
        """Message field 'mounting_roll_angle_ticks'."""
        return self._mounting_roll_angle_ticks

    @mounting_roll_angle_ticks.setter
    def mounting_roll_angle_ticks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mounting_roll_angle_ticks' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'mounting_roll_angle_ticks' field must be an integer in [-32768, 32767]"
        self._mounting_roll_angle_ticks = value

    @property
    def mounting_position_x(self):
        """Message field 'mounting_position_x'."""
        return self._mounting_position_x

    @mounting_position_x.setter
    def mounting_position_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mounting_position_x' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'mounting_position_x' field must be an integer in [-32768, 32767]"
        self._mounting_position_x = value

    @property
    def mounting_position_y(self):
        """Message field 'mounting_position_y'."""
        return self._mounting_position_y

    @mounting_position_y.setter
    def mounting_position_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mounting_position_y' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'mounting_position_y' field must be an integer in [-32768, 32767]"
        self._mounting_position_y = value

    @property
    def mounting_position_z(self):
        """Message field 'mounting_position_z'."""
        return self._mounting_position_z

    @mounting_position_z.setter
    def mounting_position_z(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mounting_position_z' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'mounting_position_z' field must be an integer in [-32768, 32767]"
        self._mounting_position_z = value

    @property
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'device_id' field must be an unsigned integer in [0, 255]"
        self._device_id = value

    @property
    def scan_start_time(self):
        """Message field 'scan_start_time'."""
        return self._scan_start_time

    @scan_start_time.setter
    def scan_start_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'scan_start_time' field must be a sub message of type 'Time'"
        self._scan_start_time = value

    @property
    def scan_end_time(self):
        """Message field 'scan_end_time'."""
        return self._scan_end_time

    @scan_end_time.setter
    def scan_end_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'scan_end_time' field must be a sub message of type 'Time'"
        self._scan_end_time = value

    @property
    def start_angle_ticks(self):
        """Message field 'start_angle_ticks'."""
        return self._start_angle_ticks

    @start_angle_ticks.setter
    def start_angle_ticks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_angle_ticks' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'start_angle_ticks' field must be an integer in [-32768, 32767]"
        self._start_angle_ticks = value

    @property
    def end_angle_ticks(self):
        """Message field 'end_angle_ticks'."""
        return self._end_angle_ticks

    @end_angle_ticks.setter
    def end_angle_ticks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_angle_ticks' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'end_angle_ticks' field must be an integer in [-32768, 32767]"
        self._end_angle_ticks = value

    @property
    def mirror_side(self):
        """Message field 'mirror_side'."""
        return self._mirror_side

    @mirror_side.setter
    def mirror_side(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mirror_side' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mirror_side' field must be an unsigned integer in [0, 255]"
        self._mirror_side = value

    @property
    def mirror_tilt(self):
        """Message field 'mirror_tilt'."""
        return self._mirror_tilt

    @mirror_tilt.setter
    def mirror_tilt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mirror_tilt' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'mirror_tilt' field must be an integer in [-32768, 32767]"
        self._mirror_tilt = value

    @property
    def scan_point_list(self):
        """Message field 'scan_point_list'."""
        return self._scan_point_list

    @scan_point_list.setter
    def scan_point_list(self, value):
        if __debug__:
            from ibeo_msgs.msg import ScanPoint2208
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, ScanPoint2208) for v in value) and
                 True), \
                "The 'scan_point_list' field must be a set or sequence and each value of type 'ScanPoint2208'"
        self._scan_point_list = value
