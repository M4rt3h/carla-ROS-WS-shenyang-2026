# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrTrackMotionPowerGroup.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrTrackMotionPowerGroup(type):
    """Metaclass of message 'EsrTrackMotionPowerGroup'."""

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
                'delphi_esr_msgs.msg.EsrTrackMotionPowerGroup')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_track_motion_power_group
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_track_motion_power_group
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_track_motion_power_group
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_track_motion_power_group
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_track_motion_power_group

            from delphi_esr_msgs.msg import EsrTrackMotionPowerTrack
            if EsrTrackMotionPowerTrack.__class__._TYPE_SUPPORT is None:
                EsrTrackMotionPowerTrack.__class__.__import_type_support__()

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


class EsrTrackMotionPowerGroup(metaclass=Metaclass_EsrTrackMotionPowerGroup):
    """Message class 'EsrTrackMotionPowerGroup'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_rolling_count_2',
        '_can_id_group',
        '_tracks',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'rolling_count_2': 'uint8',
        'can_id_group': 'uint8',
        'tracks': 'sequence<delphi_esr_msgs/EsrTrackMotionPowerTrack>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['delphi_esr_msgs', 'msg'], 'EsrTrackMotionPowerTrack')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.canmsg = kwargs.get('canmsg', str())
        self.rolling_count_2 = kwargs.get('rolling_count_2', int())
        self.can_id_group = kwargs.get('can_id_group', int())
        self.tracks = kwargs.get('tracks', [])

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
        if self.canmsg != other.canmsg:
            return False
        if self.rolling_count_2 != other.rolling_count_2:
            return False
        if self.can_id_group != other.can_id_group:
            return False
        if self.tracks != other.tracks:
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
    def canmsg(self):
        """Message field 'canmsg'."""
        return self._canmsg

    @canmsg.setter
    def canmsg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'canmsg' field must be of type 'str'"
        self._canmsg = value

    @property
    def rolling_count_2(self):
        """Message field 'rolling_count_2'."""
        return self._rolling_count_2

    @rolling_count_2.setter
    def rolling_count_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rolling_count_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rolling_count_2' field must be an unsigned integer in [0, 255]"
        self._rolling_count_2 = value

    @property
    def can_id_group(self):
        """Message field 'can_id_group'."""
        return self._can_id_group

    @can_id_group.setter
    def can_id_group(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_id_group' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_id_group' field must be an unsigned integer in [0, 255]"
        self._can_id_group = value

    @property
    def tracks(self):
        """Message field 'tracks'."""
        return self._tracks

    @tracks.setter
    def tracks(self, value):
        if __debug__:
            from delphi_esr_msgs.msg import EsrTrackMotionPowerTrack
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
                 all(isinstance(v, EsrTrackMotionPowerTrack) for v in value) and
                 True), \
                "The 'tracks' field must be a set or sequence and each value of type 'EsrTrackMotionPowerTrack'"
        self._tracks = value
