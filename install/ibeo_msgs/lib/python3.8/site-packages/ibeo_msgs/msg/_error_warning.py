# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/ErrorWarning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ErrorWarning(type):
    """Metaclass of message 'ErrorWarning'."""

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
                'ibeo_msgs.msg.ErrorWarning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__error_warning
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__error_warning
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__error_warning
            cls._TYPE_SUPPORT = module.type_support_msg__msg__error_warning
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__error_warning

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


class ErrorWarning(metaclass=Metaclass_ErrorWarning):
    """Message class 'ErrorWarning'."""

    __slots__ = [
        '_header',
        '_ibeo_header',
        '_err_internal_error',
        '_err_motor_1_fault',
        '_err_buffer_error_xmt_incomplete',
        '_err_buffer_error_overflow',
        '_err_apd_over_temperature',
        '_err_apd_under_temperature',
        '_err_apd_temperature_sensor_defect',
        '_err_motor_2_fault',
        '_err_motor_3_fault',
        '_err_motor_4_fault',
        '_err_motor_5_fault',
        '_err_int_no_scan_data',
        '_err_int_communication_error',
        '_err_int_incorrect_scan_data',
        '_err_config_fpga_not_configurable',
        '_err_config_incorrect_config_data',
        '_err_config_contains_incorrect_params',
        '_err_timeout_data_processing',
        '_err_timeout_env_model_computation_reset',
        '_wrn_int_communication_error',
        '_wrn_low_temperature',
        '_wrn_high_temperature',
        '_wrn_int_motor_1',
        '_wrn_sync_error',
        '_wrn_laser_1_start_pulse_missing',
        '_wrn_laser_2_start_pulse_missing',
        '_wrn_can_interface_blocked',
        '_wrn_eth_interface_blocked',
        '_wrn_incorrect_can_data_rcvd',
        '_wrn_int_incorrect_scan_data',
        '_wrn_eth_unkwn_incomplete_data',
        '_wrn_incorrect_or_forbidden_cmd_rcvd',
        '_wrn_memory_access_failure',
        '_wrn_int_overflow',
        '_wrn_ego_motion_data_missing',
        '_wrn_incorrect_mounting_params',
        '_wrn_no_obj_comp_due_to_scan_freq',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ibeo_header': 'ibeo_msgs/IbeoDataHeader',
        'err_internal_error': 'boolean',
        'err_motor_1_fault': 'boolean',
        'err_buffer_error_xmt_incomplete': 'boolean',
        'err_buffer_error_overflow': 'boolean',
        'err_apd_over_temperature': 'boolean',
        'err_apd_under_temperature': 'boolean',
        'err_apd_temperature_sensor_defect': 'boolean',
        'err_motor_2_fault': 'boolean',
        'err_motor_3_fault': 'boolean',
        'err_motor_4_fault': 'boolean',
        'err_motor_5_fault': 'boolean',
        'err_int_no_scan_data': 'boolean',
        'err_int_communication_error': 'boolean',
        'err_int_incorrect_scan_data': 'boolean',
        'err_config_fpga_not_configurable': 'boolean',
        'err_config_incorrect_config_data': 'boolean',
        'err_config_contains_incorrect_params': 'boolean',
        'err_timeout_data_processing': 'boolean',
        'err_timeout_env_model_computation_reset': 'boolean',
        'wrn_int_communication_error': 'boolean',
        'wrn_low_temperature': 'boolean',
        'wrn_high_temperature': 'boolean',
        'wrn_int_motor_1': 'boolean',
        'wrn_sync_error': 'boolean',
        'wrn_laser_1_start_pulse_missing': 'boolean',
        'wrn_laser_2_start_pulse_missing': 'boolean',
        'wrn_can_interface_blocked': 'boolean',
        'wrn_eth_interface_blocked': 'boolean',
        'wrn_incorrect_can_data_rcvd': 'boolean',
        'wrn_int_incorrect_scan_data': 'boolean',
        'wrn_eth_unkwn_incomplete_data': 'boolean',
        'wrn_incorrect_or_forbidden_cmd_rcvd': 'boolean',
        'wrn_memory_access_failure': 'boolean',
        'wrn_int_overflow': 'boolean',
        'wrn_ego_motion_data_missing': 'boolean',
        'wrn_incorrect_mounting_params': 'boolean',
        'wrn_no_obj_comp_due_to_scan_freq': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'IbeoDataHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ibeo_msgs.msg import IbeoDataHeader
        self.ibeo_header = kwargs.get('ibeo_header', IbeoDataHeader())
        self.err_internal_error = kwargs.get('err_internal_error', bool())
        self.err_motor_1_fault = kwargs.get('err_motor_1_fault', bool())
        self.err_buffer_error_xmt_incomplete = kwargs.get('err_buffer_error_xmt_incomplete', bool())
        self.err_buffer_error_overflow = kwargs.get('err_buffer_error_overflow', bool())
        self.err_apd_over_temperature = kwargs.get('err_apd_over_temperature', bool())
        self.err_apd_under_temperature = kwargs.get('err_apd_under_temperature', bool())
        self.err_apd_temperature_sensor_defect = kwargs.get('err_apd_temperature_sensor_defect', bool())
        self.err_motor_2_fault = kwargs.get('err_motor_2_fault', bool())
        self.err_motor_3_fault = kwargs.get('err_motor_3_fault', bool())
        self.err_motor_4_fault = kwargs.get('err_motor_4_fault', bool())
        self.err_motor_5_fault = kwargs.get('err_motor_5_fault', bool())
        self.err_int_no_scan_data = kwargs.get('err_int_no_scan_data', bool())
        self.err_int_communication_error = kwargs.get('err_int_communication_error', bool())
        self.err_int_incorrect_scan_data = kwargs.get('err_int_incorrect_scan_data', bool())
        self.err_config_fpga_not_configurable = kwargs.get('err_config_fpga_not_configurable', bool())
        self.err_config_incorrect_config_data = kwargs.get('err_config_incorrect_config_data', bool())
        self.err_config_contains_incorrect_params = kwargs.get('err_config_contains_incorrect_params', bool())
        self.err_timeout_data_processing = kwargs.get('err_timeout_data_processing', bool())
        self.err_timeout_env_model_computation_reset = kwargs.get('err_timeout_env_model_computation_reset', bool())
        self.wrn_int_communication_error = kwargs.get('wrn_int_communication_error', bool())
        self.wrn_low_temperature = kwargs.get('wrn_low_temperature', bool())
        self.wrn_high_temperature = kwargs.get('wrn_high_temperature', bool())
        self.wrn_int_motor_1 = kwargs.get('wrn_int_motor_1', bool())
        self.wrn_sync_error = kwargs.get('wrn_sync_error', bool())
        self.wrn_laser_1_start_pulse_missing = kwargs.get('wrn_laser_1_start_pulse_missing', bool())
        self.wrn_laser_2_start_pulse_missing = kwargs.get('wrn_laser_2_start_pulse_missing', bool())
        self.wrn_can_interface_blocked = kwargs.get('wrn_can_interface_blocked', bool())
        self.wrn_eth_interface_blocked = kwargs.get('wrn_eth_interface_blocked', bool())
        self.wrn_incorrect_can_data_rcvd = kwargs.get('wrn_incorrect_can_data_rcvd', bool())
        self.wrn_int_incorrect_scan_data = kwargs.get('wrn_int_incorrect_scan_data', bool())
        self.wrn_eth_unkwn_incomplete_data = kwargs.get('wrn_eth_unkwn_incomplete_data', bool())
        self.wrn_incorrect_or_forbidden_cmd_rcvd = kwargs.get('wrn_incorrect_or_forbidden_cmd_rcvd', bool())
        self.wrn_memory_access_failure = kwargs.get('wrn_memory_access_failure', bool())
        self.wrn_int_overflow = kwargs.get('wrn_int_overflow', bool())
        self.wrn_ego_motion_data_missing = kwargs.get('wrn_ego_motion_data_missing', bool())
        self.wrn_incorrect_mounting_params = kwargs.get('wrn_incorrect_mounting_params', bool())
        self.wrn_no_obj_comp_due_to_scan_freq = kwargs.get('wrn_no_obj_comp_due_to_scan_freq', bool())

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
        if self.err_internal_error != other.err_internal_error:
            return False
        if self.err_motor_1_fault != other.err_motor_1_fault:
            return False
        if self.err_buffer_error_xmt_incomplete != other.err_buffer_error_xmt_incomplete:
            return False
        if self.err_buffer_error_overflow != other.err_buffer_error_overflow:
            return False
        if self.err_apd_over_temperature != other.err_apd_over_temperature:
            return False
        if self.err_apd_under_temperature != other.err_apd_under_temperature:
            return False
        if self.err_apd_temperature_sensor_defect != other.err_apd_temperature_sensor_defect:
            return False
        if self.err_motor_2_fault != other.err_motor_2_fault:
            return False
        if self.err_motor_3_fault != other.err_motor_3_fault:
            return False
        if self.err_motor_4_fault != other.err_motor_4_fault:
            return False
        if self.err_motor_5_fault != other.err_motor_5_fault:
            return False
        if self.err_int_no_scan_data != other.err_int_no_scan_data:
            return False
        if self.err_int_communication_error != other.err_int_communication_error:
            return False
        if self.err_int_incorrect_scan_data != other.err_int_incorrect_scan_data:
            return False
        if self.err_config_fpga_not_configurable != other.err_config_fpga_not_configurable:
            return False
        if self.err_config_incorrect_config_data != other.err_config_incorrect_config_data:
            return False
        if self.err_config_contains_incorrect_params != other.err_config_contains_incorrect_params:
            return False
        if self.err_timeout_data_processing != other.err_timeout_data_processing:
            return False
        if self.err_timeout_env_model_computation_reset != other.err_timeout_env_model_computation_reset:
            return False
        if self.wrn_int_communication_error != other.wrn_int_communication_error:
            return False
        if self.wrn_low_temperature != other.wrn_low_temperature:
            return False
        if self.wrn_high_temperature != other.wrn_high_temperature:
            return False
        if self.wrn_int_motor_1 != other.wrn_int_motor_1:
            return False
        if self.wrn_sync_error != other.wrn_sync_error:
            return False
        if self.wrn_laser_1_start_pulse_missing != other.wrn_laser_1_start_pulse_missing:
            return False
        if self.wrn_laser_2_start_pulse_missing != other.wrn_laser_2_start_pulse_missing:
            return False
        if self.wrn_can_interface_blocked != other.wrn_can_interface_blocked:
            return False
        if self.wrn_eth_interface_blocked != other.wrn_eth_interface_blocked:
            return False
        if self.wrn_incorrect_can_data_rcvd != other.wrn_incorrect_can_data_rcvd:
            return False
        if self.wrn_int_incorrect_scan_data != other.wrn_int_incorrect_scan_data:
            return False
        if self.wrn_eth_unkwn_incomplete_data != other.wrn_eth_unkwn_incomplete_data:
            return False
        if self.wrn_incorrect_or_forbidden_cmd_rcvd != other.wrn_incorrect_or_forbidden_cmd_rcvd:
            return False
        if self.wrn_memory_access_failure != other.wrn_memory_access_failure:
            return False
        if self.wrn_int_overflow != other.wrn_int_overflow:
            return False
        if self.wrn_ego_motion_data_missing != other.wrn_ego_motion_data_missing:
            return False
        if self.wrn_incorrect_mounting_params != other.wrn_incorrect_mounting_params:
            return False
        if self.wrn_no_obj_comp_due_to_scan_freq != other.wrn_no_obj_comp_due_to_scan_freq:
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
    def err_internal_error(self):
        """Message field 'err_internal_error'."""
        return self._err_internal_error

    @err_internal_error.setter
    def err_internal_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_internal_error' field must be of type 'bool'"
        self._err_internal_error = value

    @property
    def err_motor_1_fault(self):
        """Message field 'err_motor_1_fault'."""
        return self._err_motor_1_fault

    @err_motor_1_fault.setter
    def err_motor_1_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_motor_1_fault' field must be of type 'bool'"
        self._err_motor_1_fault = value

    @property
    def err_buffer_error_xmt_incomplete(self):
        """Message field 'err_buffer_error_xmt_incomplete'."""
        return self._err_buffer_error_xmt_incomplete

    @err_buffer_error_xmt_incomplete.setter
    def err_buffer_error_xmt_incomplete(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_buffer_error_xmt_incomplete' field must be of type 'bool'"
        self._err_buffer_error_xmt_incomplete = value

    @property
    def err_buffer_error_overflow(self):
        """Message field 'err_buffer_error_overflow'."""
        return self._err_buffer_error_overflow

    @err_buffer_error_overflow.setter
    def err_buffer_error_overflow(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_buffer_error_overflow' field must be of type 'bool'"
        self._err_buffer_error_overflow = value

    @property
    def err_apd_over_temperature(self):
        """Message field 'err_apd_over_temperature'."""
        return self._err_apd_over_temperature

    @err_apd_over_temperature.setter
    def err_apd_over_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_apd_over_temperature' field must be of type 'bool'"
        self._err_apd_over_temperature = value

    @property
    def err_apd_under_temperature(self):
        """Message field 'err_apd_under_temperature'."""
        return self._err_apd_under_temperature

    @err_apd_under_temperature.setter
    def err_apd_under_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_apd_under_temperature' field must be of type 'bool'"
        self._err_apd_under_temperature = value

    @property
    def err_apd_temperature_sensor_defect(self):
        """Message field 'err_apd_temperature_sensor_defect'."""
        return self._err_apd_temperature_sensor_defect

    @err_apd_temperature_sensor_defect.setter
    def err_apd_temperature_sensor_defect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_apd_temperature_sensor_defect' field must be of type 'bool'"
        self._err_apd_temperature_sensor_defect = value

    @property
    def err_motor_2_fault(self):
        """Message field 'err_motor_2_fault'."""
        return self._err_motor_2_fault

    @err_motor_2_fault.setter
    def err_motor_2_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_motor_2_fault' field must be of type 'bool'"
        self._err_motor_2_fault = value

    @property
    def err_motor_3_fault(self):
        """Message field 'err_motor_3_fault'."""
        return self._err_motor_3_fault

    @err_motor_3_fault.setter
    def err_motor_3_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_motor_3_fault' field must be of type 'bool'"
        self._err_motor_3_fault = value

    @property
    def err_motor_4_fault(self):
        """Message field 'err_motor_4_fault'."""
        return self._err_motor_4_fault

    @err_motor_4_fault.setter
    def err_motor_4_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_motor_4_fault' field must be of type 'bool'"
        self._err_motor_4_fault = value

    @property
    def err_motor_5_fault(self):
        """Message field 'err_motor_5_fault'."""
        return self._err_motor_5_fault

    @err_motor_5_fault.setter
    def err_motor_5_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_motor_5_fault' field must be of type 'bool'"
        self._err_motor_5_fault = value

    @property
    def err_int_no_scan_data(self):
        """Message field 'err_int_no_scan_data'."""
        return self._err_int_no_scan_data

    @err_int_no_scan_data.setter
    def err_int_no_scan_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_int_no_scan_data' field must be of type 'bool'"
        self._err_int_no_scan_data = value

    @property
    def err_int_communication_error(self):
        """Message field 'err_int_communication_error'."""
        return self._err_int_communication_error

    @err_int_communication_error.setter
    def err_int_communication_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_int_communication_error' field must be of type 'bool'"
        self._err_int_communication_error = value

    @property
    def err_int_incorrect_scan_data(self):
        """Message field 'err_int_incorrect_scan_data'."""
        return self._err_int_incorrect_scan_data

    @err_int_incorrect_scan_data.setter
    def err_int_incorrect_scan_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_int_incorrect_scan_data' field must be of type 'bool'"
        self._err_int_incorrect_scan_data = value

    @property
    def err_config_fpga_not_configurable(self):
        """Message field 'err_config_fpga_not_configurable'."""
        return self._err_config_fpga_not_configurable

    @err_config_fpga_not_configurable.setter
    def err_config_fpga_not_configurable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_config_fpga_not_configurable' field must be of type 'bool'"
        self._err_config_fpga_not_configurable = value

    @property
    def err_config_incorrect_config_data(self):
        """Message field 'err_config_incorrect_config_data'."""
        return self._err_config_incorrect_config_data

    @err_config_incorrect_config_data.setter
    def err_config_incorrect_config_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_config_incorrect_config_data' field must be of type 'bool'"
        self._err_config_incorrect_config_data = value

    @property
    def err_config_contains_incorrect_params(self):
        """Message field 'err_config_contains_incorrect_params'."""
        return self._err_config_contains_incorrect_params

    @err_config_contains_incorrect_params.setter
    def err_config_contains_incorrect_params(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_config_contains_incorrect_params' field must be of type 'bool'"
        self._err_config_contains_incorrect_params = value

    @property
    def err_timeout_data_processing(self):
        """Message field 'err_timeout_data_processing'."""
        return self._err_timeout_data_processing

    @err_timeout_data_processing.setter
    def err_timeout_data_processing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_timeout_data_processing' field must be of type 'bool'"
        self._err_timeout_data_processing = value

    @property
    def err_timeout_env_model_computation_reset(self):
        """Message field 'err_timeout_env_model_computation_reset'."""
        return self._err_timeout_env_model_computation_reset

    @err_timeout_env_model_computation_reset.setter
    def err_timeout_env_model_computation_reset(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err_timeout_env_model_computation_reset' field must be of type 'bool'"
        self._err_timeout_env_model_computation_reset = value

    @property
    def wrn_int_communication_error(self):
        """Message field 'wrn_int_communication_error'."""
        return self._wrn_int_communication_error

    @wrn_int_communication_error.setter
    def wrn_int_communication_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_int_communication_error' field must be of type 'bool'"
        self._wrn_int_communication_error = value

    @property
    def wrn_low_temperature(self):
        """Message field 'wrn_low_temperature'."""
        return self._wrn_low_temperature

    @wrn_low_temperature.setter
    def wrn_low_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_low_temperature' field must be of type 'bool'"
        self._wrn_low_temperature = value

    @property
    def wrn_high_temperature(self):
        """Message field 'wrn_high_temperature'."""
        return self._wrn_high_temperature

    @wrn_high_temperature.setter
    def wrn_high_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_high_temperature' field must be of type 'bool'"
        self._wrn_high_temperature = value

    @property
    def wrn_int_motor_1(self):
        """Message field 'wrn_int_motor_1'."""
        return self._wrn_int_motor_1

    @wrn_int_motor_1.setter
    def wrn_int_motor_1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_int_motor_1' field must be of type 'bool'"
        self._wrn_int_motor_1 = value

    @property
    def wrn_sync_error(self):
        """Message field 'wrn_sync_error'."""
        return self._wrn_sync_error

    @wrn_sync_error.setter
    def wrn_sync_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_sync_error' field must be of type 'bool'"
        self._wrn_sync_error = value

    @property
    def wrn_laser_1_start_pulse_missing(self):
        """Message field 'wrn_laser_1_start_pulse_missing'."""
        return self._wrn_laser_1_start_pulse_missing

    @wrn_laser_1_start_pulse_missing.setter
    def wrn_laser_1_start_pulse_missing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_laser_1_start_pulse_missing' field must be of type 'bool'"
        self._wrn_laser_1_start_pulse_missing = value

    @property
    def wrn_laser_2_start_pulse_missing(self):
        """Message field 'wrn_laser_2_start_pulse_missing'."""
        return self._wrn_laser_2_start_pulse_missing

    @wrn_laser_2_start_pulse_missing.setter
    def wrn_laser_2_start_pulse_missing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_laser_2_start_pulse_missing' field must be of type 'bool'"
        self._wrn_laser_2_start_pulse_missing = value

    @property
    def wrn_can_interface_blocked(self):
        """Message field 'wrn_can_interface_blocked'."""
        return self._wrn_can_interface_blocked

    @wrn_can_interface_blocked.setter
    def wrn_can_interface_blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_can_interface_blocked' field must be of type 'bool'"
        self._wrn_can_interface_blocked = value

    @property
    def wrn_eth_interface_blocked(self):
        """Message field 'wrn_eth_interface_blocked'."""
        return self._wrn_eth_interface_blocked

    @wrn_eth_interface_blocked.setter
    def wrn_eth_interface_blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_eth_interface_blocked' field must be of type 'bool'"
        self._wrn_eth_interface_blocked = value

    @property
    def wrn_incorrect_can_data_rcvd(self):
        """Message field 'wrn_incorrect_can_data_rcvd'."""
        return self._wrn_incorrect_can_data_rcvd

    @wrn_incorrect_can_data_rcvd.setter
    def wrn_incorrect_can_data_rcvd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_incorrect_can_data_rcvd' field must be of type 'bool'"
        self._wrn_incorrect_can_data_rcvd = value

    @property
    def wrn_int_incorrect_scan_data(self):
        """Message field 'wrn_int_incorrect_scan_data'."""
        return self._wrn_int_incorrect_scan_data

    @wrn_int_incorrect_scan_data.setter
    def wrn_int_incorrect_scan_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_int_incorrect_scan_data' field must be of type 'bool'"
        self._wrn_int_incorrect_scan_data = value

    @property
    def wrn_eth_unkwn_incomplete_data(self):
        """Message field 'wrn_eth_unkwn_incomplete_data'."""
        return self._wrn_eth_unkwn_incomplete_data

    @wrn_eth_unkwn_incomplete_data.setter
    def wrn_eth_unkwn_incomplete_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_eth_unkwn_incomplete_data' field must be of type 'bool'"
        self._wrn_eth_unkwn_incomplete_data = value

    @property
    def wrn_incorrect_or_forbidden_cmd_rcvd(self):
        """Message field 'wrn_incorrect_or_forbidden_cmd_rcvd'."""
        return self._wrn_incorrect_or_forbidden_cmd_rcvd

    @wrn_incorrect_or_forbidden_cmd_rcvd.setter
    def wrn_incorrect_or_forbidden_cmd_rcvd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_incorrect_or_forbidden_cmd_rcvd' field must be of type 'bool'"
        self._wrn_incorrect_or_forbidden_cmd_rcvd = value

    @property
    def wrn_memory_access_failure(self):
        """Message field 'wrn_memory_access_failure'."""
        return self._wrn_memory_access_failure

    @wrn_memory_access_failure.setter
    def wrn_memory_access_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_memory_access_failure' field must be of type 'bool'"
        self._wrn_memory_access_failure = value

    @property
    def wrn_int_overflow(self):
        """Message field 'wrn_int_overflow'."""
        return self._wrn_int_overflow

    @wrn_int_overflow.setter
    def wrn_int_overflow(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_int_overflow' field must be of type 'bool'"
        self._wrn_int_overflow = value

    @property
    def wrn_ego_motion_data_missing(self):
        """Message field 'wrn_ego_motion_data_missing'."""
        return self._wrn_ego_motion_data_missing

    @wrn_ego_motion_data_missing.setter
    def wrn_ego_motion_data_missing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_ego_motion_data_missing' field must be of type 'bool'"
        self._wrn_ego_motion_data_missing = value

    @property
    def wrn_incorrect_mounting_params(self):
        """Message field 'wrn_incorrect_mounting_params'."""
        return self._wrn_incorrect_mounting_params

    @wrn_incorrect_mounting_params.setter
    def wrn_incorrect_mounting_params(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_incorrect_mounting_params' field must be of type 'bool'"
        self._wrn_incorrect_mounting_params = value

    @property
    def wrn_no_obj_comp_due_to_scan_freq(self):
        """Message field 'wrn_no_obj_comp_due_to_scan_freq'."""
        return self._wrn_no_obj_comp_due_to_scan_freq

    @wrn_no_obj_comp_due_to_scan_freq.setter
    def wrn_no_obj_comp_due_to_scan_freq(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrn_no_obj_comp_due_to_scan_freq' field must be of type 'bool'"
        self._wrn_no_obj_comp_due_to_scan_freq = value
