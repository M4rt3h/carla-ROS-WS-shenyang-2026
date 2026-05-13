# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neobotix_usboard_msgs:msg/AnsToCmdConnect.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AnsToCmdConnect(type):
    """Metaclass of message 'AnsToCmdConnect'."""

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
                'neobotix_usboard_msgs.msg.AnsToCmdConnect')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ans_to_cmd_connect
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ans_to_cmd_connect
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ans_to_cmd_connect
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ans_to_cmd_connect
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ans_to_cmd_connect

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


class AnsToCmdConnect(metaclass=Metaclass_AnsToCmdConnect):
    """Message class 'AnsToCmdConnect'."""

    __slots__ = [
        '_header',
        '_command',
        '_cmd_connect_ans_d7',
        '_cmd_connect_ans_d6',
        '_cmd_connect_ans_d5',
        '_cmd_connect_ans_d4',
        '_cmd_connect_ans_d3',
        '_cmd_connect_ans_d2',
        '_cmd_connect_ans_d1',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'command': 'uint8',
        'cmd_connect_ans_d7': 'uint8',
        'cmd_connect_ans_d6': 'uint8',
        'cmd_connect_ans_d5': 'uint8',
        'cmd_connect_ans_d4': 'uint8',
        'cmd_connect_ans_d3': 'uint8',
        'cmd_connect_ans_d2': 'uint8',
        'cmd_connect_ans_d1': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        self.cmd_connect_ans_d7 = kwargs.get('cmd_connect_ans_d7', int())
        self.cmd_connect_ans_d6 = kwargs.get('cmd_connect_ans_d6', int())
        self.cmd_connect_ans_d5 = kwargs.get('cmd_connect_ans_d5', int())
        self.cmd_connect_ans_d4 = kwargs.get('cmd_connect_ans_d4', int())
        self.cmd_connect_ans_d3 = kwargs.get('cmd_connect_ans_d3', int())
        self.cmd_connect_ans_d2 = kwargs.get('cmd_connect_ans_d2', int())
        self.cmd_connect_ans_d1 = kwargs.get('cmd_connect_ans_d1', int())

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
        if self.cmd_connect_ans_d7 != other.cmd_connect_ans_d7:
            return False
        if self.cmd_connect_ans_d6 != other.cmd_connect_ans_d6:
            return False
        if self.cmd_connect_ans_d5 != other.cmd_connect_ans_d5:
            return False
        if self.cmd_connect_ans_d4 != other.cmd_connect_ans_d4:
            return False
        if self.cmd_connect_ans_d3 != other.cmd_connect_ans_d3:
            return False
        if self.cmd_connect_ans_d2 != other.cmd_connect_ans_d2:
            return False
        if self.cmd_connect_ans_d1 != other.cmd_connect_ans_d1:
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
    def cmd_connect_ans_d7(self):
        """Message field 'cmd_connect_ans_d7'."""
        return self._cmd_connect_ans_d7

    @cmd_connect_ans_d7.setter
    def cmd_connect_ans_d7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_connect_ans_d7' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd_connect_ans_d7' field must be an unsigned integer in [0, 255]"
        self._cmd_connect_ans_d7 = value

    @property
    def cmd_connect_ans_d6(self):
        """Message field 'cmd_connect_ans_d6'."""
        return self._cmd_connect_ans_d6

    @cmd_connect_ans_d6.setter
    def cmd_connect_ans_d6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_connect_ans_d6' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd_connect_ans_d6' field must be an unsigned integer in [0, 255]"
        self._cmd_connect_ans_d6 = value

    @property
    def cmd_connect_ans_d5(self):
        """Message field 'cmd_connect_ans_d5'."""
        return self._cmd_connect_ans_d5

    @cmd_connect_ans_d5.setter
    def cmd_connect_ans_d5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_connect_ans_d5' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd_connect_ans_d5' field must be an unsigned integer in [0, 255]"
        self._cmd_connect_ans_d5 = value

    @property
    def cmd_connect_ans_d4(self):
        """Message field 'cmd_connect_ans_d4'."""
        return self._cmd_connect_ans_d4

    @cmd_connect_ans_d4.setter
    def cmd_connect_ans_d4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_connect_ans_d4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd_connect_ans_d4' field must be an unsigned integer in [0, 255]"
        self._cmd_connect_ans_d4 = value

    @property
    def cmd_connect_ans_d3(self):
        """Message field 'cmd_connect_ans_d3'."""
        return self._cmd_connect_ans_d3

    @cmd_connect_ans_d3.setter
    def cmd_connect_ans_d3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_connect_ans_d3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd_connect_ans_d3' field must be an unsigned integer in [0, 255]"
        self._cmd_connect_ans_d3 = value

    @property
    def cmd_connect_ans_d2(self):
        """Message field 'cmd_connect_ans_d2'."""
        return self._cmd_connect_ans_d2

    @cmd_connect_ans_d2.setter
    def cmd_connect_ans_d2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_connect_ans_d2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd_connect_ans_d2' field must be an unsigned integer in [0, 255]"
        self._cmd_connect_ans_d2 = value

    @property
    def cmd_connect_ans_d1(self):
        """Message field 'cmd_connect_ans_d1'."""
        return self._cmd_connect_ans_d1

    @cmd_connect_ans_d1.setter
    def cmd_connect_ans_d1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_connect_ans_d1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd_connect_ans_d1' field must be an unsigned integer in [0, 255]"
        self._cmd_connect_ans_d1 = value
