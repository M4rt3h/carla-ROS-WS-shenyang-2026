# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kartech_linear_actuator_msgs:msg/PositionCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionCmd(type):
    """Metaclass of message 'PositionCmd'."""

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
                'kartech_linear_actuator_msgs.msg.PositionCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_cmd

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


class PositionCmd(metaclass=Metaclass_PositionCmd):
    """Message class 'PositionCmd'."""

    __slots__ = [
        '_header',
        '_confirm',
        '_auto_reply',
        '_position',
        '_clutch_enable',
        '_motor_enable',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'confirm': 'boolean',
        'auto_reply': 'boolean',
        'position': 'double',
        'clutch_enable': 'boolean',
        'motor_enable': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.confirm = kwargs.get('confirm', bool())
        self.auto_reply = kwargs.get('auto_reply', bool())
        self.position = kwargs.get('position', float())
        self.clutch_enable = kwargs.get('clutch_enable', bool())
        self.motor_enable = kwargs.get('motor_enable', bool())

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
        if self.confirm != other.confirm:
            return False
        if self.auto_reply != other.auto_reply:
            return False
        if self.position != other.position:
            return False
        if self.clutch_enable != other.clutch_enable:
            return False
        if self.motor_enable != other.motor_enable:
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
    def confirm(self):
        """Message field 'confirm'."""
        return self._confirm

    @confirm.setter
    def confirm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'confirm' field must be of type 'bool'"
        self._confirm = value

    @property
    def auto_reply(self):
        """Message field 'auto_reply'."""
        return self._auto_reply

    @auto_reply.setter
    def auto_reply(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_reply' field must be of type 'bool'"
        self._auto_reply = value

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
        self._position = value

    @property
    def clutch_enable(self):
        """Message field 'clutch_enable'."""
        return self._clutch_enable

    @clutch_enable.setter
    def clutch_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clutch_enable' field must be of type 'bool'"
        self._clutch_enable = value

    @property
    def motor_enable(self):
        """Message field 'motor_enable'."""
        return self._motor_enable

    @motor_enable.setter
    def motor_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_enable' field must be of type 'bool'"
        self._motor_enable = value
