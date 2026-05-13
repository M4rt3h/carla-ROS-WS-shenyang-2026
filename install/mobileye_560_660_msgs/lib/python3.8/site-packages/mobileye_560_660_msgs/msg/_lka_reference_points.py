# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mobileye_560_660_msgs:msg/LkaReferencePoints.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LkaReferencePoints(type):
    """Metaclass of message 'LkaReferencePoints'."""

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
            module = import_type_support('mobileye_560_660_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mobileye_560_660_msgs.msg.LkaReferencePoints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lka_reference_points
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lka_reference_points
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lka_reference_points
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lka_reference_points
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lka_reference_points

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


class LkaReferencePoints(metaclass=Metaclass_LkaReferencePoints):
    """Message class 'LkaReferencePoints'."""

    __slots__ = [
        '_header',
        '_ref_point_1_position',
        '_ref_point_1_distance',
        '_ref_point_1_validity',
        '_ref_point_2_position',
        '_ref_point_2_distance',
        '_ref_point_2_validity',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ref_point_1_position': 'double',
        'ref_point_1_distance': 'double',
        'ref_point_1_validity': 'boolean',
        'ref_point_2_position': 'double',
        'ref_point_2_distance': 'double',
        'ref_point_2_validity': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ref_point_1_position = kwargs.get('ref_point_1_position', float())
        self.ref_point_1_distance = kwargs.get('ref_point_1_distance', float())
        self.ref_point_1_validity = kwargs.get('ref_point_1_validity', bool())
        self.ref_point_2_position = kwargs.get('ref_point_2_position', float())
        self.ref_point_2_distance = kwargs.get('ref_point_2_distance', float())
        self.ref_point_2_validity = kwargs.get('ref_point_2_validity', bool())

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
        if self.ref_point_1_position != other.ref_point_1_position:
            return False
        if self.ref_point_1_distance != other.ref_point_1_distance:
            return False
        if self.ref_point_1_validity != other.ref_point_1_validity:
            return False
        if self.ref_point_2_position != other.ref_point_2_position:
            return False
        if self.ref_point_2_distance != other.ref_point_2_distance:
            return False
        if self.ref_point_2_validity != other.ref_point_2_validity:
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
    def ref_point_1_position(self):
        """Message field 'ref_point_1_position'."""
        return self._ref_point_1_position

    @ref_point_1_position.setter
    def ref_point_1_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_point_1_position' field must be of type 'float'"
        self._ref_point_1_position = value

    @property
    def ref_point_1_distance(self):
        """Message field 'ref_point_1_distance'."""
        return self._ref_point_1_distance

    @ref_point_1_distance.setter
    def ref_point_1_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_point_1_distance' field must be of type 'float'"
        self._ref_point_1_distance = value

    @property
    def ref_point_1_validity(self):
        """Message field 'ref_point_1_validity'."""
        return self._ref_point_1_validity

    @ref_point_1_validity.setter
    def ref_point_1_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ref_point_1_validity' field must be of type 'bool'"
        self._ref_point_1_validity = value

    @property
    def ref_point_2_position(self):
        """Message field 'ref_point_2_position'."""
        return self._ref_point_2_position

    @ref_point_2_position.setter
    def ref_point_2_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_point_2_position' field must be of type 'float'"
        self._ref_point_2_position = value

    @property
    def ref_point_2_distance(self):
        """Message field 'ref_point_2_distance'."""
        return self._ref_point_2_distance

    @ref_point_2_distance.setter
    def ref_point_2_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_point_2_distance' field must be of type 'float'"
        self._ref_point_2_distance = value

    @property
    def ref_point_2_validity(self):
        """Message field 'ref_point_2_validity'."""
        return self._ref_point_2_validity

    @ref_point_2_validity.setter
    def ref_point_2_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ref_point_2_validity' field must be of type 'bool'"
        self._ref_point_2_validity = value
