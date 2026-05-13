# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrStatus1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrStatus1(type):
    """Metaclass of message 'EsrStatus1'."""

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
            module = import_type_support('delphi_esr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_esr_msgs.msg.EsrStatus1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_status1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_status1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_status1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_status1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_status1

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


class EsrStatus1(metaclass=Metaclass_EsrStatus1):
    """Message class 'EsrStatus1'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_rolling_count_1',
        '_dsp_timestamp',
        '_comm_error',
        '_radius_curvature_calc',
        '_scan_index',
        '_yaw_rate_calc',
        '_vehicle_speed_calc',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'rolling_count_1': 'uint8',
        'dsp_timestamp': 'uint8',
        'comm_error': 'boolean',
        'radius_curvature_calc': 'int16',
        'scan_index': 'uint16',
        'yaw_rate_calc': 'float',
        'vehicle_speed_calc': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.canmsg = kwargs.get('canmsg', str())
        self.rolling_count_1 = kwargs.get('rolling_count_1', int())
        self.dsp_timestamp = kwargs.get('dsp_timestamp', int())
        self.comm_error = kwargs.get('comm_error', bool())
        self.radius_curvature_calc = kwargs.get('radius_curvature_calc', int())
        self.scan_index = kwargs.get('scan_index', int())
        self.yaw_rate_calc = kwargs.get('yaw_rate_calc', float())
        self.vehicle_speed_calc = kwargs.get('vehicle_speed_calc', float())

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
        if self.canmsg != other.canmsg:
            return False
        if self.rolling_count_1 != other.rolling_count_1:
            return False
        if self.dsp_timestamp != other.dsp_timestamp:
            return False
        if self.comm_error != other.comm_error:
            return False
        if self.radius_curvature_calc != other.radius_curvature_calc:
            return False
        if self.scan_index != other.scan_index:
            return False
        if self.yaw_rate_calc != other.yaw_rate_calc:
            return False
        if self.vehicle_speed_calc != other.vehicle_speed_calc:
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
    def canmsg(self):
        """Message field 'canmsg'."""
        return self._canmsg

    @canmsg.setter
    def canmsg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'canmsg' field must be of type 'str'"
        self._canmsg = value

    @property
    def rolling_count_1(self):
        """Message field 'rolling_count_1'."""
        return self._rolling_count_1

    @rolling_count_1.setter
    def rolling_count_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rolling_count_1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rolling_count_1' field must be an unsigned integer in [0, 255]"
        self._rolling_count_1 = value

    @property
    def dsp_timestamp(self):
        """Message field 'dsp_timestamp'."""
        return self._dsp_timestamp

    @dsp_timestamp.setter
    def dsp_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dsp_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dsp_timestamp' field must be an unsigned integer in [0, 255]"
        self._dsp_timestamp = value

    @property
    def comm_error(self):
        """Message field 'comm_error'."""
        return self._comm_error

    @comm_error.setter
    def comm_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'comm_error' field must be of type 'bool'"
        self._comm_error = value

    @property
    def radius_curvature_calc(self):
        """Message field 'radius_curvature_calc'."""
        return self._radius_curvature_calc

    @radius_curvature_calc.setter
    def radius_curvature_calc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radius_curvature_calc' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'radius_curvature_calc' field must be an integer in [-32768, 32767]"
        self._radius_curvature_calc = value

    @property
    def scan_index(self):
        """Message field 'scan_index'."""
        return self._scan_index

    @scan_index.setter
    def scan_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scan_index' field must be an unsigned integer in [0, 65535]"
        self._scan_index = value

    @property
    def yaw_rate_calc(self):
        """Message field 'yaw_rate_calc'."""
        return self._yaw_rate_calc

    @yaw_rate_calc.setter
    def yaw_rate_calc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate_calc' field must be of type 'float'"
        self._yaw_rate_calc = value

    @property
    def vehicle_speed_calc(self):
        """Message field 'vehicle_speed_calc'."""
        return self._vehicle_speed_calc

    @vehicle_speed_calc.setter
    def vehicle_speed_calc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_speed_calc' field must be of type 'float'"
        self._vehicle_speed_calc = value
