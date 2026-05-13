# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/VehicleStateMsg2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStateMsg2(type):
    """Metaclass of message 'VehicleStateMsg2'."""

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
            module = import_type_support('delphi_mrr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_mrr_msgs.msg.VehicleStateMsg2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state_msg2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state_msg2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state_msg2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state_msg2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state_msg2

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


class VehicleStateMsg2(metaclass=Metaclass_VehicleStateMsg2):
    """Message class 'VehicleStateMsg2'."""

    __slots__ = [
        '_header',
        '_fsm_yaw_rate_valid',
        '_fsm_yaw_rate',
        '_can_vehicle_index_4fa',
        '_fsm_vehicle_velocity',
        '_can_steering_whl_angle_qf',
        '_fsm_vehicle_velocity_valid',
        '_can_steering_whl_angle',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'fsm_yaw_rate_valid': 'boolean',
        'fsm_yaw_rate': 'float',
        'can_vehicle_index_4fa': 'uint16',
        'fsm_vehicle_velocity': 'float',
        'can_steering_whl_angle_qf': 'boolean',
        'fsm_vehicle_velocity_valid': 'boolean',
        'can_steering_whl_angle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.fsm_yaw_rate_valid = kwargs.get('fsm_yaw_rate_valid', bool())
        self.fsm_yaw_rate = kwargs.get('fsm_yaw_rate', float())
        self.can_vehicle_index_4fa = kwargs.get('can_vehicle_index_4fa', int())
        self.fsm_vehicle_velocity = kwargs.get('fsm_vehicle_velocity', float())
        self.can_steering_whl_angle_qf = kwargs.get('can_steering_whl_angle_qf', bool())
        self.fsm_vehicle_velocity_valid = kwargs.get('fsm_vehicle_velocity_valid', bool())
        self.can_steering_whl_angle = kwargs.get('can_steering_whl_angle', float())

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
        if self.fsm_yaw_rate_valid != other.fsm_yaw_rate_valid:
            return False
        if self.fsm_yaw_rate != other.fsm_yaw_rate:
            return False
        if self.can_vehicle_index_4fa != other.can_vehicle_index_4fa:
            return False
        if self.fsm_vehicle_velocity != other.fsm_vehicle_velocity:
            return False
        if self.can_steering_whl_angle_qf != other.can_steering_whl_angle_qf:
            return False
        if self.fsm_vehicle_velocity_valid != other.fsm_vehicle_velocity_valid:
            return False
        if self.can_steering_whl_angle != other.can_steering_whl_angle:
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
    def fsm_yaw_rate_valid(self):
        """Message field 'fsm_yaw_rate_valid'."""
        return self._fsm_yaw_rate_valid

    @fsm_yaw_rate_valid.setter
    def fsm_yaw_rate_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fsm_yaw_rate_valid' field must be of type 'bool'"
        self._fsm_yaw_rate_valid = value

    @property
    def fsm_yaw_rate(self):
        """Message field 'fsm_yaw_rate'."""
        return self._fsm_yaw_rate

    @fsm_yaw_rate.setter
    def fsm_yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fsm_yaw_rate' field must be of type 'float'"
        self._fsm_yaw_rate = value

    @property
    def can_vehicle_index_4fa(self):
        """Message field 'can_vehicle_index_4fa'."""
        return self._can_vehicle_index_4fa

    @can_vehicle_index_4fa.setter
    def can_vehicle_index_4fa(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_vehicle_index_4fa' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_vehicle_index_4fa' field must be an unsigned integer in [0, 65535]"
        self._can_vehicle_index_4fa = value

    @property
    def fsm_vehicle_velocity(self):
        """Message field 'fsm_vehicle_velocity'."""
        return self._fsm_vehicle_velocity

    @fsm_vehicle_velocity.setter
    def fsm_vehicle_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fsm_vehicle_velocity' field must be of type 'float'"
        self._fsm_vehicle_velocity = value

    @property
    def can_steering_whl_angle_qf(self):
        """Message field 'can_steering_whl_angle_qf'."""
        return self._can_steering_whl_angle_qf

    @can_steering_whl_angle_qf.setter
    def can_steering_whl_angle_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_steering_whl_angle_qf' field must be of type 'bool'"
        self._can_steering_whl_angle_qf = value

    @property
    def fsm_vehicle_velocity_valid(self):
        """Message field 'fsm_vehicle_velocity_valid'."""
        return self._fsm_vehicle_velocity_valid

    @fsm_vehicle_velocity_valid.setter
    def fsm_vehicle_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fsm_vehicle_velocity_valid' field must be of type 'bool'"
        self._fsm_vehicle_velocity_valid = value

    @property
    def can_steering_whl_angle(self):
        """Message field 'can_steering_whl_angle'."""
        return self._can_steering_whl_angle

    @can_steering_whl_angle.setter
    def can_steering_whl_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_steering_whl_angle' field must be of type 'float'"
        self._can_steering_whl_angle = value
