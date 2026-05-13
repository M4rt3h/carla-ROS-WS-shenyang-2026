# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrTrack.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrTrack(type):
    """Metaclass of message 'EsrTrack'."""

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
                'delphi_esr_msgs.msg.EsrTrack')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_track
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_track
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_track
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_track
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_track

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


class EsrTrack(metaclass=Metaclass_EsrTrack):
    """Message class 'EsrTrack'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_id',
        '_lat_rate',
        '_grouping_changed',
        '_oncoming',
        '_status',
        '_angle',
        '_range',
        '_bridge_object',
        '_rolling_count',
        '_width',
        '_range_accel',
        '_med_range_mode',
        '_range_rate',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'id': 'uint8',
        'lat_rate': 'float',
        'grouping_changed': 'boolean',
        'oncoming': 'boolean',
        'status': 'uint8',
        'angle': 'float',
        'range': 'float',
        'bridge_object': 'boolean',
        'rolling_count': 'boolean',
        'width': 'float',
        'range_accel': 'float',
        'med_range_mode': 'uint8',
        'range_rate': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.canmsg = kwargs.get('canmsg', str())
        self.id = kwargs.get('id', int())
        self.lat_rate = kwargs.get('lat_rate', float())
        self.grouping_changed = kwargs.get('grouping_changed', bool())
        self.oncoming = kwargs.get('oncoming', bool())
        self.status = kwargs.get('status', int())
        self.angle = kwargs.get('angle', float())
        self.range = kwargs.get('range', float())
        self.bridge_object = kwargs.get('bridge_object', bool())
        self.rolling_count = kwargs.get('rolling_count', bool())
        self.width = kwargs.get('width', float())
        self.range_accel = kwargs.get('range_accel', float())
        self.med_range_mode = kwargs.get('med_range_mode', int())
        self.range_rate = kwargs.get('range_rate', float())

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
        if self.id != other.id:
            return False
        if self.lat_rate != other.lat_rate:
            return False
        if self.grouping_changed != other.grouping_changed:
            return False
        if self.oncoming != other.oncoming:
            return False
        if self.status != other.status:
            return False
        if self.angle != other.angle:
            return False
        if self.range != other.range:
            return False
        if self.bridge_object != other.bridge_object:
            return False
        if self.rolling_count != other.rolling_count:
            return False
        if self.width != other.width:
            return False
        if self.range_accel != other.range_accel:
            return False
        if self.med_range_mode != other.med_range_mode:
            return False
        if self.range_rate != other.range_rate:
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
    def lat_rate(self):
        """Message field 'lat_rate'."""
        return self._lat_rate

    @lat_rate.setter
    def lat_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_rate' field must be of type 'float'"
        self._lat_rate = value

    @property
    def grouping_changed(self):
        """Message field 'grouping_changed'."""
        return self._grouping_changed

    @grouping_changed.setter
    def grouping_changed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'grouping_changed' field must be of type 'bool'"
        self._grouping_changed = value

    @property
    def oncoming(self):
        """Message field 'oncoming'."""
        return self._oncoming

    @oncoming.setter
    def oncoming(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'oncoming' field must be of type 'bool'"
        self._oncoming = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
        self._angle = value

    @property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
        self._range = value

    @property
    def bridge_object(self):
        """Message field 'bridge_object'."""
        return self._bridge_object

    @bridge_object.setter
    def bridge_object(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bridge_object' field must be of type 'bool'"
        self._bridge_object = value

    @property
    def rolling_count(self):
        """Message field 'rolling_count'."""
        return self._rolling_count

    @rolling_count.setter
    def rolling_count(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rolling_count' field must be of type 'bool'"
        self._rolling_count = value

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
        self._width = value

    @property
    def range_accel(self):
        """Message field 'range_accel'."""
        return self._range_accel

    @range_accel.setter
    def range_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_accel' field must be of type 'float'"
        self._range_accel = value

    @property
    def med_range_mode(self):
        """Message field 'med_range_mode'."""
        return self._med_range_mode

    @med_range_mode.setter
    def med_range_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'med_range_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'med_range_mode' field must be an unsigned integer in [0, 255]"
        self._med_range_mode = value

    @property
    def range_rate(self):
        """Message field 'range_rate'."""
        return self._range_rate

    @range_rate.setter
    def range_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_rate' field must be of type 'float'"
        self._range_rate = value
