# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrVehicle2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrVehicle2(type):
    """Metaclass of message 'EsrVehicle2'."""

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
                'delphi_esr_msgs.msg.EsrVehicle2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_vehicle2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_vehicle2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_vehicle2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_vehicle2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_vehicle2

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


class EsrVehicle2(metaclass=Metaclass_EsrVehicle2):
    """Message class 'EsrVehicle2'."""

    __slots__ = [
        '_header',
        '_scan_index_ack',
        '_use_angle_misalignment',
        '_clear_faults',
        '_high_yaw_angle',
        '_mr_only_transmit',
        '_lr_only_transmit',
        '_angle_misalignment',
        '_lateral_mounting_offset',
        '_radar_cmd_radiate',
        '_blockage_disable',
        '_maximum_tracks',
        '_turn_signal_status',
        '_vehicle_speed_validity',
        '_mmr_upside_down',
        '_grouping_mode',
        '_wiper_status',
        '_raw_data_enable',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'scan_index_ack': 'uint16',
        'use_angle_misalignment': 'boolean',
        'clear_faults': 'boolean',
        'high_yaw_angle': 'int8',
        'mr_only_transmit': 'boolean',
        'lr_only_transmit': 'boolean',
        'angle_misalignment': 'float',
        'lateral_mounting_offset': 'float',
        'radar_cmd_radiate': 'boolean',
        'blockage_disable': 'boolean',
        'maximum_tracks': 'uint8',
        'turn_signal_status': 'uint8',
        'vehicle_speed_validity': 'boolean',
        'mmr_upside_down': 'boolean',
        'grouping_mode': 'uint8',
        'wiper_status': 'boolean',
        'raw_data_enable': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.scan_index_ack = kwargs.get('scan_index_ack', int())
        self.use_angle_misalignment = kwargs.get('use_angle_misalignment', bool())
        self.clear_faults = kwargs.get('clear_faults', bool())
        self.high_yaw_angle = kwargs.get('high_yaw_angle', int())
        self.mr_only_transmit = kwargs.get('mr_only_transmit', bool())
        self.lr_only_transmit = kwargs.get('lr_only_transmit', bool())
        self.angle_misalignment = kwargs.get('angle_misalignment', float())
        self.lateral_mounting_offset = kwargs.get('lateral_mounting_offset', float())
        self.radar_cmd_radiate = kwargs.get('radar_cmd_radiate', bool())
        self.blockage_disable = kwargs.get('blockage_disable', bool())
        self.maximum_tracks = kwargs.get('maximum_tracks', int())
        self.turn_signal_status = kwargs.get('turn_signal_status', int())
        self.vehicle_speed_validity = kwargs.get('vehicle_speed_validity', bool())
        self.mmr_upside_down = kwargs.get('mmr_upside_down', bool())
        self.grouping_mode = kwargs.get('grouping_mode', int())
        self.wiper_status = kwargs.get('wiper_status', bool())
        self.raw_data_enable = kwargs.get('raw_data_enable', bool())

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
        if self.scan_index_ack != other.scan_index_ack:
            return False
        if self.use_angle_misalignment != other.use_angle_misalignment:
            return False
        if self.clear_faults != other.clear_faults:
            return False
        if self.high_yaw_angle != other.high_yaw_angle:
            return False
        if self.mr_only_transmit != other.mr_only_transmit:
            return False
        if self.lr_only_transmit != other.lr_only_transmit:
            return False
        if self.angle_misalignment != other.angle_misalignment:
            return False
        if self.lateral_mounting_offset != other.lateral_mounting_offset:
            return False
        if self.radar_cmd_radiate != other.radar_cmd_radiate:
            return False
        if self.blockage_disable != other.blockage_disable:
            return False
        if self.maximum_tracks != other.maximum_tracks:
            return False
        if self.turn_signal_status != other.turn_signal_status:
            return False
        if self.vehicle_speed_validity != other.vehicle_speed_validity:
            return False
        if self.mmr_upside_down != other.mmr_upside_down:
            return False
        if self.grouping_mode != other.grouping_mode:
            return False
        if self.wiper_status != other.wiper_status:
            return False
        if self.raw_data_enable != other.raw_data_enable:
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
    def scan_index_ack(self):
        """Message field 'scan_index_ack'."""
        return self._scan_index_ack

    @scan_index_ack.setter
    def scan_index_ack(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_index_ack' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scan_index_ack' field must be an unsigned integer in [0, 65535]"
        self._scan_index_ack = value

    @property
    def use_angle_misalignment(self):
        """Message field 'use_angle_misalignment'."""
        return self._use_angle_misalignment

    @use_angle_misalignment.setter
    def use_angle_misalignment(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_angle_misalignment' field must be of type 'bool'"
        self._use_angle_misalignment = value

    @property
    def clear_faults(self):
        """Message field 'clear_faults'."""
        return self._clear_faults

    @clear_faults.setter
    def clear_faults(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clear_faults' field must be of type 'bool'"
        self._clear_faults = value

    @property
    def high_yaw_angle(self):
        """Message field 'high_yaw_angle'."""
        return self._high_yaw_angle

    @high_yaw_angle.setter
    def high_yaw_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'high_yaw_angle' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'high_yaw_angle' field must be an integer in [-128, 127]"
        self._high_yaw_angle = value

    @property
    def mr_only_transmit(self):
        """Message field 'mr_only_transmit'."""
        return self._mr_only_transmit

    @mr_only_transmit.setter
    def mr_only_transmit(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mr_only_transmit' field must be of type 'bool'"
        self._mr_only_transmit = value

    @property
    def lr_only_transmit(self):
        """Message field 'lr_only_transmit'."""
        return self._lr_only_transmit

    @lr_only_transmit.setter
    def lr_only_transmit(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lr_only_transmit' field must be of type 'bool'"
        self._lr_only_transmit = value

    @property
    def angle_misalignment(self):
        """Message field 'angle_misalignment'."""
        return self._angle_misalignment

    @angle_misalignment.setter
    def angle_misalignment(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_misalignment' field must be of type 'float'"
        self._angle_misalignment = value

    @property
    def lateral_mounting_offset(self):
        """Message field 'lateral_mounting_offset'."""
        return self._lateral_mounting_offset

    @lateral_mounting_offset.setter
    def lateral_mounting_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_mounting_offset' field must be of type 'float'"
        self._lateral_mounting_offset = value

    @property
    def radar_cmd_radiate(self):
        """Message field 'radar_cmd_radiate'."""
        return self._radar_cmd_radiate

    @radar_cmd_radiate.setter
    def radar_cmd_radiate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'radar_cmd_radiate' field must be of type 'bool'"
        self._radar_cmd_radiate = value

    @property
    def blockage_disable(self):
        """Message field 'blockage_disable'."""
        return self._blockage_disable

    @blockage_disable.setter
    def blockage_disable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'blockage_disable' field must be of type 'bool'"
        self._blockage_disable = value

    @property
    def maximum_tracks(self):
        """Message field 'maximum_tracks'."""
        return self._maximum_tracks

    @maximum_tracks.setter
    def maximum_tracks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maximum_tracks' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'maximum_tracks' field must be an unsigned integer in [0, 255]"
        self._maximum_tracks = value

    @property
    def turn_signal_status(self):
        """Message field 'turn_signal_status'."""
        return self._turn_signal_status

    @turn_signal_status.setter
    def turn_signal_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_signal_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turn_signal_status' field must be an unsigned integer in [0, 255]"
        self._turn_signal_status = value

    @property
    def vehicle_speed_validity(self):
        """Message field 'vehicle_speed_validity'."""
        return self._vehicle_speed_validity

    @vehicle_speed_validity.setter
    def vehicle_speed_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vehicle_speed_validity' field must be of type 'bool'"
        self._vehicle_speed_validity = value

    @property
    def mmr_upside_down(self):
        """Message field 'mmr_upside_down'."""
        return self._mmr_upside_down

    @mmr_upside_down.setter
    def mmr_upside_down(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mmr_upside_down' field must be of type 'bool'"
        self._mmr_upside_down = value

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
    def wiper_status(self):
        """Message field 'wiper_status'."""
        return self._wiper_status

    @wiper_status.setter
    def wiper_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wiper_status' field must be of type 'bool'"
        self._wiper_status = value

    @property
    def raw_data_enable(self):
        """Message field 'raw_data_enable'."""
        return self._raw_data_enable

    @raw_data_enable.setter
    def raw_data_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'raw_data_enable' field must be of type 'bool'"
        self._raw_data_enable = value
