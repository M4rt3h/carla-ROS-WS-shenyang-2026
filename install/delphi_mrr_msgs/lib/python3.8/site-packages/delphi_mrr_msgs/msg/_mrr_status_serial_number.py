# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/MrrStatusSerialNumber.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrrStatusSerialNumber(type):
    """Metaclass of message 'MrrStatusSerialNumber'."""

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
                'delphi_mrr_msgs.msg.MrrStatusSerialNumber')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrr_status_serial_number
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrr_status_serial_number
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrr_status_serial_number
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrr_status_serial_number
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrr_status_serial_number

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


class MrrStatusSerialNumber(metaclass=Metaclass_MrrStatusSerialNumber):
    """Message class 'MrrStatusSerialNumber'."""

    __slots__ = [
        '_header',
        '_can_sequence_number',
        '_can_serial_number',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_sequence_number': 'uint16',
        'can_serial_number': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_sequence_number = kwargs.get('can_sequence_number', int())
        self.can_serial_number = kwargs.get('can_serial_number', int())

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
        if self.can_sequence_number != other.can_sequence_number:
            return False
        if self.can_serial_number != other.can_serial_number:
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
    def can_sequence_number(self):
        """Message field 'can_sequence_number'."""
        return self._can_sequence_number

    @can_sequence_number.setter
    def can_sequence_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_sequence_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_sequence_number' field must be an unsigned integer in [0, 65535]"
        self._can_sequence_number = value

    @property
    def can_serial_number(self):
        """Message field 'can_serial_number'."""
        return self._can_serial_number

    @can_serial_number.setter
    def can_serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_serial_number' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'can_serial_number' field must be an unsigned integer in [0, 18446744073709551615]"
        self._can_serial_number = value
