# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mobileye_560_660_msgs:msg/AwsDisplay.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AwsDisplay(type):
    """Metaclass of message 'AwsDisplay'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SOUND_SILENT': 0,
        'SOUND_LDWL': 1,
        'SOUND_LDWR': 2,
        'SOUND_FAR_HW': 3,
        'SOUND_NEAR_HW': 4,
        'SOUND_SOFT_FCW': 5,
        'SOUND_HARD_FCW': 6,
        'SOUND_RESERVED': 7,
        'HEADWAY_LEVEL_OFF': 0,
        'HEADWAY_LEVEL_GREEN': 1,
        'HEADWAY_LEVEL_ORANGE': 2,
        'HEADWAY_LEVEL_RED': 3,
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
                'mobileye_560_660_msgs.msg.AwsDisplay')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__aws_display
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__aws_display
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__aws_display
            cls._TYPE_SUPPORT = module.type_support_msg__msg__aws_display
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__aws_display

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SOUND_SILENT': cls.__constants['SOUND_SILENT'],
            'SOUND_LDWL': cls.__constants['SOUND_LDWL'],
            'SOUND_LDWR': cls.__constants['SOUND_LDWR'],
            'SOUND_FAR_HW': cls.__constants['SOUND_FAR_HW'],
            'SOUND_NEAR_HW': cls.__constants['SOUND_NEAR_HW'],
            'SOUND_SOFT_FCW': cls.__constants['SOUND_SOFT_FCW'],
            'SOUND_HARD_FCW': cls.__constants['SOUND_HARD_FCW'],
            'SOUND_RESERVED': cls.__constants['SOUND_RESERVED'],
            'HEADWAY_LEVEL_OFF': cls.__constants['HEADWAY_LEVEL_OFF'],
            'HEADWAY_LEVEL_GREEN': cls.__constants['HEADWAY_LEVEL_GREEN'],
            'HEADWAY_LEVEL_ORANGE': cls.__constants['HEADWAY_LEVEL_ORANGE'],
            'HEADWAY_LEVEL_RED': cls.__constants['HEADWAY_LEVEL_RED'],
        }

    @property
    def SOUND_SILENT(self):
        """Message constant 'SOUND_SILENT'."""
        return Metaclass_AwsDisplay.__constants['SOUND_SILENT']

    @property
    def SOUND_LDWL(self):
        """Message constant 'SOUND_LDWL'."""
        return Metaclass_AwsDisplay.__constants['SOUND_LDWL']

    @property
    def SOUND_LDWR(self):
        """Message constant 'SOUND_LDWR'."""
        return Metaclass_AwsDisplay.__constants['SOUND_LDWR']

    @property
    def SOUND_FAR_HW(self):
        """Message constant 'SOUND_FAR_HW'."""
        return Metaclass_AwsDisplay.__constants['SOUND_FAR_HW']

    @property
    def SOUND_NEAR_HW(self):
        """Message constant 'SOUND_NEAR_HW'."""
        return Metaclass_AwsDisplay.__constants['SOUND_NEAR_HW']

    @property
    def SOUND_SOFT_FCW(self):
        """Message constant 'SOUND_SOFT_FCW'."""
        return Metaclass_AwsDisplay.__constants['SOUND_SOFT_FCW']

    @property
    def SOUND_HARD_FCW(self):
        """Message constant 'SOUND_HARD_FCW'."""
        return Metaclass_AwsDisplay.__constants['SOUND_HARD_FCW']

    @property
    def SOUND_RESERVED(self):
        """Message constant 'SOUND_RESERVED'."""
        return Metaclass_AwsDisplay.__constants['SOUND_RESERVED']

    @property
    def HEADWAY_LEVEL_OFF(self):
        """Message constant 'HEADWAY_LEVEL_OFF'."""
        return Metaclass_AwsDisplay.__constants['HEADWAY_LEVEL_OFF']

    @property
    def HEADWAY_LEVEL_GREEN(self):
        """Message constant 'HEADWAY_LEVEL_GREEN'."""
        return Metaclass_AwsDisplay.__constants['HEADWAY_LEVEL_GREEN']

    @property
    def HEADWAY_LEVEL_ORANGE(self):
        """Message constant 'HEADWAY_LEVEL_ORANGE'."""
        return Metaclass_AwsDisplay.__constants['HEADWAY_LEVEL_ORANGE']

    @property
    def HEADWAY_LEVEL_RED(self):
        """Message constant 'HEADWAY_LEVEL_RED'."""
        return Metaclass_AwsDisplay.__constants['HEADWAY_LEVEL_RED']


class AwsDisplay(metaclass=Metaclass_AwsDisplay):
    """
    Message class 'AwsDisplay'.

    Constants:
      SOUND_SILENT
      SOUND_LDWL
      SOUND_LDWR
      SOUND_FAR_HW
      SOUND_NEAR_HW
      SOUND_SOFT_FCW
      SOUND_HARD_FCW
      SOUND_RESERVED
      HEADWAY_LEVEL_OFF
      HEADWAY_LEVEL_GREEN
      HEADWAY_LEVEL_ORANGE
      HEADWAY_LEVEL_RED
    """

    __slots__ = [
        '_header',
        '_suppress_sound',
        '_night_time',
        '_dusk_time',
        '_sound_type',
        '_headway_valid',
        '_headway_measurement',
        '_lanes_on',
        '_left_ldw_on',
        '_right_ldw_on',
        '_fcw_on',
        '_left_crossing',
        '_right_crossing',
        '_maintenance',
        '_failsafe',
        '_ped_fcw',
        '_ped_in_dz',
        '_headway_warning_level',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'suppress_sound': 'boolean',
        'night_time': 'boolean',
        'dusk_time': 'boolean',
        'sound_type': 'uint8',
        'headway_valid': 'boolean',
        'headway_measurement': 'float',
        'lanes_on': 'boolean',
        'left_ldw_on': 'boolean',
        'right_ldw_on': 'boolean',
        'fcw_on': 'boolean',
        'left_crossing': 'boolean',
        'right_crossing': 'boolean',
        'maintenance': 'boolean',
        'failsafe': 'boolean',
        'ped_fcw': 'boolean',
        'ped_in_dz': 'boolean',
        'headway_warning_level': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.suppress_sound = kwargs.get('suppress_sound', bool())
        self.night_time = kwargs.get('night_time', bool())
        self.dusk_time = kwargs.get('dusk_time', bool())
        self.sound_type = kwargs.get('sound_type', int())
        self.headway_valid = kwargs.get('headway_valid', bool())
        self.headway_measurement = kwargs.get('headway_measurement', float())
        self.lanes_on = kwargs.get('lanes_on', bool())
        self.left_ldw_on = kwargs.get('left_ldw_on', bool())
        self.right_ldw_on = kwargs.get('right_ldw_on', bool())
        self.fcw_on = kwargs.get('fcw_on', bool())
        self.left_crossing = kwargs.get('left_crossing', bool())
        self.right_crossing = kwargs.get('right_crossing', bool())
        self.maintenance = kwargs.get('maintenance', bool())
        self.failsafe = kwargs.get('failsafe', bool())
        self.ped_fcw = kwargs.get('ped_fcw', bool())
        self.ped_in_dz = kwargs.get('ped_in_dz', bool())
        self.headway_warning_level = kwargs.get('headway_warning_level', int())

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
        if self.suppress_sound != other.suppress_sound:
            return False
        if self.night_time != other.night_time:
            return False
        if self.dusk_time != other.dusk_time:
            return False
        if self.sound_type != other.sound_type:
            return False
        if self.headway_valid != other.headway_valid:
            return False
        if self.headway_measurement != other.headway_measurement:
            return False
        if self.lanes_on != other.lanes_on:
            return False
        if self.left_ldw_on != other.left_ldw_on:
            return False
        if self.right_ldw_on != other.right_ldw_on:
            return False
        if self.fcw_on != other.fcw_on:
            return False
        if self.left_crossing != other.left_crossing:
            return False
        if self.right_crossing != other.right_crossing:
            return False
        if self.maintenance != other.maintenance:
            return False
        if self.failsafe != other.failsafe:
            return False
        if self.ped_fcw != other.ped_fcw:
            return False
        if self.ped_in_dz != other.ped_in_dz:
            return False
        if self.headway_warning_level != other.headway_warning_level:
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
    def suppress_sound(self):
        """Message field 'suppress_sound'."""
        return self._suppress_sound

    @suppress_sound.setter
    def suppress_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'suppress_sound' field must be of type 'bool'"
        self._suppress_sound = value

    @property
    def night_time(self):
        """Message field 'night_time'."""
        return self._night_time

    @night_time.setter
    def night_time(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'night_time' field must be of type 'bool'"
        self._night_time = value

    @property
    def dusk_time(self):
        """Message field 'dusk_time'."""
        return self._dusk_time

    @dusk_time.setter
    def dusk_time(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dusk_time' field must be of type 'bool'"
        self._dusk_time = value

    @property
    def sound_type(self):
        """Message field 'sound_type'."""
        return self._sound_type

    @sound_type.setter
    def sound_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sound_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sound_type' field must be an unsigned integer in [0, 255]"
        self._sound_type = value

    @property
    def headway_valid(self):
        """Message field 'headway_valid'."""
        return self._headway_valid

    @headway_valid.setter
    def headway_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'headway_valid' field must be of type 'bool'"
        self._headway_valid = value

    @property
    def headway_measurement(self):
        """Message field 'headway_measurement'."""
        return self._headway_measurement

    @headway_measurement.setter
    def headway_measurement(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'headway_measurement' field must be of type 'float'"
        self._headway_measurement = value

    @property
    def lanes_on(self):
        """Message field 'lanes_on'."""
        return self._lanes_on

    @lanes_on.setter
    def lanes_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lanes_on' field must be of type 'bool'"
        self._lanes_on = value

    @property
    def left_ldw_on(self):
        """Message field 'left_ldw_on'."""
        return self._left_ldw_on

    @left_ldw_on.setter
    def left_ldw_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_ldw_on' field must be of type 'bool'"
        self._left_ldw_on = value

    @property
    def right_ldw_on(self):
        """Message field 'right_ldw_on'."""
        return self._right_ldw_on

    @right_ldw_on.setter
    def right_ldw_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_ldw_on' field must be of type 'bool'"
        self._right_ldw_on = value

    @property
    def fcw_on(self):
        """Message field 'fcw_on'."""
        return self._fcw_on

    @fcw_on.setter
    def fcw_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fcw_on' field must be of type 'bool'"
        self._fcw_on = value

    @property
    def left_crossing(self):
        """Message field 'left_crossing'."""
        return self._left_crossing

    @left_crossing.setter
    def left_crossing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_crossing' field must be of type 'bool'"
        self._left_crossing = value

    @property
    def right_crossing(self):
        """Message field 'right_crossing'."""
        return self._right_crossing

    @right_crossing.setter
    def right_crossing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_crossing' field must be of type 'bool'"
        self._right_crossing = value

    @property
    def maintenance(self):
        """Message field 'maintenance'."""
        return self._maintenance

    @maintenance.setter
    def maintenance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'maintenance' field must be of type 'bool'"
        self._maintenance = value

    @property
    def failsafe(self):
        """Message field 'failsafe'."""
        return self._failsafe

    @failsafe.setter
    def failsafe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'failsafe' field must be of type 'bool'"
        self._failsafe = value

    @property
    def ped_fcw(self):
        """Message field 'ped_fcw'."""
        return self._ped_fcw

    @ped_fcw.setter
    def ped_fcw(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ped_fcw' field must be of type 'bool'"
        self._ped_fcw = value

    @property
    def ped_in_dz(self):
        """Message field 'ped_in_dz'."""
        return self._ped_in_dz

    @ped_in_dz.setter
    def ped_in_dz(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ped_in_dz' field must be of type 'bool'"
        self._ped_in_dz = value

    @property
    def headway_warning_level(self):
        """Message field 'headway_warning_level'."""
        return self._headway_warning_level

    @headway_warning_level.setter
    def headway_warning_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'headway_warning_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'headway_warning_level' field must be an unsigned integer in [0, 255]"
        self._headway_warning_level = value
