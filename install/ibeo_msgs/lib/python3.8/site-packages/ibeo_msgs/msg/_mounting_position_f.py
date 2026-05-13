# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/MountingPositionF.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MountingPositionF(type):
    """Metaclass of message 'MountingPositionF'."""

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
            module = import_type_support('ibeo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ibeo_msgs.msg.MountingPositionF')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mounting_position_f
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mounting_position_f
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mounting_position_f
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mounting_position_f
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mounting_position_f

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MountingPositionF(metaclass=Metaclass_MountingPositionF):
    """Message class 'MountingPositionF'."""

    __slots__ = [
        '_yaw_angle',
        '_pitch_angle',
        '_roll_angle',
        '_x_position',
        '_y_position',
        '_z_position',
    ]

    _fields_and_field_types = {
        'yaw_angle': 'float',
        'pitch_angle': 'float',
        'roll_angle': 'float',
        'x_position': 'float',
        'y_position': 'float',
        'z_position': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.yaw_angle = kwargs.get('yaw_angle', float())
        self.pitch_angle = kwargs.get('pitch_angle', float())
        self.roll_angle = kwargs.get('roll_angle', float())
        self.x_position = kwargs.get('x_position', float())
        self.y_position = kwargs.get('y_position', float())
        self.z_position = kwargs.get('z_position', float())

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
        if self.yaw_angle != other.yaw_angle:
            return False
        if self.pitch_angle != other.pitch_angle:
            return False
        if self.roll_angle != other.roll_angle:
            return False
        if self.x_position != other.x_position:
            return False
        if self.y_position != other.y_position:
            return False
        if self.z_position != other.z_position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def yaw_angle(self):
        """Message field 'yaw_angle'."""
        return self._yaw_angle

    @yaw_angle.setter
    def yaw_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_angle' field must be of type 'float'"
        self._yaw_angle = value

    @property
    def pitch_angle(self):
        """Message field 'pitch_angle'."""
        return self._pitch_angle

    @pitch_angle.setter
    def pitch_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_angle' field must be of type 'float'"
        self._pitch_angle = value

    @property
    def roll_angle(self):
        """Message field 'roll_angle'."""
        return self._roll_angle

    @roll_angle.setter
    def roll_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_angle' field must be of type 'float'"
        self._roll_angle = value

    @property
    def x_position(self):
        """Message field 'x_position'."""
        return self._x_position

    @x_position.setter
    def x_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_position' field must be of type 'float'"
        self._x_position = value

    @property
    def y_position(self):
        """Message field 'y_position'."""
        return self._y_position

    @y_position.setter
    def y_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_position' field must be of type 'float'"
        self._y_position = value

    @property
    def z_position(self):
        """Message field 'z_position'."""
        return self._z_position

    @z_position.setter
    def z_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_position' field must be of type 'float'"
        self._z_position = value
