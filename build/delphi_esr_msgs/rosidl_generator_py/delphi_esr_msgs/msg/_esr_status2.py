# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrStatus2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrStatus2(type):
    """Metaclass of message 'EsrStatus2'."""

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
                'delphi_esr_msgs.msg.EsrStatus2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_status2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_status2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_status2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_status2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_status2

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


class EsrStatus2(metaclass=Metaclass_EsrStatus2):
    """Message class 'EsrStatus2'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_maximum_tracks_ack',
        '_rolling_count_2',
        '_overheat_error',
        '_range_perf_error',
        '_internal_error',
        '_xcvr_operational',
        '_raw_data_mode',
        '_steering_angle_ack',
        '_temperature',
        '_veh_spd_comp_factor',
        '_grouping_mode',
        '_yaw_rate_bias',
        '_sw_version_dsp',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'maximum_tracks_ack': 'uint8',
        'rolling_count_2': 'uint8',
        'overheat_error': 'boolean',
        'range_perf_error': 'boolean',
        'internal_error': 'boolean',
        'xcvr_operational': 'boolean',
        'raw_data_mode': 'boolean',
        'steering_angle_ack': 'uint16',
        'temperature': 'int8',
        'veh_spd_comp_factor': 'float',
        'grouping_mode': 'uint8',
        'yaw_rate_bias': 'float',
        'sw_version_dsp': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.canmsg = kwargs.get('canmsg', str())
        self.maximum_tracks_ack = kwargs.get('maximum_tracks_ack', int())
        self.rolling_count_2 = kwargs.get('rolling_count_2', int())
        self.overheat_error = kwargs.get('overheat_error', bool())
        self.range_perf_error = kwargs.get('range_perf_error', bool())
        self.internal_error = kwargs.get('internal_error', bool())
        self.xcvr_operational = kwargs.get('xcvr_operational', bool())
        self.raw_data_mode = kwargs.get('raw_data_mode', bool())
        self.steering_angle_ack = kwargs.get('steering_angle_ack', int())
        self.temperature = kwargs.get('temperature', int())
        self.veh_spd_comp_factor = kwargs.get('veh_spd_comp_factor', float())
        self.grouping_mode = kwargs.get('grouping_mode', int())
        self.yaw_rate_bias = kwargs.get('yaw_rate_bias', float())
        self.sw_version_dsp = kwargs.get('sw_version_dsp', str())

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
        if self.maximum_tracks_ack != other.maximum_tracks_ack:
            return False
        if self.rolling_count_2 != other.rolling_count_2:
            return False
        if self.overheat_error != other.overheat_error:
            return False
        if self.range_perf_error != other.range_perf_error:
            return False
        if self.internal_error != other.internal_error:
            return False
        if self.xcvr_operational != other.xcvr_operational:
            return False
        if self.raw_data_mode != other.raw_data_mode:
            return False
        if self.steering_angle_ack != other.steering_angle_ack:
            return False
        if self.temperature != other.temperature:
            return False
        if self.veh_spd_comp_factor != other.veh_spd_comp_factor:
            return False
        if self.grouping_mode != other.grouping_mode:
            return False
        if self.yaw_rate_bias != other.yaw_rate_bias:
            return False
        if self.sw_version_dsp != other.sw_version_dsp:
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
    def maximum_tracks_ack(self):
        """Message field 'maximum_tracks_ack'."""
        return self._maximum_tracks_ack

    @maximum_tracks_ack.setter
    def maximum_tracks_ack(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maximum_tracks_ack' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'maximum_tracks_ack' field must be an unsigned integer in [0, 255]"
        self._maximum_tracks_ack = value

    @property
    def rolling_count_2(self):
        """Message field 'rolling_count_2'."""
        return self._rolling_count_2

    @rolling_count_2.setter
    def rolling_count_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rolling_count_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rolling_count_2' field must be an unsigned integer in [0, 255]"
        self._rolling_count_2 = value

    @property
    def overheat_error(self):
        """Message field 'overheat_error'."""
        return self._overheat_error

    @overheat_error.setter
    def overheat_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'overheat_error' field must be of type 'bool'"
        self._overheat_error = value

    @property
    def range_perf_error(self):
        """Message field 'range_perf_error'."""
        return self._range_perf_error

    @range_perf_error.setter
    def range_perf_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'range_perf_error' field must be of type 'bool'"
        self._range_perf_error = value

    @property
    def internal_error(self):
        """Message field 'internal_error'."""
        return self._internal_error

    @internal_error.setter
    def internal_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'internal_error' field must be of type 'bool'"
        self._internal_error = value

    @property
    def xcvr_operational(self):
        """Message field 'xcvr_operational'."""
        return self._xcvr_operational

    @xcvr_operational.setter
    def xcvr_operational(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'xcvr_operational' field must be of type 'bool'"
        self._xcvr_operational = value

    @property
    def raw_data_mode(self):
        """Message field 'raw_data_mode'."""
        return self._raw_data_mode

    @raw_data_mode.setter
    def raw_data_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'raw_data_mode' field must be of type 'bool'"
        self._raw_data_mode = value

    @property
    def steering_angle_ack(self):
        """Message field 'steering_angle_ack'."""
        return self._steering_angle_ack

    @steering_angle_ack.setter
    def steering_angle_ack(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steering_angle_ack' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'steering_angle_ack' field must be an unsigned integer in [0, 65535]"
        self._steering_angle_ack = value

    @property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'temperature' field must be an integer in [-128, 127]"
        self._temperature = value

    @property
    def veh_spd_comp_factor(self):
        """Message field 'veh_spd_comp_factor'."""
        return self._veh_spd_comp_factor

    @veh_spd_comp_factor.setter
    def veh_spd_comp_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_spd_comp_factor' field must be of type 'float'"
        self._veh_spd_comp_factor = value

    @property
    def grouping_mode(self):
        """Message field 'grouping_mode'."""
        return self._grouping_mode

    @grouping_mode.setter
    def grouping_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'grouping_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'grouping_mode' field must be an unsigned integer in [0, 255]"
        self._grouping_mode = value

    @property
    def yaw_rate_bias(self):
        """Message field 'yaw_rate_bias'."""
        return self._yaw_rate_bias

    @yaw_rate_bias.setter
    def yaw_rate_bias(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate_bias' field must be of type 'float'"
        self._yaw_rate_bias = value

    @property
    def sw_version_dsp(self):
        """Message field 'sw_version_dsp'."""
        return self._sw_version_dsp

    @sw_version_dsp.setter
    def sw_version_dsp(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sw_version_dsp' field must be of type 'str'"
        self._sw_version_dsp = value
