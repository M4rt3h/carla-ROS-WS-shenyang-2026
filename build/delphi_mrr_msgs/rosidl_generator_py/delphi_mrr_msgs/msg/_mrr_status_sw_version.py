# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/MrrStatusSwVersion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrrStatusSwVersion(type):
    """Metaclass of message 'MrrStatusSwVersion'."""

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
                'delphi_mrr_msgs.msg.MrrStatusSwVersion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrr_status_sw_version
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrr_status_sw_version
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrr_status_sw_version
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrr_status_sw_version
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrr_status_sw_version

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


class MrrStatusSwVersion(metaclass=Metaclass_MrrStatusSwVersion):
    """Message class 'MrrStatusSwVersion'."""

    __slots__ = [
        '_header',
        '_can_pbl_field_revision',
        '_can_pbl_promote_revision',
        '_can_sw_field_revision',
        '_can_sw_promote_revision',
        '_can_sw_release_revision',
        '_can_pbl_release_revision',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_pbl_field_revision': 'uint8',
        'can_pbl_promote_revision': 'uint8',
        'can_sw_field_revision': 'uint8',
        'can_sw_promote_revision': 'uint8',
        'can_sw_release_revision': 'uint8',
        'can_pbl_release_revision': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        self.can_pbl_field_revision = kwargs.get('can_pbl_field_revision', int())
        self.can_pbl_promote_revision = kwargs.get('can_pbl_promote_revision', int())
        self.can_sw_field_revision = kwargs.get('can_sw_field_revision', int())
        self.can_sw_promote_revision = kwargs.get('can_sw_promote_revision', int())
        self.can_sw_release_revision = kwargs.get('can_sw_release_revision', int())
        self.can_pbl_release_revision = kwargs.get('can_pbl_release_revision', int())

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
        if self.can_pbl_field_revision != other.can_pbl_field_revision:
            return False
        if self.can_pbl_promote_revision != other.can_pbl_promote_revision:
            return False
        if self.can_sw_field_revision != other.can_sw_field_revision:
            return False
        if self.can_sw_promote_revision != other.can_sw_promote_revision:
            return False
        if self.can_sw_release_revision != other.can_sw_release_revision:
            return False
        if self.can_pbl_release_revision != other.can_pbl_release_revision:
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
    def can_pbl_field_revision(self):
        """Message field 'can_pbl_field_revision'."""
        return self._can_pbl_field_revision

    @can_pbl_field_revision.setter
    def can_pbl_field_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_pbl_field_revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_pbl_field_revision' field must be an unsigned integer in [0, 255]"
        self._can_pbl_field_revision = value

    @property
    def can_pbl_promote_revision(self):
        """Message field 'can_pbl_promote_revision'."""
        return self._can_pbl_promote_revision

    @can_pbl_promote_revision.setter
    def can_pbl_promote_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_pbl_promote_revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_pbl_promote_revision' field must be an unsigned integer in [0, 255]"
        self._can_pbl_promote_revision = value

    @property
    def can_sw_field_revision(self):
        """Message field 'can_sw_field_revision'."""
        return self._can_sw_field_revision

    @can_sw_field_revision.setter
    def can_sw_field_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_sw_field_revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_sw_field_revision' field must be an unsigned integer in [0, 255]"
        self._can_sw_field_revision = value

    @property
    def can_sw_promote_revision(self):
        """Message field 'can_sw_promote_revision'."""
        return self._can_sw_promote_revision

    @can_sw_promote_revision.setter
    def can_sw_promote_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_sw_promote_revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_sw_promote_revision' field must be an unsigned integer in [0, 255]"
        self._can_sw_promote_revision = value

    @property
    def can_sw_release_revision(self):
        """Message field 'can_sw_release_revision'."""
        return self._can_sw_release_revision

    @can_sw_release_revision.setter
    def can_sw_release_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_sw_release_revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_sw_release_revision' field must be an unsigned integer in [0, 255]"
        self._can_sw_release_revision = value

    @property
    def can_pbl_release_revision(self):
        """Message field 'can_pbl_release_revision'."""
        return self._can_pbl_release_revision

    @can_pbl_release_revision.setter
    def can_pbl_release_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_pbl_release_revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_pbl_release_revision' field must be an unsigned integer in [0, 255]"
        self._can_pbl_release_revision = value
