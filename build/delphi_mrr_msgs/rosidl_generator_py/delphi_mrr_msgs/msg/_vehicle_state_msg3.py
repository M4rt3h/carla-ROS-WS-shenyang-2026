# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/VehicleStateMsg3.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStateMsg3(type):
    """Metaclass of message 'VehicleStateMsg3'."""

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
                'delphi_mrr_msgs.msg.VehicleStateMsg3')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state_msg3
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state_msg3
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state_msg3
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state_msg3
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state_msg3

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


class VehicleStateMsg3(metaclass=Metaclass_VehicleStateMsg3):
    """Message class 'VehicleStateMsg3'."""

    __slots__ = [
        '_header',
        '_yaw_rate_reference_valid',
        '_yaw_rate_reference',
        '_can_veh_long_accel_qf',
        '_can_veh_long_accel',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'yaw_rate_reference_valid': 'boolean',
        'yaw_rate_reference': 'float',
        'can_veh_long_accel_qf': 'uint8',
        'can_veh_long_accel': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.yaw_rate_reference_valid = kwargs.get('yaw_rate_reference_valid', bool())
        self.yaw_rate_reference = kwargs.get('yaw_rate_reference', float())
        self.can_veh_long_accel_qf = kwargs.get('can_veh_long_accel_qf', int())
        self.can_veh_long_accel = kwargs.get('can_veh_long_accel', float())

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
        if self.yaw_rate_reference_valid != other.yaw_rate_reference_valid:
            return False
        if self.yaw_rate_reference != other.yaw_rate_reference:
            return False
        if self.can_veh_long_accel_qf != other.can_veh_long_accel_qf:
            return False
        if self.can_veh_long_accel != other.can_veh_long_accel:
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
    def yaw_rate_reference_valid(self):
        """Message field 'yaw_rate_reference_valid'."""
        return self._yaw_rate_reference_valid

    @yaw_rate_reference_valid.setter
    def yaw_rate_reference_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'yaw_rate_reference_valid' field must be of type 'bool'"
        self._yaw_rate_reference_valid = value

    @property
    def yaw_rate_reference(self):
        """Message field 'yaw_rate_reference'."""
        return self._yaw_rate_reference

    @yaw_rate_reference.setter
    def yaw_rate_reference(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate_reference' field must be of type 'float'"
        self._yaw_rate_reference = value

    @property
    def can_veh_long_accel_qf(self):
        """Message field 'can_veh_long_accel_qf'."""
        return self._can_veh_long_accel_qf

    @can_veh_long_accel_qf.setter
    def can_veh_long_accel_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_veh_long_accel_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_veh_long_accel_qf' field must be an unsigned integer in [0, 255]"
        self._can_veh_long_accel_qf = value

    @property
    def can_veh_long_accel(self):
        """Message field 'can_veh_long_accel'."""
        return self._can_veh_long_accel

    @can_veh_long_accel.setter
    def can_veh_long_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_veh_long_accel' field must be of type 'float'"
        self._can_veh_long_accel = value
