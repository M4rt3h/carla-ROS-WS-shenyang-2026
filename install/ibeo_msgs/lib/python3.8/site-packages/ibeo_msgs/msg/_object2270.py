# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/Object2270.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object2270(type):
    """Metaclass of message 'Object2270'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
        'UNCLASSIFIED': 0,
        'UNKNOWN_SMALL': 1,
        'UNKNOWN_BIG': 2,
        'PEDESTRIAN': 3,
        'BIKE': 4,
        'CAR': 5,
        'TRUCK': 6,
        'OVER_DRIVABLE': 10,
        'UNDER_DRIVABLE': 11,
        'DYNAMIC_MODEL': 0,
        'STATIC_MODEL': 1,
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
                'ibeo_msgs.msg.Object2270')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object2270
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object2270
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object2270
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object2270
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object2270

            from ibeo_msgs.msg import Point2Di
            if Point2Di.__class__._TYPE_SUPPORT is None:
                Point2Di.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
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
            'UNCLASSIFIED': cls.__constants['UNCLASSIFIED'],
            'UNKNOWN_SMALL': cls.__constants['UNKNOWN_SMALL'],
            'UNKNOWN_BIG': cls.__constants['UNKNOWN_BIG'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'BIKE': cls.__constants['BIKE'],
            'CAR': cls.__constants['CAR'],
            'TRUCK': cls.__constants['TRUCK'],
            'OVER_DRIVABLE': cls.__constants['OVER_DRIVABLE'],
            'UNDER_DRIVABLE': cls.__constants['UNDER_DRIVABLE'],
            'DYNAMIC_MODEL': cls.__constants['DYNAMIC_MODEL'],
            'STATIC_MODEL': cls.__constants['STATIC_MODEL'],
        }

    @property
    def CENTER_OF_GRAVITY(self):
        """Message constant 'CENTER_OF_GRAVITY'."""
        return Metaclass_Object2270.__constants['CENTER_OF_GRAVITY']

    @property
    def TOP_FRONT_LEFT_CORNER(self):
        """Message constant 'TOP_FRONT_LEFT_CORNER'."""
        return Metaclass_Object2270.__constants['TOP_FRONT_LEFT_CORNER']

    @property
    def TOP_FRONT_RIGHT_CORNER(self):
        """Message constant 'TOP_FRONT_RIGHT_CORNER'."""
        return Metaclass_Object2270.__constants['TOP_FRONT_RIGHT_CORNER']

    @property
    def BOTTOM_REAR_RIGHT_CORNER(self):
        """Message constant 'BOTTOM_REAR_RIGHT_CORNER'."""
        return Metaclass_Object2270.__constants['BOTTOM_REAR_RIGHT_CORNER']

    @property
    def BOTTOM_REAR_LEFT_CORNER(self):
        """Message constant 'BOTTOM_REAR_LEFT_CORNER'."""
        return Metaclass_Object2270.__constants['BOTTOM_REAR_LEFT_CORNER']

    @property
    def CENTER_OF_TOP_FRONT_EDGE(self):
        """Message constant 'CENTER_OF_TOP_FRONT_EDGE'."""
        return Metaclass_Object2270.__constants['CENTER_OF_TOP_FRONT_EDGE']

    @property
    def CENTER_OF_RIGHT_EDGE(self):
        """Message constant 'CENTER_OF_RIGHT_EDGE'."""
        return Metaclass_Object2270.__constants['CENTER_OF_RIGHT_EDGE']

    @property
    def CENTER_OF_BOTTOM_REAR_EDGE(self):
        """Message constant 'CENTER_OF_BOTTOM_REAR_EDGE'."""
        return Metaclass_Object2270.__constants['CENTER_OF_BOTTOM_REAR_EDGE']

    @property
    def CENTER_OF_LEFT_EDGE(self):
        """Message constant 'CENTER_OF_LEFT_EDGE'."""
        return Metaclass_Object2270.__constants['CENTER_OF_LEFT_EDGE']

    @property
    def BOX_CENTER(self):
        """Message constant 'BOX_CENTER'."""
        return Metaclass_Object2270.__constants['BOX_CENTER']

    @property
    def INVALID(self):
        """Message constant 'INVALID'."""
        return Metaclass_Object2270.__constants['INVALID']

    @property
    def UNCLASSIFIED(self):
        """Message constant 'UNCLASSIFIED'."""
        return Metaclass_Object2270.__constants['UNCLASSIFIED']

    @property
    def UNKNOWN_SMALL(self):
        """Message constant 'UNKNOWN_SMALL'."""
        return Metaclass_Object2270.__constants['UNKNOWN_SMALL']

    @property
    def UNKNOWN_BIG(self):
        """Message constant 'UNKNOWN_BIG'."""
        return Metaclass_Object2270.__constants['UNKNOWN_BIG']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_Object2270.__constants['PEDESTRIAN']

    @property
    def BIKE(self):
        """Message constant 'BIKE'."""
        return Metaclass_Object2270.__constants['BIKE']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_Object2270.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_Object2270.__constants['TRUCK']

    @property
    def OVER_DRIVABLE(self):
        """Message constant 'OVER_DRIVABLE'."""
        return Metaclass_Object2270.__constants['OVER_DRIVABLE']

    @property
    def UNDER_DRIVABLE(self):
        """Message constant 'UNDER_DRIVABLE'."""
        return Metaclass_Object2270.__constants['UNDER_DRIVABLE']

    @property
    def DYNAMIC_MODEL(self):
        """Message constant 'DYNAMIC_MODEL'."""
        return Metaclass_Object2270.__constants['DYNAMIC_MODEL']

    @property
    def STATIC_MODEL(self):
        """Message constant 'STATIC_MODEL'."""
        return Metaclass_Object2270.__constants['STATIC_MODEL']


class Object2270(metaclass=Metaclass_Object2270):
    """
    Message class 'Object2270'.

    Constants:
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
      UNCLASSIFIED
      UNKNOWN_SMALL
      UNKNOWN_BIG
      PEDESTRIAN
      BIKE
      CAR
      TRUCK
      OVER_DRIVABLE
      UNDER_DRIVABLE
      DYNAMIC_MODEL
      STATIC_MODEL
    """

    __slots__ = [
        '_id',
        '_age',
        '_prediction_age',
        '_relative_moment_of_measurement',
        '_reference_point_location',
        '_reference_point_position_x',
        '_reference_point_position_y',
        '_reference_point_position_sigma_x',
        '_reference_point_position_sigma_y',
        '_contour_points_cog_x',
        '_contour_points_cog_y',
        '_object_box_length',
        '_object_box_width',
        '_object_box_orientation_angle',
        '_object_box_orientation_angle_sigma',
        '_absolute_velocity_x',
        '_absolute_velocity_y',
        '_absolute_velocity_sigma_x',
        '_absolute_velocity_sigma_y',
        '_relative_velocity_x',
        '_relative_velocity_y',
        '_relative_velocity_sigma_x',
        '_relative_velocity_sigma_y',
        '_classification',
        '_tracking_model',
        '_mobile_detected',
        '_track_valid',
        '_classification_age',
        '_classification_confidence',
        '_number_of_contour_points',
        '_contour_point_list',
    ]

    _fields_and_field_types = {
        'id': 'uint16',
        'age': 'uint16',
        'prediction_age': 'uint16',
        'relative_moment_of_measurement': 'uint16',
        'reference_point_location': 'uint8',
        'reference_point_position_x': 'int16',
        'reference_point_position_y': 'int16',
        'reference_point_position_sigma_x': 'uint16',
        'reference_point_position_sigma_y': 'uint16',
        'contour_points_cog_x': 'int16',
        'contour_points_cog_y': 'int16',
        'object_box_length': 'uint16',
        'object_box_width': 'uint16',
        'object_box_orientation_angle': 'int16',
        'object_box_orientation_angle_sigma': 'int16',
        'absolute_velocity_x': 'int16',
        'absolute_velocity_y': 'int16',
        'absolute_velocity_sigma_x': 'uint16',
        'absolute_velocity_sigma_y': 'uint16',
        'relative_velocity_x': 'int16',
        'relative_velocity_y': 'int16',
        'relative_velocity_sigma_x': 'uint16',
        'relative_velocity_sigma_y': 'uint16',
        'classification': 'uint8',
        'tracking_model': 'uint8',
        'mobile_detected': 'boolean',
        'track_valid': 'boolean',
        'classification_age': 'uint16',
        'classification_confidence': 'uint16',
        'number_of_contour_points': 'uint16',
        'contour_point_list': 'sequence<ibeo_msgs/Point2Di>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.relative_moment_of_measurement = kwargs.get('relative_moment_of_measurement', int())
        self.reference_point_location = kwargs.get('reference_point_location', int())
        self.reference_point_position_x = kwargs.get('reference_point_position_x', int())
        self.reference_point_position_y = kwargs.get('reference_point_position_y', int())
        self.reference_point_position_sigma_x = kwargs.get('reference_point_position_sigma_x', int())
        self.reference_point_position_sigma_y = kwargs.get('reference_point_position_sigma_y', int())
        self.contour_points_cog_x = kwargs.get('contour_points_cog_x', int())
        self.contour_points_cog_y = kwargs.get('contour_points_cog_y', int())
        self.object_box_length = kwargs.get('object_box_length', int())
        self.object_box_width = kwargs.get('object_box_width', int())
        self.object_box_orientation_angle = kwargs.get('object_box_orientation_angle', int())
        self.object_box_orientation_angle_sigma = kwargs.get('object_box_orientation_angle_sigma', int())
        self.absolute_velocity_x = kwargs.get('absolute_velocity_x', int())
        self.absolute_velocity_y = kwargs.get('absolute_velocity_y', int())
        self.absolute_velocity_sigma_x = kwargs.get('absolute_velocity_sigma_x', int())
        self.absolute_velocity_sigma_y = kwargs.get('absolute_velocity_sigma_y', int())
        self.relative_velocity_x = kwargs.get('relative_velocity_x', int())
        self.relative_velocity_y = kwargs.get('relative_velocity_y', int())
        self.relative_velocity_sigma_x = kwargs.get('relative_velocity_sigma_x', int())
        self.relative_velocity_sigma_y = kwargs.get('relative_velocity_sigma_y', int())
        self.classification = kwargs.get('classification', int())
        self.tracking_model = kwargs.get('tracking_model', int())
        self.mobile_detected = kwargs.get('mobile_detected', bool())
        self.track_valid = kwargs.get('track_valid', bool())
        self.classification_age = kwargs.get('classification_age', int())
        self.classification_confidence = kwargs.get('classification_confidence', int())
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
        if self.relative_moment_of_measurement != other.relative_moment_of_measurement:
            return False
        if self.reference_point_location != other.reference_point_location:
            return False
        if self.reference_point_position_x != other.reference_point_position_x:
            return False
        if self.reference_point_position_y != other.reference_point_position_y:
            return False
        if self.reference_point_position_sigma_x != other.reference_point_position_sigma_x:
            return False
        if self.reference_point_position_sigma_y != other.reference_point_position_sigma_y:
            return False
        if self.contour_points_cog_x != other.contour_points_cog_x:
            return False
        if self.contour_points_cog_y != other.contour_points_cog_y:
            return False
        if self.object_box_length != other.object_box_length:
            return False
        if self.object_box_width != other.object_box_width:
            return False
        if self.object_box_orientation_angle != other.object_box_orientation_angle:
            return False
        if self.object_box_orientation_angle_sigma != other.object_box_orientation_angle_sigma:
            return False
        if self.absolute_velocity_x != other.absolute_velocity_x:
            return False
        if self.absolute_velocity_y != other.absolute_velocity_y:
            return False
        if self.absolute_velocity_sigma_x != other.absolute_velocity_sigma_x:
            return False
        if self.absolute_velocity_sigma_y != other.absolute_velocity_sigma_y:
            return False
        if self.relative_velocity_x != other.relative_velocity_x:
            return False
        if self.relative_velocity_y != other.relative_velocity_y:
            return False
        if self.relative_velocity_sigma_x != other.relative_velocity_sigma_x:
            return False
        if self.relative_velocity_sigma_y != other.relative_velocity_sigma_y:
            return False
        if self.classification != other.classification:
            return False
        if self.tracking_model != other.tracking_model:
            return False
        if self.mobile_detected != other.mobile_detected:
            return False
        if self.track_valid != other.track_valid:
            return False
        if self.classification_age != other.classification_age:
            return False
        if self.classification_confidence != other.classification_confidence:
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
    def relative_moment_of_measurement(self):
        """Message field 'relative_moment_of_measurement'."""
        return self._relative_moment_of_measurement

    @relative_moment_of_measurement.setter
    def relative_moment_of_measurement(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relative_moment_of_measurement' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'relative_moment_of_measurement' field must be an unsigned integer in [0, 65535]"
        self._relative_moment_of_measurement = value

    @property
    def reference_point_location(self):
        """Message field 'reference_point_location'."""
        return self._reference_point_location

    @reference_point_location.setter
    def reference_point_location(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_point_location' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reference_point_location' field must be an unsigned integer in [0, 255]"
        self._reference_point_location = value

    @property
    def reference_point_position_x(self):
        """Message field 'reference_point_position_x'."""
        return self._reference_point_position_x

    @reference_point_position_x.setter
    def reference_point_position_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_point_position_x' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'reference_point_position_x' field must be an integer in [-32768, 32767]"
        self._reference_point_position_x = value

    @property
    def reference_point_position_y(self):
        """Message field 'reference_point_position_y'."""
        return self._reference_point_position_y

    @reference_point_position_y.setter
    def reference_point_position_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_point_position_y' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'reference_point_position_y' field must be an integer in [-32768, 32767]"
        self._reference_point_position_y = value

    @property
    def reference_point_position_sigma_x(self):
        """Message field 'reference_point_position_sigma_x'."""
        return self._reference_point_position_sigma_x

    @reference_point_position_sigma_x.setter
    def reference_point_position_sigma_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_point_position_sigma_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reference_point_position_sigma_x' field must be an unsigned integer in [0, 65535]"
        self._reference_point_position_sigma_x = value

    @property
    def reference_point_position_sigma_y(self):
        """Message field 'reference_point_position_sigma_y'."""
        return self._reference_point_position_sigma_y

    @reference_point_position_sigma_y.setter
    def reference_point_position_sigma_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_point_position_sigma_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reference_point_position_sigma_y' field must be an unsigned integer in [0, 65535]"
        self._reference_point_position_sigma_y = value

    @property
    def contour_points_cog_x(self):
        """Message field 'contour_points_cog_x'."""
        return self._contour_points_cog_x

    @contour_points_cog_x.setter
    def contour_points_cog_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'contour_points_cog_x' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'contour_points_cog_x' field must be an integer in [-32768, 32767]"
        self._contour_points_cog_x = value

    @property
    def contour_points_cog_y(self):
        """Message field 'contour_points_cog_y'."""
        return self._contour_points_cog_y

    @contour_points_cog_y.setter
    def contour_points_cog_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'contour_points_cog_y' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'contour_points_cog_y' field must be an integer in [-32768, 32767]"
        self._contour_points_cog_y = value

    @property
    def object_box_length(self):
        """Message field 'object_box_length'."""
        return self._object_box_length

    @object_box_length.setter
    def object_box_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_box_length' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'object_box_length' field must be an unsigned integer in [0, 65535]"
        self._object_box_length = value

    @property
    def object_box_width(self):
        """Message field 'object_box_width'."""
        return self._object_box_width

    @object_box_width.setter
    def object_box_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_box_width' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'object_box_width' field must be an unsigned integer in [0, 65535]"
        self._object_box_width = value

    @property
    def object_box_orientation_angle(self):
        """Message field 'object_box_orientation_angle'."""
        return self._object_box_orientation_angle

    @object_box_orientation_angle.setter
    def object_box_orientation_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_box_orientation_angle' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'object_box_orientation_angle' field must be an integer in [-32768, 32767]"
        self._object_box_orientation_angle = value

    @property
    def object_box_orientation_angle_sigma(self):
        """Message field 'object_box_orientation_angle_sigma'."""
        return self._object_box_orientation_angle_sigma

    @object_box_orientation_angle_sigma.setter
    def object_box_orientation_angle_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_box_orientation_angle_sigma' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'object_box_orientation_angle_sigma' field must be an integer in [-32768, 32767]"
        self._object_box_orientation_angle_sigma = value

    @property
    def absolute_velocity_x(self):
        """Message field 'absolute_velocity_x'."""
        return self._absolute_velocity_x

    @absolute_velocity_x.setter
    def absolute_velocity_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'absolute_velocity_x' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'absolute_velocity_x' field must be an integer in [-32768, 32767]"
        self._absolute_velocity_x = value

    @property
    def absolute_velocity_y(self):
        """Message field 'absolute_velocity_y'."""
        return self._absolute_velocity_y

    @absolute_velocity_y.setter
    def absolute_velocity_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'absolute_velocity_y' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'absolute_velocity_y' field must be an integer in [-32768, 32767]"
        self._absolute_velocity_y = value

    @property
    def absolute_velocity_sigma_x(self):
        """Message field 'absolute_velocity_sigma_x'."""
        return self._absolute_velocity_sigma_x

    @absolute_velocity_sigma_x.setter
    def absolute_velocity_sigma_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'absolute_velocity_sigma_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'absolute_velocity_sigma_x' field must be an unsigned integer in [0, 65535]"
        self._absolute_velocity_sigma_x = value

    @property
    def absolute_velocity_sigma_y(self):
        """Message field 'absolute_velocity_sigma_y'."""
        return self._absolute_velocity_sigma_y

    @absolute_velocity_sigma_y.setter
    def absolute_velocity_sigma_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'absolute_velocity_sigma_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'absolute_velocity_sigma_y' field must be an unsigned integer in [0, 65535]"
        self._absolute_velocity_sigma_y = value

    @property
    def relative_velocity_x(self):
        """Message field 'relative_velocity_x'."""
        return self._relative_velocity_x

    @relative_velocity_x.setter
    def relative_velocity_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relative_velocity_x' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'relative_velocity_x' field must be an integer in [-32768, 32767]"
        self._relative_velocity_x = value

    @property
    def relative_velocity_y(self):
        """Message field 'relative_velocity_y'."""
        return self._relative_velocity_y

    @relative_velocity_y.setter
    def relative_velocity_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relative_velocity_y' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'relative_velocity_y' field must be an integer in [-32768, 32767]"
        self._relative_velocity_y = value

    @property
    def relative_velocity_sigma_x(self):
        """Message field 'relative_velocity_sigma_x'."""
        return self._relative_velocity_sigma_x

    @relative_velocity_sigma_x.setter
    def relative_velocity_sigma_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relative_velocity_sigma_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'relative_velocity_sigma_x' field must be an unsigned integer in [0, 65535]"
        self._relative_velocity_sigma_x = value

    @property
    def relative_velocity_sigma_y(self):
        """Message field 'relative_velocity_sigma_y'."""
        return self._relative_velocity_sigma_y

    @relative_velocity_sigma_y.setter
    def relative_velocity_sigma_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relative_velocity_sigma_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'relative_velocity_sigma_y' field must be an unsigned integer in [0, 65535]"
        self._relative_velocity_sigma_y = value

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
    def tracking_model(self):
        """Message field 'tracking_model'."""
        return self._tracking_model

    @tracking_model.setter
    def tracking_model(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tracking_model' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tracking_model' field must be an unsigned integer in [0, 255]"
        self._tracking_model = value

    @property
    def mobile_detected(self):
        """Message field 'mobile_detected'."""
        return self._mobile_detected

    @mobile_detected.setter
    def mobile_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mobile_detected' field must be of type 'bool'"
        self._mobile_detected = value

    @property
    def track_valid(self):
        """Message field 'track_valid'."""
        return self._track_valid

    @track_valid.setter
    def track_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'track_valid' field must be of type 'bool'"
        self._track_valid = value

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
    def classification_confidence(self):
        """Message field 'classification_confidence'."""
        return self._classification_confidence

    @classification_confidence.setter
    def classification_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'classification_confidence' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'classification_confidence' field must be an unsigned integer in [0, 65535]"
        self._classification_confidence = value

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
