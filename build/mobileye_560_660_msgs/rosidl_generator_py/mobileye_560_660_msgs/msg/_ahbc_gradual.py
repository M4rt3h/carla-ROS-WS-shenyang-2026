# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mobileye_560_660_msgs:msg/AhbcGradual.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AhbcGradual(type):
    """Metaclass of message 'AhbcGradual'."""

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
            module = import_type_support('mobileye_560_660_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mobileye_560_660_msgs.msg.AhbcGradual')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ahbc_gradual
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ahbc_gradual
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ahbc_gradual
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ahbc_gradual
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ahbc_gradual

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


class AhbcGradual(metaclass=Metaclass_AhbcGradual):
    """Message class 'AhbcGradual'."""

    __slots__ = [
        '_header',
        '_boundary_domain_bottom_non_glare_hlb',
        '_boundary_domain_non_glare_left_hand_hlb',
        '_boundary_domain_non_glare_right_hand_hlb',
        '_object_distance_hlb',
        '_status_boundary_domain_bottom_non_glare_hlb',
        '_status_boundary_domain_non_glare_left_hand_hlb',
        '_status_boundary_domain_non_glare_right_hand_hlb',
        '_status_object_distance_hlb',
        '_left_target_change',
        '_right_target_change',
        '_too_many_cars',
        '_busy_scene',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'boundary_domain_bottom_non_glare_hlb': 'float',
        'boundary_domain_non_glare_left_hand_hlb': 'float',
        'boundary_domain_non_glare_right_hand_hlb': 'float',
        'object_distance_hlb': 'uint16',
        'status_boundary_domain_bottom_non_glare_hlb': 'uint8',
        'status_boundary_domain_non_glare_left_hand_hlb': 'uint8',
        'status_boundary_domain_non_glare_right_hand_hlb': 'uint8',
        'status_object_distance_hlb': 'uint8',
        'left_target_change': 'boolean',
        'right_target_change': 'boolean',
        'too_many_cars': 'boolean',
        'busy_scene': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.boundary_domain_bottom_non_glare_hlb = kwargs.get('boundary_domain_bottom_non_glare_hlb', float())
        self.boundary_domain_non_glare_left_hand_hlb = kwargs.get('boundary_domain_non_glare_left_hand_hlb', float())
        self.boundary_domain_non_glare_right_hand_hlb = kwargs.get('boundary_domain_non_glare_right_hand_hlb', float())
        self.object_distance_hlb = kwargs.get('object_distance_hlb', int())
        self.status_boundary_domain_bottom_non_glare_hlb = kwargs.get('status_boundary_domain_bottom_non_glare_hlb', int())
        self.status_boundary_domain_non_glare_left_hand_hlb = kwargs.get('status_boundary_domain_non_glare_left_hand_hlb', int())
        self.status_boundary_domain_non_glare_right_hand_hlb = kwargs.get('status_boundary_domain_non_glare_right_hand_hlb', int())
        self.status_object_distance_hlb = kwargs.get('status_object_distance_hlb', int())
        self.left_target_change = kwargs.get('left_target_change', bool())
        self.right_target_change = kwargs.get('right_target_change', bool())
        self.too_many_cars = kwargs.get('too_many_cars', bool())
        self.busy_scene = kwargs.get('busy_scene', bool())

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
        if self.boundary_domain_bottom_non_glare_hlb != other.boundary_domain_bottom_non_glare_hlb:
            return False
        if self.boundary_domain_non_glare_left_hand_hlb != other.boundary_domain_non_glare_left_hand_hlb:
            return False
        if self.boundary_domain_non_glare_right_hand_hlb != other.boundary_domain_non_glare_right_hand_hlb:
            return False
        if self.object_distance_hlb != other.object_distance_hlb:
            return False
        if self.status_boundary_domain_bottom_non_glare_hlb != other.status_boundary_domain_bottom_non_glare_hlb:
            return False
        if self.status_boundary_domain_non_glare_left_hand_hlb != other.status_boundary_domain_non_glare_left_hand_hlb:
            return False
        if self.status_boundary_domain_non_glare_right_hand_hlb != other.status_boundary_domain_non_glare_right_hand_hlb:
            return False
        if self.status_object_distance_hlb != other.status_object_distance_hlb:
            return False
        if self.left_target_change != other.left_target_change:
            return False
        if self.right_target_change != other.right_target_change:
            return False
        if self.too_many_cars != other.too_many_cars:
            return False
        if self.busy_scene != other.busy_scene:
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
    def boundary_domain_bottom_non_glare_hlb(self):
        """Message field 'boundary_domain_bottom_non_glare_hlb'."""
        return self._boundary_domain_bottom_non_glare_hlb

    @boundary_domain_bottom_non_glare_hlb.setter
    def boundary_domain_bottom_non_glare_hlb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boundary_domain_bottom_non_glare_hlb' field must be of type 'float'"
        self._boundary_domain_bottom_non_glare_hlb = value

    @property
    def boundary_domain_non_glare_left_hand_hlb(self):
        """Message field 'boundary_domain_non_glare_left_hand_hlb'."""
        return self._boundary_domain_non_glare_left_hand_hlb

    @boundary_domain_non_glare_left_hand_hlb.setter
    def boundary_domain_non_glare_left_hand_hlb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boundary_domain_non_glare_left_hand_hlb' field must be of type 'float'"
        self._boundary_domain_non_glare_left_hand_hlb = value

    @property
    def boundary_domain_non_glare_right_hand_hlb(self):
        """Message field 'boundary_domain_non_glare_right_hand_hlb'."""
        return self._boundary_domain_non_glare_right_hand_hlb

    @boundary_domain_non_glare_right_hand_hlb.setter
    def boundary_domain_non_glare_right_hand_hlb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boundary_domain_non_glare_right_hand_hlb' field must be of type 'float'"
        self._boundary_domain_non_glare_right_hand_hlb = value

    @property
    def object_distance_hlb(self):
        """Message field 'object_distance_hlb'."""
        return self._object_distance_hlb

    @object_distance_hlb.setter
    def object_distance_hlb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_distance_hlb' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'object_distance_hlb' field must be an unsigned integer in [0, 65535]"
        self._object_distance_hlb = value

    @property
    def status_boundary_domain_bottom_non_glare_hlb(self):
        """Message field 'status_boundary_domain_bottom_non_glare_hlb'."""
        return self._status_boundary_domain_bottom_non_glare_hlb

    @status_boundary_domain_bottom_non_glare_hlb.setter
    def status_boundary_domain_bottom_non_glare_hlb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_boundary_domain_bottom_non_glare_hlb' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_boundary_domain_bottom_non_glare_hlb' field must be an unsigned integer in [0, 255]"
        self._status_boundary_domain_bottom_non_glare_hlb = value

    @property
    def status_boundary_domain_non_glare_left_hand_hlb(self):
        """Message field 'status_boundary_domain_non_glare_left_hand_hlb'."""
        return self._status_boundary_domain_non_glare_left_hand_hlb

    @status_boundary_domain_non_glare_left_hand_hlb.setter
    def status_boundary_domain_non_glare_left_hand_hlb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_boundary_domain_non_glare_left_hand_hlb' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_boundary_domain_non_glare_left_hand_hlb' field must be an unsigned integer in [0, 255]"
        self._status_boundary_domain_non_glare_left_hand_hlb = value

    @property
    def status_boundary_domain_non_glare_right_hand_hlb(self):
        """Message field 'status_boundary_domain_non_glare_right_hand_hlb'."""
        return self._status_boundary_domain_non_glare_right_hand_hlb

    @status_boundary_domain_non_glare_right_hand_hlb.setter
    def status_boundary_domain_non_glare_right_hand_hlb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_boundary_domain_non_glare_right_hand_hlb' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_boundary_domain_non_glare_right_hand_hlb' field must be an unsigned integer in [0, 255]"
        self._status_boundary_domain_non_glare_right_hand_hlb = value

    @property
    def status_object_distance_hlb(self):
        """Message field 'status_object_distance_hlb'."""
        return self._status_object_distance_hlb

    @status_object_distance_hlb.setter
    def status_object_distance_hlb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_object_distance_hlb' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_object_distance_hlb' field must be an unsigned integer in [0, 255]"
        self._status_object_distance_hlb = value

    @property
    def left_target_change(self):
        """Message field 'left_target_change'."""
        return self._left_target_change

    @left_target_change.setter
    def left_target_change(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_target_change' field must be of type 'bool'"
        self._left_target_change = value

    @property
    def right_target_change(self):
        """Message field 'right_target_change'."""
        return self._right_target_change

    @right_target_change.setter
    def right_target_change(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_target_change' field must be of type 'bool'"
        self._right_target_change = value

    @property
    def too_many_cars(self):
        """Message field 'too_many_cars'."""
        return self._too_many_cars

    @too_many_cars.setter
    def too_many_cars(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'too_many_cars' field must be of type 'bool'"
        self._too_many_cars = value

    @property
    def busy_scene(self):
        """Message field 'busy_scene'."""
        return self._busy_scene

    @busy_scene.setter
    def busy_scene(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'busy_scene' field must be of type 'bool'"
        self._busy_scene = value
