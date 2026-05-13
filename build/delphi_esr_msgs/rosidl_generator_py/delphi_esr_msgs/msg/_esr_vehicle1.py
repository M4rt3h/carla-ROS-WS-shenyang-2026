# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrVehicle1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrVehicle1(type):
    """Metaclass of message 'EsrVehicle1'."""

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
                'delphi_esr_msgs.msg.EsrVehicle1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_vehicle1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_vehicle1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_vehicle1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_vehicle1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_vehicle1

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


class EsrVehicle1(metaclass=Metaclass_EsrVehicle1):
    """Message class 'EsrVehicle1'."""

    __slots__ = [
        '_header',
        '_vehicle_speed',
        '_vehicle_speed_direction',
        '_yaw_rate',
        '_yaw_rate_validity',
        '_steering_angle_rate_sign',
        '_radius_curvature',
        '_steering_angle_validity',
        '_steering_angle_sign',
        '_steering_angle',
        '_steering_angle_rate',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vehicle_speed': 'float',
        'vehicle_speed_direction': 'boolean',
        'yaw_rate': 'float',
        'yaw_rate_validity': 'boolean',
        'steering_angle_rate_sign': 'boolean',
        'radius_curvature': 'int16',
        'steering_angle_validity': 'boolean',
        'steering_angle_sign': 'boolean',
        'steering_angle': 'uint16',
        'steering_angle_rate': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.vehicle_speed = kwargs.get('vehicle_speed', float())
        self.vehicle_speed_direction = kwargs.get('vehicle_speed_direction', bool())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.yaw_rate_validity = kwargs.get('yaw_rate_validity', bool())
        self.steering_angle_rate_sign = kwargs.get('steering_angle_rate_sign', bool())
        self.radius_curvature = kwargs.get('radius_curvature', int())
        self.steering_angle_validity = kwargs.get('steering_angle_validity', bool())
        self.steering_angle_sign = kwargs.get('steering_angle_sign', bool())
        self.steering_angle = kwargs.get('steering_angle', int())
        self.steering_angle_rate = kwargs.get('steering_angle_rate', int())

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
        if self.vehicle_speed != other.vehicle_speed:
            return False
        if self.vehicle_speed_direction != other.vehicle_speed_direction:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.yaw_rate_validity != other.yaw_rate_validity:
            return False
        if self.steering_angle_rate_sign != other.steering_angle_rate_sign:
            return False
        if self.radius_curvature != other.radius_curvature:
            return False
        if self.steering_angle_validity != other.steering_angle_validity:
            return False
        if self.steering_angle_sign != other.steering_angle_sign:
            return False
        if self.steering_angle != other.steering_angle:
            return False
        if self.steering_angle_rate != other.steering_angle_rate:
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
    def vehicle_speed(self):
        """Message field 'vehicle_speed'."""
        return self._vehicle_speed

    @vehicle_speed.setter
    def vehicle_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_speed' field must be of type 'float'"
        self._vehicle_speed = value

    @property
    def vehicle_speed_direction(self):
        """Message field 'vehicle_speed_direction'."""
        return self._vehicle_speed_direction

    @vehicle_speed_direction.setter
    def vehicle_speed_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vehicle_speed_direction' field must be of type 'bool'"
        self._vehicle_speed_direction = value

    @property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
        self._yaw_rate = value

    @property
    def yaw_rate_validity(self):
        """Message field 'yaw_rate_validity'."""
        return self._yaw_rate_validity

    @yaw_rate_validity.setter
    def yaw_rate_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'yaw_rate_validity' field must be of type 'bool'"
        self._yaw_rate_validity = value

    @property
    def steering_angle_rate_sign(self):
        """Message field 'steering_angle_rate_sign'."""
        return self._steering_angle_rate_sign

    @steering_angle_rate_sign.setter
    def steering_angle_rate_sign(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'steering_angle_rate_sign' field must be of type 'bool'"
        self._steering_angle_rate_sign = value

    @property
    def radius_curvature(self):
        """Message field 'radius_curvature'."""
        return self._radius_curvature

    @radius_curvature.setter
    def radius_curvature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radius_curvature' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'radius_curvature' field must be an integer in [-32768, 32767]"
        self._radius_curvature = value

    @property
    def steering_angle_validity(self):
        """Message field 'steering_angle_validity'."""
        return self._steering_angle_validity

    @steering_angle_validity.setter
    def steering_angle_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'steering_angle_validity' field must be of type 'bool'"
        self._steering_angle_validity = value

    @property
    def steering_angle_sign(self):
        """Message field 'steering_angle_sign'."""
        return self._steering_angle_sign

    @steering_angle_sign.setter
    def steering_angle_sign(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'steering_angle_sign' field must be of type 'bool'"
        self._steering_angle_sign = value

    @property
    def steering_angle(self):
        """Message field 'steering_angle'."""
        return self._steering_angle

    @steering_angle.setter
    def steering_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steering_angle' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'steering_angle' field must be an unsigned integer in [0, 65535]"
        self._steering_angle = value

    @property
    def steering_angle_rate(self):
        """Message field 'steering_angle_rate'."""
        return self._steering_angle_rate

    @steering_angle_rate.setter
    def steering_angle_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steering_angle_rate' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'steering_angle_rate' field must be an unsigned integer in [0, 65535]"
        self._steering_angle_rate = value
