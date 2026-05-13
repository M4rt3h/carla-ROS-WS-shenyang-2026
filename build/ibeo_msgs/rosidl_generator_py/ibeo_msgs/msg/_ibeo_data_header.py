# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/IbeoDataHeader.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IbeoDataHeader(type):
    """Metaclass of message 'IbeoDataHeader'."""

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
            module = import_type_support('ibeo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ibeo_msgs.msg.IbeoDataHeader')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ibeo_data_header
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ibeo_data_header
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ibeo_data_header
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ibeo_data_header
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ibeo_data_header

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IbeoDataHeader(metaclass=Metaclass_IbeoDataHeader):
    """Message class 'IbeoDataHeader'."""

    __slots__ = [
        '_previous_message_size',
        '_message_size',
        '_device_id',
        '_data_type_id',
        '_stamp',
    ]

    _fields_and_field_types = {
        'previous_message_size': 'uint32',
        'message_size': 'uint32',
        'device_id': 'uint8',
        'data_type_id': 'uint16',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.previous_message_size = kwargs.get('previous_message_size', int())
        self.message_size = kwargs.get('message_size', int())
        self.device_id = kwargs.get('device_id', int())
        self.data_type_id = kwargs.get('data_type_id', int())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.previous_message_size != other.previous_message_size:
            return False
        if self.message_size != other.message_size:
            return False
        if self.device_id != other.device_id:
            return False
        if self.data_type_id != other.data_type_id:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def previous_message_size(self):
        """Message field 'previous_message_size'."""
        return self._previous_message_size

    @previous_message_size.setter
    def previous_message_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'previous_message_size' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'previous_message_size' field must be an unsigned integer in [0, 4294967295]"
        self._previous_message_size = value

    @property
    def message_size(self):
        """Message field 'message_size'."""
        return self._message_size

    @message_size.setter
    def message_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'message_size' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'message_size' field must be an unsigned integer in [0, 4294967295]"
        self._message_size = value

    @property
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'device_id' field must be an unsigned integer in [0, 255]"
        self._device_id = value

    @property
    def data_type_id(self):
        """Message field 'data_type_id'."""
        return self._data_type_id

    @data_type_id.setter
    def data_type_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data_type_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'data_type_id' field must be an unsigned integer in [0, 65535]"
        self._data_type_id = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value
