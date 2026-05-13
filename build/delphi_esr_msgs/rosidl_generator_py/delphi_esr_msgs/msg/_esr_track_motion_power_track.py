# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrTrackMotionPowerTrack.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrTrackMotionPowerTrack(type):
    """Metaclass of message 'EsrTrackMotionPowerTrack'."""

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
            module = import_type_support('delphi_esr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_esr_msgs.msg.EsrTrackMotionPowerTrack')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_track_motion_power_track
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_track_motion_power_track
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_track_motion_power_track
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_track_motion_power_track
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_track_motion_power_track

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EsrTrackMotionPowerTrack(metaclass=Metaclass_EsrTrackMotionPowerTrack):
    """Message class 'EsrTrackMotionPowerTrack'."""

    __slots__ = [
        '_id',
        '_movable_fast',
        '_movable_slow',
        '_moving',
        '_power',
    ]

    _fields_and_field_types = {
        'id': 'uint8',
        'movable_fast': 'boolean',
        'movable_slow': 'boolean',
        'moving': 'boolean',
        'power': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.movable_fast = kwargs.get('movable_fast', bool())
        self.movable_slow = kwargs.get('movable_slow', bool())
        self.moving = kwargs.get('moving', bool())
        self.power = kwargs.get('power', int())

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
        if self.movable_fast != other.movable_fast:
            return False
        if self.movable_slow != other.movable_slow:
            return False
        if self.moving != other.moving:
            return False
        if self.power != other.power:
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
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @property
    def movable_fast(self):
        """Message field 'movable_fast'."""
        return self._movable_fast

    @movable_fast.setter
    def movable_fast(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'movable_fast' field must be of type 'bool'"
        self._movable_fast = value

    @property
    def movable_slow(self):
        """Message field 'movable_slow'."""
        return self._movable_slow

    @movable_slow.setter
    def movable_slow(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'movable_slow' field must be of type 'bool'"
        self._movable_slow = value

    @property
    def moving(self):
        """Message field 'moving'."""
        return self._moving

    @moving.setter
    def moving(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'moving' field must be of type 'bool'"
        self._moving = value

    @property
    def power(self):
        """Message field 'power'."""
        return self._power

    @power.setter
    def power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'power' field must be an integer in [-128, 127]"
        self._power = value
