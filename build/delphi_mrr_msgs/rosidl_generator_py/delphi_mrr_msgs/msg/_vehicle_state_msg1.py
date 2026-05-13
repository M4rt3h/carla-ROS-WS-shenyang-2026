# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/VehicleStateMsg1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStateMsg1(type):
    """Metaclass of message 'VehicleStateMsg1'."""

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
                'delphi_mrr_msgs.msg.VehicleStateMsg1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state_msg1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state_msg1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state_msg1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state_msg1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state_msg1

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


class VehicleStateMsg1(metaclass=Metaclass_VehicleStateMsg1):
    """Message class 'VehicleStateMsg1'."""

    __slots__ = [
        '_header',
        '_can_fcw_sensitivity_level',
        '_can_vehicle_stationary',
        '_can_intf_minor_version',
        '_can_intf_major_version',
        '_can_brake_pedal',
        '_can_high_wheel_slip',
        '_can_turn_signal_status',
        '_can_washer_front_cmd',
        '_can_wiper_front_cmd',
        '_can_wiper_speed_info',
        '_can_reverse_gear',
        '_can_beam_shape_actual_right',
        '_can_beam_shape_actual_left',
        '_can_main_beam_indication',
        '_can_vehicle_index',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_fcw_sensitivity_level': 'uint8',
        'can_vehicle_stationary': 'boolean',
        'can_intf_minor_version': 'uint8',
        'can_intf_major_version': 'uint8',
        'can_brake_pedal': 'uint8',
        'can_high_wheel_slip': 'boolean',
        'can_turn_signal_status': 'uint8',
        'can_washer_front_cmd': 'boolean',
        'can_wiper_front_cmd': 'boolean',
        'can_wiper_speed_info': 'uint8',
        'can_reverse_gear': 'boolean',
        'can_beam_shape_actual_right': 'uint8',
        'can_beam_shape_actual_left': 'uint8',
        'can_main_beam_indication': 'boolean',
        'can_vehicle_index': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_fcw_sensitivity_level = kwargs.get('can_fcw_sensitivity_level', int())
        self.can_vehicle_stationary = kwargs.get('can_vehicle_stationary', bool())
        self.can_intf_minor_version = kwargs.get('can_intf_minor_version', int())
        self.can_intf_major_version = kwargs.get('can_intf_major_version', int())
        self.can_brake_pedal = kwargs.get('can_brake_pedal', int())
        self.can_high_wheel_slip = kwargs.get('can_high_wheel_slip', bool())
        self.can_turn_signal_status = kwargs.get('can_turn_signal_status', int())
        self.can_washer_front_cmd = kwargs.get('can_washer_front_cmd', bool())
        self.can_wiper_front_cmd = kwargs.get('can_wiper_front_cmd', bool())
        self.can_wiper_speed_info = kwargs.get('can_wiper_speed_info', int())
        self.can_reverse_gear = kwargs.get('can_reverse_gear', bool())
        self.can_beam_shape_actual_right = kwargs.get('can_beam_shape_actual_right', int())
        self.can_beam_shape_actual_left = kwargs.get('can_beam_shape_actual_left', int())
        self.can_main_beam_indication = kwargs.get('can_main_beam_indication', bool())
        self.can_vehicle_index = kwargs.get('can_vehicle_index', int())

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
        if self.can_fcw_sensitivity_level != other.can_fcw_sensitivity_level:
            return False
        if self.can_vehicle_stationary != other.can_vehicle_stationary:
            return False
        if self.can_intf_minor_version != other.can_intf_minor_version:
            return False
        if self.can_intf_major_version != other.can_intf_major_version:
            return False
        if self.can_brake_pedal != other.can_brake_pedal:
            return False
        if self.can_high_wheel_slip != other.can_high_wheel_slip:
            return False
        if self.can_turn_signal_status != other.can_turn_signal_status:
            return False
        if self.can_washer_front_cmd != other.can_washer_front_cmd:
            return False
        if self.can_wiper_front_cmd != other.can_wiper_front_cmd:
            return False
        if self.can_wiper_speed_info != other.can_wiper_speed_info:
            return False
        if self.can_reverse_gear != other.can_reverse_gear:
            return False
        if self.can_beam_shape_actual_right != other.can_beam_shape_actual_right:
            return False
        if self.can_beam_shape_actual_left != other.can_beam_shape_actual_left:
            return False
        if self.can_main_beam_indication != other.can_main_beam_indication:
            return False
        if self.can_vehicle_index != other.can_vehicle_index:
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
    def can_fcw_sensitivity_level(self):
        """Message field 'can_fcw_sensitivity_level'."""
        return self._can_fcw_sensitivity_level

    @can_fcw_sensitivity_level.setter
    def can_fcw_sensitivity_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_fcw_sensitivity_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_fcw_sensitivity_level' field must be an unsigned integer in [0, 255]"
        self._can_fcw_sensitivity_level = value

    @property
    def can_vehicle_stationary(self):
        """Message field 'can_vehicle_stationary'."""
        return self._can_vehicle_stationary

    @can_vehicle_stationary.setter
    def can_vehicle_stationary(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_vehicle_stationary' field must be of type 'bool'"
        self._can_vehicle_stationary = value

    @property
    def can_intf_minor_version(self):
        """Message field 'can_intf_minor_version'."""
        return self._can_intf_minor_version

    @can_intf_minor_version.setter
    def can_intf_minor_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_intf_minor_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_intf_minor_version' field must be an unsigned integer in [0, 255]"
        self._can_intf_minor_version = value

    @property
    def can_intf_major_version(self):
        """Message field 'can_intf_major_version'."""
        return self._can_intf_major_version

    @can_intf_major_version.setter
    def can_intf_major_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_intf_major_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_intf_major_version' field must be an unsigned integer in [0, 255]"
        self._can_intf_major_version = value

    @property
    def can_brake_pedal(self):
        """Message field 'can_brake_pedal'."""
        return self._can_brake_pedal

    @can_brake_pedal.setter
    def can_brake_pedal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_brake_pedal' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_brake_pedal' field must be an unsigned integer in [0, 255]"
        self._can_brake_pedal = value

    @property
    def can_high_wheel_slip(self):
        """Message field 'can_high_wheel_slip'."""
        return self._can_high_wheel_slip

    @can_high_wheel_slip.setter
    def can_high_wheel_slip(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_high_wheel_slip' field must be of type 'bool'"
        self._can_high_wheel_slip = value

    @property
    def can_turn_signal_status(self):
        """Message field 'can_turn_signal_status'."""
        return self._can_turn_signal_status

    @can_turn_signal_status.setter
    def can_turn_signal_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_turn_signal_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_turn_signal_status' field must be an unsigned integer in [0, 255]"
        self._can_turn_signal_status = value

    @property
    def can_washer_front_cmd(self):
        """Message field 'can_washer_front_cmd'."""
        return self._can_washer_front_cmd

    @can_washer_front_cmd.setter
    def can_washer_front_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_washer_front_cmd' field must be of type 'bool'"
        self._can_washer_front_cmd = value

    @property
    def can_wiper_front_cmd(self):
        """Message field 'can_wiper_front_cmd'."""
        return self._can_wiper_front_cmd

    @can_wiper_front_cmd.setter
    def can_wiper_front_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_wiper_front_cmd' field must be of type 'bool'"
        self._can_wiper_front_cmd = value

    @property
    def can_wiper_speed_info(self):
        """Message field 'can_wiper_speed_info'."""
        return self._can_wiper_speed_info

    @can_wiper_speed_info.setter
    def can_wiper_speed_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_wiper_speed_info' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_wiper_speed_info' field must be an unsigned integer in [0, 255]"
        self._can_wiper_speed_info = value

    @property
    def can_reverse_gear(self):
        """Message field 'can_reverse_gear'."""
        return self._can_reverse_gear

    @can_reverse_gear.setter
    def can_reverse_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_reverse_gear' field must be of type 'bool'"
        self._can_reverse_gear = value

    @property
    def can_beam_shape_actual_right(self):
        """Message field 'can_beam_shape_actual_right'."""
        return self._can_beam_shape_actual_right

    @can_beam_shape_actual_right.setter
    def can_beam_shape_actual_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_beam_shape_actual_right' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_beam_shape_actual_right' field must be an unsigned integer in [0, 255]"
        self._can_beam_shape_actual_right = value

    @property
    def can_beam_shape_actual_left(self):
        """Message field 'can_beam_shape_actual_left'."""
        return self._can_beam_shape_actual_left

    @can_beam_shape_actual_left.setter
    def can_beam_shape_actual_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_beam_shape_actual_left' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_beam_shape_actual_left' field must be an unsigned integer in [0, 255]"
        self._can_beam_shape_actual_left = value

    @property
    def can_main_beam_indication(self):
        """Message field 'can_main_beam_indication'."""
        return self._can_main_beam_indication

    @can_main_beam_indication.setter
    def can_main_beam_indication(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_main_beam_indication' field must be of type 'bool'"
        self._can_main_beam_indication = value

    @property
    def can_vehicle_index(self):
        """Message field 'can_vehicle_index'."""
        return self._can_vehicle_index

    @can_vehicle_index.setter
    def can_vehicle_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_vehicle_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_vehicle_index' field must be an unsigned integer in [0, 65535]"
        self._can_vehicle_index = value
