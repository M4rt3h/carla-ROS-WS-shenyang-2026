# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mobileye_560_660_msgs:msg/ObstacleStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstacleStatus(type):
    """Metaclass of message 'ObstacleStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STOP_GO_STOP': 0,
        'STOP_GO_GO': 1,
        'STOP_GO_UNDECIDED': 2,
        'STOP_GO_DRIVER_DECISION_REQUIRED': 3,
        'STOP_GO_NOT_CALCULATED': 15,
        'FAILSAFE_NONE': 0,
        'FAILSAFE_LOW_SUN': 1,
        'FAILSAFE_BLUR_IMAGE': 2,
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
                'mobileye_560_660_msgs.msg.ObstacleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STOP_GO_STOP': cls.__constants['STOP_GO_STOP'],
            'STOP_GO_GO': cls.__constants['STOP_GO_GO'],
            'STOP_GO_UNDECIDED': cls.__constants['STOP_GO_UNDECIDED'],
            'STOP_GO_DRIVER_DECISION_REQUIRED': cls.__constants['STOP_GO_DRIVER_DECISION_REQUIRED'],
            'STOP_GO_NOT_CALCULATED': cls.__constants['STOP_GO_NOT_CALCULATED'],
            'FAILSAFE_NONE': cls.__constants['FAILSAFE_NONE'],
            'FAILSAFE_LOW_SUN': cls.__constants['FAILSAFE_LOW_SUN'],
            'FAILSAFE_BLUR_IMAGE': cls.__constants['FAILSAFE_BLUR_IMAGE'],
        }

    @property
    def STOP_GO_STOP(self):
        """Message constant 'STOP_GO_STOP'."""
        return Metaclass_ObstacleStatus.__constants['STOP_GO_STOP']

    @property
    def STOP_GO_GO(self):
        """Message constant 'STOP_GO_GO'."""
        return Metaclass_ObstacleStatus.__constants['STOP_GO_GO']

    @property
    def STOP_GO_UNDECIDED(self):
        """Message constant 'STOP_GO_UNDECIDED'."""
        return Metaclass_ObstacleStatus.__constants['STOP_GO_UNDECIDED']

    @property
    def STOP_GO_DRIVER_DECISION_REQUIRED(self):
        """Message constant 'STOP_GO_DRIVER_DECISION_REQUIRED'."""
        return Metaclass_ObstacleStatus.__constants['STOP_GO_DRIVER_DECISION_REQUIRED']

    @property
    def STOP_GO_NOT_CALCULATED(self):
        """Message constant 'STOP_GO_NOT_CALCULATED'."""
        return Metaclass_ObstacleStatus.__constants['STOP_GO_NOT_CALCULATED']

    @property
    def FAILSAFE_NONE(self):
        """Message constant 'FAILSAFE_NONE'."""
        return Metaclass_ObstacleStatus.__constants['FAILSAFE_NONE']

    @property
    def FAILSAFE_LOW_SUN(self):
        """Message constant 'FAILSAFE_LOW_SUN'."""
        return Metaclass_ObstacleStatus.__constants['FAILSAFE_LOW_SUN']

    @property
    def FAILSAFE_BLUR_IMAGE(self):
        """Message constant 'FAILSAFE_BLUR_IMAGE'."""
        return Metaclass_ObstacleStatus.__constants['FAILSAFE_BLUR_IMAGE']


class ObstacleStatus(metaclass=Metaclass_ObstacleStatus):
    """
    Message class 'ObstacleStatus'.

    Constants:
      STOP_GO_STOP
      STOP_GO_GO
      STOP_GO_UNDECIDED
      STOP_GO_DRIVER_DECISION_REQUIRED
      STOP_GO_NOT_CALCULATED
      FAILSAFE_NONE
      FAILSAFE_LOW_SUN
      FAILSAFE_BLUR_IMAGE
    """

    __slots__ = [
        '_header',
        '_num_obstacles',
        '_timestamp',
        '_application_version',
        '_active_version_number_section',
        '_left_close_range_cut_in',
        '_right_close_range_cut_in',
        '_stop_go',
        '_protocol_version',
        '_close_car',
        '_failsafe',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'num_obstacles': 'uint16',
        'timestamp': 'uint16',
        'application_version': 'uint16',
        'active_version_number_section': 'uint16',
        'left_close_range_cut_in': 'boolean',
        'right_close_range_cut_in': 'boolean',
        'stop_go': 'uint8',
        'protocol_version': 'uint8',
        'close_car': 'boolean',
        'failsafe': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.num_obstacles = kwargs.get('num_obstacles', int())
        self.timestamp = kwargs.get('timestamp', int())
        self.application_version = kwargs.get('application_version', int())
        self.active_version_number_section = kwargs.get('active_version_number_section', int())
        self.left_close_range_cut_in = kwargs.get('left_close_range_cut_in', bool())
        self.right_close_range_cut_in = kwargs.get('right_close_range_cut_in', bool())
        self.stop_go = kwargs.get('stop_go', int())
        self.protocol_version = kwargs.get('protocol_version', int())
        self.close_car = kwargs.get('close_car', bool())
        self.failsafe = kwargs.get('failsafe', int())

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
        if self.num_obstacles != other.num_obstacles:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.application_version != other.application_version:
            return False
        if self.active_version_number_section != other.active_version_number_section:
            return False
        if self.left_close_range_cut_in != other.left_close_range_cut_in:
            return False
        if self.right_close_range_cut_in != other.right_close_range_cut_in:
            return False
        if self.stop_go != other.stop_go:
            return False
        if self.protocol_version != other.protocol_version:
            return False
        if self.close_car != other.close_car:
            return False
        if self.failsafe != other.failsafe:
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
    def num_obstacles(self):
        """Message field 'num_obstacles'."""
        return self._num_obstacles

    @num_obstacles.setter
    def num_obstacles(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_obstacles' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_obstacles' field must be an unsigned integer in [0, 65535]"
        self._num_obstacles = value

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'timestamp' field must be an unsigned integer in [0, 65535]"
        self._timestamp = value

    @property
    def application_version(self):
        """Message field 'application_version'."""
        return self._application_version

    @application_version.setter
    def application_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'application_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'application_version' field must be an unsigned integer in [0, 65535]"
        self._application_version = value

    @property
    def active_version_number_section(self):
        """Message field 'active_version_number_section'."""
        return self._active_version_number_section

    @active_version_number_section.setter
    def active_version_number_section(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'active_version_number_section' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'active_version_number_section' field must be an unsigned integer in [0, 65535]"
        self._active_version_number_section = value

    @property
    def left_close_range_cut_in(self):
        """Message field 'left_close_range_cut_in'."""
        return self._left_close_range_cut_in

    @left_close_range_cut_in.setter
    def left_close_range_cut_in(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_close_range_cut_in' field must be of type 'bool'"
        self._left_close_range_cut_in = value

    @property
    def right_close_range_cut_in(self):
        """Message field 'right_close_range_cut_in'."""
        return self._right_close_range_cut_in

    @right_close_range_cut_in.setter
    def right_close_range_cut_in(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_close_range_cut_in' field must be of type 'bool'"
        self._right_close_range_cut_in = value

    @property
    def stop_go(self):
        """Message field 'stop_go'."""
        return self._stop_go

    @stop_go.setter
    def stop_go(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stop_go' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stop_go' field must be an unsigned integer in [0, 255]"
        self._stop_go = value

    @property
    def protocol_version(self):
        """Message field 'protocol_version'."""
        return self._protocol_version

    @protocol_version.setter
    def protocol_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'protocol_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'protocol_version' field must be an unsigned integer in [0, 255]"
        self._protocol_version = value

    @property
    def close_car(self):
        """Message field 'close_car'."""
        return self._close_car

    @close_car.setter
    def close_car(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'close_car' field must be of type 'bool'"
        self._close_car = value

    @property
    def failsafe(self):
        """Message field 'failsafe'."""
        return self._failsafe

    @failsafe.setter
    def failsafe(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failsafe' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'failsafe' field must be an unsigned integer in [0, 255]"
        self._failsafe = value
