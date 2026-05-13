# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/ScannerInfo2205.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScannerInfo2205(type):
    """Metaclass of message 'ScannerInfo2205'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALASCA_XT': 3,
        'LUX_ECU': 4,
        'LUX_PROTOTYPE': 5,
        'LUX': 6,
        'SCALA_B1': 96,
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
                'ibeo_msgs.msg.ScannerInfo2205')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scanner_info2205
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scanner_info2205
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scanner_info2205
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scanner_info2205
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scanner_info2205

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from ibeo_msgs.msg import MountingPositionF
            if MountingPositionF.__class__._TYPE_SUPPORT is None:
                MountingPositionF.__class__.__import_type_support__()

            from ibeo_msgs.msg import ResolutionInfo
            if ResolutionInfo.__class__._TYPE_SUPPORT is None:
                ResolutionInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALASCA_XT': cls.__constants['ALASCA_XT'],
            'LUX_ECU': cls.__constants['LUX_ECU'],
            'LUX_PROTOTYPE': cls.__constants['LUX_PROTOTYPE'],
            'LUX': cls.__constants['LUX'],
            'SCALA_B1': cls.__constants['SCALA_B1'],
        }

    @property
    def ALASCA_XT(self):
        """Message constant 'ALASCA_XT'."""
        return Metaclass_ScannerInfo2205.__constants['ALASCA_XT']

    @property
    def LUX_ECU(self):
        """Message constant 'LUX_ECU'."""
        return Metaclass_ScannerInfo2205.__constants['LUX_ECU']

    @property
    def LUX_PROTOTYPE(self):
        """Message constant 'LUX_PROTOTYPE'."""
        return Metaclass_ScannerInfo2205.__constants['LUX_PROTOTYPE']

    @property
    def LUX(self):
        """Message constant 'LUX'."""
        return Metaclass_ScannerInfo2205.__constants['LUX']

    @property
    def SCALA_B1(self):
        """Message constant 'SCALA_B1'."""
        return Metaclass_ScannerInfo2205.__constants['SCALA_B1']


class ScannerInfo2205(metaclass=Metaclass_ScannerInfo2205):
    """
    Message class 'ScannerInfo2205'.

    Constants:
      ALASCA_XT
      LUX_ECU
      LUX_PROTOTYPE
      LUX
      SCALA_B1
    """

    __slots__ = [
        '_device_id',
        '_scanner_type',
        '_scan_number',
        '_start_angle',
        '_end_angle',
        '_scan_start_time',
        '_scan_end_time',
        '_scan_start_time_from_device',
        '_scan_end_time_from_device',
        '_scan_frequency',
        '_beam_tilt',
        '_scan_flags',
        '_mounting_position',
        '_resolutions',
    ]

    _fields_and_field_types = {
        'device_id': 'uint8',
        'scanner_type': 'uint8',
        'scan_number': 'uint16',
        'start_angle': 'float',
        'end_angle': 'float',
        'scan_start_time': 'builtin_interfaces/Time',
        'scan_end_time': 'builtin_interfaces/Time',
        'scan_start_time_from_device': 'builtin_interfaces/Time',
        'scan_end_time_from_device': 'builtin_interfaces/Time',
        'scan_frequency': 'float',
        'beam_tilt': 'float',
        'scan_flags': 'uint32',
        'mounting_position': 'ibeo_msgs/MountingPositionF',
        'resolutions': 'ibeo_msgs/ResolutionInfo[8]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'MountingPositionF'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'ResolutionInfo'), 8),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_id = kwargs.get('device_id', int())
        self.scanner_type = kwargs.get('scanner_type', int())
        self.scan_number = kwargs.get('scan_number', int())
        self.start_angle = kwargs.get('start_angle', float())
        self.end_angle = kwargs.get('end_angle', float())
        from builtin_interfaces.msg import Time
        self.scan_start_time = kwargs.get('scan_start_time', Time())
        from builtin_interfaces.msg import Time
        self.scan_end_time = kwargs.get('scan_end_time', Time())
        from builtin_interfaces.msg import Time
        self.scan_start_time_from_device = kwargs.get('scan_start_time_from_device', Time())
        from builtin_interfaces.msg import Time
        self.scan_end_time_from_device = kwargs.get('scan_end_time_from_device', Time())
        self.scan_frequency = kwargs.get('scan_frequency', float())
        self.beam_tilt = kwargs.get('beam_tilt', float())
        self.scan_flags = kwargs.get('scan_flags', int())
        from ibeo_msgs.msg import MountingPositionF
        self.mounting_position = kwargs.get('mounting_position', MountingPositionF())
        from ibeo_msgs.msg import ResolutionInfo
        self.resolutions = kwargs.get(
            'resolutions',
            [ResolutionInfo() for x in range(8)]
        )

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
        if self.device_id != other.device_id:
            return False
        if self.scanner_type != other.scanner_type:
            return False
        if self.scan_number != other.scan_number:
            return False
        if self.start_angle != other.start_angle:
            return False
        if self.end_angle != other.end_angle:
            return False
        if self.scan_start_time != other.scan_start_time:
            return False
        if self.scan_end_time != other.scan_end_time:
            return False
        if self.scan_start_time_from_device != other.scan_start_time_from_device:
            return False
        if self.scan_end_time_from_device != other.scan_end_time_from_device:
            return False
        if self.scan_frequency != other.scan_frequency:
            return False
        if self.beam_tilt != other.beam_tilt:
            return False
        if self.scan_flags != other.scan_flags:
            return False
        if self.mounting_position != other.mounting_position:
            return False
        if self.resolutions != other.resolutions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def scanner_type(self):
        """Message field 'scanner_type'."""
        return self._scanner_type

    @scanner_type.setter
    def scanner_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scanner_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'scanner_type' field must be an unsigned integer in [0, 255]"
        self._scanner_type = value

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
    def start_angle(self):
        """Message field 'start_angle'."""
        return self._start_angle

    @start_angle.setter
    def start_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_angle' field must be of type 'float'"
        self._start_angle = value

    @property
    def end_angle(self):
        """Message field 'end_angle'."""
        return self._end_angle

    @end_angle.setter
    def end_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_angle' field must be of type 'float'"
        self._end_angle = value

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
    def scan_start_time_from_device(self):
        """Message field 'scan_start_time_from_device'."""
        return self._scan_start_time_from_device

    @scan_start_time_from_device.setter
    def scan_start_time_from_device(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'scan_start_time_from_device' field must be a sub message of type 'Time'"
        self._scan_start_time_from_device = value

    @property
    def scan_end_time_from_device(self):
        """Message field 'scan_end_time_from_device'."""
        return self._scan_end_time_from_device

    @scan_end_time_from_device.setter
    def scan_end_time_from_device(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'scan_end_time_from_device' field must be a sub message of type 'Time'"
        self._scan_end_time_from_device = value

    @property
    def scan_frequency(self):
        """Message field 'scan_frequency'."""
        return self._scan_frequency

    @scan_frequency.setter
    def scan_frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scan_frequency' field must be of type 'float'"
        self._scan_frequency = value

    @property
    def beam_tilt(self):
        """Message field 'beam_tilt'."""
        return self._beam_tilt

    @beam_tilt.setter
    def beam_tilt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'beam_tilt' field must be of type 'float'"
        self._beam_tilt = value

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
    def mounting_position(self):
        """Message field 'mounting_position'."""
        return self._mounting_position

    @mounting_position.setter
    def mounting_position(self, value):
        if __debug__:
            from ibeo_msgs.msg import MountingPositionF
            assert \
                isinstance(value, MountingPositionF), \
                "The 'mounting_position' field must be a sub message of type 'MountingPositionF'"
        self._mounting_position = value

    @property
    def resolutions(self):
        """Message field 'resolutions'."""
        return self._resolutions

    @resolutions.setter
    def resolutions(self, value):
        if __debug__:
            from ibeo_msgs.msg import ResolutionInfo
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
                 len(value) == 8 and
                 all(isinstance(v, ResolutionInfo) for v in value) and
                 True), \
                "The 'resolutions' field must be a set or sequence with length 8 and each value of type 'ResolutionInfo'"
        self._resolutions = value
