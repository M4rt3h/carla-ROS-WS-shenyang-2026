# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neobotix_usboard_msgs:msg/Command.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Command(type):
    """Metaclass of message 'Command'."""

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
            module = import_type_support('neobotix_usboard_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'neobotix_usboard_msgs.msg.Command')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__command

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


class Command(metaclass=Metaclass_Command):
    """Message class 'Command'."""

    __slots__ = [
        '_header',
        '_command',
        '_command_data',
        '_set_num',
        '_paraset_byte6',
        '_paraset_byte5',
        '_paraset_byte4',
        '_paraset_byte3',
        '_paraset_byte2',
        '_paraset_byte1',
        '_set_active_9to16',
        '_set_active_1to8',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'command': 'uint8',
        'command_data': 'uint64',
        'set_num': 'uint8',
        'paraset_byte6': 'uint8',
        'paraset_byte5': 'uint8',
        'paraset_byte4': 'uint8',
        'paraset_byte3': 'uint8',
        'paraset_byte2': 'uint8',
        'paraset_byte1': 'uint8',
        'set_active_9to16': 'uint8',
        'set_active_1to8': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.command = kwargs.get('command', int())
        self.command_data = kwargs.get('command_data', int())
        self.set_num = kwargs.get('set_num', int())
        self.paraset_byte6 = kwargs.get('paraset_byte6', int())
        self.paraset_byte5 = kwargs.get('paraset_byte5', int())
        self.paraset_byte4 = kwargs.get('paraset_byte4', int())
        self.paraset_byte3 = kwargs.get('paraset_byte3', int())
        self.paraset_byte2 = kwargs.get('paraset_byte2', int())
        self.paraset_byte1 = kwargs.get('paraset_byte1', int())
        self.set_active_9to16 = kwargs.get('set_active_9to16', int())
        self.set_active_1to8 = kwargs.get('set_active_1to8', int())

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
        if self.command != other.command:
            return False
        if self.command_data != other.command_data:
            return False
        if self.set_num != other.set_num:
            return False
        if self.paraset_byte6 != other.paraset_byte6:
            return False
        if self.paraset_byte5 != other.paraset_byte5:
            return False
        if self.paraset_byte4 != other.paraset_byte4:
            return False
        if self.paraset_byte3 != other.paraset_byte3:
            return False
        if self.paraset_byte2 != other.paraset_byte2:
            return False
        if self.paraset_byte1 != other.paraset_byte1:
            return False
        if self.set_active_9to16 != other.set_active_9to16:
            return False
        if self.set_active_1to8 != other.set_active_1to8:
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
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @property
    def command_data(self):
        """Message field 'command_data'."""
        return self._command_data

    @command_data.setter
    def command_data(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_data' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'command_data' field must be an unsigned integer in [0, 18446744073709551615]"
        self._command_data = value

    @property
    def set_num(self):
        """Message field 'set_num'."""
        return self._set_num

    @set_num.setter
    def set_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'set_num' field must be an unsigned integer in [0, 255]"
        self._set_num = value

    @property
    def paraset_byte6(self):
        """Message field 'paraset_byte6'."""
        return self._paraset_byte6

    @paraset_byte6.setter
    def paraset_byte6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte6' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte6' field must be an unsigned integer in [0, 255]"
        self._paraset_byte6 = value

    @property
    def paraset_byte5(self):
        """Message field 'paraset_byte5'."""
        return self._paraset_byte5

    @paraset_byte5.setter
    def paraset_byte5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte5' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte5' field must be an unsigned integer in [0, 255]"
        self._paraset_byte5 = value

    @property
    def paraset_byte4(self):
        """Message field 'paraset_byte4'."""
        return self._paraset_byte4

    @paraset_byte4.setter
    def paraset_byte4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte4' field must be an unsigned integer in [0, 255]"
        self._paraset_byte4 = value

    @property
    def paraset_byte3(self):
        """Message field 'paraset_byte3'."""
        return self._paraset_byte3

    @paraset_byte3.setter
    def paraset_byte3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte3' field must be an unsigned integer in [0, 255]"
        self._paraset_byte3 = value

    @property
    def paraset_byte2(self):
        """Message field 'paraset_byte2'."""
        return self._paraset_byte2

    @paraset_byte2.setter
    def paraset_byte2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte2' field must be an unsigned integer in [0, 255]"
        self._paraset_byte2 = value

    @property
    def paraset_byte1(self):
        """Message field 'paraset_byte1'."""
        return self._paraset_byte1

    @paraset_byte1.setter
    def paraset_byte1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte1' field must be an unsigned integer in [0, 255]"
        self._paraset_byte1 = value

    @property
    def set_active_9to16(self):
        """Message field 'set_active_9to16'."""
        return self._set_active_9to16

    @set_active_9to16.setter
    def set_active_9to16(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_active_9to16' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'set_active_9to16' field must be an unsigned integer in [0, 255]"
        self._set_active_9to16 = value

    @property
    def set_active_1to8(self):
        """Message field 'set_active_1to8'."""
        return self._set_active_1to8

    @set_active_1to8.setter
    def set_active_1to8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_active_1to8' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'set_active_1to8' field must be an unsigned integer in [0, 255]"
        self._set_active_1to8 = value
