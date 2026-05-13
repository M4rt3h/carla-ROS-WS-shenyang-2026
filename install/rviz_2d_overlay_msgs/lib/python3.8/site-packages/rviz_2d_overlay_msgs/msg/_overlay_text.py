# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rviz_2d_overlay_msgs:msg/OverlayText.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OverlayText(type):
    """Metaclass of message 'OverlayText'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ADD': 0,
        'DELETE': 1,
        'LEFT': 0,
        'RIGHT': 1,
        'CENTER': 2,
        'TOP': 3,
        'BOTTOM': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rviz_2d_overlay_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rviz_2d_overlay_msgs.msg.OverlayText')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__overlay_text
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__overlay_text
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__overlay_text
            cls._TYPE_SUPPORT = module.type_support_msg__msg__overlay_text
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__overlay_text

            from std_msgs.msg import ColorRGBA
            if ColorRGBA.__class__._TYPE_SUPPORT is None:
                ColorRGBA.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ADD': cls.__constants['ADD'],
            'DELETE': cls.__constants['DELETE'],
            'LEFT': cls.__constants['LEFT'],
            'RIGHT': cls.__constants['RIGHT'],
            'CENTER': cls.__constants['CENTER'],
            'TOP': cls.__constants['TOP'],
            'BOTTOM': cls.__constants['BOTTOM'],
        }

    @property
    def ADD(self):
        """Message constant 'ADD'."""
        return Metaclass_OverlayText.__constants['ADD']

    @property
    def DELETE(self):
        """Message constant 'DELETE'."""
        return Metaclass_OverlayText.__constants['DELETE']

    @property
    def LEFT(self):
        """Message constant 'LEFT'."""
        return Metaclass_OverlayText.__constants['LEFT']

    @property
    def RIGHT(self):
        """Message constant 'RIGHT'."""
        return Metaclass_OverlayText.__constants['RIGHT']

    @property
    def CENTER(self):
        """Message constant 'CENTER'."""
        return Metaclass_OverlayText.__constants['CENTER']

    @property
    def TOP(self):
        """Message constant 'TOP'."""
        return Metaclass_OverlayText.__constants['TOP']

    @property
    def BOTTOM(self):
        """Message constant 'BOTTOM'."""
        return Metaclass_OverlayText.__constants['BOTTOM']


class OverlayText(metaclass=Metaclass_OverlayText):
    """
    Message class 'OverlayText'.

    Constants:
      ADD
      DELETE
      LEFT
      RIGHT
      CENTER
      TOP
      BOTTOM
    """

    __slots__ = [
        '_action',
        '_width',
        '_height',
        '_horizontal_distance',
        '_vertical_distance',
        '_horizontal_alignment',
        '_vertical_alignment',
        '_bg_color',
        '_line_width',
        '_text_size',
        '_font',
        '_fg_color',
        '_text',
    ]

    _fields_and_field_types = {
        'action': 'uint8',
        'width': 'int32',
        'height': 'int32',
        'horizontal_distance': 'int32',
        'vertical_distance': 'int32',
        'horizontal_alignment': 'uint8',
        'vertical_alignment': 'uint8',
        'bg_color': 'std_msgs/ColorRGBA',
        'line_width': 'int32',
        'text_size': 'float',
        'font': 'string',
        'fg_color': 'std_msgs/ColorRGBA',
        'text': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.action = kwargs.get('action', int())
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        self.horizontal_distance = kwargs.get('horizontal_distance', int())
        self.vertical_distance = kwargs.get('vertical_distance', int())
        self.horizontal_alignment = kwargs.get('horizontal_alignment', int())
        self.vertical_alignment = kwargs.get('vertical_alignment', int())
        from std_msgs.msg import ColorRGBA
        self.bg_color = kwargs.get('bg_color', ColorRGBA())
        self.line_width = kwargs.get('line_width', int())
        self.text_size = kwargs.get('text_size', float())
        self.font = kwargs.get('font', str())
        from std_msgs.msg import ColorRGBA
        self.fg_color = kwargs.get('fg_color', ColorRGBA())
        self.text = kwargs.get('text', str())

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
        if self.action != other.action:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.horizontal_distance != other.horizontal_distance:
            return False
        if self.vertical_distance != other.vertical_distance:
            return False
        if self.horizontal_alignment != other.horizontal_alignment:
            return False
        if self.vertical_alignment != other.vertical_alignment:
            return False
        if self.bg_color != other.bg_color:
            return False
        if self.line_width != other.line_width:
            return False
        if self.text_size != other.text_size:
            return False
        if self.font != other.font:
            return False
        if self.fg_color != other.fg_color:
            return False
        if self.text != other.text:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'action' field must be an unsigned integer in [0, 255]"
        self._action = value

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'width' field must be an integer in [-2147483648, 2147483647]"
        self._width = value

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'height' field must be an integer in [-2147483648, 2147483647]"
        self._height = value

    @property
    def horizontal_distance(self):
        """Message field 'horizontal_distance'."""
        return self._horizontal_distance

    @horizontal_distance.setter
    def horizontal_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'horizontal_distance' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'horizontal_distance' field must be an integer in [-2147483648, 2147483647]"
        self._horizontal_distance = value

    @property
    def vertical_distance(self):
        """Message field 'vertical_distance'."""
        return self._vertical_distance

    @vertical_distance.setter
    def vertical_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vertical_distance' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vertical_distance' field must be an integer in [-2147483648, 2147483647]"
        self._vertical_distance = value

    @property
    def horizontal_alignment(self):
        """Message field 'horizontal_alignment'."""
        return self._horizontal_alignment

    @horizontal_alignment.setter
    def horizontal_alignment(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'horizontal_alignment' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'horizontal_alignment' field must be an unsigned integer in [0, 255]"
        self._horizontal_alignment = value

    @property
    def vertical_alignment(self):
        """Message field 'vertical_alignment'."""
        return self._vertical_alignment

    @vertical_alignment.setter
    def vertical_alignment(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vertical_alignment' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vertical_alignment' field must be an unsigned integer in [0, 255]"
        self._vertical_alignment = value

    @property
    def bg_color(self):
        """Message field 'bg_color'."""
        return self._bg_color

    @bg_color.setter
    def bg_color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'bg_color' field must be a sub message of type 'ColorRGBA'"
        self._bg_color = value

    @property
    def line_width(self):
        """Message field 'line_width'."""
        return self._line_width

    @line_width.setter
    def line_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'line_width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'line_width' field must be an integer in [-2147483648, 2147483647]"
        self._line_width = value

    @property
    def text_size(self):
        """Message field 'text_size'."""
        return self._text_size

    @text_size.setter
    def text_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'text_size' field must be of type 'float'"
        self._text_size = value

    @property
    def font(self):
        """Message field 'font'."""
        return self._font

    @font.setter
    def font(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'font' field must be of type 'str'"
        self._font = value

    @property
    def fg_color(self):
        """Message field 'fg_color'."""
        return self._fg_color

    @fg_color.setter
    def fg_color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'fg_color' field must be a sub message of type 'ColorRGBA'"
        self._fg_color = value

    @property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value
