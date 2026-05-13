# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/CameraImage.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'image_buffer'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CameraImage(type):
    """Metaclass of message 'CameraImage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'JPEG': 0,
        'MJPEG': 1,
        'GRAY8': 2,
        'YUV420': 3,
        'YUV422': 4,
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
                'ibeo_msgs.msg.CameraImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__camera_image
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__camera_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__camera_image
            cls._TYPE_SUPPORT = module.type_support_msg__msg__camera_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__camera_image

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from ibeo_msgs.msg import IbeoDataHeader
            if IbeoDataHeader.__class__._TYPE_SUPPORT is None:
                IbeoDataHeader.__class__.__import_type_support__()

            from ibeo_msgs.msg import MountingPositionF
            if MountingPositionF.__class__._TYPE_SUPPORT is None:
                MountingPositionF.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'JPEG': cls.__constants['JPEG'],
            'MJPEG': cls.__constants['MJPEG'],
            'GRAY8': cls.__constants['GRAY8'],
            'YUV420': cls.__constants['YUV420'],
            'YUV422': cls.__constants['YUV422'],
        }

    @property
    def JPEG(self):
        """Message constant 'JPEG'."""
        return Metaclass_CameraImage.__constants['JPEG']

    @property
    def MJPEG(self):
        """Message constant 'MJPEG'."""
        return Metaclass_CameraImage.__constants['MJPEG']

    @property
    def GRAY8(self):
        """Message constant 'GRAY8'."""
        return Metaclass_CameraImage.__constants['GRAY8']

    @property
    def YUV420(self):
        """Message constant 'YUV420'."""
        return Metaclass_CameraImage.__constants['YUV420']

    @property
    def YUV422(self):
        """Message constant 'YUV422'."""
        return Metaclass_CameraImage.__constants['YUV422']


class CameraImage(metaclass=Metaclass_CameraImage):
    """
    Message class 'CameraImage'.

    Constants:
      JPEG
      MJPEG
      GRAY8
      YUV420
      YUV422
    """

    __slots__ = [
        '_header',
        '_ibeo_header',
        '_image_format',
        '_us_since_power_on',
        '_timestamp',
        '_device_id',
        '_mounting_position',
        '_horizontal_opening_angle',
        '_vertical_opening_angle',
        '_image_width',
        '_image_height',
        '_compressed_size',
        '_image_buffer',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ibeo_header': 'ibeo_msgs/IbeoDataHeader',
        'image_format': 'uint16',
        'us_since_power_on': 'uint32',
        'timestamp': 'builtin_interfaces/Time',
        'device_id': 'uint8',
        'mounting_position': 'ibeo_msgs/MountingPositionF',
        'horizontal_opening_angle': 'double',
        'vertical_opening_angle': 'double',
        'image_width': 'uint16',
        'image_height': 'uint16',
        'compressed_size': 'uint32',
        'image_buffer': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'IbeoDataHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'MountingPositionF'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ibeo_msgs.msg import IbeoDataHeader
        self.ibeo_header = kwargs.get('ibeo_header', IbeoDataHeader())
        self.image_format = kwargs.get('image_format', int())
        self.us_since_power_on = kwargs.get('us_since_power_on', int())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.device_id = kwargs.get('device_id', int())
        from ibeo_msgs.msg import MountingPositionF
        self.mounting_position = kwargs.get('mounting_position', MountingPositionF())
        self.horizontal_opening_angle = kwargs.get('horizontal_opening_angle', float())
        self.vertical_opening_angle = kwargs.get('vertical_opening_angle', float())
        self.image_width = kwargs.get('image_width', int())
        self.image_height = kwargs.get('image_height', int())
        self.compressed_size = kwargs.get('compressed_size', int())
        self.image_buffer = array.array('B', kwargs.get('image_buffer', []))

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
        if self.ibeo_header != other.ibeo_header:
            return False
        if self.image_format != other.image_format:
            return False
        if self.us_since_power_on != other.us_since_power_on:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.device_id != other.device_id:
            return False
        if self.mounting_position != other.mounting_position:
            return False
        if self.horizontal_opening_angle != other.horizontal_opening_angle:
            return False
        if self.vertical_opening_angle != other.vertical_opening_angle:
            return False
        if self.image_width != other.image_width:
            return False
        if self.image_height != other.image_height:
            return False
        if self.compressed_size != other.compressed_size:
            return False
        if self.image_buffer != other.image_buffer:
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
    def ibeo_header(self):
        """Message field 'ibeo_header'."""
        return self._ibeo_header

    @ibeo_header.setter
    def ibeo_header(self, value):
        if __debug__:
            from ibeo_msgs.msg import IbeoDataHeader
            assert \
                isinstance(value, IbeoDataHeader), \
                "The 'ibeo_header' field must be a sub message of type 'IbeoDataHeader'"
        self._ibeo_header = value

    @property
    def image_format(self):
        """Message field 'image_format'."""
        return self._image_format

    @image_format.setter
    def image_format(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'image_format' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'image_format' field must be an unsigned integer in [0, 65535]"
        self._image_format = value

    @property
    def us_since_power_on(self):
        """Message field 'us_since_power_on'."""
        return self._us_since_power_on

    @us_since_power_on.setter
    def us_since_power_on(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'us_since_power_on' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'us_since_power_on' field must be an unsigned integer in [0, 4294967295]"
        self._us_since_power_on = value

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

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
    def mounting_position(self):
        """Message field 'mounting_position'."""
        return self._mounting_position

    @mounting_position.setter
    def mounting_position(self, value):
        if __debug__:
            from ibeo_msgs.msg import MountingPositionF
            assert \
                isinstance(value, MountingPositionF), \
                "The 'mounting_position' field must be a sub message of type 'MountingPositionF'"
        self._mounting_position = value

    @property
    def horizontal_opening_angle(self):
        """Message field 'horizontal_opening_angle'."""
        return self._horizontal_opening_angle

    @horizontal_opening_angle.setter
    def horizontal_opening_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'horizontal_opening_angle' field must be of type 'float'"
        self._horizontal_opening_angle = value

    @property
    def vertical_opening_angle(self):
        """Message field 'vertical_opening_angle'."""
        return self._vertical_opening_angle

    @vertical_opening_angle.setter
    def vertical_opening_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical_opening_angle' field must be of type 'float'"
        self._vertical_opening_angle = value

    @property
    def image_width(self):
        """Message field 'image_width'."""
        return self._image_width

    @image_width.setter
    def image_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'image_width' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'image_width' field must be an unsigned integer in [0, 65535]"
        self._image_width = value

    @property
    def image_height(self):
        """Message field 'image_height'."""
        return self._image_height

    @image_height.setter
    def image_height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'image_height' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'image_height' field must be an unsigned integer in [0, 65535]"
        self._image_height = value

    @property
    def compressed_size(self):
        """Message field 'compressed_size'."""
        return self._compressed_size

    @compressed_size.setter
    def compressed_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'compressed_size' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'compressed_size' field must be an unsigned integer in [0, 4294967295]"
        self._compressed_size = value

    @property
    def image_buffer(self):
        """Message field 'image_buffer'."""
        return self._image_buffer

    @image_buffer.setter
    def image_buffer(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'image_buffer' array.array() must have the type code of 'B'"
            self._image_buffer = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'image_buffer' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._image_buffer = array.array('B', value)
