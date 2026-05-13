# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/TrackedProperties.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackedProperties(type):
    """Metaclass of message 'TrackedProperties'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INITIALIZATION_PHASE': 0,
        'TRACKING_PHASE': 1,
        'DYNAMIC_AND_MOVING': 0,
        'DYNAMIC_AND_STOPPED': 1,
        'A_PRIORI_STATIONARY': 2,
        'UNCLASSIFIED': 0,
        'UNKNOWN_SMALL': 1,
        'UNKNOWN_BIG': 2,
        'PEDESTRIAN': 3,
        'BIKE': 4,
        'CAR': 5,
        'TRUCK': 6,
        'OVER_DRIVABLE': 10,
        'UNDER_DRIVABLE': 11,
        'CENTER_OF_GRAVITY': 0,
        'TOP_FRONT_LEFT_CORNER': 1,
        'TOP_FRONT_RIGHT_CORNER': 2,
        'BOTTOM_REAR_RIGHT_CORNER': 3,
        'BOTTOM_REAR_LEFT_CORNER': 4,
        'CENTER_OF_TOP_FRONT_EDGE': 5,
        'CENTER_OF_RIGHT_EDGE': 6,
        'CENTER_OF_BOTTOM_REAR_EDGE': 7,
        'CENTER_OF_LEFT_EDGE': 8,
        'BOX_CENTER': 9,
        'INVALID': 255,
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
                'ibeo_msgs.msg.TrackedProperties')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracked_properties
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracked_properties
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracked_properties
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracked_properties
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracked_properties

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
            'INITIALIZATION_PHASE': cls.__constants['INITIALIZATION_PHASE'],
            'TRACKING_PHASE': cls.__constants['TRACKING_PHASE'],
            'DYNAMIC_AND_MOVING': cls.__constants['DYNAMIC_AND_MOVING'],
            'DYNAMIC_AND_STOPPED': cls.__constants['DYNAMIC_AND_STOPPED'],
            'A_PRIORI_STATIONARY': cls.__constants['A_PRIORI_STATIONARY'],
            'UNCLASSIFIED': cls.__constants['UNCLASSIFIED'],
            'UNKNOWN_SMALL': cls.__constants['UNKNOWN_SMALL'],
            'UNKNOWN_BIG': cls.__constants['UNKNOWN_BIG'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'BIKE': cls.__constants['BIKE'],
            'CAR': cls.__constants['CAR'],
            'TRUCK': cls.__constants['TRUCK'],
            'OVER_DRIVABLE': cls.__constants['OVER_DRIVABLE'],
            'UNDER_DRIVABLE': cls.__constants['UNDER_DRIVABLE'],
            'CENTER_OF_GRAVITY': cls.__constants['CENTER_OF_GRAVITY'],
            'TOP_FRONT_LEFT_CORNER': cls.__constants['TOP_FRONT_LEFT_CORNER'],
            'TOP_FRONT_RIGHT_CORNER': cls.__constants['TOP_FRONT_RIGHT_CORNER'],
            'BOTTOM_REAR_RIGHT_CORNER': cls.__constants['BOTTOM_REAR_RIGHT_CORNER'],
            'BOTTOM_REAR_LEFT_CORNER': cls.__constants['BOTTOM_REAR_LEFT_CORNER'],
            'CENTER_OF_TOP_FRONT_EDGE': cls.__constants['CENTER_OF_TOP_FRONT_EDGE'],
            'CENTER_OF_RIGHT_EDGE': cls.__constants['CENTER_OF_RIGHT_EDGE'],
            'CENTER_OF_BOTTOM_REAR_EDGE': cls.__constants['CENTER_OF_BOTTOM_REAR_EDGE'],
            'CENTER_OF_LEFT_EDGE': cls.__constants['CENTER_OF_LEFT_EDGE'],
            'BOX_CENTER': cls.__constants['BOX_CENTER'],
            'INVALID': cls.__constants['INVALID'],
        }

    @property
    def INITIALIZATION_PHASE(self):
        """Message constant 'INITIALIZATION_PHASE'."""
        return Metaclass_TrackedProperties.__constants['INITIALIZATION_PHASE']

    @property
    def TRACKING_PHASE(self):
        """Message constant 'TRACKING_PHASE'."""
        return Metaclass_TrackedProperties.__constants['TRACKING_PHASE']

    @property
    def DYNAMIC_AND_MOVING(self):
        """Message constant 'DYNAMIC_AND_MOVING'."""
        return Metaclass_TrackedProperties.__constants['DYNAMIC_AND_MOVING']

    @property
    def DYNAMIC_AND_STOPPED(self):
        """Message constant 'DYNAMIC_AND_STOPPED'."""
        return Metaclass_TrackedProperties.__constants['DYNAMIC_AND_STOPPED']

    @property
    def A_PRIORI_STATIONARY(self):
        """Message constant 'A_PRIORI_STATIONARY'."""
        return Metaclass_TrackedProperties.__constants['A_PRIORI_STATIONARY']

    @property
    def UNCLASSIFIED(self):
        """Message constant 'UNCLASSIFIED'."""
        return Metaclass_TrackedProperties.__constants['UNCLASSIFIED']

    @property
    def UNKNOWN_SMALL(self):
        """Message constant 'UNKNOWN_SMALL'."""
        return Metaclass_TrackedProperties.__constants['UNKNOWN_SMALL']

    @property
    def UNKNOWN_BIG(self):
        """Message constant 'UNKNOWN_BIG'."""
        return Metaclass_TrackedProperties.__constants['UNKNOWN_BIG']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_TrackedProperties.__constants['PEDESTRIAN']

    @property
    def BIKE(self):
        """Message constant 'BIKE'."""
        return Metaclass_TrackedProperties.__constants['BIKE']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_TrackedProperties.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_TrackedProperties.__constants['TRUCK']

    @property
    def OVER_DRIVABLE(self):
        """Message constant 'OVER_DRIVABLE'."""
        return Metaclass_TrackedProperties.__constants['OVER_DRIVABLE']

    @property
    def UNDER_DRIVABLE(self):
        """Message constant 'UNDER_DRIVABLE'."""
        return Metaclass_TrackedProperties.__constants['UNDER_DRIVABLE']

    @property
    def CENTER_OF_GRAVITY(self):
        """Message constant 'CENTER_OF_GRAVITY'."""
        return Metaclass_TrackedProperties.__constants['CENTER_OF_GRAVITY']

    @property
    def TOP_FRONT_LEFT_CORNER(self):
        """Message constant 'TOP_FRONT_LEFT_CORNER'."""
        return Metaclass_TrackedProperties.__constants['TOP_FRONT_LEFT_CORNER']

    @property
    def TOP_FRONT_RIGHT_CORNER(self):
        """Message constant 'TOP_FRONT_RIGHT_CORNER'."""
        return Metaclass_TrackedProperties.__constants['TOP_FRONT_RIGHT_CORNER']

    @property
    def BOTTOM_REAR_RIGHT_CORNER(self):
        """Message constant 'BOTTOM_REAR_RIGHT_CORNER'."""
        return Metaclass_TrackedProperties.__constants['BOTTOM_REAR_RIGHT_CORNER']

    @property
    def BOTTOM_REAR_LEFT_CORNER(self):
        """Message constant 'BOTTOM_REAR_LEFT_CORNER'."""
        return Metaclass_TrackedProperties.__constants['BOTTOM_REAR_LEFT_CORNER']

    @property
    def CENTER_OF_TOP_FRONT_EDGE(self):
        """Message constant 'CENTER_OF_TOP_FRONT_EDGE'."""
        return Metaclass_TrackedProperties.__constants['CENTER_OF_TOP_FRONT_EDGE']

    @property
    def CENTER_OF_RIGHT_EDGE(self):
        """Message constant 'CENTER_OF_RIGHT_EDGE'."""
        return Metaclass_TrackedProperties.__constants['CENTER_OF_RIGHT_EDGE']

    @property
    def CENTER_OF_BOTTOM_REAR_EDGE(self):
        """Message constant 'CENTER_OF_BOTTOM_REAR_EDGE'."""
        return Metaclass_TrackedProperties.__constants['CENTER_OF_BOTTOM_REAR_EDGE']

    @property
    def CENTER_OF_LEFT_EDGE(self):
        """Message constant 'CENTER_OF_LEFT_EDGE'."""
        return Metaclass_TrackedProperties.__constants['CENTER_OF_LEFT_EDGE']

    @property
    def BOX_CENTER(self):
        """Message constant 'BOX_CENTER'."""
        return Metaclass_TrackedProperties.__constants['BOX_CENTER']

    @property
    def INVALID(self):
        """Message constant 'INVALID'."""
        return Metaclass_TrackedProperties.__constants['INVALID']


class TrackedProperties(metaclass=Metaclass_TrackedProperties):
    """
    Message class 'TrackedProperties'.

    Constants:
      INITIALIZATION_PHASE
      TRACKING_PHASE
      DYNAMIC_AND_MOVING
      DYNAMIC_AND_STOPPED
      A_PRIORI_STATIONARY
      UNCLASSIFIED
      UNKNOWN_SMALL
      UNKNOWN_BIG
      PEDESTRIAN
      BIKE
      CAR
      TRUCK
      OVER_DRIVABLE
      UNDER_DRIVABLE
      CENTER_OF_GRAVITY
      TOP_FRONT_LEFT_CORNER
      TOP_FRONT_RIGHT_CORNER
      BOTTOM_REAR_RIGHT_CORNER
      BOTTOM_REAR_LEFT_CORNER
      CENTER_OF_TOP_FRONT_EDGE
      CENTER_OF_RIGHT_EDGE
      CENTER_OF_BOTTOM_REAR_EDGE
      CENTER_OF_LEFT_EDGE
      BOX_CENTER
      INVALID
    """

    __slots__ = [
        '_object_age',
        '_hidden_status_age',
        '_object_phase',
        '_dynamic_property',
        '_relative_time_of_measure',
        '_position_closest_point',
        '_relative_velocity',
        '_relative_velocity_sigma',
        '_classification',
        '_classification_age',
        '_object_box_size',
        '_object_box_size_sigma',
        '_object_box_orientation',
        '_object_box_orientation_sigma',
        '_tracking_point_location',
        '_tracking_point_coordinate',
        '_tracking_point_coordinate_sigma',
        '_velocity',
        '_velocity_sigma',
        '_acceleration',
        '_acceleration_sigma',
        '_yaw_rate',
        '_yaw_rate_sigma',
        '_number_of_contour_points',
        '_contour_point_list',
    ]

    _fields_and_field_types = {
        'object_age': 'uint16',
        'hidden_status_age': 'uint16',
        'object_phase': 'uint8',
        'dynamic_property': 'uint8',
        'relative_time_of_measure': 'uint16',
        'position_closest_point': 'ibeo_msgs/Point2Di',
        'relative_velocity': 'ibeo_msgs/Point2Di',
        'relative_velocity_sigma': 'ibeo_msgs/Point2Dui',
        'classification': 'uint8',
        'classification_age': 'uint16',
        'object_box_size': 'ibeo_msgs/Point2Di',
        'object_box_size_sigma': 'ibeo_msgs/Point2Dui',
        'object_box_orientation': 'int16',
        'object_box_orientation_sigma': 'uint16',
        'tracking_point_location': 'uint8',
        'tracking_point_coordinate': 'ibeo_msgs/Point2Di',
        'tracking_point_coordinate_sigma': 'ibeo_msgs/Point2Dui',
        'velocity': 'ibeo_msgs/Point2Di',
        'velocity_sigma': 'ibeo_msgs/Point2Dui',
        'acceleration': 'ibeo_msgs/Point2Di',
        'acceleration_sigma': 'ibeo_msgs/Point2Dui',
        'yaw_rate': 'int16',
        'yaw_rate_sigma': 'uint16',
        'number_of_contour_points': 'uint8',
        'contour_point_list': 'sequence<ibeo_msgs/ContourPointSigma>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Dui'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Dui'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Dui'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Dui'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Di'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Dui'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'ContourPointSigma')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.object_age = kwargs.get('object_age', int())
        self.hidden_status_age = kwargs.get('hidden_status_age', int())
        self.object_phase = kwargs.get('object_phase', int())
        self.dynamic_property = kwargs.get('dynamic_property', int())
        self.relative_time_of_measure = kwargs.get('relative_time_of_measure', int())
        from ibeo_msgs.msg import Point2Di
        self.position_closest_point = kwargs.get('position_closest_point', Point2Di())
        from ibeo_msgs.msg import Point2Di
        self.relative_velocity = kwargs.get('relative_velocity', Point2Di())
        from ibeo_msgs.msg import Point2Dui
        self.relative_velocity_sigma = kwargs.get('relative_velocity_sigma', Point2Dui())
        self.classification = kwargs.get('classification', int())
        self.classification_age = kwargs.get('classification_age', int())
        from ibeo_msgs.msg import Point2Di
        self.object_box_size = kwargs.get('object_box_size', Point2Di())
        from ibeo_msgs.msg import Point2Dui
        self.object_box_size_sigma = kwargs.get('object_box_size_sigma', Point2Dui())
        self.object_box_orientation = kwargs.get('object_box_orientation', int())
        self.object_box_orientation_sigma = kwargs.get('object_box_orientation_sigma', int())
        self.tracking_point_location = kwargs.get('tracking_point_location', int())
        from ibeo_msgs.msg import Point2Di
        self.tracking_point_coordinate = kwargs.get('tracking_point_coordinate', Point2Di())
        from ibeo_msgs.msg import Point2Dui
        self.tracking_point_coordinate_sigma = kwargs.get('tracking_point_coordinate_sigma', Point2Dui())
        from ibeo_msgs.msg import Point2Di
        self.velocity = kwargs.get('velocity', Point2Di())
        from ibeo_msgs.msg import Point2Dui
        self.velocity_sigma = kwargs.get('velocity_sigma', Point2Dui())
        from ibeo_msgs.msg import Point2Di
        self.acceleration = kwargs.get('acceleration', Point2Di())
        from ibeo_msgs.msg import Point2Dui
        self.acceleration_sigma = kwargs.get('acceleration_sigma', Point2Dui())
        self.yaw_rate = kwargs.get('yaw_rate', int())
        self.yaw_rate_sigma = kwargs.get('yaw_rate_sigma', int())
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
        if self.object_age != other.object_age:
            return False
        if self.hidden_status_age != other.hidden_status_age:
            return False
        if self.object_phase != other.object_phase:
            return False
        if self.dynamic_property != other.dynamic_property:
            return False
        if self.relative_time_of_measure != other.relative_time_of_measure:
            return False
        if self.position_closest_point != other.position_closest_point:
            return False
        if self.relative_velocity != other.relative_velocity:
            return False
        if self.relative_velocity_sigma != other.relative_velocity_sigma:
            return False
        if self.classification != other.classification:
            return False
        if self.classification_age != other.classification_age:
            return False
        if self.object_box_size != other.object_box_size:
            return False
        if self.object_box_size_sigma != other.object_box_size_sigma:
            return False
        if self.object_box_orientation != other.object_box_orientation:
            return False
        if self.object_box_orientation_sigma != other.object_box_orientation_sigma:
            return False
        if self.tracking_point_location != other.tracking_point_location:
            return False
        if self.tracking_point_coordinate != other.tracking_point_coordinate:
            return False
        if self.tracking_point_coordinate_sigma != other.tracking_point_coordinate_sigma:
            return False
        if self.velocity != other.velocity:
            return False
        if self.velocity_sigma != other.velocity_sigma:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.acceleration_sigma != other.acceleration_sigma:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.yaw_rate_sigma != other.yaw_rate_sigma:
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
    def object_age(self):
        """Message field 'object_age'."""
        return self._object_age

    @object_age.setter
    def object_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'object_age' field must be an unsigned integer in [0, 65535]"
        self._object_age = value

    @property
    def hidden_status_age(self):
        """Message field 'hidden_status_age'."""
        return self._hidden_status_age

    @hidden_status_age.setter
    def hidden_status_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hidden_status_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hidden_status_age' field must be an unsigned integer in [0, 65535]"
        self._hidden_status_age = value

    @property
    def object_phase(self):
        """Message field 'object_phase'."""
        return self._object_phase

    @object_phase.setter
    def object_phase(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_phase' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_phase' field must be an unsigned integer in [0, 255]"
        self._object_phase = value

    @property
    def dynamic_property(self):
        """Message field 'dynamic_property'."""
        return self._dynamic_property

    @dynamic_property.setter
    def dynamic_property(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dynamic_property' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dynamic_property' field must be an unsigned integer in [0, 255]"
        self._dynamic_property = value

    @property
    def relative_time_of_measure(self):
        """Message field 'relative_time_of_measure'."""
        return self._relative_time_of_measure

    @relative_time_of_measure.setter
    def relative_time_of_measure(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relative_time_of_measure' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'relative_time_of_measure' field must be an unsigned integer in [0, 65535]"
        self._relative_time_of_measure = value

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
    def relative_velocity_sigma(self):
        """Message field 'relative_velocity_sigma'."""
        return self._relative_velocity_sigma

    @relative_velocity_sigma.setter
    def relative_velocity_sigma(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Dui
            assert \
                isinstance(value, Point2Dui), \
                "The 'relative_velocity_sigma' field must be a sub message of type 'Point2Dui'"
        self._relative_velocity_sigma = value

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
    def tracking_point_location(self):
        """Message field 'tracking_point_location'."""
        return self._tracking_point_location

    @tracking_point_location.setter
    def tracking_point_location(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tracking_point_location' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tracking_point_location' field must be an unsigned integer in [0, 255]"
        self._tracking_point_location = value

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
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'velocity' field must be a sub message of type 'Point2Di'"
        self._velocity = value

    @property
    def velocity_sigma(self):
        """Message field 'velocity_sigma'."""
        return self._velocity_sigma

    @velocity_sigma.setter
    def velocity_sigma(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Dui
            assert \
                isinstance(value, Point2Dui), \
                "The 'velocity_sigma' field must be a sub message of type 'Point2Dui'"
        self._velocity_sigma = value

    @property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Di
            assert \
                isinstance(value, Point2Di), \
                "The 'acceleration' field must be a sub message of type 'Point2Di'"
        self._acceleration = value

    @property
    def acceleration_sigma(self):
        """Message field 'acceleration_sigma'."""
        return self._acceleration_sigma

    @acceleration_sigma.setter
    def acceleration_sigma(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Dui
            assert \
                isinstance(value, Point2Dui), \
                "The 'acceleration_sigma' field must be a sub message of type 'Point2Dui'"
        self._acceleration_sigma = value

    @property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yaw_rate' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'yaw_rate' field must be an integer in [-32768, 32767]"
        self._yaw_rate = value

    @property
    def yaw_rate_sigma(self):
        """Message field 'yaw_rate_sigma'."""
        return self._yaw_rate_sigma

    @yaw_rate_sigma.setter
    def yaw_rate_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yaw_rate_sigma' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'yaw_rate_sigma' field must be an unsigned integer in [0, 65535]"
        self._yaw_rate_sigma = value

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
