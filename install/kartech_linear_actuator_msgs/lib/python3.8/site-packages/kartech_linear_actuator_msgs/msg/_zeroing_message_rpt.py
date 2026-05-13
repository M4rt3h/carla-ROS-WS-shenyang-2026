# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kartech_linear_actuator_msgs:msg/ZeroingMessageRpt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ZeroingMessageRpt(type):
    """Metaclass of message 'ZeroingMessageRpt'."""

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
                'kartech_linear_actuator_msgs.msg.ZeroingMessageRpt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__zeroing_message_rpt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__zeroing_message_rpt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__zeroing_message_rpt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__zeroing_message_rpt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__zeroing_message_rpt

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


class ZeroingMessageRpt(metaclass=Metaclass_ZeroingMessageRpt):
    """Message class 'ZeroingMessageRpt'."""

    __slots__ = [
        '_header',
        '_chip_1_voltage',
        '_chip_2_voltage',
        '_chip_error_1',
        '_chip_error_2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'chip_1_voltage': 'uint16',
        'chip_2_voltage': 'uint16',
        'chip_error_1': 'uint8',
        'chip_error_2': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.chip_1_voltage = kwargs.get('chip_1_voltage', int())
        self.chip_2_voltage = kwargs.get('chip_2_voltage', int())
        self.chip_error_1 = kwargs.get('chip_error_1', int())
        self.chip_error_2 = kwargs.get('chip_error_2', int())

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
        if self.chip_1_voltage != other.chip_1_voltage:
            return False
        if self.chip_2_voltage != other.chip_2_voltage:
            return False
        if self.chip_error_1 != other.chip_error_1:
            return False
        if self.chip_error_2 != other.chip_error_2:
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
    def chip_1_voltage(self):
        """Message field 'chip_1_voltage'."""
        return self._chip_1_voltage

    @chip_1_voltage.setter
    def chip_1_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chip_1_voltage' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'chip_1_voltage' field must be an unsigned integer in [0, 65535]"
        self._chip_1_voltage = value

    @property
    def chip_2_voltage(self):
        """Message field 'chip_2_voltage'."""
        return self._chip_2_voltage

    @chip_2_voltage.setter
    def chip_2_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chip_2_voltage' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'chip_2_voltage' field must be an unsigned integer in [0, 65535]"
        self._chip_2_voltage = value

    @property
    def chip_error_1(self):
        """Message field 'chip_error_1'."""
        return self._chip_error_1

    @chip_error_1.setter
    def chip_error_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chip_error_1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chip_error_1' field must be an unsigned integer in [0, 255]"
        self._chip_error_1 = value

    @property
    def chip_error_2(self):
        """Message field 'chip_error_2'."""
        return self._chip_error_2

    @chip_error_2.setter
    def chip_error_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chip_error_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chip_error_2' field must be an unsigned integer in [0, 255]"
        self._chip_error_2 = value
