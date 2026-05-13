# generated from rosidl_generator_py/resource/_idl.py.em
# with input from derived_object_msgs:msg/Lane.idl
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
        'LANE_QUALITY_INVALID': 0,
        'LANE_QUALITY_UNKNOWN': 1,
        'LANE_QUALITY_NOT_AVAILABLE': 2,
        'LANE_QUALITY_0': 3,
        'LANE_QUALITY_1': 4,
        'LANE_QUALITY_2': 5,
        'LANE_QUALITY_3': 6,
        'LANE_QUALITY_4': 7,
        'LANE_QUALITY_5': 8,
        'LANE_QUALITY_6': 9,
        'LANE_QUALITY_7': 10,
        'LANE_QUALITY_8': 11,
        'LANE_QUALITY_9': 12,
        'LANE_QUALITY_KIND_COUNT': 13,
        'LANE_MARKER_INVALID': 0,
        'LANE_MARKER_UNKNOWN': 1,
        'LANE_MARKER_NOT_AVAILABLE': 2,
        'LANE_MARKER_NONE': 3,
        'LANE_MARKER_SOLID': 4,
        'LANE_MARKER_DASHED': 5,
        'LANE_MARKER_VIRTUAL': 6,
        'LANE_MARKER_DOTS': 7,
        'LANE_MARKER_ROAD_EDGE': 8,
        'LANE_MARKER_DOUBLE_LINE': 9,
        'LANE_MARKER_KIND_COUNT': 10,
        'LANE_CURVE_MODEL_INVALID': 0,
        'LANE_CURVE_MODEL_UNKNOWN': 1,
        'LANE_CURVE_MODEL_NOT_AVAILABLE': 2,
        'LANE_CURVE_MODEL_LINEAR': 3,
        'LANE_CURVE_MODEL_PARABOLIC': 4,
        'LANE_CURVE_MODEL_3D': 5,
        'LANE_CURVE_MODEL_KIND_COUNT': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('derived_object_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'derived_object_msgs.msg.Lane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LANE_QUALITY_INVALID': cls.__constants['LANE_QUALITY_INVALID'],
            'LANE_QUALITY_UNKNOWN': cls.__constants['LANE_QUALITY_UNKNOWN'],
            'LANE_QUALITY_NOT_AVAILABLE': cls.__constants['LANE_QUALITY_NOT_AVAILABLE'],
            'LANE_QUALITY_0': cls.__constants['LANE_QUALITY_0'],
            'LANE_QUALITY_1': cls.__constants['LANE_QUALITY_1'],
            'LANE_QUALITY_2': cls.__constants['LANE_QUALITY_2'],
            'LANE_QUALITY_3': cls.__constants['LANE_QUALITY_3'],
            'LANE_QUALITY_4': cls.__constants['LANE_QUALITY_4'],
            'LANE_QUALITY_5': cls.__constants['LANE_QUALITY_5'],
            'LANE_QUALITY_6': cls.__constants['LANE_QUALITY_6'],
            'LANE_QUALITY_7': cls.__constants['LANE_QUALITY_7'],
            'LANE_QUALITY_8': cls.__constants['LANE_QUALITY_8'],
            'LANE_QUALITY_9': cls.__constants['LANE_QUALITY_9'],
            'LANE_QUALITY_KIND_COUNT': cls.__constants['LANE_QUALITY_KIND_COUNT'],
            'LANE_MARKER_INVALID': cls.__constants['LANE_MARKER_INVALID'],
            'LANE_MARKER_UNKNOWN': cls.__constants['LANE_MARKER_UNKNOWN'],
            'LANE_MARKER_NOT_AVAILABLE': cls.__constants['LANE_MARKER_NOT_AVAILABLE'],
            'LANE_MARKER_NONE': cls.__constants['LANE_MARKER_NONE'],
            'LANE_MARKER_SOLID': cls.__constants['LANE_MARKER_SOLID'],
            'LANE_MARKER_DASHED': cls.__constants['LANE_MARKER_DASHED'],
            'LANE_MARKER_VIRTUAL': cls.__constants['LANE_MARKER_VIRTUAL'],
            'LANE_MARKER_DOTS': cls.__constants['LANE_MARKER_DOTS'],
            'LANE_MARKER_ROAD_EDGE': cls.__constants['LANE_MARKER_ROAD_EDGE'],
            'LANE_MARKER_DOUBLE_LINE': cls.__constants['LANE_MARKER_DOUBLE_LINE'],
            'LANE_MARKER_KIND_COUNT': cls.__constants['LANE_MARKER_KIND_COUNT'],
            'LANE_CURVE_MODEL_INVALID': cls.__constants['LANE_CURVE_MODEL_INVALID'],
            'LANE_CURVE_MODEL_UNKNOWN': cls.__constants['LANE_CURVE_MODEL_UNKNOWN'],
            'LANE_CURVE_MODEL_NOT_AVAILABLE': cls.__constants['LANE_CURVE_MODEL_NOT_AVAILABLE'],
            'LANE_CURVE_MODEL_LINEAR': cls.__constants['LANE_CURVE_MODEL_LINEAR'],
            'LANE_CURVE_MODEL_PARABOLIC': cls.__constants['LANE_CURVE_MODEL_PARABOLIC'],
            'LANE_CURVE_MODEL_3D': cls.__constants['LANE_CURVE_MODEL_3D'],
            'LANE_CURVE_MODEL_KIND_COUNT': cls.__constants['LANE_CURVE_MODEL_KIND_COUNT'],
        }

    @property
    def LANE_QUALITY_INVALID(self):
        """Message constant 'LANE_QUALITY_INVALID'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_INVALID']

    @property
    def LANE_QUALITY_UNKNOWN(self):
        """Message constant 'LANE_QUALITY_UNKNOWN'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_UNKNOWN']

    @property
    def LANE_QUALITY_NOT_AVAILABLE(self):
        """Message constant 'LANE_QUALITY_NOT_AVAILABLE'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_NOT_AVAILABLE']

    @property
    def LANE_QUALITY_0(self):
        """Message constant 'LANE_QUALITY_0'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_0']

    @property
    def LANE_QUALITY_1(self):
        """Message constant 'LANE_QUALITY_1'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_1']

    @property
    def LANE_QUALITY_2(self):
        """Message constant 'LANE_QUALITY_2'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_2']

    @property
    def LANE_QUALITY_3(self):
        """Message constant 'LANE_QUALITY_3'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_3']

    @property
    def LANE_QUALITY_4(self):
        """Message constant 'LANE_QUALITY_4'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_4']

    @property
    def LANE_QUALITY_5(self):
        """Message constant 'LANE_QUALITY_5'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_5']

    @property
    def LANE_QUALITY_6(self):
        """Message constant 'LANE_QUALITY_6'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_6']

    @property
    def LANE_QUALITY_7(self):
        """Message constant 'LANE_QUALITY_7'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_7']

    @property
    def LANE_QUALITY_8(self):
        """Message constant 'LANE_QUALITY_8'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_8']

    @property
    def LANE_QUALITY_9(self):
        """Message constant 'LANE_QUALITY_9'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_9']

    @property
    def LANE_QUALITY_KIND_COUNT(self):
        """Message constant 'LANE_QUALITY_KIND_COUNT'."""
        return Metaclass_Lane.__constants['LANE_QUALITY_KIND_COUNT']

    @property
    def LANE_MARKER_INVALID(self):
        """Message constant 'LANE_MARKER_INVALID'."""
        return Metaclass_Lane.__constants['LANE_MARKER_INVALID']

    @property
    def LANE_MARKER_UNKNOWN(self):
        """Message constant 'LANE_MARKER_UNKNOWN'."""
        return Metaclass_Lane.__constants['LANE_MARKER_UNKNOWN']

    @property
    def LANE_MARKER_NOT_AVAILABLE(self):
        """Message constant 'LANE_MARKER_NOT_AVAILABLE'."""
        return Metaclass_Lane.__constants['LANE_MARKER_NOT_AVAILABLE']

    @property
    def LANE_MARKER_NONE(self):
        """Message constant 'LANE_MARKER_NONE'."""
        return Metaclass_Lane.__constants['LANE_MARKER_NONE']

    @property
    def LANE_MARKER_SOLID(self):
        """Message constant 'LANE_MARKER_SOLID'."""
        return Metaclass_Lane.__constants['LANE_MARKER_SOLID']

    @property
    def LANE_MARKER_DASHED(self):
        """Message constant 'LANE_MARKER_DASHED'."""
        return Metaclass_Lane.__constants['LANE_MARKER_DASHED']

    @property
    def LANE_MARKER_VIRTUAL(self):
        """Message constant 'LANE_MARKER_VIRTUAL'."""
        return Metaclass_Lane.__constants['LANE_MARKER_VIRTUAL']

    @property
    def LANE_MARKER_DOTS(self):
        """Message constant 'LANE_MARKER_DOTS'."""
        return Metaclass_Lane.__constants['LANE_MARKER_DOTS']

    @property
    def LANE_MARKER_ROAD_EDGE(self):
        """Message constant 'LANE_MARKER_ROAD_EDGE'."""
        return Metaclass_Lane.__constants['LANE_MARKER_ROAD_EDGE']

    @property
    def LANE_MARKER_DOUBLE_LINE(self):
        """Message constant 'LANE_MARKER_DOUBLE_LINE'."""
        return Metaclass_Lane.__constants['LANE_MARKER_DOUBLE_LINE']

    @property
    def LANE_MARKER_KIND_COUNT(self):
        """Message constant 'LANE_MARKER_KIND_COUNT'."""
        return Metaclass_Lane.__constants['LANE_MARKER_KIND_COUNT']

    @property
    def LANE_CURVE_MODEL_INVALID(self):
        """Message constant 'LANE_CURVE_MODEL_INVALID'."""
        return Metaclass_Lane.__constants['LANE_CURVE_MODEL_INVALID']

    @property
    def LANE_CURVE_MODEL_UNKNOWN(self):
        """Message constant 'LANE_CURVE_MODEL_UNKNOWN'."""
        return Metaclass_Lane.__constants['LANE_CURVE_MODEL_UNKNOWN']

    @property
    def LANE_CURVE_MODEL_NOT_AVAILABLE(self):
        """Message constant 'LANE_CURVE_MODEL_NOT_AVAILABLE'."""
        return Metaclass_Lane.__constants['LANE_CURVE_MODEL_NOT_AVAILABLE']

    @property
    def LANE_CURVE_MODEL_LINEAR(self):
        """Message constant 'LANE_CURVE_MODEL_LINEAR'."""
        return Metaclass_Lane.__constants['LANE_CURVE_MODEL_LINEAR']

    @property
    def LANE_CURVE_MODEL_PARABOLIC(self):
        """Message constant 'LANE_CURVE_MODEL_PARABOLIC'."""
        return Metaclass_Lane.__constants['LANE_CURVE_MODEL_PARABOLIC']

    @property
    def LANE_CURVE_MODEL_3D(self):
        """Message constant 'LANE_CURVE_MODEL_3D'."""
        return Metaclass_Lane.__constants['LANE_CURVE_MODEL_3D']

    @property
    def LANE_CURVE_MODEL_KIND_COUNT(self):
        """Message constant 'LANE_CURVE_MODEL_KIND_COUNT'."""
        return Metaclass_Lane.__constants['LANE_CURVE_MODEL_KIND_COUNT']


class Lane(metaclass=Metaclass_Lane):
    """
    Message class 'Lane'.

    Constants:
      LANE_QUALITY_INVALID
      LANE_QUALITY_UNKNOWN
      LANE_QUALITY_NOT_AVAILABLE
      LANE_QUALITY_0
      LANE_QUALITY_1
      LANE_QUALITY_2
      LANE_QUALITY_3
      LANE_QUALITY_4
      LANE_QUALITY_5
      LANE_QUALITY_6
      LANE_QUALITY_7
      LANE_QUALITY_8
      LANE_QUALITY_9
      LANE_QUALITY_KIND_COUNT
      LANE_MARKER_INVALID
      LANE_MARKER_UNKNOWN
      LANE_MARKER_NOT_AVAILABLE
      LANE_MARKER_NONE
      LANE_MARKER_SOLID
      LANE_MARKER_DASHED
      LANE_MARKER_VIRTUAL
      LANE_MARKER_DOTS
      LANE_MARKER_ROAD_EDGE
      LANE_MARKER_DOUBLE_LINE
      LANE_MARKER_KIND_COUNT
      LANE_CURVE_MODEL_INVALID
      LANE_CURVE_MODEL_UNKNOWN
      LANE_CURVE_MODEL_NOT_AVAILABLE
      LANE_CURVE_MODEL_LINEAR
      LANE_CURVE_MODEL_PARABOLIC
      LANE_CURVE_MODEL_3D
      LANE_CURVE_MODEL_KIND_COUNT
    """

    __slots__ = [
        '_quality',
        '_marker_kind',
        '_curve_model_kind',
        '_marker_offset',
        '_heading_angle',
        '_curvature',
        '_curvature_derivative',
        '_marker_width',
        '_view_range',
    ]

    _fields_and_field_types = {
        'quality': 'uint8',
        'marker_kind': 'uint8',
        'curve_model_kind': 'uint8',
        'marker_offset': 'double',
        'heading_angle': 'double',
        'curvature': 'double',
        'curvature_derivative': 'double',
        'marker_width': 'double',
        'view_range': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.quality = kwargs.get('quality', int())
        self.marker_kind = kwargs.get('marker_kind', int())
        self.curve_model_kind = kwargs.get('curve_model_kind', int())
        self.marker_offset = kwargs.get('marker_offset', float())
        self.heading_angle = kwargs.get('heading_angle', float())
        self.curvature = kwargs.get('curvature', float())
        self.curvature_derivative = kwargs.get('curvature_derivative', float())
        self.marker_width = kwargs.get('marker_width', float())
        self.view_range = kwargs.get('view_range', float())

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
        if self.quality != other.quality:
            return False
        if self.marker_kind != other.marker_kind:
            return False
        if self.curve_model_kind != other.curve_model_kind:
            return False
        if self.marker_offset != other.marker_offset:
            return False
        if self.heading_angle != other.heading_angle:
            return False
        if self.curvature != other.curvature:
            return False
        if self.curvature_derivative != other.curvature_derivative:
            return False
        if self.marker_width != other.marker_width:
            return False
        if self.view_range != other.view_range:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def quality(self):
        """Message field 'quality'."""
        return self._quality

    @quality.setter
    def quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quality' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'quality' field must be an unsigned integer in [0, 255]"
        self._quality = value

    @property
    def marker_kind(self):
        """Message field 'marker_kind'."""
        return self._marker_kind

    @marker_kind.setter
    def marker_kind(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'marker_kind' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'marker_kind' field must be an unsigned integer in [0, 255]"
        self._marker_kind = value

    @property
    def curve_model_kind(self):
        """Message field 'curve_model_kind'."""
        return self._curve_model_kind

    @curve_model_kind.setter
    def curve_model_kind(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'curve_model_kind' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'curve_model_kind' field must be an unsigned integer in [0, 255]"
        self._curve_model_kind = value

    @property
    def marker_offset(self):
        """Message field 'marker_offset'."""
        return self._marker_offset

    @marker_offset.setter
    def marker_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'marker_offset' field must be of type 'float'"
        self._marker_offset = value

    @property
    def heading_angle(self):
        """Message field 'heading_angle'."""
        return self._heading_angle

    @heading_angle.setter
    def heading_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_angle' field must be of type 'float'"
        self._heading_angle = value

    @property
    def curvature(self):
        """Message field 'curvature'."""
        return self._curvature

    @curvature.setter
    def curvature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature' field must be of type 'float'"
        self._curvature = value

    @property
    def curvature_derivative(self):
        """Message field 'curvature_derivative'."""
        return self._curvature_derivative

    @curvature_derivative.setter
    def curvature_derivative(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature_derivative' field must be of type 'float'"
        self._curvature_derivative = value

    @property
    def marker_width(self):
        """Message field 'marker_width'."""
        return self._marker_width

    @marker_width.setter
    def marker_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'marker_width' field must be of type 'float'"
        self._marker_width = value

    @property
    def view_range(self):
        """Message field 'view_range'."""
        return self._view_range

    @view_range.setter
    def view_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'view_range' field must be of type 'float'"
        self._view_range = value
