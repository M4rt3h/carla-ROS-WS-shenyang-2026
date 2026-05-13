# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrValid2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrValid2(type):
    """Metaclass of message 'EsrValid2'."""

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
                'delphi_esr_msgs.msg.EsrValid2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_valid2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_valid2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_valid2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_valid2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_valid2

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


class EsrValid2(metaclass=Metaclass_EsrValid2):
    """Message class 'EsrValid2'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_mr_sn',
        '_mr_range',
        '_mr_range_rate',
        '_mr_angle',
        '_mr_power',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'mr_sn': 'uint8',
        'mr_range': 'float',
        'mr_range_rate': 'float',
        'mr_angle': 'float',
        'mr_power': 'int8',
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
        self.mr_sn = kwargs.get('mr_sn', int())
        self.mr_range = kwargs.get('mr_range', float())
        self.mr_range_rate = kwargs.get('mr_range_rate', float())
        self.mr_angle = kwargs.get('mr_angle', float())
        self.mr_power = kwargs.get('mr_power', int())

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
        if self.mr_sn != other.mr_sn:
            return False
        if self.mr_range != other.mr_range:
            return False
        if self.mr_range_rate != other.mr_range_rate:
            return False
        if self.mr_angle != other.mr_angle:
            return False
        if self.mr_power != other.mr_power:
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
    def mr_sn(self):
        """Message field 'mr_sn'."""
        return self._mr_sn

    @mr_sn.setter
    def mr_sn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mr_sn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mr_sn' field must be an unsigned integer in [0, 255]"
        self._mr_sn = value

    @property
    def mr_range(self):
        """Message field 'mr_range'."""
        return self._mr_range

    @mr_range.setter
    def mr_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mr_range' field must be of type 'float'"
        self._mr_range = value

    @property
    def mr_range_rate(self):
        """Message field 'mr_range_rate'."""
        return self._mr_range_rate

    @mr_range_rate.setter
    def mr_range_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mr_range_rate' field must be of type 'float'"
        self._mr_range_rate = value

    @property
    def mr_angle(self):
        """Message field 'mr_angle'."""
        return self._mr_angle

    @mr_angle.setter
    def mr_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mr_angle' field must be of type 'float'"
        self._mr_angle = value

    @property
    def mr_power(self):
        """Message field 'mr_power'."""
        return self._mr_power

    @mr_power.setter
    def mr_power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mr_power' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'mr_power' field must be an integer in [-128, 127]"
        self._mr_power = value
