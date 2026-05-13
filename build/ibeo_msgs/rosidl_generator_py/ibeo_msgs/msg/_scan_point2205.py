# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/ScanPoint2205.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScanPoint2205(type):
    """Metaclass of message 'ScanPoint2205'."""

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
                'ibeo_msgs.msg.ScanPoint2205')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scan_point2205
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scan_point2205
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scan_point2205
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scan_point2205
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scan_point2205

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScanPoint2205(metaclass=Metaclass_ScanPoint2205):
    """Message class 'ScanPoint2205'."""

    __slots__ = [
        '_x_position',
        '_y_position',
        '_z_position',
        '_echo_width',
        '_device_id',
        '_layer',
        '_echo',
        '_time_offset',
        '_ground',
        '_dirt',
        '_precipitation',
        '_transparent',
    ]

    _fields_and_field_types = {
        'x_position': 'float',
        'y_position': 'float',
        'z_position': 'float',
        'echo_width': 'float',
        'device_id': 'uint8',
        'layer': 'uint8',
        'echo': 'uint8',
        'time_offset': 'uint32',
        'ground': 'boolean',
        'dirt': 'boolean',
        'precipitation': 'boolean',
        'transparent': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_position = kwargs.get('x_position', float())
        self.y_position = kwargs.get('y_position', float())
        self.z_position = kwargs.get('z_position', float())
        self.echo_width = kwargs.get('echo_width', float())
        self.device_id = kwargs.get('device_id', int())
        self.layer = kwargs.get('layer', int())
        self.echo = kwargs.get('echo', int())
        self.time_offset = kwargs.get('time_offset', int())
        self.ground = kwargs.get('ground', bool())
        self.dirt = kwargs.get('dirt', bool())
        self.precipitation = kwargs.get('precipitation', bool())
        self.transparent = kwargs.get('transparent', bool())

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
        if self.x_position != other.x_position:
            return False
        if self.y_position != other.y_position:
            return False
        if self.z_position != other.z_position:
            return False
        if self.echo_width != other.echo_width:
            return False
        if self.device_id != other.device_id:
            return False
        if self.layer != other.layer:
            return False
        if self.echo != other.echo:
            return False
        if self.time_offset != other.time_offset:
            return False
        if self.ground != other.ground:
            return False
        if self.dirt != other.dirt:
            return False
        if self.precipitation != other.precipitation:
            return False
        if self.transparent != other.transparent:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @property
    def echo_width(self):
        """Message field 'echo_width'."""
        return self._echo_width

    @echo_width.setter
    def echo_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'echo_width' field must be of type 'float'"
        self._echo_width = value

    @property
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'device_id' field must be an unsigned integer in [0, 255]"
        self._device_id = value

    @property
    def layer(self):
        """Message field 'layer'."""
        return self._layer

    @layer.setter
    def layer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'layer' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'layer' field must be an unsigned integer in [0, 255]"
        self._layer = value

    @property
    def echo(self):
        """Message field 'echo'."""
        return self._echo

    @echo.setter
    def echo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'echo' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'echo' field must be an unsigned integer in [0, 255]"
        self._echo = value

    @property
    def time_offset(self):
        """Message field 'time_offset'."""
        return self._time_offset

    @time_offset.setter
    def time_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_offset' field must be an unsigned integer in [0, 4294967295]"
        self._time_offset = value

    @property
    def ground(self):
        """Message field 'ground'."""
        return self._ground

    @ground.setter
    def ground(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ground' field must be of type 'bool'"
        self._ground = value

    @property
    def dirt(self):
        """Message field 'dirt'."""
        return self._dirt

    @dirt.setter
    def dirt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dirt' field must be of type 'bool'"
        self._dirt = value

    @property
    def precipitation(self):
        """Message field 'precipitation'."""
        return self._precipitation

    @precipitation.setter
    def precipitation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'precipitation' field must be of type 'bool'"
        self._precipitation = value

    @property
    def transparent(self):
        """Message field 'transparent'."""
        return self._transparent

    @transparent.setter
    def transparent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'transparent' field must be of type 'bool'"
        self._transparent = value
