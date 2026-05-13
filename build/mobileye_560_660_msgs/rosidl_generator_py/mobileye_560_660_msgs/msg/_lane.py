# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mobileye_560_660_msgs:msg/Lane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Lane(type):
    """Metaclass of message 'Lane'."""

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
                'mobileye_560_660_msgs.msg.Lane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane

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


class Lane(metaclass=Metaclass_Lane):
    """Message class 'Lane'."""

    __slots__ = [
        '_header',
        '_lane_curvature',
        '_lane_heading',
        '_construction_area',
        '_pitch_angle',
        '_yaw_angle',
        '_right_ldw_availability',
        '_left_ldw_availability',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'lane_curvature': 'double',
        'lane_heading': 'double',
        'construction_area': 'boolean',
        'pitch_angle': 'double',
        'yaw_angle': 'double',
        'right_ldw_availability': 'boolean',
        'left_ldw_availability': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.lane_curvature = kwargs.get('lane_curvature', float())
        self.lane_heading = kwargs.get('lane_heading', float())
        self.construction_area = kwargs.get('construction_area', bool())
        self.pitch_angle = kwargs.get('pitch_angle', float())
        self.yaw_angle = kwargs.get('yaw_angle', float())
        self.right_ldw_availability = kwargs.get('right_ldw_availability', bool())
        self.left_ldw_availability = kwargs.get('left_ldw_availability', bool())

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
        if self.lane_curvature != other.lane_curvature:
            return False
        if self.lane_heading != other.lane_heading:
            return False
        if self.construction_area != other.construction_area:
            return False
        if self.pitch_angle != other.pitch_angle:
            return False
        if self.yaw_angle != other.yaw_angle:
            return False
        if self.right_ldw_availability != other.right_ldw_availability:
            return False
        if self.left_ldw_availability != other.left_ldw_availability:
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
    def lane_curvature(self):
        """Message field 'lane_curvature'."""
        return self._lane_curvature

    @lane_curvature.setter
    def lane_curvature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_curvature' field must be of type 'float'"
        self._lane_curvature = value

    @property
    def lane_heading(self):
        """Message field 'lane_heading'."""
        return self._lane_heading

    @lane_heading.setter
    def lane_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_heading' field must be of type 'float'"
        self._lane_heading = value

    @property
    def construction_area(self):
        """Message field 'construction_area'."""
        return self._construction_area

    @construction_area.setter
    def construction_area(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'construction_area' field must be of type 'bool'"
        self._construction_area = value

    @property
    def pitch_angle(self):
        """Message field 'pitch_angle'."""
        return self._pitch_angle

    @pitch_angle.setter
    def pitch_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_angle' field must be of type 'float'"
        self._pitch_angle = value

    @property
    def yaw_angle(self):
        """Message field 'yaw_angle'."""
        return self._yaw_angle

    @yaw_angle.setter
    def yaw_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_angle' field must be of type 'float'"
        self._yaw_angle = value

    @property
    def right_ldw_availability(self):
        """Message field 'right_ldw_availability'."""
        return self._right_ldw_availability

    @right_ldw_availability.setter
    def right_ldw_availability(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_ldw_availability' field must be of type 'bool'"
        self._right_ldw_availability = value

    @property
    def left_ldw_availability(self):
        """Message field 'left_ldw_availability'."""
        return self._left_ldw_availability

    @left_ldw_availability.setter
    def left_ldw_availability(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_ldw_availability' field must be of type 'bool'"
        self._left_ldw_availability = value
