# generated from rosidl_generator_py/resource/_idl.py.em
# with input from derived_object_msgs:msg/Object.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object(type):
    """Metaclass of message 'Object'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OBJECT_DETECTED': 0,
        'OBJECT_TRACKED': 1,
        'CLASSIFICATION_UNKNOWN': 0,
        'CLASSIFICATION_UNKNOWN_SMALL': 1,
        'CLASSIFICATION_UNKNOWN_MEDIUM': 2,
        'CLASSIFICATION_UNKNOWN_BIG': 3,
        'CLASSIFICATION_PEDESTRIAN': 4,
        'CLASSIFICATION_BIKE': 5,
        'CLASSIFICATION_CAR': 6,
        'CLASSIFICATION_TRUCK': 7,
        'CLASSIFICATION_MOTORCYCLE': 8,
        'CLASSIFICATION_OTHER_VEHICLE': 9,
        'CLASSIFICATION_BARRIER': 10,
        'CLASSIFICATION_SIGN': 11,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('derived_object_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'derived_object_msgs.msg.Object')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object

            from geometry_msgs.msg import Accel
            if Accel.__class__._TYPE_SUPPORT is None:
                Accel.__class__.__import_type_support__()

            from geometry_msgs.msg import Polygon
            if Polygon.__class__._TYPE_SUPPORT is None:
                Polygon.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

            from shape_msgs.msg import SolidPrimitive
            if SolidPrimitive.__class__._TYPE_SUPPORT is None:
                SolidPrimitive.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OBJECT_DETECTED': cls.__constants['OBJECT_DETECTED'],
            'OBJECT_TRACKED': cls.__constants['OBJECT_TRACKED'],
            'CLASSIFICATION_UNKNOWN': cls.__constants['CLASSIFICATION_UNKNOWN'],
            'CLASSIFICATION_UNKNOWN_SMALL': cls.__constants['CLASSIFICATION_UNKNOWN_SMALL'],
            'CLASSIFICATION_UNKNOWN_MEDIUM': cls.__constants['CLASSIFICATION_UNKNOWN_MEDIUM'],
            'CLASSIFICATION_UNKNOWN_BIG': cls.__constants['CLASSIFICATION_UNKNOWN_BIG'],
            'CLASSIFICATION_PEDESTRIAN': cls.__constants['CLASSIFICATION_PEDESTRIAN'],
            'CLASSIFICATION_BIKE': cls.__constants['CLASSIFICATION_BIKE'],
            'CLASSIFICATION_CAR': cls.__constants['CLASSIFICATION_CAR'],
            'CLASSIFICATION_TRUCK': cls.__constants['CLASSIFICATION_TRUCK'],
            'CLASSIFICATION_MOTORCYCLE': cls.__constants['CLASSIFICATION_MOTORCYCLE'],
            'CLASSIFICATION_OTHER_VEHICLE': cls.__constants['CLASSIFICATION_OTHER_VEHICLE'],
            'CLASSIFICATION_BARRIER': cls.__constants['CLASSIFICATION_BARRIER'],
            'CLASSIFICATION_SIGN': cls.__constants['CLASSIFICATION_SIGN'],
        }

    @property
    def OBJECT_DETECTED(self):
        """Message constant 'OBJECT_DETECTED'."""
        return Metaclass_Object.__constants['OBJECT_DETECTED']

    @property
    def OBJECT_TRACKED(self):
        """Message constant 'OBJECT_TRACKED'."""
        return Metaclass_Object.__constants['OBJECT_TRACKED']

    @property
    def CLASSIFICATION_UNKNOWN(self):
        """Message constant 'CLASSIFICATION_UNKNOWN'."""
        return Metaclass_Object.__constants['CLASSIFICATION_UNKNOWN']

    @property
    def CLASSIFICATION_UNKNOWN_SMALL(self):
        """Message constant 'CLASSIFICATION_UNKNOWN_SMALL'."""
        return Metaclass_Object.__constants['CLASSIFICATION_UNKNOWN_SMALL']

    @property
    def CLASSIFICATION_UNKNOWN_MEDIUM(self):
        """Message constant 'CLASSIFICATION_UNKNOWN_MEDIUM'."""
        return Metaclass_Object.__constants['CLASSIFICATION_UNKNOWN_MEDIUM']

    @property
    def CLASSIFICATION_UNKNOWN_BIG(self):
        """Message constant 'CLASSIFICATION_UNKNOWN_BIG'."""
        return Metaclass_Object.__constants['CLASSIFICATION_UNKNOWN_BIG']

    @property
    def CLASSIFICATION_PEDESTRIAN(self):
        """Message constant 'CLASSIFICATION_PEDESTRIAN'."""
        return Metaclass_Object.__constants['CLASSIFICATION_PEDESTRIAN']

    @property
    def CLASSIFICATION_BIKE(self):
        """Message constant 'CLASSIFICATION_BIKE'."""
        return Metaclass_Object.__constants['CLASSIFICATION_BIKE']

    @property
    def CLASSIFICATION_CAR(self):
        """Message constant 'CLASSIFICATION_CAR'."""
        return Metaclass_Object.__constants['CLASSIFICATION_CAR']

    @property
    def CLASSIFICATION_TRUCK(self):
        """Message constant 'CLASSIFICATION_TRUCK'."""
        return Metaclass_Object.__constants['CLASSIFICATION_TRUCK']

    @property
    def CLASSIFICATION_MOTORCYCLE(self):
        """Message constant 'CLASSIFICATION_MOTORCYCLE'."""
        return Metaclass_Object.__constants['CLASSIFICATION_MOTORCYCLE']

    @property
    def CLASSIFICATION_OTHER_VEHICLE(self):
        """Message constant 'CLASSIFICATION_OTHER_VEHICLE'."""
        return Metaclass_Object.__constants['CLASSIFICATION_OTHER_VEHICLE']

    @property
    def CLASSIFICATION_BARRIER(self):
        """Message constant 'CLASSIFICATION_BARRIER'."""
        return Metaclass_Object.__constants['CLASSIFICATION_BARRIER']

    @property
    def CLASSIFICATION_SIGN(self):
        """Message constant 'CLASSIFICATION_SIGN'."""
        return Metaclass_Object.__constants['CLASSIFICATION_SIGN']


class Object(metaclass=Metaclass_Object):
    """
    Message class 'Object'.

    Constants:
      OBJECT_DETECTED
      OBJECT_TRACKED
      CLASSIFICATION_UNKNOWN
      CLASSIFICATION_UNKNOWN_SMALL
      CLASSIFICATION_UNKNOWN_MEDIUM
      CLASSIFICATION_UNKNOWN_BIG
      CLASSIFICATION_PEDESTRIAN
      CLASSIFICATION_BIKE
      CLASSIFICATION_CAR
      CLASSIFICATION_TRUCK
      CLASSIFICATION_MOTORCYCLE
      CLASSIFICATION_OTHER_VEHICLE
      CLASSIFICATION_BARRIER
      CLASSIFICATION_SIGN
    """

    __slots__ = [
        '_header',
        '_id',
        '_detection_level',
        '_object_classified',
        '_pose',
        '_twist',
        '_accel',
        '_polygon',
        '_shape',
        '_classification',
        '_classification_certainty',
        '_classification_age',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'uint32',
        'detection_level': 'uint8',
        'object_classified': 'boolean',
        'pose': 'geometry_msgs/Pose',
        'twist': 'geometry_msgs/Twist',
        'accel': 'geometry_msgs/Accel',
        'polygon': 'geometry_msgs/Polygon',
        'shape': 'shape_msgs/SolidPrimitive',
        'classification': 'uint8',
        'classification_certainty': 'uint8',
        'classification_age': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Accel'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Polygon'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['shape_msgs', 'msg'], 'SolidPrimitive'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id = kwargs.get('id', int())
        self.detection_level = kwargs.get('detection_level', int())
        self.object_classified = kwargs.get('object_classified', bool())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Twist
        self.twist = kwargs.get('twist', Twist())
        from geometry_msgs.msg import Accel
        self.accel = kwargs.get('accel', Accel())
        from geometry_msgs.msg import Polygon
        self.polygon = kwargs.get('polygon', Polygon())
        from shape_msgs.msg import SolidPrimitive
        self.shape = kwargs.get('shape', SolidPrimitive())
        self.classification = kwargs.get('classification', int())
        self.classification_certainty = kwargs.get('classification_certainty', int())
        self.classification_age = kwargs.get('classification_age', int())

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
        if self.id != other.id:
            return False
        if self.detection_level != other.detection_level:
            return False
        if self.object_classified != other.object_classified:
            return False
        if self.pose != other.pose:
            return False
        if self.twist != other.twist:
            return False
        if self.accel != other.accel:
            return False
        if self.polygon != other.polygon:
            return False
        if self.shape != other.shape:
            return False
        if self.classification != other.classification:
            return False
        if self.classification_certainty != other.classification_certainty:
            return False
        if self.classification_age != other.classification_age:
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
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @property
    def detection_level(self):
        """Message field 'detection_level'."""
        return self._detection_level

    @detection_level.setter
    def detection_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'detection_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'detection_level' field must be an unsigned integer in [0, 255]"
        self._detection_level = value

    @property
    def object_classified(self):
        """Message field 'object_classified'."""
        return self._object_classified

    @object_classified.setter
    def object_classified(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'object_classified' field must be of type 'bool'"
        self._object_classified = value

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'twist' field must be a sub message of type 'Twist'"
        self._twist = value

    @property
    def accel(self):
        """Message field 'accel'."""
        return self._accel

    @accel.setter
    def accel(self, value):
        if __debug__:
            from geometry_msgs.msg import Accel
            assert \
                isinstance(value, Accel), \
                "The 'accel' field must be a sub message of type 'Accel'"
        self._accel = value

    @property
    def polygon(self):
        """Message field 'polygon'."""
        return self._polygon

    @polygon.setter
    def polygon(self, value):
        if __debug__:
            from geometry_msgs.msg import Polygon
            assert \
                isinstance(value, Polygon), \
                "The 'polygon' field must be a sub message of type 'Polygon'"
        self._polygon = value

    @property
    def shape(self):
        """Message field 'shape'."""
        return self._shape

    @shape.setter
    def shape(self, value):
        if __debug__:
            from shape_msgs.msg import SolidPrimitive
            assert \
                isinstance(value, SolidPrimitive), \
                "The 'shape' field must be a sub message of type 'SolidPrimitive'"
        self._shape = value

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
