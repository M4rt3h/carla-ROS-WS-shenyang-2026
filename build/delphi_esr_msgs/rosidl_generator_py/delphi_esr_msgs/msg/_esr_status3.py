# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrStatus3.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrStatus3(type):
    """Metaclass of message 'EsrStatus3'."""

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
                'delphi_esr_msgs.msg.EsrStatus3')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_status3
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_status3
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_status3
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_status3
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_status3

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


class EsrStatus3(metaclass=Metaclass_EsrStatus3):
    """Message class 'EsrStatus3'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_interface_version',
        '_hw_version',
        '_sw_version_host',
        '_serial_num',
        '_sw_version_pld',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'interface_version': 'uint8',
        'hw_version': 'uint8',
        'sw_version_host': 'string',
        'serial_num': 'string',
        'sw_version_pld': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.canmsg = kwargs.get('canmsg', str())
        self.interface_version = kwargs.get('interface_version', int())
        self.hw_version = kwargs.get('hw_version', int())
        self.sw_version_host = kwargs.get('sw_version_host', str())
        self.serial_num = kwargs.get('serial_num', str())
        self.sw_version_pld = kwargs.get('sw_version_pld', int())

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
        if self.canmsg != other.canmsg:
            return False
        if self.interface_version != other.interface_version:
            return False
        if self.hw_version != other.hw_version:
            return False
        if self.sw_version_host != other.sw_version_host:
            return False
        if self.serial_num != other.serial_num:
            return False
        if self.sw_version_pld != other.sw_version_pld:
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
    def canmsg(self):
        """Message field 'canmsg'."""
        return self._canmsg

    @canmsg.setter
    def canmsg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'canmsg' field must be of type 'str'"
        self._canmsg = value

    @property
    def interface_version(self):
        """Message field 'interface_version'."""
        return self._interface_version

    @interface_version.setter
    def interface_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'interface_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'interface_version' field must be an unsigned integer in [0, 255]"
        self._interface_version = value

    @property
    def hw_version(self):
        """Message field 'hw_version'."""
        return self._hw_version

    @hw_version.setter
    def hw_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hw_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hw_version' field must be an unsigned integer in [0, 255]"
        self._hw_version = value

    @property
    def sw_version_host(self):
        """Message field 'sw_version_host'."""
        return self._sw_version_host

    @sw_version_host.setter
    def sw_version_host(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sw_version_host' field must be of type 'str'"
        self._sw_version_host = value

    @property
    def serial_num(self):
        """Message field 'serial_num'."""
        return self._serial_num

    @serial_num.setter
    def serial_num(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'serial_num' field must be of type 'str'"
        self._serial_num = value

    @property
    def sw_version_pld(self):
        """Message field 'sw_version_pld'."""
        return self._sw_version_pld

    @sw_version_pld.setter
    def sw_version_pld(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sw_version_pld' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sw_version_pld' field must be an unsigned integer in [0, 255]"
        self._sw_version_pld = value
