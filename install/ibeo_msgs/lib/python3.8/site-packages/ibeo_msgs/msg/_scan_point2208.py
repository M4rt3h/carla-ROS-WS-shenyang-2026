# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/ScanPoint2208.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScanPoint2208(type):
    """Metaclass of message 'ScanPoint2208'."""

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
                'ibeo_msgs.msg.ScanPoint2208')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scan_point2208
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scan_point2208
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scan_point2208
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scan_point2208
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scan_point2208

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScanPoint2208(metaclass=Metaclass_ScanPoint2208):
    """Message class 'ScanPoint2208'."""

    __slots__ = [
        '_echo',
        '_layer',
        '_transparent_point',
        '_clutter_atmospheric',
        '_ground',
        '_dirt',
        '_horizontal_angle',
        '_radial_distance',
        '_echo_pulse_width',
    ]

    _fields_and_field_types = {
        'echo': 'uint8',
        'layer': 'uint8',
        'transparent_point': 'boolean',
        'clutter_atmospheric': 'boolean',
        'ground': 'boolean',
        'dirt': 'boolean',
        'horizontal_angle': 'int16',
        'radial_distance': 'uint16',
        'echo_pulse_width': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.echo = kwargs.get('echo', int())
        self.layer = kwargs.get('layer', int())
        self.transparent_point = kwargs.get('transparent_point', bool())
        self.clutter_atmospheric = kwargs.get('clutter_atmospheric', bool())
        self.ground = kwargs.get('ground', bool())
        self.dirt = kwargs.get('dirt', bool())
        self.horizontal_angle = kwargs.get('horizontal_angle', int())
        self.radial_distance = kwargs.get('radial_distance', int())
        self.echo_pulse_width = kwargs.get('echo_pulse_width', int())

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
        if self.echo != other.echo:
            return False
        if self.layer != other.layer:
            return False
        if self.transparent_point != other.transparent_point:
            return False
        if self.clutter_atmospheric != other.clutter_atmospheric:
            return False
        if self.ground != other.ground:
            return False
        if self.dirt != other.dirt:
            return False
        if self.horizontal_angle != other.horizontal_angle:
            return False
        if self.radial_distance != other.radial_distance:
            return False
        if self.echo_pulse_width != other.echo_pulse_width:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def transparent_point(self):
        """Message field 'transparent_point'."""
        return self._transparent_point

    @transparent_point.setter
    def transparent_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'transparent_point' field must be of type 'bool'"
        self._transparent_point = value

    @property
    def clutter_atmospheric(self):
        """Message field 'clutter_atmospheric'."""
        return self._clutter_atmospheric

    @clutter_atmospheric.setter
    def clutter_atmospheric(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clutter_atmospheric' field must be of type 'bool'"
        self._clutter_atmospheric = value

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
    def horizontal_angle(self):
        """Message field 'horizontal_angle'."""
        return self._horizontal_angle

    @horizontal_angle.setter
    def horizontal_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'horizontal_angle' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'horizontal_angle' field must be an integer in [-32768, 32767]"
        self._horizontal_angle = value

    @property
    def radial_distance(self):
        """Message field 'radial_distance'."""
        return self._radial_distance

    @radial_distance.setter
    def radial_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radial_distance' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'radial_distance' field must be an unsigned integer in [0, 65535]"
        self._radial_distance = value

    @property
    def echo_pulse_width(self):
        """Message field 'echo_pulse_width'."""
        return self._echo_pulse_width

    @echo_pulse_width.setter
    def echo_pulse_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'echo_pulse_width' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'echo_pulse_width' field must be an unsigned integer in [0, 65535]"
        self._echo_pulse_width = value
