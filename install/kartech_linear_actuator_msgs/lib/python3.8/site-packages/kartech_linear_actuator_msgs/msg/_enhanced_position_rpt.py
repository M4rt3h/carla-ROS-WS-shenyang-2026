# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kartech_linear_actuator_msgs:msg/EnhancedPositionRpt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnhancedPositionRpt(type):
    """Metaclass of message 'EnhancedPositionRpt'."""

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
            module = import_type_support('kartech_linear_actuator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kartech_linear_actuator_msgs.msg.EnhancedPositionRpt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__enhanced_position_rpt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__enhanced_position_rpt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__enhanced_position_rpt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__enhanced_position_rpt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__enhanced_position_rpt

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


class EnhancedPositionRpt(metaclass=Metaclass_EnhancedPositionRpt):
    """Message class 'EnhancedPositionRpt'."""

    __slots__ = [
        '_header',
        '_shaft_extension',
        '_motor_overload_error',
        '_clutch_overload_error',
        '_motor_open_load_error',
        '_clutch_open_load_error',
        '_position_reach_error',
        '_hardware_warning_1_error',
        '_hardware_warning_2_error',
        '_motor_current',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'shaft_extension': 'double',
        'motor_overload_error': 'boolean',
        'clutch_overload_error': 'boolean',
        'motor_open_load_error': 'boolean',
        'clutch_open_load_error': 'boolean',
        'position_reach_error': 'boolean',
        'hardware_warning_1_error': 'boolean',
        'hardware_warning_2_error': 'boolean',
        'motor_current': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.shaft_extension = kwargs.get('shaft_extension', float())
        self.motor_overload_error = kwargs.get('motor_overload_error', bool())
        self.clutch_overload_error = kwargs.get('clutch_overload_error', bool())
        self.motor_open_load_error = kwargs.get('motor_open_load_error', bool())
        self.clutch_open_load_error = kwargs.get('clutch_open_load_error', bool())
        self.position_reach_error = kwargs.get('position_reach_error', bool())
        self.hardware_warning_1_error = kwargs.get('hardware_warning_1_error', bool())
        self.hardware_warning_2_error = kwargs.get('hardware_warning_2_error', bool())
        self.motor_current = kwargs.get('motor_current', int())

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
        if self.shaft_extension != other.shaft_extension:
            return False
        if self.motor_overload_error != other.motor_overload_error:
            return False
        if self.clutch_overload_error != other.clutch_overload_error:
            return False
        if self.motor_open_load_error != other.motor_open_load_error:
            return False
        if self.clutch_open_load_error != other.clutch_open_load_error:
            return False
        if self.position_reach_error != other.position_reach_error:
            return False
        if self.hardware_warning_1_error != other.hardware_warning_1_error:
            return False
        if self.hardware_warning_2_error != other.hardware_warning_2_error:
            return False
        if self.motor_current != other.motor_current:
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
    def shaft_extension(self):
        """Message field 'shaft_extension'."""
        return self._shaft_extension

    @shaft_extension.setter
    def shaft_extension(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'shaft_extension' field must be of type 'float'"
        self._shaft_extension = value

    @property
    def motor_overload_error(self):
        """Message field 'motor_overload_error'."""
        return self._motor_overload_error

    @motor_overload_error.setter
    def motor_overload_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_overload_error' field must be of type 'bool'"
        self._motor_overload_error = value

    @property
    def clutch_overload_error(self):
        """Message field 'clutch_overload_error'."""
        return self._clutch_overload_error

    @clutch_overload_error.setter
    def clutch_overload_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clutch_overload_error' field must be of type 'bool'"
        self._clutch_overload_error = value

    @property
    def motor_open_load_error(self):
        """Message field 'motor_open_load_error'."""
        return self._motor_open_load_error

    @motor_open_load_error.setter
    def motor_open_load_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_open_load_error' field must be of type 'bool'"
        self._motor_open_load_error = value

    @property
    def clutch_open_load_error(self):
        """Message field 'clutch_open_load_error'."""
        return self._clutch_open_load_error

    @clutch_open_load_error.setter
    def clutch_open_load_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clutch_open_load_error' field must be of type 'bool'"
        self._clutch_open_load_error = value

    @property
    def position_reach_error(self):
        """Message field 'position_reach_error'."""
        return self._position_reach_error

    @position_reach_error.setter
    def position_reach_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'position_reach_error' field must be of type 'bool'"
        self._position_reach_error = value

    @property
    def hardware_warning_1_error(self):
        """Message field 'hardware_warning_1_error'."""
        return self._hardware_warning_1_error

    @hardware_warning_1_error.setter
    def hardware_warning_1_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hardware_warning_1_error' field must be of type 'bool'"
        self._hardware_warning_1_error = value

    @property
    def hardware_warning_2_error(self):
        """Message field 'hardware_warning_2_error'."""
        return self._hardware_warning_2_error

    @hardware_warning_2_error.setter
    def hardware_warning_2_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hardware_warning_2_error' field must be of type 'bool'"
        self._hardware_warning_2_error = value

    @property
    def motor_current(self):
        """Message field 'motor_current'."""
        return self._motor_current

    @motor_current.setter
    def motor_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_current' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'motor_current' field must be an unsigned integer in [0, 65535]"
        self._motor_current = value
