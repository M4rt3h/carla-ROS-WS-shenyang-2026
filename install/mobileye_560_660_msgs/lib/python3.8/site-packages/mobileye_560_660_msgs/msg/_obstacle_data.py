# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mobileye_560_660_msgs:msg/ObstacleData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstacleData(type):
    """Metaclass of message 'ObstacleData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BLINKER_INFO_UNAVAILABLE': 0,
        'BLINKER_INFO_OFF': 1,
        'BLINKER_INFO_LEFT': 2,
        'BLINKER_INFO_RIGHT': 3,
        'BLINKER_INFO_BOTH': 4,
        'CUT_IN_AND_OUT_UNDEFINED': 0,
        'CUT_IN_AND_OUT_IN_HOST_LANE': 1,
        'CUT_IN_AND_OUT_OUT_HOST_LANE': 2,
        'CUT_IN_AND_OUT_CUT_IN': 3,
        'CUT_IN_AND_OUT_CUT_OUT': 4,
        'OBSTACLE_TYPE_VEHICLE': 0,
        'OBSTACLE_TYPE_TRUCK': 1,
        'OBSTACLE_TYPE_BIKE': 2,
        'OBSTACLE_TYPE_PED': 3,
        'OBSTACLE_TYPE_BICYCLE': 4,
        'OBSTACLE_STATUS_UNDEFINED': 0,
        'OBSTACLE_STATUS_STANDING': 1,
        'OBSTACLE_STATUS_STOPPED': 2,
        'OBSTACLE_STATUS_MOVING': 3,
        'OBSTACLE_STATUS_ONCOMING': 4,
        'OBSTACLE_STATUS_PARKED': 5,
        'OBSTACLE_VALID_INVALID': 0,
        'OBSTACLE_VALID_NEW': 1,
        'OBSTACLE_VALID_OLDER': 2,
        'OBSTACLE_LANE_NOT_ASSIGNED': 0,
        'OBSTACLE_LANE_EGO_LANE': 1,
        'OBSTACLE_LANE_NEXT_LANE': 2,
        'OBSTACLE_LANE_INVALID': 3,
        'RADAR_MATCH_CONFIDENCE_NO_MATCH': 0,
        'RADAR_MATCH_CONFIDENCE_MULTI_MATCH': 1,
        'RADAR_MATCH_CONFIDENCE_BOUNDED_LOW': 2,
        'RADAR_MATCH_CONFIDENCE_BOUNDED_MED': 3,
        'RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH': 4,
        'RADAR_MATCH_CONFIDENCE_HIGH': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mobileye_560_660_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mobileye_560_660_msgs.msg.ObstacleData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle_data

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BLINKER_INFO_UNAVAILABLE': cls.__constants['BLINKER_INFO_UNAVAILABLE'],
            'BLINKER_INFO_OFF': cls.__constants['BLINKER_INFO_OFF'],
            'BLINKER_INFO_LEFT': cls.__constants['BLINKER_INFO_LEFT'],
            'BLINKER_INFO_RIGHT': cls.__constants['BLINKER_INFO_RIGHT'],
            'BLINKER_INFO_BOTH': cls.__constants['BLINKER_INFO_BOTH'],
            'CUT_IN_AND_OUT_UNDEFINED': cls.__constants['CUT_IN_AND_OUT_UNDEFINED'],
            'CUT_IN_AND_OUT_IN_HOST_LANE': cls.__constants['CUT_IN_AND_OUT_IN_HOST_LANE'],
            'CUT_IN_AND_OUT_OUT_HOST_LANE': cls.__constants['CUT_IN_AND_OUT_OUT_HOST_LANE'],
            'CUT_IN_AND_OUT_CUT_IN': cls.__constants['CUT_IN_AND_OUT_CUT_IN'],
            'CUT_IN_AND_OUT_CUT_OUT': cls.__constants['CUT_IN_AND_OUT_CUT_OUT'],
            'OBSTACLE_TYPE_VEHICLE': cls.__constants['OBSTACLE_TYPE_VEHICLE'],
            'OBSTACLE_TYPE_TRUCK': cls.__constants['OBSTACLE_TYPE_TRUCK'],
            'OBSTACLE_TYPE_BIKE': cls.__constants['OBSTACLE_TYPE_BIKE'],
            'OBSTACLE_TYPE_PED': cls.__constants['OBSTACLE_TYPE_PED'],
            'OBSTACLE_TYPE_BICYCLE': cls.__constants['OBSTACLE_TYPE_BICYCLE'],
            'OBSTACLE_STATUS_UNDEFINED': cls.__constants['OBSTACLE_STATUS_UNDEFINED'],
            'OBSTACLE_STATUS_STANDING': cls.__constants['OBSTACLE_STATUS_STANDING'],
            'OBSTACLE_STATUS_STOPPED': cls.__constants['OBSTACLE_STATUS_STOPPED'],
            'OBSTACLE_STATUS_MOVING': cls.__constants['OBSTACLE_STATUS_MOVING'],
            'OBSTACLE_STATUS_ONCOMING': cls.__constants['OBSTACLE_STATUS_ONCOMING'],
            'OBSTACLE_STATUS_PARKED': cls.__constants['OBSTACLE_STATUS_PARKED'],
            'OBSTACLE_VALID_INVALID': cls.__constants['OBSTACLE_VALID_INVALID'],
            'OBSTACLE_VALID_NEW': cls.__constants['OBSTACLE_VALID_NEW'],
            'OBSTACLE_VALID_OLDER': cls.__constants['OBSTACLE_VALID_OLDER'],
            'OBSTACLE_LANE_NOT_ASSIGNED': cls.__constants['OBSTACLE_LANE_NOT_ASSIGNED'],
            'OBSTACLE_LANE_EGO_LANE': cls.__constants['OBSTACLE_LANE_EGO_LANE'],
            'OBSTACLE_LANE_NEXT_LANE': cls.__constants['OBSTACLE_LANE_NEXT_LANE'],
            'OBSTACLE_LANE_INVALID': cls.__constants['OBSTACLE_LANE_INVALID'],
            'RADAR_MATCH_CONFIDENCE_NO_MATCH': cls.__constants['RADAR_MATCH_CONFIDENCE_NO_MATCH'],
            'RADAR_MATCH_CONFIDENCE_MULTI_MATCH': cls.__constants['RADAR_MATCH_CONFIDENCE_MULTI_MATCH'],
            'RADAR_MATCH_CONFIDENCE_BOUNDED_LOW': cls.__constants['RADAR_MATCH_CONFIDENCE_BOUNDED_LOW'],
            'RADAR_MATCH_CONFIDENCE_BOUNDED_MED': cls.__constants['RADAR_MATCH_CONFIDENCE_BOUNDED_MED'],
            'RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH': cls.__constants['RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH'],
            'RADAR_MATCH_CONFIDENCE_HIGH': cls.__constants['RADAR_MATCH_CONFIDENCE_HIGH'],
        }

    @property
    def BLINKER_INFO_UNAVAILABLE(self):
        """Message constant 'BLINKER_INFO_UNAVAILABLE'."""
        return Metaclass_ObstacleData.__constants['BLINKER_INFO_UNAVAILABLE']

    @property
    def BLINKER_INFO_OFF(self):
        """Message constant 'BLINKER_INFO_OFF'."""
        return Metaclass_ObstacleData.__constants['BLINKER_INFO_OFF']

    @property
    def BLINKER_INFO_LEFT(self):
        """Message constant 'BLINKER_INFO_LEFT'."""
        return Metaclass_ObstacleData.__constants['BLINKER_INFO_LEFT']

    @property
    def BLINKER_INFO_RIGHT(self):
        """Message constant 'BLINKER_INFO_RIGHT'."""
        return Metaclass_ObstacleData.__constants['BLINKER_INFO_RIGHT']

    @property
    def BLINKER_INFO_BOTH(self):
        """Message constant 'BLINKER_INFO_BOTH'."""
        return Metaclass_ObstacleData.__constants['BLINKER_INFO_BOTH']

    @property
    def CUT_IN_AND_OUT_UNDEFINED(self):
        """Message constant 'CUT_IN_AND_OUT_UNDEFINED'."""
        return Metaclass_ObstacleData.__constants['CUT_IN_AND_OUT_UNDEFINED']

    @property
    def CUT_IN_AND_OUT_IN_HOST_LANE(self):
        """Message constant 'CUT_IN_AND_OUT_IN_HOST_LANE'."""
        return Metaclass_ObstacleData.__constants['CUT_IN_AND_OUT_IN_HOST_LANE']

    @property
    def CUT_IN_AND_OUT_OUT_HOST_LANE(self):
        """Message constant 'CUT_IN_AND_OUT_OUT_HOST_LANE'."""
        return Metaclass_ObstacleData.__constants['CUT_IN_AND_OUT_OUT_HOST_LANE']

    @property
    def CUT_IN_AND_OUT_CUT_IN(self):
        """Message constant 'CUT_IN_AND_OUT_CUT_IN'."""
        return Metaclass_ObstacleData.__constants['CUT_IN_AND_OUT_CUT_IN']

    @property
    def CUT_IN_AND_OUT_CUT_OUT(self):
        """Message constant 'CUT_IN_AND_OUT_CUT_OUT'."""
        return Metaclass_ObstacleData.__constants['CUT_IN_AND_OUT_CUT_OUT']

    @property
    def OBSTACLE_TYPE_VEHICLE(self):
        """Message constant 'OBSTACLE_TYPE_VEHICLE'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_TYPE_VEHICLE']

    @property
    def OBSTACLE_TYPE_TRUCK(self):
        """Message constant 'OBSTACLE_TYPE_TRUCK'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_TYPE_TRUCK']

    @property
    def OBSTACLE_TYPE_BIKE(self):
        """Message constant 'OBSTACLE_TYPE_BIKE'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_TYPE_BIKE']

    @property
    def OBSTACLE_TYPE_PED(self):
        """Message constant 'OBSTACLE_TYPE_PED'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_TYPE_PED']

    @property
    def OBSTACLE_TYPE_BICYCLE(self):
        """Message constant 'OBSTACLE_TYPE_BICYCLE'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_TYPE_BICYCLE']

    @property
    def OBSTACLE_STATUS_UNDEFINED(self):
        """Message constant 'OBSTACLE_STATUS_UNDEFINED'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_STATUS_UNDEFINED']

    @property
    def OBSTACLE_STATUS_STANDING(self):
        """Message constant 'OBSTACLE_STATUS_STANDING'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_STATUS_STANDING']

    @property
    def OBSTACLE_STATUS_STOPPED(self):
        """Message constant 'OBSTACLE_STATUS_STOPPED'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_STATUS_STOPPED']

    @property
    def OBSTACLE_STATUS_MOVING(self):
        """Message constant 'OBSTACLE_STATUS_MOVING'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_STATUS_MOVING']

    @property
    def OBSTACLE_STATUS_ONCOMING(self):
        """Message constant 'OBSTACLE_STATUS_ONCOMING'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_STATUS_ONCOMING']

    @property
    def OBSTACLE_STATUS_PARKED(self):
        """Message constant 'OBSTACLE_STATUS_PARKED'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_STATUS_PARKED']

    @property
    def OBSTACLE_VALID_INVALID(self):
        """Message constant 'OBSTACLE_VALID_INVALID'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_VALID_INVALID']

    @property
    def OBSTACLE_VALID_NEW(self):
        """Message constant 'OBSTACLE_VALID_NEW'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_VALID_NEW']

    @property
    def OBSTACLE_VALID_OLDER(self):
        """Message constant 'OBSTACLE_VALID_OLDER'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_VALID_OLDER']

    @property
    def OBSTACLE_LANE_NOT_ASSIGNED(self):
        """Message constant 'OBSTACLE_LANE_NOT_ASSIGNED'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_LANE_NOT_ASSIGNED']

    @property
    def OBSTACLE_LANE_EGO_LANE(self):
        """Message constant 'OBSTACLE_LANE_EGO_LANE'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_LANE_EGO_LANE']

    @property
    def OBSTACLE_LANE_NEXT_LANE(self):
        """Message constant 'OBSTACLE_LANE_NEXT_LANE'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_LANE_NEXT_LANE']

    @property
    def OBSTACLE_LANE_INVALID(self):
        """Message constant 'OBSTACLE_LANE_INVALID'."""
        return Metaclass_ObstacleData.__constants['OBSTACLE_LANE_INVALID']

    @property
    def RADAR_MATCH_CONFIDENCE_NO_MATCH(self):
        """Message constant 'RADAR_MATCH_CONFIDENCE_NO_MATCH'."""
        return Metaclass_ObstacleData.__constants['RADAR_MATCH_CONFIDENCE_NO_MATCH']

    @property
    def RADAR_MATCH_CONFIDENCE_MULTI_MATCH(self):
        """Message constant 'RADAR_MATCH_CONFIDENCE_MULTI_MATCH'."""
        return Metaclass_ObstacleData.__constants['RADAR_MATCH_CONFIDENCE_MULTI_MATCH']

    @property
    def RADAR_MATCH_CONFIDENCE_BOUNDED_LOW(self):
        """Message constant 'RADAR_MATCH_CONFIDENCE_BOUNDED_LOW'."""
        return Metaclass_ObstacleData.__constants['RADAR_MATCH_CONFIDENCE_BOUNDED_LOW']

    @property
    def RADAR_MATCH_CONFIDENCE_BOUNDED_MED(self):
        """Message constant 'RADAR_MATCH_CONFIDENCE_BOUNDED_MED'."""
        return Metaclass_ObstacleData.__constants['RADAR_MATCH_CONFIDENCE_BOUNDED_MED']

    @property
    def RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH(self):
        """Message constant 'RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH'."""
        return Metaclass_ObstacleData.__constants['RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH']

    @property
    def RADAR_MATCH_CONFIDENCE_HIGH(self):
        """Message constant 'RADAR_MATCH_CONFIDENCE_HIGH'."""
        return Metaclass_ObstacleData.__constants['RADAR_MATCH_CONFIDENCE_HIGH']


class ObstacleData(metaclass=Metaclass_ObstacleData):
    """
    Message class 'ObstacleData'.

    Constants:
      BLINKER_INFO_UNAVAILABLE
      BLINKER_INFO_OFF
      BLINKER_INFO_LEFT
      BLINKER_INFO_RIGHT
      BLINKER_INFO_BOTH
      CUT_IN_AND_OUT_UNDEFINED
      CUT_IN_AND_OUT_IN_HOST_LANE
      CUT_IN_AND_OUT_OUT_HOST_LANE
      CUT_IN_AND_OUT_CUT_IN
      CUT_IN_AND_OUT_CUT_OUT
      OBSTACLE_TYPE_VEHICLE
      OBSTACLE_TYPE_TRUCK
      OBSTACLE_TYPE_BIKE
      OBSTACLE_TYPE_PED
      OBSTACLE_TYPE_BICYCLE
      OBSTACLE_STATUS_UNDEFINED
      OBSTACLE_STATUS_STANDING
      OBSTACLE_STATUS_STOPPED
      OBSTACLE_STATUS_MOVING
      OBSTACLE_STATUS_ONCOMING
      OBSTACLE_STATUS_PARKED
      OBSTACLE_VALID_INVALID
      OBSTACLE_VALID_NEW
      OBSTACLE_VALID_OLDER
      OBSTACLE_LANE_NOT_ASSIGNED
      OBSTACLE_LANE_EGO_LANE
      OBSTACLE_LANE_NEXT_LANE
      OBSTACLE_LANE_INVALID
      RADAR_MATCH_CONFIDENCE_NO_MATCH
      RADAR_MATCH_CONFIDENCE_MULTI_MATCH
      RADAR_MATCH_CONFIDENCE_BOUNDED_LOW
      RADAR_MATCH_CONFIDENCE_BOUNDED_MED
      RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH
      RADAR_MATCH_CONFIDENCE_HIGH
    """

    __slots__ = [
        '_header',
        '_obstacle_id',
        '_obstacle_pos_x',
        '_obstacle_pos_y',
        '_blinker_info',
        '_cut_in_and_out',
        '_obstacle_rel_vel_x',
        '_obstacle_type',
        '_obstacle_status',
        '_obstacle_brake_lights',
        '_obstacle_valid',
        '_obstacle_length',
        '_obstacle_width',
        '_obstacle_age',
        '_obstacle_lane',
        '_cipv_flag',
        '_radar_pos_x',
        '_radar_vel_x',
        '_radar_match_confidence',
        '_matched_radar_id',
        '_obstacle_angle_rate',
        '_obstacle_scale_change',
        '_object_accel_x',
        '_obstacle_replaced',
        '_obstacle_angle',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'obstacle_id': 'uint16',
        'obstacle_pos_x': 'double',
        'obstacle_pos_y': 'double',
        'blinker_info': 'uint8',
        'cut_in_and_out': 'uint8',
        'obstacle_rel_vel_x': 'double',
        'obstacle_type': 'uint8',
        'obstacle_status': 'uint8',
        'obstacle_brake_lights': 'boolean',
        'obstacle_valid': 'uint8',
        'obstacle_length': 'float',
        'obstacle_width': 'float',
        'obstacle_age': 'uint16',
        'obstacle_lane': 'uint8',
        'cipv_flag': 'boolean',
        'radar_pos_x': 'float',
        'radar_vel_x': 'float',
        'radar_match_confidence': 'uint8',
        'matched_radar_id': 'uint16',
        'obstacle_angle_rate': 'float',
        'obstacle_scale_change': 'double',
        'object_accel_x': 'float',
        'obstacle_replaced': 'boolean',
        'obstacle_angle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.obstacle_id = kwargs.get('obstacle_id', int())
        self.obstacle_pos_x = kwargs.get('obstacle_pos_x', float())
        self.obstacle_pos_y = kwargs.get('obstacle_pos_y', float())
        self.blinker_info = kwargs.get('blinker_info', int())
        self.cut_in_and_out = kwargs.get('cut_in_and_out', int())
        self.obstacle_rel_vel_x = kwargs.get('obstacle_rel_vel_x', float())
        self.obstacle_type = kwargs.get('obstacle_type', int())
        self.obstacle_status = kwargs.get('obstacle_status', int())
        self.obstacle_brake_lights = kwargs.get('obstacle_brake_lights', bool())
        self.obstacle_valid = kwargs.get('obstacle_valid', int())
        self.obstacle_length = kwargs.get('obstacle_length', float())
        self.obstacle_width = kwargs.get('obstacle_width', float())
        self.obstacle_age = kwargs.get('obstacle_age', int())
        self.obstacle_lane = kwargs.get('obstacle_lane', int())
        self.cipv_flag = kwargs.get('cipv_flag', bool())
        self.radar_pos_x = kwargs.get('radar_pos_x', float())
        self.radar_vel_x = kwargs.get('radar_vel_x', float())
        self.radar_match_confidence = kwargs.get('radar_match_confidence', int())
        self.matched_radar_id = kwargs.get('matched_radar_id', int())
        self.obstacle_angle_rate = kwargs.get('obstacle_angle_rate', float())
        self.obstacle_scale_change = kwargs.get('obstacle_scale_change', float())
        self.object_accel_x = kwargs.get('object_accel_x', float())
        self.obstacle_replaced = kwargs.get('obstacle_replaced', bool())
        self.obstacle_angle = kwargs.get('obstacle_angle', float())

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
        if self.obstacle_id != other.obstacle_id:
            return False
        if self.obstacle_pos_x != other.obstacle_pos_x:
            return False
        if self.obstacle_pos_y != other.obstacle_pos_y:
            return False
        if self.blinker_info != other.blinker_info:
            return False
        if self.cut_in_and_out != other.cut_in_and_out:
            return False
        if self.obstacle_rel_vel_x != other.obstacle_rel_vel_x:
            return False
        if self.obstacle_type != other.obstacle_type:
            return False
        if self.obstacle_status != other.obstacle_status:
            return False
        if self.obstacle_brake_lights != other.obstacle_brake_lights:
            return False
        if self.obstacle_valid != other.obstacle_valid:
            return False
        if self.obstacle_length != other.obstacle_length:
            return False
        if self.obstacle_width != other.obstacle_width:
            return False
        if self.obstacle_age != other.obstacle_age:
            return False
        if self.obstacle_lane != other.obstacle_lane:
            return False
        if self.cipv_flag != other.cipv_flag:
            return False
        if self.radar_pos_x != other.radar_pos_x:
            return False
        if self.radar_vel_x != other.radar_vel_x:
            return False
        if self.radar_match_confidence != other.radar_match_confidence:
            return False
        if self.matched_radar_id != other.matched_radar_id:
            return False
        if self.obstacle_angle_rate != other.obstacle_angle_rate:
            return False
        if self.obstacle_scale_change != other.obstacle_scale_change:
            return False
        if self.object_accel_x != other.object_accel_x:
            return False
        if self.obstacle_replaced != other.obstacle_replaced:
            return False
        if self.obstacle_angle != other.obstacle_angle:
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
    def obstacle_id(self):
        """Message field 'obstacle_id'."""
        return self._obstacle_id

    @obstacle_id.setter
    def obstacle_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obstacle_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'obstacle_id' field must be an unsigned integer in [0, 65535]"
        self._obstacle_id = value

    @property
    def obstacle_pos_x(self):
        """Message field 'obstacle_pos_x'."""
        return self._obstacle_pos_x

    @obstacle_pos_x.setter
    def obstacle_pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_pos_x' field must be of type 'float'"
        self._obstacle_pos_x = value

    @property
    def obstacle_pos_y(self):
        """Message field 'obstacle_pos_y'."""
        return self._obstacle_pos_y

    @obstacle_pos_y.setter
    def obstacle_pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_pos_y' field must be of type 'float'"
        self._obstacle_pos_y = value

    @property
    def blinker_info(self):
        """Message field 'blinker_info'."""
        return self._blinker_info

    @blinker_info.setter
    def blinker_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blinker_info' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'blinker_info' field must be an unsigned integer in [0, 255]"
        self._blinker_info = value

    @property
    def cut_in_and_out(self):
        """Message field 'cut_in_and_out'."""
        return self._cut_in_and_out

    @cut_in_and_out.setter
    def cut_in_and_out(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cut_in_and_out' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cut_in_and_out' field must be an unsigned integer in [0, 255]"
        self._cut_in_and_out = value

    @property
    def obstacle_rel_vel_x(self):
        """Message field 'obstacle_rel_vel_x'."""
        return self._obstacle_rel_vel_x

    @obstacle_rel_vel_x.setter
    def obstacle_rel_vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_rel_vel_x' field must be of type 'float'"
        self._obstacle_rel_vel_x = value

    @property
    def obstacle_type(self):
        """Message field 'obstacle_type'."""
        return self._obstacle_type

    @obstacle_type.setter
    def obstacle_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obstacle_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'obstacle_type' field must be an unsigned integer in [0, 255]"
        self._obstacle_type = value

    @property
    def obstacle_status(self):
        """Message field 'obstacle_status'."""
        return self._obstacle_status

    @obstacle_status.setter
    def obstacle_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obstacle_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'obstacle_status' field must be an unsigned integer in [0, 255]"
        self._obstacle_status = value

    @property
    def obstacle_brake_lights(self):
        """Message field 'obstacle_brake_lights'."""
        return self._obstacle_brake_lights

    @obstacle_brake_lights.setter
    def obstacle_brake_lights(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'obstacle_brake_lights' field must be of type 'bool'"
        self._obstacle_brake_lights = value

    @property
    def obstacle_valid(self):
        """Message field 'obstacle_valid'."""
        return self._obstacle_valid

    @obstacle_valid.setter
    def obstacle_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obstacle_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'obstacle_valid' field must be an unsigned integer in [0, 255]"
        self._obstacle_valid = value

    @property
    def obstacle_length(self):
        """Message field 'obstacle_length'."""
        return self._obstacle_length

    @obstacle_length.setter
    def obstacle_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_length' field must be of type 'float'"
        self._obstacle_length = value

    @property
    def obstacle_width(self):
        """Message field 'obstacle_width'."""
        return self._obstacle_width

    @obstacle_width.setter
    def obstacle_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_width' field must be of type 'float'"
        self._obstacle_width = value

    @property
    def obstacle_age(self):
        """Message field 'obstacle_age'."""
        return self._obstacle_age

    @obstacle_age.setter
    def obstacle_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obstacle_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'obstacle_age' field must be an unsigned integer in [0, 65535]"
        self._obstacle_age = value

    @property
    def obstacle_lane(self):
        """Message field 'obstacle_lane'."""
        return self._obstacle_lane

    @obstacle_lane.setter
    def obstacle_lane(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obstacle_lane' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'obstacle_lane' field must be an unsigned integer in [0, 255]"
        self._obstacle_lane = value

    @property
    def cipv_flag(self):
        """Message field 'cipv_flag'."""
        return self._cipv_flag

    @cipv_flag.setter
    def cipv_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cipv_flag' field must be of type 'bool'"
        self._cipv_flag = value

    @property
    def radar_pos_x(self):
        """Message field 'radar_pos_x'."""
        return self._radar_pos_x

    @radar_pos_x.setter
    def radar_pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radar_pos_x' field must be of type 'float'"
        self._radar_pos_x = value

    @property
    def radar_vel_x(self):
        """Message field 'radar_vel_x'."""
        return self._radar_vel_x

    @radar_vel_x.setter
    def radar_vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radar_vel_x' field must be of type 'float'"
        self._radar_vel_x = value

    @property
    def radar_match_confidence(self):
        """Message field 'radar_match_confidence'."""
        return self._radar_match_confidence

    @radar_match_confidence.setter
    def radar_match_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radar_match_confidence' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'radar_match_confidence' field must be an unsigned integer in [0, 255]"
        self._radar_match_confidence = value

    @property
    def matched_radar_id(self):
        """Message field 'matched_radar_id'."""
        return self._matched_radar_id

    @matched_radar_id.setter
    def matched_radar_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'matched_radar_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'matched_radar_id' field must be an unsigned integer in [0, 65535]"
        self._matched_radar_id = value

    @property
    def obstacle_angle_rate(self):
        """Message field 'obstacle_angle_rate'."""
        return self._obstacle_angle_rate

    @obstacle_angle_rate.setter
    def obstacle_angle_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_angle_rate' field must be of type 'float'"
        self._obstacle_angle_rate = value

    @property
    def obstacle_scale_change(self):
        """Message field 'obstacle_scale_change'."""
        return self._obstacle_scale_change

    @obstacle_scale_change.setter
    def obstacle_scale_change(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_scale_change' field must be of type 'float'"
        self._obstacle_scale_change = value

    @property
    def object_accel_x(self):
        """Message field 'object_accel_x'."""
        return self._object_accel_x

    @object_accel_x.setter
    def object_accel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_accel_x' field must be of type 'float'"
        self._object_accel_x = value

    @property
    def obstacle_replaced(self):
        """Message field 'obstacle_replaced'."""
        return self._obstacle_replaced

    @obstacle_replaced.setter
    def obstacle_replaced(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'obstacle_replaced' field must be of type 'bool'"
        self._obstacle_replaced = value

    @property
    def obstacle_angle(self):
        """Message field 'obstacle_angle'."""
        return self._obstacle_angle

    @obstacle_angle.setter
    def obstacle_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_angle' field must be of type 'float'"
        self._obstacle_angle = value
