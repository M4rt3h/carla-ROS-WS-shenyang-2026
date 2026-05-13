# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mobileye_560_660_msgs:msg/LkaLane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LkaLane(type):
    """Metaclass of message 'LkaLane'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LANE_CONFIDENCE_NONE': 0,
        'LANE_CONFIDENCE_LOW': 1,
        'LANE_CONFIDENCE_MED': 2,
        'LANE_CONFIDENCE_HIGH': 3,
        'LANE_TYPE_DASHED': 0,
        'LANE_TYPE_SOLID': 1,
        'LANE_TYPE_NONE': 2,
        'LANE_TYPE_ROAD_EDGE': 3,
        'LANE_TYPE_DOUBLE_LANE_MARK': 4,
        'LANE_TYPE_BOTTS_DOTS': 5,
        'LANE_TYPE_INVALID': 6,
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
                'mobileye_560_660_msgs.msg.LkaLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lka_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lka_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lka_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lka_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lka_lane

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LANE_CONFIDENCE_NONE': cls.__constants['LANE_CONFIDENCE_NONE'],
            'LANE_CONFIDENCE_LOW': cls.__constants['LANE_CONFIDENCE_LOW'],
            'LANE_CONFIDENCE_MED': cls.__constants['LANE_CONFIDENCE_MED'],
            'LANE_CONFIDENCE_HIGH': cls.__constants['LANE_CONFIDENCE_HIGH'],
            'LANE_TYPE_DASHED': cls.__constants['LANE_TYPE_DASHED'],
            'LANE_TYPE_SOLID': cls.__constants['LANE_TYPE_SOLID'],
            'LANE_TYPE_NONE': cls.__constants['LANE_TYPE_NONE'],
            'LANE_TYPE_ROAD_EDGE': cls.__constants['LANE_TYPE_ROAD_EDGE'],
            'LANE_TYPE_DOUBLE_LANE_MARK': cls.__constants['LANE_TYPE_DOUBLE_LANE_MARK'],
            'LANE_TYPE_BOTTS_DOTS': cls.__constants['LANE_TYPE_BOTTS_DOTS'],
            'LANE_TYPE_INVALID': cls.__constants['LANE_TYPE_INVALID'],
        }

    @property
    def LANE_CONFIDENCE_NONE(self):
        """Message constant 'LANE_CONFIDENCE_NONE'."""
        return Metaclass_LkaLane.__constants['LANE_CONFIDENCE_NONE']

    @property
    def LANE_CONFIDENCE_LOW(self):
        """Message constant 'LANE_CONFIDENCE_LOW'."""
        return Metaclass_LkaLane.__constants['LANE_CONFIDENCE_LOW']

    @property
    def LANE_CONFIDENCE_MED(self):
        """Message constant 'LANE_CONFIDENCE_MED'."""
        return Metaclass_LkaLane.__constants['LANE_CONFIDENCE_MED']

    @property
    def LANE_CONFIDENCE_HIGH(self):
        """Message constant 'LANE_CONFIDENCE_HIGH'."""
        return Metaclass_LkaLane.__constants['LANE_CONFIDENCE_HIGH']

    @property
    def LANE_TYPE_DASHED(self):
        """Message constant 'LANE_TYPE_DASHED'."""
        return Metaclass_LkaLane.__constants['LANE_TYPE_DASHED']

    @property
    def LANE_TYPE_SOLID(self):
        """Message constant 'LANE_TYPE_SOLID'."""
        return Metaclass_LkaLane.__constants['LANE_TYPE_SOLID']

    @property
    def LANE_TYPE_NONE(self):
        """Message constant 'LANE_TYPE_NONE'."""
        return Metaclass_LkaLane.__constants['LANE_TYPE_NONE']

    @property
    def LANE_TYPE_ROAD_EDGE(self):
        """Message constant 'LANE_TYPE_ROAD_EDGE'."""
        return Metaclass_LkaLane.__constants['LANE_TYPE_ROAD_EDGE']

    @property
    def LANE_TYPE_DOUBLE_LANE_MARK(self):
        """Message constant 'LANE_TYPE_DOUBLE_LANE_MARK'."""
        return Metaclass_LkaLane.__constants['LANE_TYPE_DOUBLE_LANE_MARK']

    @property
    def LANE_TYPE_BOTTS_DOTS(self):
        """Message constant 'LANE_TYPE_BOTTS_DOTS'."""
        return Metaclass_LkaLane.__constants['LANE_TYPE_BOTTS_DOTS']

    @property
    def LANE_TYPE_INVALID(self):
        """Message constant 'LANE_TYPE_INVALID'."""
        return Metaclass_LkaLane.__constants['LANE_TYPE_INVALID']


class LkaLane(metaclass=Metaclass_LkaLane):
    """
    Message class 'LkaLane'.

    Constants:
      LANE_CONFIDENCE_NONE
      LANE_CONFIDENCE_LOW
      LANE_CONFIDENCE_MED
      LANE_CONFIDENCE_HIGH
      LANE_TYPE_DASHED
      LANE_TYPE_SOLID
      LANE_TYPE_NONE
      LANE_TYPE_ROAD_EDGE
      LANE_TYPE_DOUBLE_LANE_MARK
      LANE_TYPE_BOTTS_DOTS
      LANE_TYPE_INVALID
    """

    __slots__ = [
        '_header',
        '_lane_type',
        '_quality',
        '_model_degree',
        '_position_parameter_c0',
        '_curvature_parameter_c2',
        '_curvature_derivative_parameter_c3',
        '_marking_width',
        '_heading_angle_parameter_c1',
        '_view_range',
        '_view_range_availability',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'lane_type': 'uint8',
        'quality': 'uint8',
        'model_degree': 'uint8',
        'position_parameter_c0': 'double',
        'curvature_parameter_c2': 'double',
        'curvature_derivative_parameter_c3': 'double',
        'marking_width': 'float',
        'heading_angle_parameter_c1': 'double',
        'view_range': 'float',
        'view_range_availability': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.lane_type = kwargs.get('lane_type', int())
        self.quality = kwargs.get('quality', int())
        self.model_degree = kwargs.get('model_degree', int())
        self.position_parameter_c0 = kwargs.get('position_parameter_c0', float())
        self.curvature_parameter_c2 = kwargs.get('curvature_parameter_c2', float())
        self.curvature_derivative_parameter_c3 = kwargs.get('curvature_derivative_parameter_c3', float())
        self.marking_width = kwargs.get('marking_width', float())
        self.heading_angle_parameter_c1 = kwargs.get('heading_angle_parameter_c1', float())
        self.view_range = kwargs.get('view_range', float())
        self.view_range_availability = kwargs.get('view_range_availability', bool())

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
        if self.lane_type != other.lane_type:
            return False
        if self.quality != other.quality:
            return False
        if self.model_degree != other.model_degree:
            return False
        if self.position_parameter_c0 != other.position_parameter_c0:
            return False
        if self.curvature_parameter_c2 != other.curvature_parameter_c2:
            return False
        if self.curvature_derivative_parameter_c3 != other.curvature_derivative_parameter_c3:
            return False
        if self.marking_width != other.marking_width:
            return False
        if self.heading_angle_parameter_c1 != other.heading_angle_parameter_c1:
            return False
        if self.view_range != other.view_range:
            return False
        if self.view_range_availability != other.view_range_availability:
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
    def lane_type(self):
        """Message field 'lane_type'."""
        return self._lane_type

    @lane_type.setter
    def lane_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_type' field must be an unsigned integer in [0, 255]"
        self._lane_type = value

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
    def model_degree(self):
        """Message field 'model_degree'."""
        return self._model_degree

    @model_degree.setter
    def model_degree(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'model_degree' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'model_degree' field must be an unsigned integer in [0, 255]"
        self._model_degree = value

    @property
    def position_parameter_c0(self):
        """Message field 'position_parameter_c0'."""
        return self._position_parameter_c0

    @position_parameter_c0.setter
    def position_parameter_c0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_parameter_c0' field must be of type 'float'"
        self._position_parameter_c0 = value

    @property
    def curvature_parameter_c2(self):
        """Message field 'curvature_parameter_c2'."""
        return self._curvature_parameter_c2

    @curvature_parameter_c2.setter
    def curvature_parameter_c2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature_parameter_c2' field must be of type 'float'"
        self._curvature_parameter_c2 = value

    @property
    def curvature_derivative_parameter_c3(self):
        """Message field 'curvature_derivative_parameter_c3'."""
        return self._curvature_derivative_parameter_c3

    @curvature_derivative_parameter_c3.setter
    def curvature_derivative_parameter_c3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature_derivative_parameter_c3' field must be of type 'float'"
        self._curvature_derivative_parameter_c3 = value

    @property
    def marking_width(self):
        """Message field 'marking_width'."""
        return self._marking_width

    @marking_width.setter
    def marking_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'marking_width' field must be of type 'float'"
        self._marking_width = value

    @property
    def heading_angle_parameter_c1(self):
        """Message field 'heading_angle_parameter_c1'."""
        return self._heading_angle_parameter_c1

    @heading_angle_parameter_c1.setter
    def heading_angle_parameter_c1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_angle_parameter_c1' field must be of type 'float'"
        self._heading_angle_parameter_c1 = value

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

    @property
    def view_range_availability(self):
        """Message field 'view_range_availability'."""
        return self._view_range_availability

    @view_range_availability.setter
    def view_range_availability(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'view_range_availability' field must be of type 'bool'"
        self._view_range_availability = value
