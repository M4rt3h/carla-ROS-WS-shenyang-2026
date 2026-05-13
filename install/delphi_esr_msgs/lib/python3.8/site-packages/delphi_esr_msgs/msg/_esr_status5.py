# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrStatus5.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrStatus5(type):
    """Metaclass of message 'EsrStatus5'."""

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
                'delphi_esr_msgs.msg.EsrStatus5')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_status5
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_status5
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_status5
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_status5
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_status5

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


class EsrStatus5(metaclass=Metaclass_EsrStatus5):
    """Message class 'EsrStatus5'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_swbatt_a2d',
        '_ignp_a2d',
        '_temp1_a2d',
        '_temp2_a2d',
        '_supply_5va_a2d',
        '_supply_5vdx_a2d',
        '_supply_3p3v_a2d',
        '_supply_10v_a2d',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'swbatt_a2d': 'uint8',
        'ignp_a2d': 'uint8',
        'temp1_a2d': 'uint8',
        'temp2_a2d': 'uint8',
        'supply_5va_a2d': 'uint8',
        'supply_5vdx_a2d': 'uint8',
        'supply_3p3v_a2d': 'uint8',
        'supply_10v_a2d': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.canmsg = kwargs.get('canmsg', str())
        self.swbatt_a2d = kwargs.get('swbatt_a2d', int())
        self.ignp_a2d = kwargs.get('ignp_a2d', int())
        self.temp1_a2d = kwargs.get('temp1_a2d', int())
        self.temp2_a2d = kwargs.get('temp2_a2d', int())
        self.supply_5va_a2d = kwargs.get('supply_5va_a2d', int())
        self.supply_5vdx_a2d = kwargs.get('supply_5vdx_a2d', int())
        self.supply_3p3v_a2d = kwargs.get('supply_3p3v_a2d', int())
        self.supply_10v_a2d = kwargs.get('supply_10v_a2d', int())

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
        if self.swbatt_a2d != other.swbatt_a2d:
            return False
        if self.ignp_a2d != other.ignp_a2d:
            return False
        if self.temp1_a2d != other.temp1_a2d:
            return False
        if self.temp2_a2d != other.temp2_a2d:
            return False
        if self.supply_5va_a2d != other.supply_5va_a2d:
            return False
        if self.supply_5vdx_a2d != other.supply_5vdx_a2d:
            return False
        if self.supply_3p3v_a2d != other.supply_3p3v_a2d:
            return False
        if self.supply_10v_a2d != other.supply_10v_a2d:
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
    def swbatt_a2d(self):
        """Message field 'swbatt_a2d'."""
        return self._swbatt_a2d

    @swbatt_a2d.setter
    def swbatt_a2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'swbatt_a2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'swbatt_a2d' field must be an unsigned integer in [0, 255]"
        self._swbatt_a2d = value

    @property
    def ignp_a2d(self):
        """Message field 'ignp_a2d'."""
        return self._ignp_a2d

    @ignp_a2d.setter
    def ignp_a2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ignp_a2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ignp_a2d' field must be an unsigned integer in [0, 255]"
        self._ignp_a2d = value

    @property
    def temp1_a2d(self):
        """Message field 'temp1_a2d'."""
        return self._temp1_a2d

    @temp1_a2d.setter
    def temp1_a2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp1_a2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'temp1_a2d' field must be an unsigned integer in [0, 255]"
        self._temp1_a2d = value

    @property
    def temp2_a2d(self):
        """Message field 'temp2_a2d'."""
        return self._temp2_a2d

    @temp2_a2d.setter
    def temp2_a2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp2_a2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'temp2_a2d' field must be an unsigned integer in [0, 255]"
        self._temp2_a2d = value

    @property
    def supply_5va_a2d(self):
        """Message field 'supply_5va_a2d'."""
        return self._supply_5va_a2d

    @supply_5va_a2d.setter
    def supply_5va_a2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_5va_a2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_5va_a2d' field must be an unsigned integer in [0, 255]"
        self._supply_5va_a2d = value

    @property
    def supply_5vdx_a2d(self):
        """Message field 'supply_5vdx_a2d'."""
        return self._supply_5vdx_a2d

    @supply_5vdx_a2d.setter
    def supply_5vdx_a2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_5vdx_a2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_5vdx_a2d' field must be an unsigned integer in [0, 255]"
        self._supply_5vdx_a2d = value

    @property
    def supply_3p3v_a2d(self):
        """Message field 'supply_3p3v_a2d'."""
        return self._supply_3p3v_a2d

    @supply_3p3v_a2d.setter
    def supply_3p3v_a2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_3p3v_a2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_3p3v_a2d' field must be an unsigned integer in [0, 255]"
        self._supply_3p3v_a2d = value

    @property
    def supply_10v_a2d(self):
        """Message field 'supply_10v_a2d'."""
        return self._supply_10v_a2d

    @supply_10v_a2d.setter
    def supply_10v_a2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_10v_a2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_10v_a2d' field must be an unsigned integer in [0, 255]"
        self._supply_10v_a2d = value
