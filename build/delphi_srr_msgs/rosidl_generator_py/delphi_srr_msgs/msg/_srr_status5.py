# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_srr_msgs:msg/SrrStatus5.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SrrStatus5(type):
    """Metaclass of message 'SrrStatus5'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CAN_TX_YAW_RATE_REF_QF_UNDEFINED': 0,
        'CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED': 1,
        'CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE': 2,
        'CAN_TX_YAW_RATE_REF_QF_ACCURATE': 3,
        'CAN_TX_YAW_RATE_RAW_QF_UNDEFINED': 0,
        'CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED': 1,
        'CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE': 2,
        'CAN_TX_YAW_RATE_RAW_QF_ACCURATE': 3,
        'CAN_TX_SYSTEM_STATUS_CONFIGURATION': 0,
        'CAN_TX_SYSTEM_STATUS_STARTUP': 1,
        'CAN_TX_SYSTEM_STATUS_RUNNING': 2,
        'CAN_TX_SYSTEM_STATUS_BLOCKED': 3,
        'CAN_TX_SYSTEM_STATUS_FAULTY': 4,
        'CAN_TX_SYSTEM_STATUS_SHUTDOWN': 5,
        'CAN_TX_SYSTEM_STATUS_HOT': 6,
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
                'delphi_srr_msgs.msg.SrrStatus5')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__srr_status5
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__srr_status5
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__srr_status5
            cls._TYPE_SUPPORT = module.type_support_msg__msg__srr_status5
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__srr_status5

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CAN_TX_YAW_RATE_REF_QF_UNDEFINED': cls.__constants['CAN_TX_YAW_RATE_REF_QF_UNDEFINED'],
            'CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED': cls.__constants['CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED'],
            'CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE': cls.__constants['CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE'],
            'CAN_TX_YAW_RATE_REF_QF_ACCURATE': cls.__constants['CAN_TX_YAW_RATE_REF_QF_ACCURATE'],
            'CAN_TX_YAW_RATE_RAW_QF_UNDEFINED': cls.__constants['CAN_TX_YAW_RATE_RAW_QF_UNDEFINED'],
            'CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED': cls.__constants['CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED'],
            'CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE': cls.__constants['CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE'],
            'CAN_TX_YAW_RATE_RAW_QF_ACCURATE': cls.__constants['CAN_TX_YAW_RATE_RAW_QF_ACCURATE'],
            'CAN_TX_SYSTEM_STATUS_CONFIGURATION': cls.__constants['CAN_TX_SYSTEM_STATUS_CONFIGURATION'],
            'CAN_TX_SYSTEM_STATUS_STARTUP': cls.__constants['CAN_TX_SYSTEM_STATUS_STARTUP'],
            'CAN_TX_SYSTEM_STATUS_RUNNING': cls.__constants['CAN_TX_SYSTEM_STATUS_RUNNING'],
            'CAN_TX_SYSTEM_STATUS_BLOCKED': cls.__constants['CAN_TX_SYSTEM_STATUS_BLOCKED'],
            'CAN_TX_SYSTEM_STATUS_FAULTY': cls.__constants['CAN_TX_SYSTEM_STATUS_FAULTY'],
            'CAN_TX_SYSTEM_STATUS_SHUTDOWN': cls.__constants['CAN_TX_SYSTEM_STATUS_SHUTDOWN'],
            'CAN_TX_SYSTEM_STATUS_HOT': cls.__constants['CAN_TX_SYSTEM_STATUS_HOT'],
        }

    @property
    def CAN_TX_YAW_RATE_REF_QF_UNDEFINED(self):
        """Message constant 'CAN_TX_YAW_RATE_REF_QF_UNDEFINED'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_YAW_RATE_REF_QF_UNDEFINED']

    @property
    def CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED(self):
        """Message constant 'CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED']

    @property
    def CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE(self):
        """Message constant 'CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE']

    @property
    def CAN_TX_YAW_RATE_REF_QF_ACCURATE(self):
        """Message constant 'CAN_TX_YAW_RATE_REF_QF_ACCURATE'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_YAW_RATE_REF_QF_ACCURATE']

    @property
    def CAN_TX_YAW_RATE_RAW_QF_UNDEFINED(self):
        """Message constant 'CAN_TX_YAW_RATE_RAW_QF_UNDEFINED'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_YAW_RATE_RAW_QF_UNDEFINED']

    @property
    def CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED(self):
        """Message constant 'CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED']

    @property
    def CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE(self):
        """Message constant 'CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE']

    @property
    def CAN_TX_YAW_RATE_RAW_QF_ACCURATE(self):
        """Message constant 'CAN_TX_YAW_RATE_RAW_QF_ACCURATE'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_YAW_RATE_RAW_QF_ACCURATE']

    @property
    def CAN_TX_SYSTEM_STATUS_CONFIGURATION(self):
        """Message constant 'CAN_TX_SYSTEM_STATUS_CONFIGURATION'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_SYSTEM_STATUS_CONFIGURATION']

    @property
    def CAN_TX_SYSTEM_STATUS_STARTUP(self):
        """Message constant 'CAN_TX_SYSTEM_STATUS_STARTUP'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_SYSTEM_STATUS_STARTUP']

    @property
    def CAN_TX_SYSTEM_STATUS_RUNNING(self):
        """Message constant 'CAN_TX_SYSTEM_STATUS_RUNNING'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_SYSTEM_STATUS_RUNNING']

    @property
    def CAN_TX_SYSTEM_STATUS_BLOCKED(self):
        """Message constant 'CAN_TX_SYSTEM_STATUS_BLOCKED'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_SYSTEM_STATUS_BLOCKED']

    @property
    def CAN_TX_SYSTEM_STATUS_FAULTY(self):
        """Message constant 'CAN_TX_SYSTEM_STATUS_FAULTY'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_SYSTEM_STATUS_FAULTY']

    @property
    def CAN_TX_SYSTEM_STATUS_SHUTDOWN(self):
        """Message constant 'CAN_TX_SYSTEM_STATUS_SHUTDOWN'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_SYSTEM_STATUS_SHUTDOWN']

    @property
    def CAN_TX_SYSTEM_STATUS_HOT(self):
        """Message constant 'CAN_TX_SYSTEM_STATUS_HOT'."""
        return Metaclass_SrrStatus5.__constants['CAN_TX_SYSTEM_STATUS_HOT']


class SrrStatus5(metaclass=Metaclass_SrrStatus5):
    """
    Message class 'SrrStatus5'.

    Constants:
      CAN_TX_YAW_RATE_REF_QF_UNDEFINED
      CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED
      CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE
      CAN_TX_YAW_RATE_REF_QF_ACCURATE
      CAN_TX_YAW_RATE_RAW_QF_UNDEFINED
      CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED
      CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE
      CAN_TX_YAW_RATE_RAW_QF_ACCURATE
      CAN_TX_SYSTEM_STATUS_CONFIGURATION
      CAN_TX_SYSTEM_STATUS_STARTUP
      CAN_TX_SYSTEM_STATUS_RUNNING
      CAN_TX_SYSTEM_STATUS_BLOCKED
      CAN_TX_SYSTEM_STATUS_FAULTY
      CAN_TX_SYSTEM_STATUS_SHUTDOWN
      CAN_TX_SYSTEM_STATUS_HOT
    """

    __slots__ = [
        '_header',
        '_disable_auto_align',
        '_can_tx_yaw_rate_ref_qf',
        '_can_tx_yaw_rate_raw_qf',
        '_can_tx_yaw_rate_reference',
        '_can_tx_yaw_rate_raw',
        '_can_tx_system_status',
        '_can_tx_outside_temperature',
        '_can_blockage_mnr_blocked',
        '_can_blockage_bb_blocked',
        '_can_blockage_radar_blocked',
        '_can_td_blocked',
        '_radar_tx_power_error',
        '_radar_lo_power_error',
        '_radar_data_sync_error',
        '_linearizer_spi_transfer_error',
        '_saturated_tuning_freq_error',
        '_rtn_spi_transfer_error',
        '_rrn_spi_transfer_error',
        '_video_port_capture_error',
        '_vertical_misalignment_error',
        '_tx_temperature_fault',
        '_transmitter_id_error',
        '_dsp_unit_cal_checksum_error',
        '_dsp_unit_cal_block_chcksm_error',
        '_dsp_tuning_sensitivity_error',
        '_dsp_loop_overrun_error',
        '_adc_spi_transfer_error',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'disable_auto_align': 'boolean',
        'can_tx_yaw_rate_ref_qf': 'uint8',
        'can_tx_yaw_rate_raw_qf': 'uint8',
        'can_tx_yaw_rate_reference': 'float',
        'can_tx_yaw_rate_raw': 'float',
        'can_tx_system_status': 'uint8',
        'can_tx_outside_temperature': 'int16',
        'can_blockage_mnr_blocked': 'boolean',
        'can_blockage_bb_blocked': 'boolean',
        'can_blockage_radar_blocked': 'boolean',
        'can_td_blocked': 'boolean',
        'radar_tx_power_error': 'boolean',
        'radar_lo_power_error': 'boolean',
        'radar_data_sync_error': 'boolean',
        'linearizer_spi_transfer_error': 'boolean',
        'saturated_tuning_freq_error': 'boolean',
        'rtn_spi_transfer_error': 'boolean',
        'rrn_spi_transfer_error': 'boolean',
        'video_port_capture_error': 'boolean',
        'vertical_misalignment_error': 'boolean',
        'tx_temperature_fault': 'boolean',
        'transmitter_id_error': 'boolean',
        'dsp_unit_cal_checksum_error': 'boolean',
        'dsp_unit_cal_block_chcksm_error': 'boolean',
        'dsp_tuning_sensitivity_error': 'boolean',
        'dsp_loop_overrun_error': 'boolean',
        'adc_spi_transfer_error': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
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
        self.disable_auto_align = kwargs.get('disable_auto_align', bool())
        self.can_tx_yaw_rate_ref_qf = kwargs.get('can_tx_yaw_rate_ref_qf', int())
        self.can_tx_yaw_rate_raw_qf = kwargs.get('can_tx_yaw_rate_raw_qf', int())
        self.can_tx_yaw_rate_reference = kwargs.get('can_tx_yaw_rate_reference', float())
        self.can_tx_yaw_rate_raw = kwargs.get('can_tx_yaw_rate_raw', float())
        self.can_tx_system_status = kwargs.get('can_tx_system_status', int())
        self.can_tx_outside_temperature = kwargs.get('can_tx_outside_temperature', int())
        self.can_blockage_mnr_blocked = kwargs.get('can_blockage_mnr_blocked', bool())
        self.can_blockage_bb_blocked = kwargs.get('can_blockage_bb_blocked', bool())
        self.can_blockage_radar_blocked = kwargs.get('can_blockage_radar_blocked', bool())
        self.can_td_blocked = kwargs.get('can_td_blocked', bool())
        self.radar_tx_power_error = kwargs.get('radar_tx_power_error', bool())
        self.radar_lo_power_error = kwargs.get('radar_lo_power_error', bool())
        self.radar_data_sync_error = kwargs.get('radar_data_sync_error', bool())
        self.linearizer_spi_transfer_error = kwargs.get('linearizer_spi_transfer_error', bool())
        self.saturated_tuning_freq_error = kwargs.get('saturated_tuning_freq_error', bool())
        self.rtn_spi_transfer_error = kwargs.get('rtn_spi_transfer_error', bool())
        self.rrn_spi_transfer_error = kwargs.get('rrn_spi_transfer_error', bool())
        self.video_port_capture_error = kwargs.get('video_port_capture_error', bool())
        self.vertical_misalignment_error = kwargs.get('vertical_misalignment_error', bool())
        self.tx_temperature_fault = kwargs.get('tx_temperature_fault', bool())
        self.transmitter_id_error = kwargs.get('transmitter_id_error', bool())
        self.dsp_unit_cal_checksum_error = kwargs.get('dsp_unit_cal_checksum_error', bool())
        self.dsp_unit_cal_block_chcksm_error = kwargs.get('dsp_unit_cal_block_chcksm_error', bool())
        self.dsp_tuning_sensitivity_error = kwargs.get('dsp_tuning_sensitivity_error', bool())
        self.dsp_loop_overrun_error = kwargs.get('dsp_loop_overrun_error', bool())
        self.adc_spi_transfer_error = kwargs.get('adc_spi_transfer_error', bool())

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
        if self.disable_auto_align != other.disable_auto_align:
            return False
        if self.can_tx_yaw_rate_ref_qf != other.can_tx_yaw_rate_ref_qf:
            return False
        if self.can_tx_yaw_rate_raw_qf != other.can_tx_yaw_rate_raw_qf:
            return False
        if self.can_tx_yaw_rate_reference != other.can_tx_yaw_rate_reference:
            return False
        if self.can_tx_yaw_rate_raw != other.can_tx_yaw_rate_raw:
            return False
        if self.can_tx_system_status != other.can_tx_system_status:
            return False
        if self.can_tx_outside_temperature != other.can_tx_outside_temperature:
            return False
        if self.can_blockage_mnr_blocked != other.can_blockage_mnr_blocked:
            return False
        if self.can_blockage_bb_blocked != other.can_blockage_bb_blocked:
            return False
        if self.can_blockage_radar_blocked != other.can_blockage_radar_blocked:
            return False
        if self.can_td_blocked != other.can_td_blocked:
            return False
        if self.radar_tx_power_error != other.radar_tx_power_error:
            return False
        if self.radar_lo_power_error != other.radar_lo_power_error:
            return False
        if self.radar_data_sync_error != other.radar_data_sync_error:
            return False
        if self.linearizer_spi_transfer_error != other.linearizer_spi_transfer_error:
            return False
        if self.saturated_tuning_freq_error != other.saturated_tuning_freq_error:
            return False
        if self.rtn_spi_transfer_error != other.rtn_spi_transfer_error:
            return False
        if self.rrn_spi_transfer_error != other.rrn_spi_transfer_error:
            return False
        if self.video_port_capture_error != other.video_port_capture_error:
            return False
        if self.vertical_misalignment_error != other.vertical_misalignment_error:
            return False
        if self.tx_temperature_fault != other.tx_temperature_fault:
            return False
        if self.transmitter_id_error != other.transmitter_id_error:
            return False
        if self.dsp_unit_cal_checksum_error != other.dsp_unit_cal_checksum_error:
            return False
        if self.dsp_unit_cal_block_chcksm_error != other.dsp_unit_cal_block_chcksm_error:
            return False
        if self.dsp_tuning_sensitivity_error != other.dsp_tuning_sensitivity_error:
            return False
        if self.dsp_loop_overrun_error != other.dsp_loop_overrun_error:
            return False
        if self.adc_spi_transfer_error != other.adc_spi_transfer_error:
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
    def disable_auto_align(self):
        """Message field 'disable_auto_align'."""
        return self._disable_auto_align

    @disable_auto_align.setter
    def disable_auto_align(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'disable_auto_align' field must be of type 'bool'"
        self._disable_auto_align = value

    @property
    def can_tx_yaw_rate_ref_qf(self):
        """Message field 'can_tx_yaw_rate_ref_qf'."""
        return self._can_tx_yaw_rate_ref_qf

    @can_tx_yaw_rate_ref_qf.setter
    def can_tx_yaw_rate_ref_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_yaw_rate_ref_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_yaw_rate_ref_qf' field must be an unsigned integer in [0, 255]"
        self._can_tx_yaw_rate_ref_qf = value

    @property
    def can_tx_yaw_rate_raw_qf(self):
        """Message field 'can_tx_yaw_rate_raw_qf'."""
        return self._can_tx_yaw_rate_raw_qf

    @can_tx_yaw_rate_raw_qf.setter
    def can_tx_yaw_rate_raw_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_yaw_rate_raw_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_yaw_rate_raw_qf' field must be an unsigned integer in [0, 255]"
        self._can_tx_yaw_rate_raw_qf = value

    @property
    def can_tx_yaw_rate_reference(self):
        """Message field 'can_tx_yaw_rate_reference'."""
        return self._can_tx_yaw_rate_reference

    @can_tx_yaw_rate_reference.setter
    def can_tx_yaw_rate_reference(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_yaw_rate_reference' field must be of type 'float'"
        self._can_tx_yaw_rate_reference = value

    @property
    def can_tx_yaw_rate_raw(self):
        """Message field 'can_tx_yaw_rate_raw'."""
        return self._can_tx_yaw_rate_raw

    @can_tx_yaw_rate_raw.setter
    def can_tx_yaw_rate_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_yaw_rate_raw' field must be of type 'float'"
        self._can_tx_yaw_rate_raw = value

    @property
    def can_tx_system_status(self):
        """Message field 'can_tx_system_status'."""
        return self._can_tx_system_status

    @can_tx_system_status.setter
    def can_tx_system_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_system_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_system_status' field must be an unsigned integer in [0, 255]"
        self._can_tx_system_status = value

    @property
    def can_tx_outside_temperature(self):
        """Message field 'can_tx_outside_temperature'."""
        return self._can_tx_outside_temperature

    @can_tx_outside_temperature.setter
    def can_tx_outside_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_outside_temperature' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'can_tx_outside_temperature' field must be an integer in [-32768, 32767]"
        self._can_tx_outside_temperature = value

    @property
    def can_blockage_mnr_blocked(self):
        """Message field 'can_blockage_mnr_blocked'."""
        return self._can_blockage_mnr_blocked

    @can_blockage_mnr_blocked.setter
    def can_blockage_mnr_blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_blockage_mnr_blocked' field must be of type 'bool'"
        self._can_blockage_mnr_blocked = value

    @property
    def can_blockage_bb_blocked(self):
        """Message field 'can_blockage_bb_blocked'."""
        return self._can_blockage_bb_blocked

    @can_blockage_bb_blocked.setter
    def can_blockage_bb_blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_blockage_bb_blocked' field must be of type 'bool'"
        self._can_blockage_bb_blocked = value

    @property
    def can_blockage_radar_blocked(self):
        """Message field 'can_blockage_radar_blocked'."""
        return self._can_blockage_radar_blocked

    @can_blockage_radar_blocked.setter
    def can_blockage_radar_blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_blockage_radar_blocked' field must be of type 'bool'"
        self._can_blockage_radar_blocked = value

    @property
    def can_td_blocked(self):
        """Message field 'can_td_blocked'."""
        return self._can_td_blocked

    @can_td_blocked.setter
    def can_td_blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_td_blocked' field must be of type 'bool'"
        self._can_td_blocked = value

    @property
    def radar_tx_power_error(self):
        """Message field 'radar_tx_power_error'."""
        return self._radar_tx_power_error

    @radar_tx_power_error.setter
    def radar_tx_power_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'radar_tx_power_error' field must be of type 'bool'"
        self._radar_tx_power_error = value

    @property
    def radar_lo_power_error(self):
        """Message field 'radar_lo_power_error'."""
        return self._radar_lo_power_error

    @radar_lo_power_error.setter
    def radar_lo_power_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'radar_lo_power_error' field must be of type 'bool'"
        self._radar_lo_power_error = value

    @property
    def radar_data_sync_error(self):
        """Message field 'radar_data_sync_error'."""
        return self._radar_data_sync_error

    @radar_data_sync_error.setter
    def radar_data_sync_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'radar_data_sync_error' field must be of type 'bool'"
        self._radar_data_sync_error = value

    @property
    def linearizer_spi_transfer_error(self):
        """Message field 'linearizer_spi_transfer_error'."""
        return self._linearizer_spi_transfer_error

    @linearizer_spi_transfer_error.setter
    def linearizer_spi_transfer_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'linearizer_spi_transfer_error' field must be of type 'bool'"
        self._linearizer_spi_transfer_error = value

    @property
    def saturated_tuning_freq_error(self):
        """Message field 'saturated_tuning_freq_error'."""
        return self._saturated_tuning_freq_error

    @saturated_tuning_freq_error.setter
    def saturated_tuning_freq_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'saturated_tuning_freq_error' field must be of type 'bool'"
        self._saturated_tuning_freq_error = value

    @property
    def rtn_spi_transfer_error(self):
        """Message field 'rtn_spi_transfer_error'."""
        return self._rtn_spi_transfer_error

    @rtn_spi_transfer_error.setter
    def rtn_spi_transfer_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rtn_spi_transfer_error' field must be of type 'bool'"
        self._rtn_spi_transfer_error = value

    @property
    def rrn_spi_transfer_error(self):
        """Message field 'rrn_spi_transfer_error'."""
        return self._rrn_spi_transfer_error

    @rrn_spi_transfer_error.setter
    def rrn_spi_transfer_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rrn_spi_transfer_error' field must be of type 'bool'"
        self._rrn_spi_transfer_error = value

    @property
    def video_port_capture_error(self):
        """Message field 'video_port_capture_error'."""
        return self._video_port_capture_error

    @video_port_capture_error.setter
    def video_port_capture_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'video_port_capture_error' field must be of type 'bool'"
        self._video_port_capture_error = value

    @property
    def vertical_misalignment_error(self):
        """Message field 'vertical_misalignment_error'."""
        return self._vertical_misalignment_error

    @vertical_misalignment_error.setter
    def vertical_misalignment_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vertical_misalignment_error' field must be of type 'bool'"
        self._vertical_misalignment_error = value

    @property
    def tx_temperature_fault(self):
        """Message field 'tx_temperature_fault'."""
        return self._tx_temperature_fault

    @tx_temperature_fault.setter
    def tx_temperature_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tx_temperature_fault' field must be of type 'bool'"
        self._tx_temperature_fault = value

    @property
    def transmitter_id_error(self):
        """Message field 'transmitter_id_error'."""
        return self._transmitter_id_error

    @transmitter_id_error.setter
    def transmitter_id_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'transmitter_id_error' field must be of type 'bool'"
        self._transmitter_id_error = value

    @property
    def dsp_unit_cal_checksum_error(self):
        """Message field 'dsp_unit_cal_checksum_error'."""
        return self._dsp_unit_cal_checksum_error

    @dsp_unit_cal_checksum_error.setter
    def dsp_unit_cal_checksum_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_unit_cal_checksum_error' field must be of type 'bool'"
        self._dsp_unit_cal_checksum_error = value

    @property
    def dsp_unit_cal_block_chcksm_error(self):
        """Message field 'dsp_unit_cal_block_chcksm_error'."""
        return self._dsp_unit_cal_block_chcksm_error

    @dsp_unit_cal_block_chcksm_error.setter
    def dsp_unit_cal_block_chcksm_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_unit_cal_block_chcksm_error' field must be of type 'bool'"
        self._dsp_unit_cal_block_chcksm_error = value

    @property
    def dsp_tuning_sensitivity_error(self):
        """Message field 'dsp_tuning_sensitivity_error'."""
        return self._dsp_tuning_sensitivity_error

    @dsp_tuning_sensitivity_error.setter
    def dsp_tuning_sensitivity_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_tuning_sensitivity_error' field must be of type 'bool'"
        self._dsp_tuning_sensitivity_error = value

    @property
    def dsp_loop_overrun_error(self):
        """Message field 'dsp_loop_overrun_error'."""
        return self._dsp_loop_overrun_error

    @dsp_loop_overrun_error.setter
    def dsp_loop_overrun_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_loop_overrun_error' field must be of type 'bool'"
        self._dsp_loop_overrun_error = value

    @property
    def adc_spi_transfer_error(self):
        """Message field 'adc_spi_transfer_error'."""
        return self._adc_spi_transfer_error

    @adc_spi_transfer_error.setter
    def adc_spi_transfer_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'adc_spi_transfer_error' field must be of type 'bool'"
        self._adc_spi_transfer_error = value
