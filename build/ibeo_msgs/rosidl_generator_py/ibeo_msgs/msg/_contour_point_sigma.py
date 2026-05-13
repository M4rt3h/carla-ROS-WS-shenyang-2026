# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/ContourPointSigma.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ContourPointSigma(type):
    """Metaclass of message 'ContourPointSigma'."""

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
                'ibeo_msgs.msg.ContourPointSigma')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__contour_point_sigma
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__contour_point_sigma
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__contour_point_sigma
            cls._TYPE_SUPPORT = module.type_support_msg__msg__contour_point_sigma
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__contour_point_sigma

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ContourPointSigma(metaclass=Metaclass_ContourPointSigma):
    """Message class 'ContourPointSigma'."""

    __slots__ = [
        '_x',
        '_y',
        '_x_sigma',
        '_y_sigma',
    ]

    _fields_and_field_types = {
        'x': 'int16',
        'y': 'int16',
        'x_sigma': 'uint8',
        'y_sigma': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', int())
        self.y = kwargs.get('y', int())
        self.x_sigma = kwargs.get('x_sigma', int())
        self.y_sigma = kwargs.get('y_sigma', int())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.x_sigma != other.x_sigma:
            return False
        if self.y_sigma != other.y_sigma:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'x' field must be an integer in [-32768, 32767]"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'y' field must be an integer in [-32768, 32767]"
        self._y = value

    @property
    def x_sigma(self):
        """Message field 'x_sigma'."""
        return self._x_sigma

    @x_sigma.setter
    def x_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_sigma' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'x_sigma' field must be an unsigned integer in [0, 255]"
        self._x_sigma = value

    @property
    def y_sigma(self):
        """Message field 'y_sigma'."""
        return self._y_sigma

    @y_sigma.setter
    def y_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_sigma' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'y_sigma' field must be an unsigned integer in [0, 255]"
        self._y_sigma = value
