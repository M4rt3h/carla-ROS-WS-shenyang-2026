# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_srr_msgs:msg/SrrStatus3.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SrrStatus3(type):
    """Metaclass of message 'SrrStatus3'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CAN_TX_ALIGNMENT_STATE_OFF': 0,
        'CAN_TX_ALIGNMENT_STATE_INIT': 1,
        'CAN_TX_ALIGNMENT_STATE_AUTOMATIC_ALIGNMENT': 2,
        'CAN_TX_ALIGNMENT_STATE_FACTORY_ALIGNMENT': 3,
        'CAN_TX_ALIGNMENT_STATE_SERVICE_ALIGNMENT': 4,
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
                'delphi_srr_msgs.msg.SrrStatus3')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__srr_status3
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__srr_status3
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__srr_status3
            cls._TYPE_SUPPORT = module.type_support_msg__msg__srr_status3
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__srr_status3

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CAN_TX_ALIGNMENT_STATE_OFF': cls.__constants['CAN_TX_ALIGNMENT_STATE_OFF'],
            'CAN_TX_ALIGNMENT_STATE_INIT': cls.__constants['CAN_TX_ALIGNMENT_STATE_INIT'],
            'CAN_TX_ALIGNMENT_STATE_AUTOMATIC_ALIGNMENT': cls.__constants['CAN_TX_ALIGNMENT_STATE_AUTOMATIC_ALIGNMENT'],
            'CAN_TX_ALIGNMENT_STATE_FACTORY_ALIGNMENT': cls.__constants['CAN_TX_ALIGNMENT_STATE_FACTORY_ALIGNMENT'],
            'CAN_TX_ALIGNMENT_STATE_SERVICE_ALIGNMENT': cls.__constants['CAN_TX_ALIGNMENT_STATE_SERVICE_ALIGNMENT'],
        }

    @property
    def CAN_TX_ALIGNMENT_STATE_OFF(self):
        """Message constant 'CAN_TX_ALIGNMENT_STATE_OFF'."""
        return Metaclass_SrrStatus3.__constants['CAN_TX_ALIGNMENT_STATE_OFF']

    @property
    def CAN_TX_ALIGNMENT_STATE_INIT(self):
        """Message constant 'CAN_TX_ALIGNMENT_STATE_INIT'."""
        return Metaclass_SrrStatus3.__constants['CAN_TX_ALIGNMENT_STATE_INIT']

    @property
    def CAN_TX_ALIGNMENT_STATE_AUTOMATIC_ALIGNMENT(self):
        """Message constant 'CAN_TX_ALIGNMENT_STATE_AUTOMATIC_ALIGNMENT'."""
        return Metaclass_SrrStatus3.__constants['CAN_TX_ALIGNMENT_STATE_AUTOMATIC_ALIGNMENT']

    @property
    def CAN_TX_ALIGNMENT_STATE_FACTORY_ALIGNMENT(self):
        """Message constant 'CAN_TX_ALIGNMENT_STATE_FACTORY_ALIGNMENT'."""
        return Metaclass_SrrStatus3.__constants['CAN_TX_ALIGNMENT_STATE_FACTORY_ALIGNMENT']

    @property
    def CAN_TX_ALIGNMENT_STATE_SERVICE_ALIGNMENT(self):
        """Message constant 'CAN_TX_ALIGNMENT_STATE_SERVICE_ALIGNMENT'."""
        return Metaclass_SrrStatus3.__constants['CAN_TX_ALIGNMENT_STATE_SERVICE_ALIGNMENT']


class SrrStatus3(metaclass=Metaclass_SrrStatus3):
    """
    Message class 'SrrStatus3'.

    Constants:
      CAN_TX_ALIGNMENT_STATE_OFF
      CAN_TX_ALIGNMENT_STATE_INIT
      CAN_TX_ALIGNMENT_STATE_AUTOMATIC_ALIGNMENT
      CAN_TX_ALIGNMENT_STATE_FACTORY_ALIGNMENT
      CAN_TX_ALIGNMENT_STATE_SERVICE_ALIGNMENT
    """

    __slots__ = [
        '_header',
        '_can_tx_alignment_state',
        '_can_tx_interface_ver_minor',
        '_can_tx_sw_version_arm',
        '_can_tx_hw_version',
        '_can_tx_interface_version',
        '_can_tx_serial_num',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_tx_alignment_state': 'uint8',
        'can_tx_interface_ver_minor': 'uint8',
        'can_tx_sw_version_arm': 'uint32',
        'can_tx_hw_version': 'uint8',
        'can_tx_interface_version': 'uint8',
        'can_tx_serial_num': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_tx_alignment_state = kwargs.get('can_tx_alignment_state', int())
        self.can_tx_interface_ver_minor = kwargs.get('can_tx_interface_ver_minor', int())
        self.can_tx_sw_version_arm = kwargs.get('can_tx_sw_version_arm', int())
        self.can_tx_hw_version = kwargs.get('can_tx_hw_version', int())
        self.can_tx_interface_version = kwargs.get('can_tx_interface_version', int())
        self.can_tx_serial_num = kwargs.get('can_tx_serial_num', int())

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
        if self.can_tx_alignment_state != other.can_tx_alignment_state:
            return False
        if self.can_tx_interface_ver_minor != other.can_tx_interface_ver_minor:
            return False
        if self.can_tx_sw_version_arm != other.can_tx_sw_version_arm:
            return False
        if self.can_tx_hw_version != other.can_tx_hw_version:
            return False
        if self.can_tx_interface_version != other.can_tx_interface_version:
            return False
        if self.can_tx_serial_num != other.can_tx_serial_num:
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
    def can_tx_alignment_state(self):
        """Message field 'can_tx_alignment_state'."""
        return self._can_tx_alignment_state

    @can_tx_alignment_state.setter
    def can_tx_alignment_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_alignment_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_alignment_state' field must be an unsigned integer in [0, 255]"
        self._can_tx_alignment_state = value

    @property
    def can_tx_interface_ver_minor(self):
        """Message field 'can_tx_interface_ver_minor'."""
        return self._can_tx_interface_ver_minor

    @can_tx_interface_ver_minor.setter
    def can_tx_interface_ver_minor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_interface_ver_minor' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_interface_ver_minor' field must be an unsigned integer in [0, 255]"
        self._can_tx_interface_ver_minor = value

    @property
    def can_tx_sw_version_arm(self):
        """Message field 'can_tx_sw_version_arm'."""
        return self._can_tx_sw_version_arm

    @can_tx_sw_version_arm.setter
    def can_tx_sw_version_arm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_sw_version_arm' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'can_tx_sw_version_arm' field must be an unsigned integer in [0, 4294967295]"
        self._can_tx_sw_version_arm = value

    @property
    def can_tx_hw_version(self):
        """Message field 'can_tx_hw_version'."""
        return self._can_tx_hw_version

    @can_tx_hw_version.setter
    def can_tx_hw_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_hw_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_hw_version' field must be an unsigned integer in [0, 255]"
        self._can_tx_hw_version = value

    @property
    def can_tx_interface_version(self):
        """Message field 'can_tx_interface_version'."""
        return self._can_tx_interface_version

    @can_tx_interface_version.setter
    def can_tx_interface_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_interface_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_interface_version' field must be an unsigned integer in [0, 255]"
        self._can_tx_interface_version = value

    @property
    def can_tx_serial_num(self):
        """Message field 'can_tx_serial_num'."""
        return self._can_tx_serial_num

    @can_tx_serial_num.setter
    def can_tx_serial_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_serial_num' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'can_tx_serial_num' field must be an unsigned integer in [0, 4294967295]"
        self._can_tx_serial_num = value
