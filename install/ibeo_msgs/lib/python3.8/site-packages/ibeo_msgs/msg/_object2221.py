# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/Object2221.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object2221(type):
    """Metaclass of message 'Object2221'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNCLASSIFIED': 0,
        'UNKNOWN_SMALL': 1,
        'UNKNOWN_BIG': 2,
        'PEDESTRIAN': 3,
        'BIKE': 4,
        'CAR': 5,
        'TRUCK': 6,
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
                'ibeo_msgs.msg.Object2221')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object2221
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object2221
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object2221
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object2221
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object2221

            from ibeo_msgs.msg import Point2Di
            if Point2Di.__class__._TYPE_SUPPORT is None:
                Point2Di.__class__.__import_type_support__()

            from ibeo_msgs.msg import Size2D
            if Size2D.__class__._TYPE_SUPPORT is None:
                Size2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNCLASSIFIED': cls.__constants['UNCLASSIFIED'],
            'UNKNOWN_SMALL': cls.__constants['UNKNOWN_SMALL'],
            'UNKNOWN_BIG': cls.__constants['UNKNOWN_BIG'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'BIKE': cls.__constants['BIKE'],
            'CAR': cls.__constants['CAR'],
            'TRUCK': cls.__constants['TRUCK'],
        }

    @property
    def UNCLASSIFIED(self):
        """Message constant 'UNCLASSIFIED'."""
        return Metaclass_Object2221.__constants['UNCLASSIFIED']

    @property
    def UNKNOWN_SMALL(self):
        """Message constant 'UNKNOWN_SMALL'."""
        return Metaclass_Object2221.__constants['UNKNOWN_SMALL']

    @property
    def UNKNOWN_BIG(self):
        """Message constant 'UNKNOWN_BIG'."""
        return Metaclass_Object2221.__constants['UNKNOWN_BIG']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_Object2221.__constants['PEDESTRIAN']

    @property
    def BIKE(self):
        """Message constant 'BIKE'."""
        return Metaclass_Object2221.__constants['BIKE']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_Object2221.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_Object2221.__constants['TRUCK']


class Object2221(metaclass=Metaclass_Object2221):
    """
    Message class 'Object2221'.

    Constants:
      UNCLASSIFIED
      UNKNOWN_SMALL
      UNKNOWN_BIG
      PEDESTRIAN
      BIKE
      CAR
      TRUCK
    """

    __slots__ = [
        '_id',
        '_age',
        '_prediction_age',
        '_relative_timestamp',
        '_reference_point',
        '_reference_point_sigma',
        '_closest_point',
        '_bounding_box_center',
        '_bounding_box_width',
        '_bounding_box_length',
        '_object_box_center',
        '_object_box_size',
        '_object_box_orientation',
        '_absolute_velocity',
        '_absolute_velocity_sigma',
        '_relative_velocity',
        '_classification',
        '_classification_age',
        '_classification_certainty',
        '_number_of_contour_points',
        '_contour_point_list',
    ]

    _fields_and_field_types = {
        'id': 'uint16',
        'age': 'uint16',
        'prediction_age': 'uint16',
        'relative_timestamp': 'uint16',
        'reference_point': 'ibeo_msgs/Point2Di',
        'reference_point_sigma': 'ibeo_msgs/Point2Di',
        'closest_point': 'ibeo_msgs/Point2Di',
        'bounding_box_center': 'ibeo_msgs/Point2Di',
        'bounding_box_width': 'uint16',
        'bounding_box_length': 'uint16',
        'object_box_center': 'ibeo_msgs/Point2Di',
        'object_box_size': 'ibeo_msgs/Size2D',
        'object_box_orientation': 'int16',
        'absolute_velocity': 'ibeo_msgs/Point2Di',
        'absolute_velocity_sigma': 'ibeo_msgs/Size2D',
        'relative_velocity': 'ibeo_msgs/Point2Di',
        'classification': 'uint8',
        'classification_age': 'uint16',
        'classification_certainty': 'uint16',
        'number_of_contour_points': 'uint16',
        'contour_point_list': 'sequence<ibeo_msgs/Point2Di>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Size2D'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Size2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.age = kwargs.get('age', int())
        self.prediction_age = kwargs.get('prediction_age', int())
        self.relative_timestamp = kwargs.get('relative_timestamp', int())
        from ibeo_msgs.msg import Point2Di
        self.reference_point = kwargs.get('reference_point', Point2Di())
        from ibeo_msgs.msg import Point2Di
        self.reference_point_sigma = kwargs.get('reference_point_sigma', Point2Di())
        from ibeo_msgs.msg import Point2Di
        self.closest_point = kwargs.get('closest_point', Point2Di())
        from ibeo_msgs.msg import Point2Di
        self.bounding_box_center = kwargs.get('bounding_box_center', Point2Di())
        self.bounding_box_width = kwargs.get('bounding_box_width', int())
        self.bounding_box_length = kwargs.get('bounding_box_length', int())
        from ibeo_msgs.msg import Point2Di
        self.object_box_center = kwargs.get('object_box_center', Point2Di())
        from ibeo_msgs.msg import Size2D
        self.object_box_size = kwargs.get('object_box_size', Size2D())
        self.object_box_orientation = kwargs.get('object_box_orientation', int())
        from ibeo_msgs.msg import Point2Di
        self.absolute_velocity = kwargs.get('absolute_velocity', Point2Di())
        from ibeo_msgs.msg import Size2D
        self.absolute_velocity_sigma = kwargs.get('absolute_velocity_sigma', Size2D())
        from ibeo_msgs.msg import Point2Di
        self.relative_velocity = kwargs.get('relative_velocity', Point2Di())
        self.classification = kwargs.get('classification', int())
        self.classification_age = kwargs.get('classification_age', int())
        self.classification_certainty = kwargs.get('classification_certainty', int())
        self.number_of_contour_points = kwargs.get('number_of_contour_points', int())
        self.contour_point_list = kwargs.get('contour_point_list', [])

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
        if self.id != other.id:
            return False
        if self.age != other.age:
            return False
        if self.prediction_age != other.prediction_age:
            return False
        if self.relative_timestamp != other.relative_timestamp:
            return False
        if self.reference_point != other.reference_point:
            return False
        if self.reference_point_sigma != other.reference_point_sigma:
            return False
        if self.closest_point != other.closest_point:
            return False
        if self.bounding_box_center != other.bounding_box_center:
            return False
        if self.bounding_box_width != other.bounding_box_width:
            return False
        if self.bounding_box_length != other.bounding_box_length:
            return False
        if self.object_box_center != other.object_box_center:
            return False
        if self.object_box_size != other.object_box_size:
            return False
        if self.object_box_orientation != other.object_box_orientation:
            return False
        if self.absolute_velocity != other.absolute_velocity:
            return False
        if self.absolute_velocity_sigma != other.absolute_velocity_sigma:
            return False
        if self.relative_velocity != other.relative_velocity:
            return False
        if self.classification != other.classification:
            return False
        if self.classification_age != other.classification_age:
            return False
        if self.classification_certainty != other.classification_certainty:
            return False
        if self.number_of_contour_points != other.number_of_contour_points:
            return False
        if self.contour_point_list != other.contour_point_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'id' field must be an unsigned integer in [0, 65535]"
        self._id = value

    @property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'age' field must be an unsigned integer in [0, 65535]"
        self._age = value

    @property
    def prediction_age(self):
        """Message field 'prediction_age'."""
        return self._prediction_age

    @prediction_age.setter
    def prediction_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prediction_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'prediction_age' field must be an unsigned integer in [0, 65535]"
        self._prediction_age = value

    @property
    def relative_timestamp(self):
        """Message field 'relative_timestamp'."""
        return self._relative_timestamp

    @relative_timestamp.setter
    def relative_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relative_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'relative_timestamp' field must be an unsigned integer in [0, 65535]"
        self._relative_timestamp = value

    @property
    def reference_point(self):
        """Message field 'reference_point'."""
        return self._reference_point

    @reference_point.setter
    def reference_point(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'reference_point' field must be a sub message of type 'Point2Di'"
        self._reference_point = value

    @property
    def reference_point_sigma(self):
        """Message field 'reference_point_sigma'."""
        return self._reference_point_sigma

    @reference_point_sigma.setter
    def reference_point_sigma(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'reference_point_sigma' field must be a sub message of type 'Point2Di'"
        self._reference_point_sigma = value

    @property
    def closest_point(self):
        """Message field 'closest_point'."""
        return self._closest_point

    @closest_point.setter
    def closest_point(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'closest_point' field must be a sub message of type 'Point2Di'"
        self._closest_point = value

    @property
    def bounding_box_center(self):
        """Message field 'bounding_box_center'."""
        return self._bounding_box_center

    @bounding_box_center.setter
    def bounding_box_center(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'bounding_box_center' field must be a sub message of type 'Point2Di'"
        self._bounding_box_center = value

    @property
    def bounding_box_width(self):
        """Message field 'bounding_box_width'."""
        return self._bounding_box_width

    @bounding_box_width.setter
    def bounding_box_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bounding_box_width' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bounding_box_width' field must be an unsigned integer in [0, 65535]"
        self._bounding_box_width = value

    @property
    def bounding_box_length(self):
        """Message field 'bounding_box_length'."""
        return self._bounding_box_length

    @bounding_box_length.setter
    def bounding_box_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bounding_box_length' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bounding_box_length' field must be an unsigned integer in [0, 65535]"
        self._bounding_box_length = value

    @property
    def object_box_center(self):
        """Message field 'object_box_center'."""
        return self._object_box_center

    @object_box_center.setter
    def object_box_center(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'object_box_center' field must be a sub message of type 'Point2Di'"
        self._object_box_center = value

    @property
    def object_box_size(self):
        """Message field 'object_box_size'."""
        return self._object_box_size

    @object_box_size.setter
    def object_box_size(self, value):
        if __debug__:
            from ibeo_msgs.msg import Size2D
            assert \
                isinstance(value, Size2D), \
                "The 'object_box_size' field must be a sub message of type 'Size2D'"
        self._object_box_size = value

    @property
    def object_box_orientation(self):
        """Message field 'object_box_orientation'."""
        return self._object_box_orientation

    @object_box_orientation.setter
    def object_box_orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_box_orientation' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'object_box_orientation' field must be an integer in [-32768, 32767]"
        self._object_box_orientation = value

    @property
    def absolute_velocity(self):
        """Message field 'absolute_velocity'."""
        return self._absolute_velocity

    @absolute_velocity.setter
    def absolute_velocity(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'absolute_velocity' field must be a sub message of type 'Point2Di'"
        self._absolute_velocity = value

    @property
    def absolute_velocity_sigma(self):
        """Message field 'absolute_velocity_sigma'."""
        return self._absolute_velocity_sigma

    @absolute_velocity_sigma.setter
    def absolute_velocity_sigma(self, value):
        if __debug__:
            from ibeo_msgs.msg import Size2D
            assert \
                isinstance(value, Size2D), \
                "The 'absolute_velocity_sigma' field must be a sub message of type 'Size2D'"
        self._absolute_velocity_sigma = value

    @property
    def relative_velocity(self):
        """Message field 'relative_velocity'."""
        return self._relative_velocity

    @relative_velocity.setter
    def relative_velocity(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'relative_velocity' field must be a sub message of type 'Point2Di'"
        self._relative_velocity = value

    @property
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'classification' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'classification' field must be an unsigned integer in [0, 255]"
        self._classification = value

    @property
    def classification_age(self):
        """Message field 'classification_age'."""
        return self._classification_age

    @classification_age.setter
    def classification_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'classification_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'classification_age' field must be an unsigned integer in [0, 65535]"
        self._classification_age = value

    @property
    def classification_certainty(self):
        """Message field 'classification_certainty'."""
        return self._classification_certainty

    @classification_certainty.setter
    def classification_certainty(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'classification_certainty' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'classification_certainty' field must be an unsigned integer in [0, 65535]"
        self._classification_certainty = value

    @property
    def number_of_contour_points(self):
        """Message field 'number_of_contour_points'."""
        return self._number_of_contour_points

    @number_of_contour_points.setter
    def number_of_contour_points(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_contour_points' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'number_of_contour_points' field must be an unsigned integer in [0, 65535]"
        self._number_of_contour_points = value

    @property
    def contour_point_list(self):
        """Message field 'contour_point_list'."""
        return self._contour_point_list

    @contour_point_list.setter
    def contour_point_list(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
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
                 all(isinstance(v, Point2Di) for v in value) and
                 True), \
                "The 'contour_point_list' field must be a set or sequence and each value of type 'Point2Di'"
        self._contour_point_list = value
