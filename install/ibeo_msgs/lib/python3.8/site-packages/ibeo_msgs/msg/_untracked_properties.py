# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/UntrackedProperties.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UntrackedProperties(type):
    """Metaclass of message 'UntrackedProperties'."""

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
                'ibeo_msgs.msg.UntrackedProperties')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__untracked_properties
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__untracked_properties
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__untracked_properties
            cls._TYPE_SUPPORT = module.type_support_msg__msg__untracked_properties
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__untracked_properties

            from ibeo_msgs.msg import ContourPointSigma
            if ContourPointSigma.__class__._TYPE_SUPPORT is None:
                ContourPointSigma.__class__.__import_type_support__()

            from ibeo_msgs.msg import Point2Di
            if Point2Di.__class__._TYPE_SUPPORT is None:
                Point2Di.__class__.__import_type_support__()

            from ibeo_msgs.msg import Point2Dui
            if Point2Dui.__class__._TYPE_SUPPORT is None:
                Point2Dui.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UntrackedProperties(metaclass=Metaclass_UntrackedProperties):
    """Message class 'UntrackedProperties'."""

    __slots__ = [
        '_relative_time_of_measurement',
        '_position_closest_point',
        '_object_box_size',
        '_object_box_size_sigma',
        '_object_box_orientation',
        '_object_box_orientation_sigma',
        '_tracking_point_coordinate',
        '_tracking_point_coordinate_sigma',
        '_number_of_contour_points',
        '_contour_point_list',
    ]

    _fields_and_field_types = {
        'relative_time_of_measurement': 'uint16',
        'position_closest_point': 'ibeo_msgs/Point2Di',
        'object_box_size': 'ibeo_msgs/Point2Di',
        'object_box_size_sigma': 'ibeo_msgs/Point2Dui',
        'object_box_orientation': 'int16',
        'object_box_orientation_sigma': 'uint16',
        'tracking_point_coordinate': 'ibeo_msgs/Point2Di',
        'tracking_point_coordinate_sigma': 'ibeo_msgs/Point2Dui',
        'number_of_contour_points': 'uint8',
        'contour_point_list': 'sequence<ibeo_msgs/ContourPointSigma>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Dui'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Dui'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'ContourPointSigma')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.relative_time_of_measurement = kwargs.get('relative_time_of_measurement', int())
        from ibeo_msgs.msg import Point2Di
        self.position_closest_point = kwargs.get('position_closest_point', Point2Di())
        from ibeo_msgs.msg import Point2Di
        self.object_box_size = kwargs.get('object_box_size', Point2Di())
        from ibeo_msgs.msg import Point2Dui
        self.object_box_size_sigma = kwargs.get('object_box_size_sigma', Point2Dui())
        self.object_box_orientation = kwargs.get('object_box_orientation', int())
        self.object_box_orientation_sigma = kwargs.get('object_box_orientation_sigma', int())
        from ibeo_msgs.msg import Point2Di
        self.tracking_point_coordinate = kwargs.get('tracking_point_coordinate', Point2Di())
        from ibeo_msgs.msg import Point2Dui
        self.tracking_point_coordinate_sigma = kwargs.get('tracking_point_coordinate_sigma', Point2Dui())
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
        if self.relative_time_of_measurement != other.relative_time_of_measurement:
            return False
        if self.position_closest_point != other.position_closest_point:
            return False
        if self.object_box_size != other.object_box_size:
            return False
        if self.object_box_size_sigma != other.object_box_size_sigma:
            return False
        if self.object_box_orientation != other.object_box_orientation:
            return False
        if self.object_box_orientation_sigma != other.object_box_orientation_sigma:
            return False
        if self.tracking_point_coordinate != other.tracking_point_coordinate:
            return False
        if self.tracking_point_coordinate_sigma != other.tracking_point_coordinate_sigma:
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

    @property
    def relative_time_of_measurement(self):
        """Message field 'relative_time_of_measurement'."""
        return self._relative_time_of_measurement

    @relative_time_of_measurement.setter
    def relative_time_of_measurement(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relative_time_of_measurement' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'relative_time_of_measurement' field must be an unsigned integer in [0, 65535]"
        self._relative_time_of_measurement = value

    @property
    def position_closest_point(self):
        """Message field 'position_closest_point'."""
        return self._position_closest_point

    @position_closest_point.setter
    def position_closest_point(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'position_closest_point' field must be a sub message of type 'Point2Di'"
        self._position_closest_point = value

    @property
    def object_box_size(self):
        """Message field 'object_box_size'."""
        return self._object_box_size

    @object_box_size.setter
    def object_box_size(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'object_box_size' field must be a sub message of type 'Point2Di'"
        self._object_box_size = value

    @property
    def object_box_size_sigma(self):
        """Message field 'object_box_size_sigma'."""
        return self._object_box_size_sigma

    @object_box_size_sigma.setter
    def object_box_size_sigma(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Dui
            assert \
                isinstance(value, Point2Dui), \
                "The 'object_box_size_sigma' field must be a sub message of type 'Point2Dui'"
        self._object_box_size_sigma = value

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
    def object_box_orientation_sigma(self):
        """Message field 'object_box_orientation_sigma'."""
        return self._object_box_orientation_sigma

    @object_box_orientation_sigma.setter
    def object_box_orientation_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_box_orientation_sigma' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'object_box_orientation_sigma' field must be an unsigned integer in [0, 65535]"
        self._object_box_orientation_sigma = value

    @property
    def tracking_point_coordinate(self):
        """Message field 'tracking_point_coordinate'."""
        return self._tracking_point_coordinate

    @tracking_point_coordinate.setter
    def tracking_point_coordinate(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'tracking_point_coordinate' field must be a sub message of type 'Point2Di'"
        self._tracking_point_coordinate = value

    @property
    def tracking_point_coordinate_sigma(self):
        """Message field 'tracking_point_coordinate_sigma'."""
        return self._tracking_point_coordinate_sigma

    @tracking_point_coordinate_sigma.setter
    def tracking_point_coordinate_sigma(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Dui
            assert \
                isinstance(value, Point2Dui), \
                "The 'tracking_point_coordinate_sigma' field must be a sub message of type 'Point2Dui'"
        self._tracking_point_coordinate_sigma = value

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
            assert value >= 0 and value < 256, \
                "The 'number_of_contour_points' field must be an unsigned integer in [0, 255]"
        self._number_of_contour_points = value

    @property
    def contour_point_list(self):
        """Message field 'contour_point_list'."""
        return self._contour_point_list

    @contour_point_list.setter
    def contour_point_list(self, value):
        if __debug__:
            from ibeo_msgs.msg import ContourPointSigma
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
                 all(isinstance(v, ContourPointSigma) for v in value) and
                 True), \
                "The 'contour_point_list' field must be a set or sequence and each value of type 'ContourPointSigma'"
        self._contour_point_list = value
