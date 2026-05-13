# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/Sigma2D.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Sigma2D(type):
    """Metaclass of message 'Sigma2D'."""

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
                'ibeo_msgs.msg.Sigma2D')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sigma2_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sigma2_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sigma2_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sigma2_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sigma2_d

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Sigma2D(metaclass=Metaclass_Sigma2D):
    """Message class 'Sigma2D'."""

    __slots__ = [
        '_sigma_x',
        '_sigma_y',
    ]

    _fields_and_field_types = {
        'sigma_x': 'uint16',
        'sigma_y': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sigma_x = kwargs.get('sigma_x', int())
        self.sigma_y = kwargs.get('sigma_y', int())

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
        if self.sigma_x != other.sigma_x:
            return False
        if self.sigma_y != other.sigma_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sigma_x(self):
        """Message field 'sigma_x'."""
        return self._sigma_x

    @sigma_x.setter
    def sigma_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sigma_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sigma_x' field must be an unsigned integer in [0, 65535]"
        self._sigma_x = value

    @property
    def sigma_y(self):
        """Message field 'sigma_y'."""
        return self._sigma_y

    @sigma_y.setter
    def sigma_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sigma_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sigma_y' field must be an unsigned integer in [0, 65535]"
        self._sigma_y = value
