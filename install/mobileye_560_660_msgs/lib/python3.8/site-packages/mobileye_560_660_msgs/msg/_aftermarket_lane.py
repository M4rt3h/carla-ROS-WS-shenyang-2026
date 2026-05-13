# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mobileye_560_660_msgs:msg/AftermarketLane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AftermarketLane(type):
    """Metaclass of message 'AftermarketLane'."""

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
                'mobileye_560_660_msgs.msg.AftermarketLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__aftermarket_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__aftermarket_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__aftermarket_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__aftermarket_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__aftermarket_lane

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
        return Metaclass_AftermarketLane.__constants['LANE_CONFIDENCE_NONE']

    @property
    def LANE_CONFIDENCE_LOW(self):
        """Message constant 'LANE_CONFIDENCE_LOW'."""
        return Metaclass_AftermarketLane.__constants['LANE_CONFIDENCE_LOW']

    @property
    def LANE_CONFIDENCE_MED(self):
        """Message constant 'LANE_CONFIDENCE_MED'."""
        return Metaclass_AftermarketLane.__constants['LANE_CONFIDENCE_MED']

    @property
    def LANE_CONFIDENCE_HIGH(self):
        """Message constant 'LANE_CONFIDENCE_HIGH'."""
        return Metaclass_AftermarketLane.__constants['LANE_CONFIDENCE_HIGH']

    @property
    def LANE_TYPE_DASHED(self):
        """Message constant 'LANE_TYPE_DASHED'."""
        return Metaclass_AftermarketLane.__constants['LANE_TYPE_DASHED']

    @property
    def LANE_TYPE_SOLID(self):
        """Message constant 'LANE_TYPE_SOLID'."""
        return Metaclass_AftermarketLane.__constants['LANE_TYPE_SOLID']

    @property
    def LANE_TYPE_NONE(self):
        """Message constant 'LANE_TYPE_NONE'."""
        return Metaclass_AftermarketLane.__constants['LANE_TYPE_NONE']

    @property
    def LANE_TYPE_ROAD_EDGE(self):
        """Message constant 'LANE_TYPE_ROAD_EDGE'."""
        return Metaclass_AftermarketLane.__constants['LANE_TYPE_ROAD_EDGE']

    @property
    def LANE_TYPE_DOUBLE_LANE_MARK(self):
        """Message constant 'LANE_TYPE_DOUBLE_LANE_MARK'."""
        return Metaclass_AftermarketLane.__constants['LANE_TYPE_DOUBLE_LANE_MARK']

    @property
    def LANE_TYPE_BOTTS_DOTS(self):
        """Message constant 'LANE_TYPE_BOTTS_DOTS'."""
        return Metaclass_AftermarketLane.__constants['LANE_TYPE_BOTTS_DOTS']

    @property
    def LANE_TYPE_INVALID(self):
        """Message constant 'LANE_TYPE_INVALID'."""
        return Metaclass_AftermarketLane.__constants['LANE_TYPE_INVALID']


class AftermarketLane(metaclass=Metaclass_AftermarketLane):
    """
    Message class 'AftermarketLane'.

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
        '_lane_confidence_left',
        '_ldw_available_left',
        '_lane_type_left',
        '_distance_to_left_lane',
        '_lane_confidence_right',
        '_ldw_available_right',
        '_lane_type_right',
        '_distance_to_right_lane',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'lane_confidence_left': 'uint8',
        'ldw_available_left': 'boolean',
        'lane_type_left': 'uint8',
        'distance_to_left_lane': 'float',
        'lane_confidence_right': 'uint8',
        'ldw_available_right': 'boolean',
        'lane_type_right': 'uint8',
        'distance_to_right_lane': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.lane_confidence_left = kwargs.get('lane_confidence_left', int())
        self.ldw_available_left = kwargs.get('ldw_available_left', bool())
        self.lane_type_left = kwargs.get('lane_type_left', int())
        self.distance_to_left_lane = kwargs.get('distance_to_left_lane', float())
        self.lane_confidence_right = kwargs.get('lane_confidence_right', int())
        self.ldw_available_right = kwargs.get('ldw_available_right', bool())
        self.lane_type_right = kwargs.get('lane_type_right', int())
        self.distance_to_right_lane = kwargs.get('distance_to_right_lane', float())

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
        if self.lane_confidence_left != other.lane_confidence_left:
            return False
        if self.ldw_available_left != other.ldw_available_left:
            return False
        if self.lane_type_left != other.lane_type_left:
            return False
        if self.distance_to_left_lane != other.distance_to_left_lane:
            return False
        if self.lane_confidence_right != other.lane_confidence_right:
            return False
        if self.ldw_available_right != other.ldw_available_right:
            return False
        if self.lane_type_right != other.lane_type_right:
            return False
        if self.distance_to_right_lane != other.distance_to_right_lane:
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
    def lane_confidence_left(self):
        """Message field 'lane_confidence_left'."""
        return self._lane_confidence_left

    @lane_confidence_left.setter
    def lane_confidence_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_confidence_left' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_confidence_left' field must be an unsigned integer in [0, 255]"
        self._lane_confidence_left = value

    @property
    def ldw_available_left(self):
        """Message field 'ldw_available_left'."""
        return self._ldw_available_left

    @ldw_available_left.setter
    def ldw_available_left(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ldw_available_left' field must be of type 'bool'"
        self._ldw_available_left = value

    @property
    def lane_type_left(self):
        """Message field 'lane_type_left'."""
        return self._lane_type_left

    @lane_type_left.setter
    def lane_type_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_type_left' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_type_left' field must be an unsigned integer in [0, 255]"
        self._lane_type_left = value

    @property
    def distance_to_left_lane(self):
        """Message field 'distance_to_left_lane'."""
        return self._distance_to_left_lane

    @distance_to_left_lane.setter
    def distance_to_left_lane(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_left_lane' field must be of type 'float'"
        self._distance_to_left_lane = value

    @property
    def lane_confidence_right(self):
        """Message field 'lane_confidence_right'."""
        return self._lane_confidence_right

    @lane_confidence_right.setter
    def lane_confidence_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_confidence_right' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_confidence_right' field must be an unsigned integer in [0, 255]"
        self._lane_confidence_right = value

    @property
    def ldw_available_right(self):
        """Message field 'ldw_available_right'."""
        return self._ldw_available_right

    @ldw_available_right.setter
    def ldw_available_right(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ldw_available_right' field must be of type 'bool'"
        self._ldw_available_right = value

    @property
    def lane_type_right(self):
        """Message field 'lane_type_right'."""
        return self._lane_type_right

    @lane_type_right.setter
    def lane_type_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_type_right' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_type_right' field must be an unsigned integer in [0, 255]"
        self._lane_type_right = value

    @property
    def distance_to_right_lane(self):
        """Message field 'distance_to_right_lane'."""
        return self._distance_to_right_lane

    @distance_to_right_lane.setter
    def distance_to_right_lane(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_right_lane' field must be of type 'float'"
        self._distance_to_right_lane = value
