# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrValid1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrValid1(type):
    """Metaclass of message 'EsrValid1'."""

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
                'delphi_esr_msgs.msg.EsrValid1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_valid1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_valid1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_valid1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_valid1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_valid1

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


class EsrValid1(metaclass=Metaclass_EsrValid1):
    """Message class 'EsrValid1'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_lr_sn',
        '_lr_range',
        '_lr_range_rate',
        '_lr_angle',
        '_lr_power',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'lr_sn': 'uint8',
        'lr_range': 'float',
        'lr_range_rate': 'float',
        'lr_angle': 'float',
        'lr_power': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.canmsg = kwargs.get('canmsg', str())
        self.lr_sn = kwargs.get('lr_sn', int())
        self.lr_range = kwargs.get('lr_range', float())
        self.lr_range_rate = kwargs.get('lr_range_rate', float())
        self.lr_angle = kwargs.get('lr_angle', float())
        self.lr_power = kwargs.get('lr_power', int())

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
        if self.lr_sn != other.lr_sn:
            return False
        if self.lr_range != other.lr_range:
            return False
        if self.lr_range_rate != other.lr_range_rate:
            return False
        if self.lr_angle != other.lr_angle:
            return False
        if self.lr_power != other.lr_power:
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
    def lr_sn(self):
        """Message field 'lr_sn'."""
        return self._lr_sn

    @lr_sn.setter
    def lr_sn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lr_sn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lr_sn' field must be an unsigned integer in [0, 255]"
        self._lr_sn = value

    @property
    def lr_range(self):
        """Message field 'lr_range'."""
        return self._lr_range

    @lr_range.setter
    def lr_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lr_range' field must be of type 'float'"
        self._lr_range = value

    @property
    def lr_range_rate(self):
        """Message field 'lr_range_rate'."""
        return self._lr_range_rate

    @lr_range_rate.setter
    def lr_range_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lr_range_rate' field must be of type 'float'"
        self._lr_range_rate = value

    @property
    def lr_angle(self):
        """Message field 'lr_angle'."""
        return self._lr_angle

    @lr_angle.setter
    def lr_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lr_angle' field must be of type 'float'"
        self._lr_angle = value

    @property
    def lr_power(self):
        """Message field 'lr_power'."""
        return self._lr_power

    @lr_power.setter
    def lr_power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lr_power' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'lr_power' field must be an integer in [-128, 127]"
        self._lr_power = value
