# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_srr_msgs:msg/SrrTrack.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SrrTrack(type):
    """Metaclass of message 'SrrTrack'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CAN_TX_DETECT_VALID_LEVEL_SUSPECT_DETECTION': 0,
        'CAN_TX_DETECT_VALID_LEVEL_LEVEL_1': 1,
        'CAN_TX_DETECT_VALID_LEVEL_LEVEL_2': 2,
        'CAN_TX_DETECT_VALID_LEVEL_LEVEL_3': 3,
        'CAN_TX_DETECT_VALID_LEVEL_LEVEL_4': 4,
        'CAN_TX_DETECT_VALID_LEVEL_LEVEL_5': 5,
        'CAN_TX_DETECT_VALID_LEVEL_LEVEL_6': 6,
        'CAN_TX_DETECT_VALID_LEVEL_LEVEL_7': 7,
        'CAN_TX_DETECT_STATUS_NO_DATA': False,
        'CAN_TX_DETECT_STATUS_VALID_DATA_PRESENT': True,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('delphi_srr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_srr_msgs.msg.SrrTrack')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__srr_track
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__srr_track
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__srr_track
            cls._TYPE_SUPPORT = module.type_support_msg__msg__srr_track
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__srr_track

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CAN_TX_DETECT_VALID_LEVEL_SUSPECT_DETECTION': cls.__constants['CAN_TX_DETECT_VALID_LEVEL_SUSPECT_DETECTION'],
            'CAN_TX_DETECT_VALID_LEVEL_LEVEL_1': cls.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_1'],
            'CAN_TX_DETECT_VALID_LEVEL_LEVEL_2': cls.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_2'],
            'CAN_TX_DETECT_VALID_LEVEL_LEVEL_3': cls.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_3'],
            'CAN_TX_DETECT_VALID_LEVEL_LEVEL_4': cls.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_4'],
            'CAN_TX_DETECT_VALID_LEVEL_LEVEL_5': cls.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_5'],
            'CAN_TX_DETECT_VALID_LEVEL_LEVEL_6': cls.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_6'],
            'CAN_TX_DETECT_VALID_LEVEL_LEVEL_7': cls.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_7'],
            'CAN_TX_DETECT_STATUS_NO_DATA': cls.__constants['CAN_TX_DETECT_STATUS_NO_DATA'],
            'CAN_TX_DETECT_STATUS_VALID_DATA_PRESENT': cls.__constants['CAN_TX_DETECT_STATUS_VALID_DATA_PRESENT'],
        }

    @property
    def CAN_TX_DETECT_VALID_LEVEL_SUSPECT_DETECTION(self):
        """Message constant 'CAN_TX_DETECT_VALID_LEVEL_SUSPECT_DETECTION'."""
        return Metaclass_SrrTrack.__constants['CAN_TX_DETECT_VALID_LEVEL_SUSPECT_DETECTION']

    @property
    def CAN_TX_DETECT_VALID_LEVEL_LEVEL_1(self):
        """Message constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_1'."""
        return Metaclass_SrrTrack.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_1']

    @property
    def CAN_TX_DETECT_VALID_LEVEL_LEVEL_2(self):
        """Message constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_2'."""
        return Metaclass_SrrTrack.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_2']

    @property
    def CAN_TX_DETECT_VALID_LEVEL_LEVEL_3(self):
        """Message constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_3'."""
        return Metaclass_SrrTrack.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_3']

    @property
    def CAN_TX_DETECT_VALID_LEVEL_LEVEL_4(self):
        """Message constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_4'."""
        return Metaclass_SrrTrack.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_4']

    @property
    def CAN_TX_DETECT_VALID_LEVEL_LEVEL_5(self):
        """Message constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_5'."""
        return Metaclass_SrrTrack.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_5']

    @property
    def CAN_TX_DETECT_VALID_LEVEL_LEVEL_6(self):
        """Message constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_6'."""
        return Metaclass_SrrTrack.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_6']

    @property
    def CAN_TX_DETECT_VALID_LEVEL_LEVEL_7(self):
        """Message constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_7'."""
        return Metaclass_SrrTrack.__constants['CAN_TX_DETECT_VALID_LEVEL_LEVEL_7']

    @property
    def CAN_TX_DETECT_STATUS_NO_DATA(self):
        """Message constant 'CAN_TX_DETECT_STATUS_NO_DATA'."""
        return Metaclass_SrrTrack.__constants['CAN_TX_DETECT_STATUS_NO_DATA']

    @property
    def CAN_TX_DETECT_STATUS_VALID_DATA_PRESENT(self):
        """Message constant 'CAN_TX_DETECT_STATUS_VALID_DATA_PRESENT'."""
        return Metaclass_SrrTrack.__constants['CAN_TX_DETECT_STATUS_VALID_DATA_PRESENT']


class SrrTrack(metaclass=Metaclass_SrrTrack):
    """
    Message class 'SrrTrack'.

    Constants:
      CAN_TX_DETECT_VALID_LEVEL_SUSPECT_DETECTION
      CAN_TX_DETECT_VALID_LEVEL_LEVEL_1
      CAN_TX_DETECT_VALID_LEVEL_LEVEL_2
      CAN_TX_DETECT_VALID_LEVEL_LEVEL_3
      CAN_TX_DETECT_VALID_LEVEL_LEVEL_4
      CAN_TX_DETECT_VALID_LEVEL_LEVEL_5
      CAN_TX_DETECT_VALID_LEVEL_LEVEL_6
      CAN_TX_DETECT_VALID_LEVEL_LEVEL_7
      CAN_TX_DETECT_STATUS_NO_DATA
      CAN_TX_DETECT_STATUS_VALID_DATA_PRESENT
    """

    __slots__ = [
        '_header',
        '_can_tx_detect_valid_level',
        '_can_tx_detect_status',
        '_can_tx_detect_range_rate',
        '_can_tx_detect_range',
        '_can_tx_detect_angle',
        '_can_tx_detect_amplitude',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_tx_detect_valid_level': 'uint8',
        'can_tx_detect_status': 'boolean',
        'can_tx_detect_range_rate': 'float',
        'can_tx_detect_range': 'float',
        'can_tx_detect_angle': 'float',
        'can_tx_detect_amplitude': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_tx_detect_valid_level = kwargs.get('can_tx_detect_valid_level', int())
        self.can_tx_detect_status = kwargs.get('can_tx_detect_status', bool())
        self.can_tx_detect_range_rate = kwargs.get('can_tx_detect_range_rate', float())
        self.can_tx_detect_range = kwargs.get('can_tx_detect_range', float())
        self.can_tx_detect_angle = kwargs.get('can_tx_detect_angle', float())
        self.can_tx_detect_amplitude = kwargs.get('can_tx_detect_amplitude', float())

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
        if self.can_tx_detect_valid_level != other.can_tx_detect_valid_level:
            return False
        if self.can_tx_detect_status != other.can_tx_detect_status:
            return False
        if self.can_tx_detect_range_rate != other.can_tx_detect_range_rate:
            return False
        if self.can_tx_detect_range != other.can_tx_detect_range:
            return False
        if self.can_tx_detect_angle != other.can_tx_detect_angle:
            return False
        if self.can_tx_detect_amplitude != other.can_tx_detect_amplitude:
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
    def can_tx_detect_valid_level(self):
        """Message field 'can_tx_detect_valid_level'."""
        return self._can_tx_detect_valid_level

    @can_tx_detect_valid_level.setter
    def can_tx_detect_valid_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_detect_valid_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_detect_valid_level' field must be an unsigned integer in [0, 255]"
        self._can_tx_detect_valid_level = value

    @property
    def can_tx_detect_status(self):
        """Message field 'can_tx_detect_status'."""
        return self._can_tx_detect_status

    @can_tx_detect_status.setter
    def can_tx_detect_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_tx_detect_status' field must be of type 'bool'"
        self._can_tx_detect_status = value

    @property
    def can_tx_detect_range_rate(self):
        """Message field 'can_tx_detect_range_rate'."""
        return self._can_tx_detect_range_rate

    @can_tx_detect_range_rate.setter
    def can_tx_detect_range_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_detect_range_rate' field must be of type 'float'"
        self._can_tx_detect_range_rate = value

    @property
    def can_tx_detect_range(self):
        """Message field 'can_tx_detect_range'."""
        return self._can_tx_detect_range

    @can_tx_detect_range.setter
    def can_tx_detect_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_detect_range' field must be of type 'float'"
        self._can_tx_detect_range = value

    @property
    def can_tx_detect_angle(self):
        """Message field 'can_tx_detect_angle'."""
        return self._can_tx_detect_angle

    @can_tx_detect_angle.setter
    def can_tx_detect_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_detect_angle' field must be of type 'float'"
        self._can_tx_detect_angle = value

    @property
    def can_tx_detect_amplitude(self):
        """Message field 'can_tx_detect_amplitude'."""
        return self._can_tx_detect_amplitude

    @can_tx_detect_amplitude.setter
    def can_tx_detect_amplitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_detect_amplitude' field must be of type 'float'"
        self._can_tx_detect_amplitude = value
