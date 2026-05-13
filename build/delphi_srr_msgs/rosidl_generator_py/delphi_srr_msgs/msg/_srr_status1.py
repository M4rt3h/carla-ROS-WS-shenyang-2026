# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_srr_msgs:msg/SrrStatus1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SrrStatus1(type):
    """Metaclass of message 'SrrStatus1'."""

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
            module = import_type_support('delphi_srr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_srr_msgs.msg.SrrStatus1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__srr_status1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__srr_status1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__srr_status1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__srr_status1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__srr_status1

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


class SrrStatus1(metaclass=Metaclass_SrrStatus1):
    """Message class 'SrrStatus1'."""

    __slots__ = [
        '_header',
        '_can_tx_look_type',
        '_can_tx_dsp_timestamp',
        '_can_tx_yaw_rate_calc',
        '_can_tx_vehicle_speed_calc',
        '_can_tx_scan_index',
        '_can_tx_curvature',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_tx_look_type': 'boolean',
        'can_tx_dsp_timestamp': 'uint32',
        'can_tx_yaw_rate_calc': 'float',
        'can_tx_vehicle_speed_calc': 'float',
        'can_tx_scan_index': 'uint16',
        'can_tx_curvature': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_tx_look_type = kwargs.get('can_tx_look_type', bool())
        self.can_tx_dsp_timestamp = kwargs.get('can_tx_dsp_timestamp', int())
        self.can_tx_yaw_rate_calc = kwargs.get('can_tx_yaw_rate_calc', float())
        self.can_tx_vehicle_speed_calc = kwargs.get('can_tx_vehicle_speed_calc', float())
        self.can_tx_scan_index = kwargs.get('can_tx_scan_index', int())
        self.can_tx_curvature = kwargs.get('can_tx_curvature', float())

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
        if self.can_tx_look_type != other.can_tx_look_type:
            return False
        if self.can_tx_dsp_timestamp != other.can_tx_dsp_timestamp:
            return False
        if self.can_tx_yaw_rate_calc != other.can_tx_yaw_rate_calc:
            return False
        if self.can_tx_vehicle_speed_calc != other.can_tx_vehicle_speed_calc:
            return False
        if self.can_tx_scan_index != other.can_tx_scan_index:
            return False
        if self.can_tx_curvature != other.can_tx_curvature:
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
    def can_tx_look_type(self):
        """Message field 'can_tx_look_type'."""
        return self._can_tx_look_type

    @can_tx_look_type.setter
    def can_tx_look_type(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_tx_look_type' field must be of type 'bool'"
        self._can_tx_look_type = value

    @property
    def can_tx_dsp_timestamp(self):
        """Message field 'can_tx_dsp_timestamp'."""
        return self._can_tx_dsp_timestamp

    @can_tx_dsp_timestamp.setter
    def can_tx_dsp_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_dsp_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'can_tx_dsp_timestamp' field must be an unsigned integer in [0, 4294967295]"
        self._can_tx_dsp_timestamp = value

    @property
    def can_tx_yaw_rate_calc(self):
        """Message field 'can_tx_yaw_rate_calc'."""
        return self._can_tx_yaw_rate_calc

    @can_tx_yaw_rate_calc.setter
    def can_tx_yaw_rate_calc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_yaw_rate_calc' field must be of type 'float'"
        self._can_tx_yaw_rate_calc = value

    @property
    def can_tx_vehicle_speed_calc(self):
        """Message field 'can_tx_vehicle_speed_calc'."""
        return self._can_tx_vehicle_speed_calc

    @can_tx_vehicle_speed_calc.setter
    def can_tx_vehicle_speed_calc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_vehicle_speed_calc' field must be of type 'float'"
        self._can_tx_vehicle_speed_calc = value

    @property
    def can_tx_scan_index(self):
        """Message field 'can_tx_scan_index'."""
        return self._can_tx_scan_index

    @can_tx_scan_index.setter
    def can_tx_scan_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_scan_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_tx_scan_index' field must be an unsigned integer in [0, 65535]"
        self._can_tx_scan_index = value

    @property
    def can_tx_curvature(self):
        """Message field 'can_tx_curvature'."""
        return self._can_tx_curvature

    @can_tx_curvature.setter
    def can_tx_curvature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_curvature' field must be of type 'float'"
        self._can_tx_curvature = value
