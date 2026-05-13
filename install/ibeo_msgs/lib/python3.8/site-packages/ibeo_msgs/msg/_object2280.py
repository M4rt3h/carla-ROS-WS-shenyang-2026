# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/Object2280.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object2280(type):
    """Metaclass of message 'Object2280'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DYNAMIC_MODEL': 0,
        'STATIC_MODEL': 1,
        'UNCLASSIFIED': 0,
        'UNKNOWN_SMALL': 1,
        'UNKNOWN_BIG': 2,
        'PEDESTRIAN': 3,
        'BIKE': 4,
        'CAR': 5,
        'TRUCK': 6,
        'UNDER_DRIVABLE': 12,
        'OVER_DRIVABLE': 13,
        'CENTER_OF_GRAVITY': 0,
        'FRONT_LEFT': 1,
        'FRONT_RIGHT': 2,
        'REAR_RIGHT': 3,
        'REAR_LEFT': 4,
        'FRONT_CENTER': 5,
        'RIGHT_CENTER': 6,
        'REAR_CENTER': 7,
        'LEFT_CENTER': 8,
        'OBJECT_CENTER': 9,
        'UNKNOWN': 255,
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
                'ibeo_msgs.msg.Object2280')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object2280
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object2280
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object2280
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object2280
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object2280

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from ibeo_msgs.msg import Point2Df
            if Point2Df.__class__._TYPE_SUPPORT is None:
                Point2Df.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DYNAMIC_MODEL': cls.__constants['DYNAMIC_MODEL'],
            'STATIC_MODEL': cls.__constants['STATIC_MODEL'],
            'UNCLASSIFIED': cls.__constants['UNCLASSIFIED'],
            'UNKNOWN_SMALL': cls.__constants['UNKNOWN_SMALL'],
            'UNKNOWN_BIG': cls.__constants['UNKNOWN_BIG'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'BIKE': cls.__constants['BIKE'],
            'CAR': cls.__constants['CAR'],
            'TRUCK': cls.__constants['TRUCK'],
            'UNDER_DRIVABLE': cls.__constants['UNDER_DRIVABLE'],
            'OVER_DRIVABLE': cls.__constants['OVER_DRIVABLE'],
            'CENTER_OF_GRAVITY': cls.__constants['CENTER_OF_GRAVITY'],
            'FRONT_LEFT': cls.__constants['FRONT_LEFT'],
            'FRONT_RIGHT': cls.__constants['FRONT_RIGHT'],
            'REAR_RIGHT': cls.__constants['REAR_RIGHT'],
            'REAR_LEFT': cls.__constants['REAR_LEFT'],
            'FRONT_CENTER': cls.__constants['FRONT_CENTER'],
            'RIGHT_CENTER': cls.__constants['RIGHT_CENTER'],
            'REAR_CENTER': cls.__constants['REAR_CENTER'],
            'LEFT_CENTER': cls.__constants['LEFT_CENTER'],
            'OBJECT_CENTER': cls.__constants['OBJECT_CENTER'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
        }

    @property
    def DYNAMIC_MODEL(self):
        """Message constant 'DYNAMIC_MODEL'."""
        return Metaclass_Object2280.__constants['DYNAMIC_MODEL']

    @property
    def STATIC_MODEL(self):
        """Message constant 'STATIC_MODEL'."""
        return Metaclass_Object2280.__constants['STATIC_MODEL']

    @property
    def UNCLASSIFIED(self):
        """Message constant 'UNCLASSIFIED'."""
        return Metaclass_Object2280.__constants['UNCLASSIFIED']

    @property
    def UNKNOWN_SMALL(self):
        """Message constant 'UNKNOWN_SMALL'."""
        return Metaclass_Object2280.__constants['UNKNOWN_SMALL']

    @property
    def UNKNOWN_BIG(self):
        """Message constant 'UNKNOWN_BIG'."""
        return Metaclass_Object2280.__constants['UNKNOWN_BIG']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_Object2280.__constants['PEDESTRIAN']

    @property
    def BIKE(self):
        """Message constant 'BIKE'."""
        return Metaclass_Object2280.__constants['BIKE']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_Object2280.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_Object2280.__constants['TRUCK']

    @property
    def UNDER_DRIVABLE(self):
        """Message constant 'UNDER_DRIVABLE'."""
        return Metaclass_Object2280.__constants['UNDER_DRIVABLE']

    @property
    def OVER_DRIVABLE(self):
        """Message constant 'OVER_DRIVABLE'."""
        return Metaclass_Object2280.__constants['OVER_DRIVABLE']

    @property
    def CENTER_OF_GRAVITY(self):
        """Message constant 'CENTER_OF_GRAVITY'."""
        return Metaclass_Object2280.__constants['CENTER_OF_GRAVITY']

    @property
    def FRONT_LEFT(self):
        """Message constant 'FRONT_LEFT'."""
        return Metaclass_Object2280.__constants['FRONT_LEFT']

    @property
    def FRONT_RIGHT(self):
        """Message constant 'FRONT_RIGHT'."""
        return Metaclass_Object2280.__constants['FRONT_RIGHT']

    @property
    def REAR_RIGHT(self):
        """Message constant 'REAR_RIGHT'."""
        return Metaclass_Object2280.__constants['REAR_RIGHT']

    @property
    def REAR_LEFT(self):
        """Message constant 'REAR_LEFT'."""
        return Metaclass_Object2280.__constants['REAR_LEFT']

    @property
    def FRONT_CENTER(self):
        """Message constant 'FRONT_CENTER'."""
        return Metaclass_Object2280.__constants['FRONT_CENTER']

    @property
    def RIGHT_CENTER(self):
        """Message constant 'RIGHT_CENTER'."""
        return Metaclass_Object2280.__constants['RIGHT_CENTER']

    @property
    def REAR_CENTER(self):
        """Message constant 'REAR_CENTER'."""
        return Metaclass_Object2280.__constants['REAR_CENTER']

    @property
    def LEFT_CENTER(self):
        """Message constant 'LEFT_CENTER'."""
        return Metaclass_Object2280.__constants['LEFT_CENTER']

    @property
    def OBJECT_CENTER(self):
        """Message constant 'OBJECT_CENTER'."""
        return Metaclass_Object2280.__constants['OBJECT_CENTER']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_Object2280.__constants['UNKNOWN']


class Object2280(metaclass=Metaclass_Object2280):
    """
    Message class 'Object2280'.

    Constants:
      DYNAMIC_MODEL
      STATIC_MODEL
      UNCLASSIFIED
      UNKNOWN_SMALL
      UNKNOWN_BIG
      PEDESTRIAN
      BIKE
      CAR
      TRUCK
      UNDER_DRIVABLE
      OVER_DRIVABLE
      CENTER_OF_GRAVITY
      FRONT_LEFT
      FRONT_RIGHT
      REAR_RIGHT
      REAR_LEFT
      FRONT_CENTER
      RIGHT_CENTER
      REAR_CENTER
      LEFT_CENTER
      OBJECT_CENTER
      UNKNOWN
    """

    __slots__ = [
        '_id',
        '_tracking_model',
        '_mobility_of_dyn_object_detected',
        '_motion_model_validated',
        '_object_age',
        '_timestamp',
        '_object_prediction_age',
        '_classification',
        '_classification_certainty',
        '_classification_age',
        '_object_box_center',
        '_object_box_center_sigma',
        '_object_box_size',
        '_object_box_orientation_angle',
        '_object_box_orientation_angle_sigma',
        '_relative_velocity',
        '_relative_velocity_sigma',
        '_absolute_velocity',
        '_absolute_velocity_sigma',
        '_number_of_contour_points',
        '_closest_point_index',
        '_reference_point_location',
        '_reference_point_coordinate',
        '_reference_point_coordinate_sigma',
        '_reference_point_position_correction_coefficient',
        '_object_priority',
        '_object_existence_measurement',
        '_contour_point_list',
    ]

    _fields_and_field_types = {
        'id': 'uint16',
        'tracking_model': 'uint8',
        'mobility_of_dyn_object_detected': 'boolean',
        'motion_model_validated': 'boolean',
        'object_age': 'uint32',
        'timestamp': 'builtin_interfaces/Time',
        'object_prediction_age': 'uint16',
        'classification': 'uint8',
        'classification_certainty': 'uint8',
        'classification_age': 'uint32',
        'object_box_center': 'ibeo_msgs/Point2Df',
        'object_box_center_sigma': 'ibeo_msgs/Point2Df',
        'object_box_size': 'ibeo_msgs/Point2Df',
        'object_box_orientation_angle': 'float',
        'object_box_orientation_angle_sigma': 'float',
        'relative_velocity': 'ibeo_msgs/Point2Df',
        'relative_velocity_sigma': 'ibeo_msgs/Point2Df',
        'absolute_velocity': 'ibeo_msgs/Point2Df',
        'absolute_velocity_sigma': 'ibeo_msgs/Point2Df',
        'number_of_contour_points': 'uint8',
        'closest_point_index': 'uint8',
        'reference_point_location': 'uint16',
        'reference_point_coordinate': 'ibeo_msgs/Point2Df',
        'reference_point_coordinate_sigma': 'ibeo_msgs/Point2Df',
        'reference_point_position_correction_coefficient': 'float',
        'object_priority': 'uint16',
        'object_existence_measurement': 'float',
        'contour_point_list': 'sequence<ibeo_msgs/Point2Df>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Df'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Df'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Df'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Df'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Df'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Df'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Df'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Df'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Df'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'Point2Df')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.tracking_model = kwargs.get('tracking_model', int())
        self.mobility_of_dyn_object_detected = kwargs.get('mobility_of_dyn_object_detected', bool())
        self.motion_model_validated = kwargs.get('motion_model_validated', bool())
        self.object_age = kwargs.get('object_age', int())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.object_prediction_age = kwargs.get('object_prediction_age', int())
        self.classification = kwargs.get('classification', int())
        self.classification_certainty = kwargs.get('classification_certainty', int())
        self.classification_age = kwargs.get('classification_age', int())
        from ibeo_msgs.msg import Point2Df
        self.object_box_center = kwargs.get('object_box_center', Point2Df())
        from ibeo_msgs.msg import Point2Df
        self.object_box_center_sigma = kwargs.get('object_box_center_sigma', Point2Df())
        from ibeo_msgs.msg import Point2Df
        self.object_box_size = kwargs.get('object_box_size', Point2Df())
        self.object_box_orientation_angle = kwargs.get('object_box_orientation_angle', float())
        self.object_box_orientation_angle_sigma = kwargs.get('object_box_orientation_angle_sigma', float())
        from ibeo_msgs.msg import Point2Df
        self.relative_velocity = kwargs.get('relative_velocity', Point2Df())
        from ibeo_msgs.msg import Point2Df
        self.relative_velocity_sigma = kwargs.get('relative_velocity_sigma', Point2Df())
        from ibeo_msgs.msg import Point2Df
        self.absolute_velocity = kwargs.get('absolute_velocity', Point2Df())
        from ibeo_msgs.msg import Point2Df
        self.absolute_velocity_sigma = kwargs.get('absolute_velocity_sigma', Point2Df())
        self.number_of_contour_points = kwargs.get('number_of_contour_points', int())
        self.closest_point_index = kwargs.get('closest_point_index', int())
        self.reference_point_location = kwargs.get('reference_point_location', int())
        from ibeo_msgs.msg import Point2Df
        self.reference_point_coordinate = kwargs.get('reference_point_coordinate', Point2Df())
        from ibeo_msgs.msg import Point2Df
        self.reference_point_coordinate_sigma = kwargs.get('reference_point_coordinate_sigma', Point2Df())
        self.reference_point_position_correction_coefficient = kwargs.get('reference_point_position_correction_coefficient', float())
        self.object_priority = kwargs.get('object_priority', int())
        self.object_existence_measurement = kwargs.get('object_existence_measurement', float())
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
        if self.tracking_model != other.tracking_model:
            return False
        if self.mobility_of_dyn_object_detected != other.mobility_of_dyn_object_detected:
            return False
        if self.motion_model_validated != other.motion_model_validated:
            return False
        if self.object_age != other.object_age:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.object_prediction_age != other.object_prediction_age:
            return False
        if self.classification != other.classification:
            return False
        if self.classification_certainty != other.classification_certainty:
            return False
        if self.classification_age != other.classification_age:
            return False
        if self.object_box_center != other.object_box_center:
            return False
        if self.object_box_center_sigma != other.object_box_center_sigma:
            return False
        if self.object_box_size != other.object_box_size:
            return False
        if self.object_box_orientation_angle != other.object_box_orientation_angle:
            return False
        if self.object_box_orientation_angle_sigma != other.object_box_orientation_angle_sigma:
            return False
        if self.relative_velocity != other.relative_velocity:
            return False
        if self.relative_velocity_sigma != other.relative_velocity_sigma:
            return False
        if self.absolute_velocity != other.absolute_velocity:
            return False
        if self.absolute_velocity_sigma != other.absolute_velocity_sigma:
            return False
        if self.number_of_contour_points != other.number_of_contour_points:
            return False
        if self.closest_point_index != other.closest_point_index:
            return False
        if self.reference_point_location != other.reference_point_location:
            return False
        if self.reference_point_coordinate != other.reference_point_coordinate:
            return False
        if self.reference_point_coordinate_sigma != other.reference_point_coordinate_sigma:
            return False
        if self.reference_point_position_correction_coefficient != other.reference_point_position_correction_coefficient:
            return False
        if self.object_priority != other.object_priority:
            return False
        if self.object_existence_measurement != other.object_existence_measurement:
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
    def mobility_of_dyn_object_detected(self):
        """Message field 'mobility_of_dyn_object_detected'."""
        return self._mobility_of_dyn_object_detected

    @mobility_of_dyn_object_detected.setter
    def mobility_of_dyn_object_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mobility_of_dyn_object_detected' field must be of type 'bool'"
        self._mobility_of_dyn_object_detected = value

    @property
    def motion_model_validated(self):
        """Message field 'motion_model_validated'."""
        return self._motion_model_validated

    @motion_model_validated.setter
    def motion_model_validated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motion_model_validated' field must be of type 'bool'"
        self._motion_model_validated = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'object_age' field must be an unsigned integer in [0, 4294967295]"
        self._object_age = value

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
    def object_prediction_age(self):
        """Message field 'object_prediction_age'."""
        return self._object_prediction_age

    @object_prediction_age.setter
    def object_prediction_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_prediction_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'object_prediction_age' field must be an unsigned integer in [0, 65535]"
        self._object_prediction_age = value

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
    def classification_certainty(self):
        """Message field 'classification_certainty'."""
        return self._classification_certainty

    @classification_certainty.setter
    def classification_certainty(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'classification_certainty' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'classification_certainty' field must be an unsigned integer in [0, 255]"
        self._classification_certainty = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'classification_age' field must be an unsigned integer in [0, 4294967295]"
        self._classification_age = value

    @property
    def object_box_center(self):
        """Message field 'object_box_center'."""
        return self._object_box_center

    @object_box_center.setter
    def object_box_center(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Df
            assert \
                isinstance(value, Point2Df), \
                "The 'object_box_center' field must be a sub message of type 'Point2Df'"
        self._object_box_center = value

    @property
    def object_box_center_sigma(self):
        """Message field 'object_box_center_sigma'."""
        return self._object_box_center_sigma

    @object_box_center_sigma.setter
    def object_box_center_sigma(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Df
            assert \
                isinstance(value, Point2Df), \
                "The 'object_box_center_sigma' field must be a sub message of type 'Point2Df'"
        self._object_box_center_sigma = value

    @property
    def object_box_size(self):
        """Message field 'object_box_size'."""
        return self._object_box_size

    @object_box_size.setter
    def object_box_size(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Df
            assert \
                isinstance(value, Point2Df), \
                "The 'object_box_size' field must be a sub message of type 'Point2Df'"
        self._object_box_size = value

    @property
    def object_box_orientation_angle(self):
        """Message field 'object_box_orientation_angle'."""
        return self._object_box_orientation_angle

    @object_box_orientation_angle.setter
    def object_box_orientation_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_box_orientation_angle' field must be of type 'float'"
        self._object_box_orientation_angle = value

    @property
    def object_box_orientation_angle_sigma(self):
        """Message field 'object_box_orientation_angle_sigma'."""
        return self._object_box_orientation_angle_sigma

    @object_box_orientation_angle_sigma.setter
    def object_box_orientation_angle_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_box_orientation_angle_sigma' field must be of type 'float'"
        self._object_box_orientation_angle_sigma = value

    @property
    def relative_velocity(self):
        """Message field 'relative_velocity'."""
        return self._relative_velocity

    @relative_velocity.setter
    def relative_velocity(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Df
            assert \
                isinstance(value, Point2Df), \
                "The 'relative_velocity' field must be a sub message of type 'Point2Df'"
        self._relative_velocity = value

    @property
    def relative_velocity_sigma(self):
        """Message field 'relative_velocity_sigma'."""
        return self._relative_velocity_sigma

    @relative_velocity_sigma.setter
    def relative_velocity_sigma(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Df
            assert \
                isinstance(value, Point2Df), \
                "The 'relative_velocity_sigma' field must be a sub message of type 'Point2Df'"
        self._relative_velocity_sigma = value

    @property
    def absolute_velocity(self):
        """Message field 'absolute_velocity'."""
        return self._absolute_velocity

    @absolute_velocity.setter
    def absolute_velocity(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Df
            assert \
                isinstance(value, Point2Df), \
                "The 'absolute_velocity' field must be a sub message of type 'Point2Df'"
        self._absolute_velocity = value

    @property
    def absolute_velocity_sigma(self):
        """Message field 'absolute_velocity_sigma'."""
        return self._absolute_velocity_sigma

    @absolute_velocity_sigma.setter
    def absolute_velocity_sigma(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Df
            assert \
                isinstance(value, Point2Df), \
                "The 'absolute_velocity_sigma' field must be a sub message of type 'Point2Df'"
        self._absolute_velocity_sigma = value

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
    def closest_point_index(self):
        """Message field 'closest_point_index'."""
        return self._closest_point_index

    @closest_point_index.setter
    def closest_point_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'closest_point_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'closest_point_index' field must be an unsigned integer in [0, 255]"
        self._closest_point_index = value

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
            assert value >= 0 and value < 65536, \
                "The 'reference_point_location' field must be an unsigned integer in [0, 65535]"
        self._reference_point_location = value

    @property
    def reference_point_coordinate(self):
        """Message field 'reference_point_coordinate'."""
        return self._reference_point_coordinate

    @reference_point_coordinate.setter
    def reference_point_coordinate(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Df
            assert \
                isinstance(value, Point2Df), \
                "The 'reference_point_coordinate' field must be a sub message of type 'Point2Df'"
        self._reference_point_coordinate = value

    @property
    def reference_point_coordinate_sigma(self):
        """Message field 'reference_point_coordinate_sigma'."""
        return self._reference_point_coordinate_sigma

    @reference_point_coordinate_sigma.setter
    def reference_point_coordinate_sigma(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Df
            assert \
                isinstance(value, Point2Df), \
                "The 'reference_point_coordinate_sigma' field must be a sub message of type 'Point2Df'"
        self._reference_point_coordinate_sigma = value

    @property
    def reference_point_position_correction_coefficient(self):
        """Message field 'reference_point_position_correction_coefficient'."""
        return self._reference_point_position_correction_coefficient

    @reference_point_position_correction_coefficient.setter
    def reference_point_position_correction_coefficient(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reference_point_position_correction_coefficient' field must be of type 'float'"
        self._reference_point_position_correction_coefficient = value

    @property
    def object_priority(self):
        """Message field 'object_priority'."""
        return self._object_priority

    @object_priority.setter
    def object_priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_priority' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'object_priority' field must be an unsigned integer in [0, 65535]"
        self._object_priority = value

    @property
    def object_existence_measurement(self):
        """Message field 'object_existence_measurement'."""
        return self._object_existence_measurement

    @object_existence_measurement.setter
    def object_existence_measurement(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_existence_measurement' field must be of type 'float'"
        self._object_existence_measurement = value

    @property
    def contour_point_list(self):
        """Message field 'contour_point_list'."""
        return self._contour_point_list

    @contour_point_list.setter
    def contour_point_list(self, value):
        if __debug__:
            from ibeo_msgs.msg import Point2Df
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
                 all(isinstance(v, Point2Df) for v in value) and
                 True), \
                "The 'contour_point_list' field must be a set or sequence and each value of type 'Point2Df'"
        self._contour_point_list = value
