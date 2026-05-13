# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/ScanData2202.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScanData2202(type):
    """Metaclass of message 'ScanData2202'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FRONT': 0,
        'REAR': 1,
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
                'ibeo_msgs.msg.ScanData2202')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scan_data2202
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scan_data2202
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scan_data2202
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scan_data2202
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scan_data2202

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from ibeo_msgs.msg import IbeoDataHeader
            if IbeoDataHeader.__class__._TYPE_SUPPORT is None:
                IbeoDataHeader.__class__.__import_type_support__()

            from ibeo_msgs.msg import ScanPoint2202
            if ScanPoint2202.__class__._TYPE_SUPPORT is None:
                ScanPoint2202.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FRONT': cls.__constants['FRONT'],
            'REAR': cls.__constants['REAR'],
        }

    @property
    def FRONT(self):
        """Message constant 'FRONT'."""
        return Metaclass_ScanData2202.__constants['FRONT']

    @property
    def REAR(self):
        """Message constant 'REAR'."""
        return Metaclass_ScanData2202.__constants['REAR']


class ScanData2202(metaclass=Metaclass_ScanData2202):
    """
    Message class 'ScanData2202'.

    Constants:
      FRONT
      REAR
    """

    __slots__ = [
        '_header',
        '_ibeo_header',
        '_scan_number',
        '_scanner_status',
        '_sync_phase_offset',
        '_scan_start_time',
        '_scan_end_time',
        '_angle_ticks_per_rotation',
        '_start_angle_ticks',
        '_end_angle_ticks',
        '_scan_points_count',
        '_mounting_yaw_angle_ticks',
        '_mounting_pitch_angle_ticks',
        '_mounting_roll_angle_ticks',
        '_mounting_position_x',
        '_mounting_position_y',
        '_mounting_position_z',
        '_ground_labeled',
        '_dirt_labeled',
        '_rain_labeled',
        '_mirror_side',
        '_scan_point_list',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ibeo_header': 'ibeo_msgs/IbeoDataHeader',
        'scan_number': 'uint16',
        'scanner_status': 'uint16',
        'sync_phase_offset': 'uint16',
        'scan_start_time': 'builtin_interfaces/Time',
        'scan_end_time': 'builtin_interfaces/Time',
        'angle_ticks_per_rotation': 'uint16',
        'start_angle_ticks': 'int16',
        'end_angle_ticks': 'int16',
        'scan_points_count': 'uint16',
        'mounting_yaw_angle_ticks': 'int16',
        'mounting_pitch_angle_ticks': 'int16',
        'mounting_roll_angle_ticks': 'int16',
        'mounting_position_x': 'int16',
        'mounting_position_y': 'int16',
        'mounting_position_z': 'int16',
        'ground_labeled': 'boolean',
        'dirt_labeled': 'boolean',
        'rain_labeled': 'boolean',
        'mirror_side': 'uint8',
        'scan_point_list': 'sequence<ibeo_msgs/ScanPoint2202>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'IbeoDataHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'ScanPoint2202')),  # noqa: E501
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
        self.scanner_status = kwargs.get('scanner_status', int())
        self.sync_phase_offset = kwargs.get('sync_phase_offset', int())
        from builtin_interfaces.msg import Time
        self.scan_start_time = kwargs.get('scan_start_time', Time())
        from builtin_interfaces.msg import Time
        self.scan_end_time = kwargs.get('scan_end_time', Time())
        self.angle_ticks_per_rotation = kwargs.get('angle_ticks_per_rotation', int())
        self.start_angle_ticks = kwargs.get('start_angle_ticks', int())
        self.end_angle_ticks = kwargs.get('end_angle_ticks', int())
        self.scan_points_count = kwargs.get('scan_points_count', int())
        self.mounting_yaw_angle_ticks = kwargs.get('mounting_yaw_angle_ticks', int())
        self.mounting_pitch_angle_ticks = kwargs.get('mounting_pitch_angle_ticks', int())
        self.mounting_roll_angle_ticks = kwargs.get('mounting_roll_angle_ticks', int())
        self.mounting_position_x = kwargs.get('mounting_position_x', int())
        self.mounting_position_y = kwargs.get('mounting_position_y', int())
        self.mounting_position_z = kwargs.get('mounting_position_z', int())
        self.ground_labeled = kwargs.get('ground_labeled', bool())
        self.dirt_labeled = kwargs.get('dirt_labeled', bool())
        self.rain_labeled = kwargs.get('rain_labeled', bool())
        self.mirror_side = kwargs.get('mirror_side', int())
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
        if self.scanner_status != other.scanner_status:
            return False
        if self.sync_phase_offset != other.sync_phase_offset:
            return False
        if self.scan_start_time != other.scan_start_time:
            return False
        if self.scan_end_time != other.scan_end_time:
            return False
        if self.angle_ticks_per_rotation != other.angle_ticks_per_rotation:
            return False
        if self.start_angle_ticks != other.start_angle_ticks:
            return False
        if self.end_angle_ticks != other.end_angle_ticks:
            return False
        if self.scan_points_count != other.scan_points_count:
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
        if self.ground_labeled != other.ground_labeled:
            return False
        if self.dirt_labeled != other.dirt_labeled:
            return False
        if self.rain_labeled != other.rain_labeled:
            return False
        if self.mirror_side != other.mirror_side:
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
    def scanner_status(self):
        """Message field 'scanner_status'."""
        return self._scanner_status

    @scanner_status.setter
    def scanner_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scanner_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scanner_status' field must be an unsigned integer in [0, 65535]"
        self._scanner_status = value

    @property
    def sync_phase_offset(self):
        """Message field 'sync_phase_offset'."""
        return self._sync_phase_offset

    @sync_phase_offset.setter
    def sync_phase_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sync_phase_offset' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sync_phase_offset' field must be an unsigned integer in [0, 65535]"
        self._sync_phase_offset = value

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
    def scan_points_count(self):
        """Message field 'scan_points_count'."""
        return self._scan_points_count

    @scan_points_count.setter
    def scan_points_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_points_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scan_points_count' field must be an unsigned integer in [0, 65535]"
        self._scan_points_count = value

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
    def ground_labeled(self):
        """Message field 'ground_labeled'."""
        return self._ground_labeled

    @ground_labeled.setter
    def ground_labeled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ground_labeled' field must be of type 'bool'"
        self._ground_labeled = value

    @property
    def dirt_labeled(self):
        """Message field 'dirt_labeled'."""
        return self._dirt_labeled

    @dirt_labeled.setter
    def dirt_labeled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dirt_labeled' field must be of type 'bool'"
        self._dirt_labeled = value

    @property
    def rain_labeled(self):
        """Message field 'rain_labeled'."""
        return self._rain_labeled

    @rain_labeled.setter
    def rain_labeled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rain_labeled' field must be of type 'bool'"
        self._rain_labeled = value

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
    def scan_point_list(self):
        """Message field 'scan_point_list'."""
        return self._scan_point_list

    @scan_point_list.setter
    def scan_point_list(self, value):
        if __debug__:
            from ibeo_msgs.msg import ScanPoint2202
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
                 all(isinstance(v, ScanPoint2202) for v in value) and
                 True), \
                "The 'scan_point_list' field must be a set or sequence and each value of type 'ScanPoint2202'"
        self._scan_point_list = value
