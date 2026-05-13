# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/Object2271.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object2271(type):
    """Metaclass of message 'Object2271'."""

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
                'ibeo_msgs.msg.Object2271')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object2271
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object2271
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object2271
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object2271
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object2271

            from ibeo_msgs.msg import TrackedProperties
            if TrackedProperties.__class__._TYPE_SUPPORT is None:
                TrackedProperties.__class__.__import_type_support__()

            from ibeo_msgs.msg import UntrackedProperties
            if UntrackedProperties.__class__._TYPE_SUPPORT is None:
                UntrackedProperties.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Object2271(metaclass=Metaclass_Object2271):
    """Message class 'Object2271'."""

    __slots__ = [
        '_id',
        '_tracked_properties_available',
        '_untracked_properties_available',
        '_tracked_properties',
        '_untracked_properties',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'tracked_properties_available': 'boolean',
        'untracked_properties_available': 'boolean',
        'tracked_properties': 'ibeo_msgs/TrackedProperties',
        'untracked_properties': 'ibeo_msgs/UntrackedProperties',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'TrackedProperties'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'UntrackedProperties'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.tracked_properties_available = kwargs.get('tracked_properties_available', bool())
        self.untracked_properties_available = kwargs.get('untracked_properties_available', bool())
        from ibeo_msgs.msg import TrackedProperties
        self.tracked_properties = kwargs.get('tracked_properties', TrackedProperties())
        from ibeo_msgs.msg import UntrackedProperties
        self.untracked_properties = kwargs.get('untracked_properties', UntrackedProperties())

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
        if self.id != other.id:
            return False
        if self.tracked_properties_available != other.tracked_properties_available:
            return False
        if self.untracked_properties_available != other.untracked_properties_available:
            return False
        if self.tracked_properties != other.tracked_properties:
            return False
        if self.untracked_properties != other.untracked_properties:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @property
    def tracked_properties_available(self):
        """Message field 'tracked_properties_available'."""
        return self._tracked_properties_available

    @tracked_properties_available.setter
    def tracked_properties_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tracked_properties_available' field must be of type 'bool'"
        self._tracked_properties_available = value

    @property
    def untracked_properties_available(self):
        """Message field 'untracked_properties_available'."""
        return self._untracked_properties_available

    @untracked_properties_available.setter
    def untracked_properties_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'untracked_properties_available' field must be of type 'bool'"
        self._untracked_properties_available = value

    @property
    def tracked_properties(self):
        """Message field 'tracked_properties'."""
        return self._tracked_properties

    @tracked_properties.setter
    def tracked_properties(self, value):
        if __debug__:
            from ibeo_msgs.msg import TrackedProperties
            assert \
                isinstance(value, TrackedProperties), \
                "The 'tracked_properties' field must be a sub message of type 'TrackedProperties'"
        self._tracked_properties = value

    @property
    def untracked_properties(self):
        """Message field 'untracked_properties'."""
        return self._untracked_properties

    @untracked_properties.setter
    def untracked_properties(self, value):
        if __debug__:
            from ibeo_msgs.msg import UntrackedProperties
            assert \
                isinstance(value, UntrackedProperties), \
                "The 'untracked_properties' field must be a sub message of type 'UntrackedProperties'"
        self._untracked_properties = value
