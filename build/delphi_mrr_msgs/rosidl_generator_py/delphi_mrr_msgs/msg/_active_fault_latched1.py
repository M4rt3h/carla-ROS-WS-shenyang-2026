# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/ActiveFaultLatched1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActiveFaultLatched1(type):
    """Metaclass of message 'ActiveFaultLatched1'."""

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
            module = import_type_support('delphi_mrr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_mrr_msgs.msg.ActiveFaultLatched1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__active_fault_latched1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__active_fault_latched1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__active_fault_latched1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__active_fault_latched1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__active_fault_latched1

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


class ActiveFaultLatched1(metaclass=Metaclass_ActiveFaultLatched1):
    """Message class 'ActiveFaultLatched1'."""

    __slots__ = [
        '_header',
        '_active_flt_latched_byte7_bit7',
        '_active_flt_latched_byte7_bit6',
        '_active_flt_latched_byte7_bit5',
        '_active_flt_latched_byte7_bit4',
        '_arm_to_dsp_chksum_fault',
        '_dsp_to_arm_chksum_fault',
        '_host_to_arm_chksum_fault',
        '_arm_to_host_chksum_fault',
        '_loop_bw_out_of_range',
        '_dsp_overrun_fault',
        '_active_flt_latched_byte6_bit5',
        '_tuning_sensitivity_fault',
        '_saturated_tuning_freq_fault',
        '_local_osc_power_fault',
        '_transmitter_power_fault',
        '_active_flt_latched_byte6_bit0',
        '_active_flt_latched_byte5_bit7',
        '_active_flt_latched_byte5_bit6',
        '_xcvr_device_spi_fault',
        '_freq_synthesizer_spi_fault',
        '_analog_converter_devic_spi_fault',
        '_side_lobe_blockage',
        '_active_flt_latched_byte5_bit1',
        '_mnr_blocked',
        '_ecu_temp_high_fault',
        '_transmitter_temp_high_fault',
        '_alignment_routine_failed_fault',
        '_unreasonable_radar_data',
        '_microprocessor_temp_high_fault',
        '_vertical_alignment_out_of_range',
        '_horizontal_alignment_out_of_range',
        '_factory_alignment_mode',
        '_battery_low_fault',
        '_battery_high_fault',
        '_v_1p25_supply_out_of_range',
        '_active_flt_latched_byte3_bit4',
        '_thermistor_out_of_range',
        '_v_3p3_dac_supply_out_of_range',
        '_v_3p3_raw_supply_out_of_range',
        '_v_5_supply_out_of_range',
        '_transmitter_id_fault',
        '_active_flt_latched_byte2_bit6',
        '_active_flt_latched_byte2_bit5',
        '_active_flt_latched_byte2_bit4',
        '_active_flt_latched_byte2_bit3',
        '_active_flt_latched_byte2_bit2',
        '_pcan_missing_msg_fault',
        '_pcan_bus_off',
        '_active_flt_latched_byte1_bit7',
        '_active_flt_latched_byte1_bit6',
        '_instruction_set_check_fault',
        '_stack_overflow_fault',
        '_watchdog_fault',
        '_pll_lock_fault',
        '_active_flt_latched_byte1_bit1',
        '_ram_memory_test_fault',
        '_usc_validation_fault',
        '_active_flt_latched_byte0_bit6',
        '_active_flt_latched_byte0_bit5',
        '_active_flt_latched_byte0_bit4',
        '_active_flt_latched_byte0_bit3',
        '_keep_alive_checksum_fault',
        '_program_calibration_flash_checksum',
        '_application_flash_checksum_fault',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'active_flt_latched_byte7_bit7': 'boolean',
        'active_flt_latched_byte7_bit6': 'boolean',
        'active_flt_latched_byte7_bit5': 'boolean',
        'active_flt_latched_byte7_bit4': 'boolean',
        'arm_to_dsp_chksum_fault': 'boolean',
        'dsp_to_arm_chksum_fault': 'boolean',
        'host_to_arm_chksum_fault': 'boolean',
        'arm_to_host_chksum_fault': 'boolean',
        'loop_bw_out_of_range': 'boolean',
        'dsp_overrun_fault': 'boolean',
        'active_flt_latched_byte6_bit5': 'boolean',
        'tuning_sensitivity_fault': 'boolean',
        'saturated_tuning_freq_fault': 'boolean',
        'local_osc_power_fault': 'boolean',
        'transmitter_power_fault': 'boolean',
        'active_flt_latched_byte6_bit0': 'boolean',
        'active_flt_latched_byte5_bit7': 'boolean',
        'active_flt_latched_byte5_bit6': 'boolean',
        'xcvr_device_spi_fault': 'boolean',
        'freq_synthesizer_spi_fault': 'boolean',
        'analog_converter_devic_spi_fault': 'boolean',
        'side_lobe_blockage': 'boolean',
        'active_flt_latched_byte5_bit1': 'boolean',
        'mnr_blocked': 'boolean',
        'ecu_temp_high_fault': 'boolean',
        'transmitter_temp_high_fault': 'boolean',
        'alignment_routine_failed_fault': 'boolean',
        'unreasonable_radar_data': 'boolean',
        'microprocessor_temp_high_fault': 'boolean',
        'vertical_alignment_out_of_range': 'boolean',
        'horizontal_alignment_out_of_range': 'boolean',
        'factory_alignment_mode': 'boolean',
        'battery_low_fault': 'boolean',
        'battery_high_fault': 'boolean',
        'v_1p25_supply_out_of_range': 'boolean',
        'active_flt_latched_byte3_bit4': 'boolean',
        'thermistor_out_of_range': 'boolean',
        'v_3p3_dac_supply_out_of_range': 'boolean',
        'v_3p3_raw_supply_out_of_range': 'boolean',
        'v_5_supply_out_of_range': 'boolean',
        'transmitter_id_fault': 'boolean',
        'active_flt_latched_byte2_bit6': 'boolean',
        'active_flt_latched_byte2_bit5': 'boolean',
        'active_flt_latched_byte2_bit4': 'boolean',
        'active_flt_latched_byte2_bit3': 'boolean',
        'active_flt_latched_byte2_bit2': 'boolean',
        'pcan_missing_msg_fault': 'boolean',
        'pcan_bus_off': 'boolean',
        'active_flt_latched_byte1_bit7': 'boolean',
        'active_flt_latched_byte1_bit6': 'boolean',
        'instruction_set_check_fault': 'boolean',
        'stack_overflow_fault': 'boolean',
        'watchdog_fault': 'boolean',
        'pll_lock_fault': 'boolean',
        'active_flt_latched_byte1_bit1': 'boolean',
        'ram_memory_test_fault': 'boolean',
        'usc_validation_fault': 'boolean',
        'active_flt_latched_byte0_bit6': 'boolean',
        'active_flt_latched_byte0_bit5': 'boolean',
        'active_flt_latched_byte0_bit4': 'boolean',
        'active_flt_latched_byte0_bit3': 'boolean',
        'keep_alive_checksum_fault': 'boolean',
        'program_calibration_flash_checksum': 'boolean',
        'application_flash_checksum_fault': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        self.active_flt_latched_byte7_bit7 = kwargs.get('active_flt_latched_byte7_bit7', bool())
        self.active_flt_latched_byte7_bit6 = kwargs.get('active_flt_latched_byte7_bit6', bool())
        self.active_flt_latched_byte7_bit5 = kwargs.get('active_flt_latched_byte7_bit5', bool())
        self.active_flt_latched_byte7_bit4 = kwargs.get('active_flt_latched_byte7_bit4', bool())
        self.arm_to_dsp_chksum_fault = kwargs.get('arm_to_dsp_chksum_fault', bool())
        self.dsp_to_arm_chksum_fault = kwargs.get('dsp_to_arm_chksum_fault', bool())
        self.host_to_arm_chksum_fault = kwargs.get('host_to_arm_chksum_fault', bool())
        self.arm_to_host_chksum_fault = kwargs.get('arm_to_host_chksum_fault', bool())
        self.loop_bw_out_of_range = kwargs.get('loop_bw_out_of_range', bool())
        self.dsp_overrun_fault = kwargs.get('dsp_overrun_fault', bool())
        self.active_flt_latched_byte6_bit5 = kwargs.get('active_flt_latched_byte6_bit5', bool())
        self.tuning_sensitivity_fault = kwargs.get('tuning_sensitivity_fault', bool())
        self.saturated_tuning_freq_fault = kwargs.get('saturated_tuning_freq_fault', bool())
        self.local_osc_power_fault = kwargs.get('local_osc_power_fault', bool())
        self.transmitter_power_fault = kwargs.get('transmitter_power_fault', bool())
        self.active_flt_latched_byte6_bit0 = kwargs.get('active_flt_latched_byte6_bit0', bool())
        self.active_flt_latched_byte5_bit7 = kwargs.get('active_flt_latched_byte5_bit7', bool())
        self.active_flt_latched_byte5_bit6 = kwargs.get('active_flt_latched_byte5_bit6', bool())
        self.xcvr_device_spi_fault = kwargs.get('xcvr_device_spi_fault', bool())
        self.freq_synthesizer_spi_fault = kwargs.get('freq_synthesizer_spi_fault', bool())
        self.analog_converter_devic_spi_fault = kwargs.get('analog_converter_devic_spi_fault', bool())
        self.side_lobe_blockage = kwargs.get('side_lobe_blockage', bool())
        self.active_flt_latched_byte5_bit1 = kwargs.get('active_flt_latched_byte5_bit1', bool())
        self.mnr_blocked = kwargs.get('mnr_blocked', bool())
        self.ecu_temp_high_fault = kwargs.get('ecu_temp_high_fault', bool())
        self.transmitter_temp_high_fault = kwargs.get('transmitter_temp_high_fault', bool())
        self.alignment_routine_failed_fault = kwargs.get('alignment_routine_failed_fault', bool())
        self.unreasonable_radar_data = kwargs.get('unreasonable_radar_data', bool())
        self.microprocessor_temp_high_fault = kwargs.get('microprocessor_temp_high_fault', bool())
        self.vertical_alignment_out_of_range = kwargs.get('vertical_alignment_out_of_range', bool())
        self.horizontal_alignment_out_of_range = kwargs.get('horizontal_alignment_out_of_range', bool())
        self.factory_alignment_mode = kwargs.get('factory_alignment_mode', bool())
        self.battery_low_fault = kwargs.get('battery_low_fault', bool())
        self.battery_high_fault = kwargs.get('battery_high_fault', bool())
        self.v_1p25_supply_out_of_range = kwargs.get('v_1p25_supply_out_of_range', bool())
        self.active_flt_latched_byte3_bit4 = kwargs.get('active_flt_latched_byte3_bit4', bool())
        self.thermistor_out_of_range = kwargs.get('thermistor_out_of_range', bool())
        self.v_3p3_dac_supply_out_of_range = kwargs.get('v_3p3_dac_supply_out_of_range', bool())
        self.v_3p3_raw_supply_out_of_range = kwargs.get('v_3p3_raw_supply_out_of_range', bool())
        self.v_5_supply_out_of_range = kwargs.get('v_5_supply_out_of_range', bool())
        self.transmitter_id_fault = kwargs.get('transmitter_id_fault', bool())
        self.active_flt_latched_byte2_bit6 = kwargs.get('active_flt_latched_byte2_bit6', bool())
        self.active_flt_latched_byte2_bit5 = kwargs.get('active_flt_latched_byte2_bit5', bool())
        self.active_flt_latched_byte2_bit4 = kwargs.get('active_flt_latched_byte2_bit4', bool())
        self.active_flt_latched_byte2_bit3 = kwargs.get('active_flt_latched_byte2_bit3', bool())
        self.active_flt_latched_byte2_bit2 = kwargs.get('active_flt_latched_byte2_bit2', bool())
        self.pcan_missing_msg_fault = kwargs.get('pcan_missing_msg_fault', bool())
        self.pcan_bus_off = kwargs.get('pcan_bus_off', bool())
        self.active_flt_latched_byte1_bit7 = kwargs.get('active_flt_latched_byte1_bit7', bool())
        self.active_flt_latched_byte1_bit6 = kwargs.get('active_flt_latched_byte1_bit6', bool())
        self.instruction_set_check_fault = kwargs.get('instruction_set_check_fault', bool())
        self.stack_overflow_fault = kwargs.get('stack_overflow_fault', bool())
        self.watchdog_fault = kwargs.get('watchdog_fault', bool())
        self.pll_lock_fault = kwargs.get('pll_lock_fault', bool())
        self.active_flt_latched_byte1_bit1 = kwargs.get('active_flt_latched_byte1_bit1', bool())
        self.ram_memory_test_fault = kwargs.get('ram_memory_test_fault', bool())
        self.usc_validation_fault = kwargs.get('usc_validation_fault', bool())
        self.active_flt_latched_byte0_bit6 = kwargs.get('active_flt_latched_byte0_bit6', bool())
        self.active_flt_latched_byte0_bit5 = kwargs.get('active_flt_latched_byte0_bit5', bool())
        self.active_flt_latched_byte0_bit4 = kwargs.get('active_flt_latched_byte0_bit4', bool())
        self.active_flt_latched_byte0_bit3 = kwargs.get('active_flt_latched_byte0_bit3', bool())
        self.keep_alive_checksum_fault = kwargs.get('keep_alive_checksum_fault', bool())
        self.program_calibration_flash_checksum = kwargs.get('program_calibration_flash_checksum', bool())
        self.application_flash_checksum_fault = kwargs.get('application_flash_checksum_fault', bool())

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
        if self.active_flt_latched_byte7_bit7 != other.active_flt_latched_byte7_bit7:
            return False
        if self.active_flt_latched_byte7_bit6 != other.active_flt_latched_byte7_bit6:
            return False
        if self.active_flt_latched_byte7_bit5 != other.active_flt_latched_byte7_bit5:
            return False
        if self.active_flt_latched_byte7_bit4 != other.active_flt_latched_byte7_bit4:
            return False
        if self.arm_to_dsp_chksum_fault != other.arm_to_dsp_chksum_fault:
            return False
        if self.dsp_to_arm_chksum_fault != other.dsp_to_arm_chksum_fault:
            return False
        if self.host_to_arm_chksum_fault != other.host_to_arm_chksum_fault:
            return False
        if self.arm_to_host_chksum_fault != other.arm_to_host_chksum_fault:
            return False
        if self.loop_bw_out_of_range != other.loop_bw_out_of_range:
            return False
        if self.dsp_overrun_fault != other.dsp_overrun_fault:
            return False
        if self.active_flt_latched_byte6_bit5 != other.active_flt_latched_byte6_bit5:
            return False
        if self.tuning_sensitivity_fault != other.tuning_sensitivity_fault:
            return False
        if self.saturated_tuning_freq_fault != other.saturated_tuning_freq_fault:
            return False
        if self.local_osc_power_fault != other.local_osc_power_fault:
            return False
        if self.transmitter_power_fault != other.transmitter_power_fault:
            return False
        if self.active_flt_latched_byte6_bit0 != other.active_flt_latched_byte6_bit0:
            return False
        if self.active_flt_latched_byte5_bit7 != other.active_flt_latched_byte5_bit7:
            return False
        if self.active_flt_latched_byte5_bit6 != other.active_flt_latched_byte5_bit6:
            return False
        if self.xcvr_device_spi_fault != other.xcvr_device_spi_fault:
            return False
        if self.freq_synthesizer_spi_fault != other.freq_synthesizer_spi_fault:
            return False
        if self.analog_converter_devic_spi_fault != other.analog_converter_devic_spi_fault:
            return False
        if self.side_lobe_blockage != other.side_lobe_blockage:
            return False
        if self.active_flt_latched_byte5_bit1 != other.active_flt_latched_byte5_bit1:
            return False
        if self.mnr_blocked != other.mnr_blocked:
            return False
        if self.ecu_temp_high_fault != other.ecu_temp_high_fault:
            return False
        if self.transmitter_temp_high_fault != other.transmitter_temp_high_fault:
            return False
        if self.alignment_routine_failed_fault != other.alignment_routine_failed_fault:
            return False
        if self.unreasonable_radar_data != other.unreasonable_radar_data:
            return False
        if self.microprocessor_temp_high_fault != other.microprocessor_temp_high_fault:
            return False
        if self.vertical_alignment_out_of_range != other.vertical_alignment_out_of_range:
            return False
        if self.horizontal_alignment_out_of_range != other.horizontal_alignment_out_of_range:
            return False
        if self.factory_alignment_mode != other.factory_alignment_mode:
            return False
        if self.battery_low_fault != other.battery_low_fault:
            return False
        if self.battery_high_fault != other.battery_high_fault:
            return False
        if self.v_1p25_supply_out_of_range != other.v_1p25_supply_out_of_range:
            return False
        if self.active_flt_latched_byte3_bit4 != other.active_flt_latched_byte3_bit4:
            return False
        if self.thermistor_out_of_range != other.thermistor_out_of_range:
            return False
        if self.v_3p3_dac_supply_out_of_range != other.v_3p3_dac_supply_out_of_range:
            return False
        if self.v_3p3_raw_supply_out_of_range != other.v_3p3_raw_supply_out_of_range:
            return False
        if self.v_5_supply_out_of_range != other.v_5_supply_out_of_range:
            return False
        if self.transmitter_id_fault != other.transmitter_id_fault:
            return False
        if self.active_flt_latched_byte2_bit6 != other.active_flt_latched_byte2_bit6:
            return False
        if self.active_flt_latched_byte2_bit5 != other.active_flt_latched_byte2_bit5:
            return False
        if self.active_flt_latched_byte2_bit4 != other.active_flt_latched_byte2_bit4:
            return False
        if self.active_flt_latched_byte2_bit3 != other.active_flt_latched_byte2_bit3:
            return False
        if self.active_flt_latched_byte2_bit2 != other.active_flt_latched_byte2_bit2:
            return False
        if self.pcan_missing_msg_fault != other.pcan_missing_msg_fault:
            return False
        if self.pcan_bus_off != other.pcan_bus_off:
            return False
        if self.active_flt_latched_byte1_bit7 != other.active_flt_latched_byte1_bit7:
            return False
        if self.active_flt_latched_byte1_bit6 != other.active_flt_latched_byte1_bit6:
            return False
        if self.instruction_set_check_fault != other.instruction_set_check_fault:
            return False
        if self.stack_overflow_fault != other.stack_overflow_fault:
            return False
        if self.watchdog_fault != other.watchdog_fault:
            return False
        if self.pll_lock_fault != other.pll_lock_fault:
            return False
        if self.active_flt_latched_byte1_bit1 != other.active_flt_latched_byte1_bit1:
            return False
        if self.ram_memory_test_fault != other.ram_memory_test_fault:
            return False
        if self.usc_validation_fault != other.usc_validation_fault:
            return False
        if self.active_flt_latched_byte0_bit6 != other.active_flt_latched_byte0_bit6:
            return False
        if self.active_flt_latched_byte0_bit5 != other.active_flt_latched_byte0_bit5:
            return False
        if self.active_flt_latched_byte0_bit4 != other.active_flt_latched_byte0_bit4:
            return False
        if self.active_flt_latched_byte0_bit3 != other.active_flt_latched_byte0_bit3:
            return False
        if self.keep_alive_checksum_fault != other.keep_alive_checksum_fault:
            return False
        if self.program_calibration_flash_checksum != other.program_calibration_flash_checksum:
            return False
        if self.application_flash_checksum_fault != other.application_flash_checksum_fault:
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
    def active_flt_latched_byte7_bit7(self):
        """Message field 'active_flt_latched_byte7_bit7'."""
        return self._active_flt_latched_byte7_bit7

    @active_flt_latched_byte7_bit7.setter
    def active_flt_latched_byte7_bit7(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte7_bit7' field must be of type 'bool'"
        self._active_flt_latched_byte7_bit7 = value

    @property
    def active_flt_latched_byte7_bit6(self):
        """Message field 'active_flt_latched_byte7_bit6'."""
        return self._active_flt_latched_byte7_bit6

    @active_flt_latched_byte7_bit6.setter
    def active_flt_latched_byte7_bit6(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte7_bit6' field must be of type 'bool'"
        self._active_flt_latched_byte7_bit6 = value

    @property
    def active_flt_latched_byte7_bit5(self):
        """Message field 'active_flt_latched_byte7_bit5'."""
        return self._active_flt_latched_byte7_bit5

    @active_flt_latched_byte7_bit5.setter
    def active_flt_latched_byte7_bit5(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte7_bit5' field must be of type 'bool'"
        self._active_flt_latched_byte7_bit5 = value

    @property
    def active_flt_latched_byte7_bit4(self):
        """Message field 'active_flt_latched_byte7_bit4'."""
        return self._active_flt_latched_byte7_bit4

    @active_flt_latched_byte7_bit4.setter
    def active_flt_latched_byte7_bit4(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte7_bit4' field must be of type 'bool'"
        self._active_flt_latched_byte7_bit4 = value

    @property
    def arm_to_dsp_chksum_fault(self):
        """Message field 'arm_to_dsp_chksum_fault'."""
        return self._arm_to_dsp_chksum_fault

    @arm_to_dsp_chksum_fault.setter
    def arm_to_dsp_chksum_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arm_to_dsp_chksum_fault' field must be of type 'bool'"
        self._arm_to_dsp_chksum_fault = value

    @property
    def dsp_to_arm_chksum_fault(self):
        """Message field 'dsp_to_arm_chksum_fault'."""
        return self._dsp_to_arm_chksum_fault

    @dsp_to_arm_chksum_fault.setter
    def dsp_to_arm_chksum_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_to_arm_chksum_fault' field must be of type 'bool'"
        self._dsp_to_arm_chksum_fault = value

    @property
    def host_to_arm_chksum_fault(self):
        """Message field 'host_to_arm_chksum_fault'."""
        return self._host_to_arm_chksum_fault

    @host_to_arm_chksum_fault.setter
    def host_to_arm_chksum_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'host_to_arm_chksum_fault' field must be of type 'bool'"
        self._host_to_arm_chksum_fault = value

    @property
    def arm_to_host_chksum_fault(self):
        """Message field 'arm_to_host_chksum_fault'."""
        return self._arm_to_host_chksum_fault

    @arm_to_host_chksum_fault.setter
    def arm_to_host_chksum_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arm_to_host_chksum_fault' field must be of type 'bool'"
        self._arm_to_host_chksum_fault = value

    @property
    def loop_bw_out_of_range(self):
        """Message field 'loop_bw_out_of_range'."""
        return self._loop_bw_out_of_range

    @loop_bw_out_of_range.setter
    def loop_bw_out_of_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'loop_bw_out_of_range' field must be of type 'bool'"
        self._loop_bw_out_of_range = value

    @property
    def dsp_overrun_fault(self):
        """Message field 'dsp_overrun_fault'."""
        return self._dsp_overrun_fault

    @dsp_overrun_fault.setter
    def dsp_overrun_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_overrun_fault' field must be of type 'bool'"
        self._dsp_overrun_fault = value

    @property
    def active_flt_latched_byte6_bit5(self):
        """Message field 'active_flt_latched_byte6_bit5'."""
        return self._active_flt_latched_byte6_bit5

    @active_flt_latched_byte6_bit5.setter
    def active_flt_latched_byte6_bit5(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte6_bit5' field must be of type 'bool'"
        self._active_flt_latched_byte6_bit5 = value

    @property
    def tuning_sensitivity_fault(self):
        """Message field 'tuning_sensitivity_fault'."""
        return self._tuning_sensitivity_fault

    @tuning_sensitivity_fault.setter
    def tuning_sensitivity_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tuning_sensitivity_fault' field must be of type 'bool'"
        self._tuning_sensitivity_fault = value

    @property
    def saturated_tuning_freq_fault(self):
        """Message field 'saturated_tuning_freq_fault'."""
        return self._saturated_tuning_freq_fault

    @saturated_tuning_freq_fault.setter
    def saturated_tuning_freq_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'saturated_tuning_freq_fault' field must be of type 'bool'"
        self._saturated_tuning_freq_fault = value

    @property
    def local_osc_power_fault(self):
        """Message field 'local_osc_power_fault'."""
        return self._local_osc_power_fault

    @local_osc_power_fault.setter
    def local_osc_power_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_osc_power_fault' field must be of type 'bool'"
        self._local_osc_power_fault = value

    @property
    def transmitter_power_fault(self):
        """Message field 'transmitter_power_fault'."""
        return self._transmitter_power_fault

    @transmitter_power_fault.setter
    def transmitter_power_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'transmitter_power_fault' field must be of type 'bool'"
        self._transmitter_power_fault = value

    @property
    def active_flt_latched_byte6_bit0(self):
        """Message field 'active_flt_latched_byte6_bit0'."""
        return self._active_flt_latched_byte6_bit0

    @active_flt_latched_byte6_bit0.setter
    def active_flt_latched_byte6_bit0(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte6_bit0' field must be of type 'bool'"
        self._active_flt_latched_byte6_bit0 = value

    @property
    def active_flt_latched_byte5_bit7(self):
        """Message field 'active_flt_latched_byte5_bit7'."""
        return self._active_flt_latched_byte5_bit7

    @active_flt_latched_byte5_bit7.setter
    def active_flt_latched_byte5_bit7(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte5_bit7' field must be of type 'bool'"
        self._active_flt_latched_byte5_bit7 = value

    @property
    def active_flt_latched_byte5_bit6(self):
        """Message field 'active_flt_latched_byte5_bit6'."""
        return self._active_flt_latched_byte5_bit6

    @active_flt_latched_byte5_bit6.setter
    def active_flt_latched_byte5_bit6(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte5_bit6' field must be of type 'bool'"
        self._active_flt_latched_byte5_bit6 = value

    @property
    def xcvr_device_spi_fault(self):
        """Message field 'xcvr_device_spi_fault'."""
        return self._xcvr_device_spi_fault

    @xcvr_device_spi_fault.setter
    def xcvr_device_spi_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'xcvr_device_spi_fault' field must be of type 'bool'"
        self._xcvr_device_spi_fault = value

    @property
    def freq_synthesizer_spi_fault(self):
        """Message field 'freq_synthesizer_spi_fault'."""
        return self._freq_synthesizer_spi_fault

    @freq_synthesizer_spi_fault.setter
    def freq_synthesizer_spi_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'freq_synthesizer_spi_fault' field must be of type 'bool'"
        self._freq_synthesizer_spi_fault = value

    @property
    def analog_converter_devic_spi_fault(self):
        """Message field 'analog_converter_devic_spi_fault'."""
        return self._analog_converter_devic_spi_fault

    @analog_converter_devic_spi_fault.setter
    def analog_converter_devic_spi_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'analog_converter_devic_spi_fault' field must be of type 'bool'"
        self._analog_converter_devic_spi_fault = value

    @property
    def side_lobe_blockage(self):
        """Message field 'side_lobe_blockage'."""
        return self._side_lobe_blockage

    @side_lobe_blockage.setter
    def side_lobe_blockage(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'side_lobe_blockage' field must be of type 'bool'"
        self._side_lobe_blockage = value

    @property
    def active_flt_latched_byte5_bit1(self):
        """Message field 'active_flt_latched_byte5_bit1'."""
        return self._active_flt_latched_byte5_bit1

    @active_flt_latched_byte5_bit1.setter
    def active_flt_latched_byte5_bit1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte5_bit1' field must be of type 'bool'"
        self._active_flt_latched_byte5_bit1 = value

    @property
    def mnr_blocked(self):
        """Message field 'mnr_blocked'."""
        return self._mnr_blocked

    @mnr_blocked.setter
    def mnr_blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mnr_blocked' field must be of type 'bool'"
        self._mnr_blocked = value

    @property
    def ecu_temp_high_fault(self):
        """Message field 'ecu_temp_high_fault'."""
        return self._ecu_temp_high_fault

    @ecu_temp_high_fault.setter
    def ecu_temp_high_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ecu_temp_high_fault' field must be of type 'bool'"
        self._ecu_temp_high_fault = value

    @property
    def transmitter_temp_high_fault(self):
        """Message field 'transmitter_temp_high_fault'."""
        return self._transmitter_temp_high_fault

    @transmitter_temp_high_fault.setter
    def transmitter_temp_high_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'transmitter_temp_high_fault' field must be of type 'bool'"
        self._transmitter_temp_high_fault = value

    @property
    def alignment_routine_failed_fault(self):
        """Message field 'alignment_routine_failed_fault'."""
        return self._alignment_routine_failed_fault

    @alignment_routine_failed_fault.setter
    def alignment_routine_failed_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'alignment_routine_failed_fault' field must be of type 'bool'"
        self._alignment_routine_failed_fault = value

    @property
    def unreasonable_radar_data(self):
        """Message field 'unreasonable_radar_data'."""
        return self._unreasonable_radar_data

    @unreasonable_radar_data.setter
    def unreasonable_radar_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'unreasonable_radar_data' field must be of type 'bool'"
        self._unreasonable_radar_data = value

    @property
    def microprocessor_temp_high_fault(self):
        """Message field 'microprocessor_temp_high_fault'."""
        return self._microprocessor_temp_high_fault

    @microprocessor_temp_high_fault.setter
    def microprocessor_temp_high_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'microprocessor_temp_high_fault' field must be of type 'bool'"
        self._microprocessor_temp_high_fault = value

    @property
    def vertical_alignment_out_of_range(self):
        """Message field 'vertical_alignment_out_of_range'."""
        return self._vertical_alignment_out_of_range

    @vertical_alignment_out_of_range.setter
    def vertical_alignment_out_of_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vertical_alignment_out_of_range' field must be of type 'bool'"
        self._vertical_alignment_out_of_range = value

    @property
    def horizontal_alignment_out_of_range(self):
        """Message field 'horizontal_alignment_out_of_range'."""
        return self._horizontal_alignment_out_of_range

    @horizontal_alignment_out_of_range.setter
    def horizontal_alignment_out_of_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'horizontal_alignment_out_of_range' field must be of type 'bool'"
        self._horizontal_alignment_out_of_range = value

    @property
    def factory_alignment_mode(self):
        """Message field 'factory_alignment_mode'."""
        return self._factory_alignment_mode

    @factory_alignment_mode.setter
    def factory_alignment_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'factory_alignment_mode' field must be of type 'bool'"
        self._factory_alignment_mode = value

    @property
    def battery_low_fault(self):
        """Message field 'battery_low_fault'."""
        return self._battery_low_fault

    @battery_low_fault.setter
    def battery_low_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'battery_low_fault' field must be of type 'bool'"
        self._battery_low_fault = value

    @property
    def battery_high_fault(self):
        """Message field 'battery_high_fault'."""
        return self._battery_high_fault

    @battery_high_fault.setter
    def battery_high_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'battery_high_fault' field must be of type 'bool'"
        self._battery_high_fault = value

    @property
    def v_1p25_supply_out_of_range(self):
        """Message field 'v_1p25_supply_out_of_range'."""
        return self._v_1p25_supply_out_of_range

    @v_1p25_supply_out_of_range.setter
    def v_1p25_supply_out_of_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'v_1p25_supply_out_of_range' field must be of type 'bool'"
        self._v_1p25_supply_out_of_range = value

    @property
    def active_flt_latched_byte3_bit4(self):
        """Message field 'active_flt_latched_byte3_bit4'."""
        return self._active_flt_latched_byte3_bit4

    @active_flt_latched_byte3_bit4.setter
    def active_flt_latched_byte3_bit4(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte3_bit4' field must be of type 'bool'"
        self._active_flt_latched_byte3_bit4 = value

    @property
    def thermistor_out_of_range(self):
        """Message field 'thermistor_out_of_range'."""
        return self._thermistor_out_of_range

    @thermistor_out_of_range.setter
    def thermistor_out_of_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'thermistor_out_of_range' field must be of type 'bool'"
        self._thermistor_out_of_range = value

    @property
    def v_3p3_dac_supply_out_of_range(self):
        """Message field 'v_3p3_dac_supply_out_of_range'."""
        return self._v_3p3_dac_supply_out_of_range

    @v_3p3_dac_supply_out_of_range.setter
    def v_3p3_dac_supply_out_of_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'v_3p3_dac_supply_out_of_range' field must be of type 'bool'"
        self._v_3p3_dac_supply_out_of_range = value

    @property
    def v_3p3_raw_supply_out_of_range(self):
        """Message field 'v_3p3_raw_supply_out_of_range'."""
        return self._v_3p3_raw_supply_out_of_range

    @v_3p3_raw_supply_out_of_range.setter
    def v_3p3_raw_supply_out_of_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'v_3p3_raw_supply_out_of_range' field must be of type 'bool'"
        self._v_3p3_raw_supply_out_of_range = value

    @property
    def v_5_supply_out_of_range(self):
        """Message field 'v_5_supply_out_of_range'."""
        return self._v_5_supply_out_of_range

    @v_5_supply_out_of_range.setter
    def v_5_supply_out_of_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'v_5_supply_out_of_range' field must be of type 'bool'"
        self._v_5_supply_out_of_range = value

    @property
    def transmitter_id_fault(self):
        """Message field 'transmitter_id_fault'."""
        return self._transmitter_id_fault

    @transmitter_id_fault.setter
    def transmitter_id_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'transmitter_id_fault' field must be of type 'bool'"
        self._transmitter_id_fault = value

    @property
    def active_flt_latched_byte2_bit6(self):
        """Message field 'active_flt_latched_byte2_bit6'."""
        return self._active_flt_latched_byte2_bit6

    @active_flt_latched_byte2_bit6.setter
    def active_flt_latched_byte2_bit6(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte2_bit6' field must be of type 'bool'"
        self._active_flt_latched_byte2_bit6 = value

    @property
    def active_flt_latched_byte2_bit5(self):
        """Message field 'active_flt_latched_byte2_bit5'."""
        return self._active_flt_latched_byte2_bit5

    @active_flt_latched_byte2_bit5.setter
    def active_flt_latched_byte2_bit5(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte2_bit5' field must be of type 'bool'"
        self._active_flt_latched_byte2_bit5 = value

    @property
    def active_flt_latched_byte2_bit4(self):
        """Message field 'active_flt_latched_byte2_bit4'."""
        return self._active_flt_latched_byte2_bit4

    @active_flt_latched_byte2_bit4.setter
    def active_flt_latched_byte2_bit4(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte2_bit4' field must be of type 'bool'"
        self._active_flt_latched_byte2_bit4 = value

    @property
    def active_flt_latched_byte2_bit3(self):
        """Message field 'active_flt_latched_byte2_bit3'."""
        return self._active_flt_latched_byte2_bit3

    @active_flt_latched_byte2_bit3.setter
    def active_flt_latched_byte2_bit3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte2_bit3' field must be of type 'bool'"
        self._active_flt_latched_byte2_bit3 = value

    @property
    def active_flt_latched_byte2_bit2(self):
        """Message field 'active_flt_latched_byte2_bit2'."""
        return self._active_flt_latched_byte2_bit2

    @active_flt_latched_byte2_bit2.setter
    def active_flt_latched_byte2_bit2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte2_bit2' field must be of type 'bool'"
        self._active_flt_latched_byte2_bit2 = value

    @property
    def pcan_missing_msg_fault(self):
        """Message field 'pcan_missing_msg_fault'."""
        return self._pcan_missing_msg_fault

    @pcan_missing_msg_fault.setter
    def pcan_missing_msg_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pcan_missing_msg_fault' field must be of type 'bool'"
        self._pcan_missing_msg_fault = value

    @property
    def pcan_bus_off(self):
        """Message field 'pcan_bus_off'."""
        return self._pcan_bus_off

    @pcan_bus_off.setter
    def pcan_bus_off(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pcan_bus_off' field must be of type 'bool'"
        self._pcan_bus_off = value

    @property
    def active_flt_latched_byte1_bit7(self):
        """Message field 'active_flt_latched_byte1_bit7'."""
        return self._active_flt_latched_byte1_bit7

    @active_flt_latched_byte1_bit7.setter
    def active_flt_latched_byte1_bit7(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte1_bit7' field must be of type 'bool'"
        self._active_flt_latched_byte1_bit7 = value

    @property
    def active_flt_latched_byte1_bit6(self):
        """Message field 'active_flt_latched_byte1_bit6'."""
        return self._active_flt_latched_byte1_bit6

    @active_flt_latched_byte1_bit6.setter
    def active_flt_latched_byte1_bit6(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte1_bit6' field must be of type 'bool'"
        self._active_flt_latched_byte1_bit6 = value

    @property
    def instruction_set_check_fault(self):
        """Message field 'instruction_set_check_fault'."""
        return self._instruction_set_check_fault

    @instruction_set_check_fault.setter
    def instruction_set_check_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'instruction_set_check_fault' field must be of type 'bool'"
        self._instruction_set_check_fault = value

    @property
    def stack_overflow_fault(self):
        """Message field 'stack_overflow_fault'."""
        return self._stack_overflow_fault

    @stack_overflow_fault.setter
    def stack_overflow_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stack_overflow_fault' field must be of type 'bool'"
        self._stack_overflow_fault = value

    @property
    def watchdog_fault(self):
        """Message field 'watchdog_fault'."""
        return self._watchdog_fault

    @watchdog_fault.setter
    def watchdog_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'watchdog_fault' field must be of type 'bool'"
        self._watchdog_fault = value

    @property
    def pll_lock_fault(self):
        """Message field 'pll_lock_fault'."""
        return self._pll_lock_fault

    @pll_lock_fault.setter
    def pll_lock_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pll_lock_fault' field must be of type 'bool'"
        self._pll_lock_fault = value

    @property
    def active_flt_latched_byte1_bit1(self):
        """Message field 'active_flt_latched_byte1_bit1'."""
        return self._active_flt_latched_byte1_bit1

    @active_flt_latched_byte1_bit1.setter
    def active_flt_latched_byte1_bit1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte1_bit1' field must be of type 'bool'"
        self._active_flt_latched_byte1_bit1 = value

    @property
    def ram_memory_test_fault(self):
        """Message field 'ram_memory_test_fault'."""
        return self._ram_memory_test_fault

    @ram_memory_test_fault.setter
    def ram_memory_test_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ram_memory_test_fault' field must be of type 'bool'"
        self._ram_memory_test_fault = value

    @property
    def usc_validation_fault(self):
        """Message field 'usc_validation_fault'."""
        return self._usc_validation_fault

    @usc_validation_fault.setter
    def usc_validation_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'usc_validation_fault' field must be of type 'bool'"
        self._usc_validation_fault = value

    @property
    def active_flt_latched_byte0_bit6(self):
        """Message field 'active_flt_latched_byte0_bit6'."""
        return self._active_flt_latched_byte0_bit6

    @active_flt_latched_byte0_bit6.setter
    def active_flt_latched_byte0_bit6(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte0_bit6' field must be of type 'bool'"
        self._active_flt_latched_byte0_bit6 = value

    @property
    def active_flt_latched_byte0_bit5(self):
        """Message field 'active_flt_latched_byte0_bit5'."""
        return self._active_flt_latched_byte0_bit5

    @active_flt_latched_byte0_bit5.setter
    def active_flt_latched_byte0_bit5(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte0_bit5' field must be of type 'bool'"
        self._active_flt_latched_byte0_bit5 = value

    @property
    def active_flt_latched_byte0_bit4(self):
        """Message field 'active_flt_latched_byte0_bit4'."""
        return self._active_flt_latched_byte0_bit4

    @active_flt_latched_byte0_bit4.setter
    def active_flt_latched_byte0_bit4(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte0_bit4' field must be of type 'bool'"
        self._active_flt_latched_byte0_bit4 = value

    @property
    def active_flt_latched_byte0_bit3(self):
        """Message field 'active_flt_latched_byte0_bit3'."""
        return self._active_flt_latched_byte0_bit3

    @active_flt_latched_byte0_bit3.setter
    def active_flt_latched_byte0_bit3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active_flt_latched_byte0_bit3' field must be of type 'bool'"
        self._active_flt_latched_byte0_bit3 = value

    @property
    def keep_alive_checksum_fault(self):
        """Message field 'keep_alive_checksum_fault'."""
        return self._keep_alive_checksum_fault

    @keep_alive_checksum_fault.setter
    def keep_alive_checksum_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'keep_alive_checksum_fault' field must be of type 'bool'"
        self._keep_alive_checksum_fault = value

    @property
    def program_calibration_flash_checksum(self):
        """Message field 'program_calibration_flash_checksum'."""
        return self._program_calibration_flash_checksum

    @program_calibration_flash_checksum.setter
    def program_calibration_flash_checksum(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'program_calibration_flash_checksum' field must be of type 'bool'"
        self._program_calibration_flash_checksum = value

    @property
    def application_flash_checksum_fault(self):
        """Message field 'application_flash_checksum_fault'."""
        return self._application_flash_checksum_fault

    @application_flash_checksum_fault.setter
    def application_flash_checksum_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'application_flash_checksum_fault' field must be of type 'bool'"
        self._application_flash_checksum_fault = value
