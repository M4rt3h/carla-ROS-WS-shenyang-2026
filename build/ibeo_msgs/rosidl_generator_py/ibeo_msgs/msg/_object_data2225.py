# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/ObjectData2225.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectData2225(type):
    """Metaclass of message 'ObjectData2225'."""

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
                'ibeo_msgs.msg.ObjectData2225')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_data2225
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_data2225
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_data2225
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_data2225
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_data2225

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from ibeo_msgs.msg import IbeoDataHeader
            if IbeoDataHeader.__class__._TYPE_SUPPORT is None:
                IbeoDataHeader.__class__.__import_type_support__()

            from ibeo_msgs.msg import Object2225
            if Object2225.__class__._TYPE_SUPPORT is None:
                Object2225.__class__.__import_type_support__()

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


class ObjectData2225(metaclass=Metaclass_ObjectData2225):
    """Message class 'ObjectData2225'."""

    __slots__ = [
        '_header',
        '_ibeo_header',
        '_mid_scan_timestamp',
        '_number_of_objects',
        '_object_list',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ibeo_header': 'ibeo_msgs/IbeoDataHeader',
        'mid_scan_timestamp': 'builtin_interfaces/Time',
        'number_of_objects': 'uint16',
        'object_list': 'sequence<ibeo_msgs/Object2225>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'IbeoDataHeader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Object2225')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ibeo_msgs.msg import IbeoDataHeader
        self.ibeo_header = kwargs.get('ibeo_header', IbeoDataHeader())
        from builtin_interfaces.msg import Time
        self.mid_scan_timestamp = kwargs.get('mid_scan_timestamp', Time())
        self.number_of_objects = kwargs.get('number_of_objects', int())
        self.object_list = kwargs.get('object_list', [])

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
        if self.ibeo_header != other.ibeo_header:
            return False
        if self.mid_scan_timestamp != other.mid_scan_timestamp:
            return False
        if self.number_of_objects != other.number_of_objects:
            return False
        if self.object_list != other.object_list:
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
    def ibeo_header(self):
        """Message field 'ibeo_header'."""
        return self._ibeo_header

    @ibeo_header.setter
    def ibeo_header(self, value):
        if __debug__:
            from ibeo_msgs.msg import IbeoDataHeader
            assert \
                isinstance(value, IbeoDataHeader), \
                "The 'ibeo_header' field must be a sub message of type 'IbeoDataHeader'"
        self._ibeo_header = value

    @property
    def mid_scan_timestamp(self):
        """Message field 'mid_scan_timestamp'."""
        return self._mid_scan_timestamp

    @mid_scan_timestamp.setter
    def mid_scan_timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'mid_scan_timestamp' field must be a sub message of type 'Time'"
        self._mid_scan_timestamp = value

    @property
    def number_of_objects(self):
        """Message field 'number_of_objects'."""
        return self._number_of_objects

    @number_of_objects.setter
    def number_of_objects(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_objects' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'number_of_objects' field must be an unsigned integer in [0, 65535]"
        self._number_of_objects = value

    @property
    def object_list(self):
        """Message field 'object_list'."""
        return self._object_list

    @object_list.setter
    def object_list(self, value):
        if __debug__:
            from ibeo_msgs.msg import Object2225
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Object2225) for v in value) and
                 True), \
                "The 'object_list' field must be a set or sequence and each value of type 'Object2225'"
        self._object_list = value
