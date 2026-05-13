# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrVehicle5.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrVehicle5(type):
    """Metaclass of message 'EsrVehicle5'."""

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
                'delphi_esr_msgs.msg.EsrVehicle5')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_vehicle5
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_vehicle5
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_vehicle5
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_vehicle5
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_vehicle5

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


class EsrVehicle5(metaclass=Metaclass_EsrVehicle5):
    """Message class 'EsrVehicle5'."""

    __slots__ = [
        '_header',
        '_oversteer_understeer',
        '_yaw_rate_bias_shift',
        '_beamwidth_vert',
        '_funnel_offset_left',
        '_funnel_offset_right',
        '_cw_blockage_threshold',
        '_distance_rear_axle',
        '_wheelbase',
        '_steering_gear_ratio',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'oversteer_understeer': 'int8',
        'yaw_rate_bias_shift': 'boolean',
        'beamwidth_vert': 'float',
        'funnel_offset_left': 'float',
        'funnel_offset_right': 'float',
        'cw_blockage_threshold': 'float',
        'distance_rear_axle': 'uint16',
        'wheelbase': 'uint16',
        'steering_gear_ratio': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.oversteer_understeer = kwargs.get('oversteer_understeer', int())
        self.yaw_rate_bias_shift = kwargs.get('yaw_rate_bias_shift', bool())
        self.beamwidth_vert = kwargs.get('beamwidth_vert', float())
        self.funnel_offset_left = kwargs.get('funnel_offset_left', float())
        self.funnel_offset_right = kwargs.get('funnel_offset_right', float())
        self.cw_blockage_threshold = kwargs.get('cw_blockage_threshold', float())
        self.distance_rear_axle = kwargs.get('distance_rear_axle', int())
        self.wheelbase = kwargs.get('wheelbase', int())
        self.steering_gear_ratio = kwargs.get('steering_gear_ratio', float())

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
        if self.oversteer_understeer != other.oversteer_understeer:
            return False
        if self.yaw_rate_bias_shift != other.yaw_rate_bias_shift:
            return False
        if self.beamwidth_vert != other.beamwidth_vert:
            return False
        if self.funnel_offset_left != other.funnel_offset_left:
            return False
        if self.funnel_offset_right != other.funnel_offset_right:
            return False
        if self.cw_blockage_threshold != other.cw_blockage_threshold:
            return False
        if self.distance_rear_axle != other.distance_rear_axle:
            return False
        if self.wheelbase != other.wheelbase:
            return False
        if self.steering_gear_ratio != other.steering_gear_ratio:
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
    def oversteer_understeer(self):
        """Message field 'oversteer_understeer'."""
        return self._oversteer_understeer

    @oversteer_understeer.setter
    def oversteer_understeer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'oversteer_understeer' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'oversteer_understeer' field must be an integer in [-128, 127]"
        self._oversteer_understeer = value

    @property
    def yaw_rate_bias_shift(self):
        """Message field 'yaw_rate_bias_shift'."""
        return self._yaw_rate_bias_shift

    @yaw_rate_bias_shift.setter
    def yaw_rate_bias_shift(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'yaw_rate_bias_shift' field must be of type 'bool'"
        self._yaw_rate_bias_shift = value

    @property
    def beamwidth_vert(self):
        """Message field 'beamwidth_vert'."""
        return self._beamwidth_vert

    @beamwidth_vert.setter
    def beamwidth_vert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'beamwidth_vert' field must be of type 'float'"
        self._beamwidth_vert = value

    @property
    def funnel_offset_left(self):
        """Message field 'funnel_offset_left'."""
        return self._funnel_offset_left

    @funnel_offset_left.setter
    def funnel_offset_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'funnel_offset_left' field must be of type 'float'"
        self._funnel_offset_left = value

    @property
    def funnel_offset_right(self):
        """Message field 'funnel_offset_right'."""
        return self._funnel_offset_right

    @funnel_offset_right.setter
    def funnel_offset_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'funnel_offset_right' field must be of type 'float'"
        self._funnel_offset_right = value

    @property
    def cw_blockage_threshold(self):
        """Message field 'cw_blockage_threshold'."""
        return self._cw_blockage_threshold

    @cw_blockage_threshold.setter
    def cw_blockage_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cw_blockage_threshold' field must be of type 'float'"
        self._cw_blockage_threshold = value

    @property
    def distance_rear_axle(self):
        """Message field 'distance_rear_axle'."""
        return self._distance_rear_axle

    @distance_rear_axle.setter
    def distance_rear_axle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance_rear_axle' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'distance_rear_axle' field must be an unsigned integer in [0, 65535]"
        self._distance_rear_axle = value

    @property
    def wheelbase(self):
        """Message field 'wheelbase'."""
        return self._wheelbase

    @wheelbase.setter
    def wheelbase(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wheelbase' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'wheelbase' field must be an unsigned integer in [0, 65535]"
        self._wheelbase = value

    @property
    def steering_gear_ratio(self):
        """Message field 'steering_gear_ratio'."""
        return self._steering_gear_ratio

    @steering_gear_ratio.setter
    def steering_gear_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_gear_ratio' field must be of type 'float'"
        self._steering_gear_ratio = value
