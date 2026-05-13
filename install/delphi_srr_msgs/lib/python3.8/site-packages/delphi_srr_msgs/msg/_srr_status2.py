# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_srr_msgs:msg/SrrStatus2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SrrStatus2(type):
    """Metaclass of message 'SrrStatus2'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CAN_TX_ALIGNMENT_STATUS_UNKNOWN': 0,
        'CAN_TX_ALIGNMENT_STATUS_CONVERGED': 1,
        'CAN_TX_ALIGNMENT_STATUS_FAILED': 2,
        'CAN_TX_ALIGNMENT_STATUS_RESERVED': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('delphi_srr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_srr_msgs.msg.SrrStatus2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__srr_status2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__srr_status2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__srr_status2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__srr_status2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__srr_status2

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CAN_TX_ALIGNMENT_STATUS_UNKNOWN': cls.__constants['CAN_TX_ALIGNMENT_STATUS_UNKNOWN'],
            'CAN_TX_ALIGNMENT_STATUS_CONVERGED': cls.__constants['CAN_TX_ALIGNMENT_STATUS_CONVERGED'],
            'CAN_TX_ALIGNMENT_STATUS_FAILED': cls.__constants['CAN_TX_ALIGNMENT_STATUS_FAILED'],
            'CAN_TX_ALIGNMENT_STATUS_RESERVED': cls.__constants['CAN_TX_ALIGNMENT_STATUS_RESERVED'],
        }

    @property
    def CAN_TX_ALIGNMENT_STATUS_UNKNOWN(self):
        """Message constant 'CAN_TX_ALIGNMENT_STATUS_UNKNOWN'."""
        return Metaclass_SrrStatus2.__constants['CAN_TX_ALIGNMENT_STATUS_UNKNOWN']

    @property
    def CAN_TX_ALIGNMENT_STATUS_CONVERGED(self):
        """Message constant 'CAN_TX_ALIGNMENT_STATUS_CONVERGED'."""
        return Metaclass_SrrStatus2.__constants['CAN_TX_ALIGNMENT_STATUS_CONVERGED']

    @property
    def CAN_TX_ALIGNMENT_STATUS_FAILED(self):
        """Message constant 'CAN_TX_ALIGNMENT_STATUS_FAILED'."""
        return Metaclass_SrrStatus2.__constants['CAN_TX_ALIGNMENT_STATUS_FAILED']

    @property
    def CAN_TX_ALIGNMENT_STATUS_RESERVED(self):
        """Message constant 'CAN_TX_ALIGNMENT_STATUS_RESERVED'."""
        return Metaclass_SrrStatus2.__constants['CAN_TX_ALIGNMENT_STATUS_RESERVED']


class SrrStatus2(metaclass=Metaclass_SrrStatus2):
    """
    Message class 'SrrStatus2'.

    Constants:
      CAN_TX_ALIGNMENT_STATUS_UNKNOWN
      CAN_TX_ALIGNMENT_STATUS_CONVERGED
      CAN_TX_ALIGNMENT_STATUS_FAILED
      CAN_TX_ALIGNMENT_STATUS_RESERVED
    """

    __slots__ = [
        '_header',
        '_can_tx_alignment_status',
        '_can_tx_comm_error',
        '_can_tx_steering_angle_sign',
        '_can_tx_yaw_rate_bias',
        '_can_tx_veh_spd_comp_factor',
        '_can_tx_sw_version_dsp',
        '_can_tx_temperature',
        '_can_tx_range_perf_error',
        '_can_tx_overheat_error',
        '_can_tx_internal_error',
        '_can_tx_xcvr_operational',
        '_can_tx_steering_angle',
        '_can_tx_rolling_count_2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_tx_alignment_status': 'uint8',
        'can_tx_comm_error': 'boolean',
        'can_tx_steering_angle_sign': 'boolean',
        'can_tx_yaw_rate_bias': 'float',
        'can_tx_veh_spd_comp_factor': 'float',
        'can_tx_sw_version_dsp': 'uint16',
        'can_tx_temperature': 'int16',
        'can_tx_range_perf_error': 'boolean',
        'can_tx_overheat_error': 'boolean',
        'can_tx_internal_error': 'boolean',
        'can_tx_xcvr_operational': 'boolean',
        'can_tx_steering_angle': 'uint16',
        'can_tx_rolling_count_2': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_tx_alignment_status = kwargs.get('can_tx_alignment_status', int())
        self.can_tx_comm_error = kwargs.get('can_tx_comm_error', bool())
        self.can_tx_steering_angle_sign = kwargs.get('can_tx_steering_angle_sign', bool())
        self.can_tx_yaw_rate_bias = kwargs.get('can_tx_yaw_rate_bias', float())
        self.can_tx_veh_spd_comp_factor = kwargs.get('can_tx_veh_spd_comp_factor', float())
        self.can_tx_sw_version_dsp = kwargs.get('can_tx_sw_version_dsp', int())
        self.can_tx_temperature = kwargs.get('can_tx_temperature', int())
        self.can_tx_range_perf_error = kwargs.get('can_tx_range_perf_error', bool())
        self.can_tx_overheat_error = kwargs.get('can_tx_overheat_error', bool())
        self.can_tx_internal_error = kwargs.get('can_tx_internal_error', bool())
        self.can_tx_xcvr_operational = kwargs.get('can_tx_xcvr_operational', bool())
        self.can_tx_steering_angle = kwargs.get('can_tx_steering_angle', int())
        self.can_tx_rolling_count_2 = kwargs.get('can_tx_rolling_count_2', int())

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
        if self.can_tx_alignment_status != other.can_tx_alignment_status:
            return False
        if self.can_tx_comm_error != other.can_tx_comm_error:
            return False
        if self.can_tx_steering_angle_sign != other.can_tx_steering_angle_sign:
            return False
        if self.can_tx_yaw_rate_bias != other.can_tx_yaw_rate_bias:
            return False
        if self.can_tx_veh_spd_comp_factor != other.can_tx_veh_spd_comp_factor:
            return False
        if self.can_tx_sw_version_dsp != other.can_tx_sw_version_dsp:
            return False
        if self.can_tx_temperature != other.can_tx_temperature:
            return False
        if self.can_tx_range_perf_error != other.can_tx_range_perf_error:
            return False
        if self.can_tx_overheat_error != other.can_tx_overheat_error:
            return False
        if self.can_tx_internal_error != other.can_tx_internal_error:
            return False
        if self.can_tx_xcvr_operational != other.can_tx_xcvr_operational:
            return False
        if self.can_tx_steering_angle != other.can_tx_steering_angle:
            return False
        if self.can_tx_rolling_count_2 != other.can_tx_rolling_count_2:
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
    def can_tx_alignment_status(self):
        """Message field 'can_tx_alignment_status'."""
        return self._can_tx_alignment_status

    @can_tx_alignment_status.setter
    def can_tx_alignment_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_alignment_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_alignment_status' field must be an unsigned integer in [0, 255]"
        self._can_tx_alignment_status = value

    @property
    def can_tx_comm_error(self):
        """Message field 'can_tx_comm_error'."""
        return self._can_tx_comm_error

    @can_tx_comm_error.setter
    def can_tx_comm_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_tx_comm_error' field must be of type 'bool'"
        self._can_tx_comm_error = value

    @property
    def can_tx_steering_angle_sign(self):
        """Message field 'can_tx_steering_angle_sign'."""
        return self._can_tx_steering_angle_sign

    @can_tx_steering_angle_sign.setter
    def can_tx_steering_angle_sign(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_tx_steering_angle_sign' field must be of type 'bool'"
        self._can_tx_steering_angle_sign = value

    @property
    def can_tx_yaw_rate_bias(self):
        """Message field 'can_tx_yaw_rate_bias'."""
        return self._can_tx_yaw_rate_bias

    @can_tx_yaw_rate_bias.setter
    def can_tx_yaw_rate_bias(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_yaw_rate_bias' field must be of type 'float'"
        self._can_tx_yaw_rate_bias = value

    @property
    def can_tx_veh_spd_comp_factor(self):
        """Message field 'can_tx_veh_spd_comp_factor'."""
        return self._can_tx_veh_spd_comp_factor

    @can_tx_veh_spd_comp_factor.setter
    def can_tx_veh_spd_comp_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_veh_spd_comp_factor' field must be of type 'float'"
        self._can_tx_veh_spd_comp_factor = value

    @property
    def can_tx_sw_version_dsp(self):
        """Message field 'can_tx_sw_version_dsp'."""
        return self._can_tx_sw_version_dsp

    @can_tx_sw_version_dsp.setter
    def can_tx_sw_version_dsp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_sw_version_dsp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_tx_sw_version_dsp' field must be an unsigned integer in [0, 65535]"
        self._can_tx_sw_version_dsp = value

    @property
    def can_tx_temperature(self):
        """Message field 'can_tx_temperature'."""
        return self._can_tx_temperature

    @can_tx_temperature.setter
    def can_tx_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_temperature' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'can_tx_temperature' field must be an integer in [-32768, 32767]"
        self._can_tx_temperature = value

    @property
    def can_tx_range_perf_error(self):
        """Message field 'can_tx_range_perf_error'."""
        return self._can_tx_range_perf_error

    @can_tx_range_perf_error.setter
    def can_tx_range_perf_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_tx_range_perf_error' field must be of type 'bool'"
        self._can_tx_range_perf_error = value

    @property
    def can_tx_overheat_error(self):
        """Message field 'can_tx_overheat_error'."""
        return self._can_tx_overheat_error

    @can_tx_overheat_error.setter
    def can_tx_overheat_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_tx_overheat_error' field must be of type 'bool'"
        self._can_tx_overheat_error = value

    @property
    def can_tx_internal_error(self):
        """Message field 'can_tx_internal_error'."""
        return self._can_tx_internal_error

    @can_tx_internal_error.setter
    def can_tx_internal_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_tx_internal_error' field must be of type 'bool'"
        self._can_tx_internal_error = value

    @property
    def can_tx_xcvr_operational(self):
        """Message field 'can_tx_xcvr_operational'."""
        return self._can_tx_xcvr_operational

    @can_tx_xcvr_operational.setter
    def can_tx_xcvr_operational(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_tx_xcvr_operational' field must be of type 'bool'"
        self._can_tx_xcvr_operational = value

    @property
    def can_tx_steering_angle(self):
        """Message field 'can_tx_steering_angle'."""
        return self._can_tx_steering_angle

    @can_tx_steering_angle.setter
    def can_tx_steering_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_steering_angle' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_tx_steering_angle' field must be an unsigned integer in [0, 65535]"
        self._can_tx_steering_angle = value

    @property
    def can_tx_rolling_count_2(self):
        """Message field 'can_tx_rolling_count_2'."""
        return self._can_tx_rolling_count_2

    @can_tx_rolling_count_2.setter
    def can_tx_rolling_count_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_rolling_count_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_rolling_count_2' field must be an unsigned integer in [0, 255]"
        self._can_tx_rolling_count_2 = value
