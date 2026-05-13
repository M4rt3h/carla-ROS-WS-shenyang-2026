# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/ScannerInfo2204.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScannerInfo2204(type):
    """Metaclass of message 'ScannerInfo2204'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALASCA_XT': 3,
        'LUX_ECU': 4,
        'LUX_PROTOTYPE': 5,
        'LUX': 6,
        'SCALA_B1': 96,
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
                'ibeo_msgs.msg.ScannerInfo2204')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scanner_info2204
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scanner_info2204
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scanner_info2204
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scanner_info2204
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scanner_info2204

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALASCA_XT': cls.__constants['ALASCA_XT'],
            'LUX_ECU': cls.__constants['LUX_ECU'],
            'LUX_PROTOTYPE': cls.__constants['LUX_PROTOTYPE'],
            'LUX': cls.__constants['LUX'],
            'SCALA_B1': cls.__constants['SCALA_B1'],
        }

    @property
    def ALASCA_XT(self):
        """Message constant 'ALASCA_XT'."""
        return Metaclass_ScannerInfo2204.__constants['ALASCA_XT']

    @property
    def LUX_ECU(self):
        """Message constant 'LUX_ECU'."""
        return Metaclass_ScannerInfo2204.__constants['LUX_ECU']

    @property
    def LUX_PROTOTYPE(self):
        """Message constant 'LUX_PROTOTYPE'."""
        return Metaclass_ScannerInfo2204.__constants['LUX_PROTOTYPE']

    @property
    def LUX(self):
        """Message constant 'LUX'."""
        return Metaclass_ScannerInfo2204.__constants['LUX']

    @property
    def SCALA_B1(self):
        """Message constant 'SCALA_B1'."""
        return Metaclass_ScannerInfo2204.__constants['SCALA_B1']


class ScannerInfo2204(metaclass=Metaclass_ScannerInfo2204):
    """
    Message class 'ScannerInfo2204'.

    Constants:
      ALASCA_XT
      LUX_ECU
      LUX_PROTOTYPE
      LUX
      SCALA_B1
    """

    __slots__ = [
        '_device_id',
        '_scanner_type',
        '_scan_number',
        '_start_angle',
        '_end_angle',
        '_yaw_angle',
        '_pitch_angle',
        '_roll_angle',
        '_offset_x',
        '_offset_y',
        '_offset_z',
    ]

    _fields_and_field_types = {
        'device_id': 'uint8',
        'scanner_type': 'uint8',
        'scan_number': 'uint16',
        'start_angle': 'float',
        'end_angle': 'float',
        'yaw_angle': 'float',
        'pitch_angle': 'float',
        'roll_angle': 'float',
        'offset_x': 'float',
        'offset_y': 'float',
        'offset_z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_id = kwargs.get('device_id', int())
        self.scanner_type = kwargs.get('scanner_type', int())
        self.scan_number = kwargs.get('scan_number', int())
        self.start_angle = kwargs.get('start_angle', float())
        self.end_angle = kwargs.get('end_angle', float())
        self.yaw_angle = kwargs.get('yaw_angle', float())
        self.pitch_angle = kwargs.get('pitch_angle', float())
        self.roll_angle = kwargs.get('roll_angle', float())
        self.offset_x = kwargs.get('offset_x', float())
        self.offset_y = kwargs.get('offset_y', float())
        self.offset_z = kwargs.get('offset_z', float())

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
        if self.device_id != other.device_id:
            return False
        if self.scanner_type != other.scanner_type:
            return False
        if self.scan_number != other.scan_number:
            return False
        if self.start_angle != other.start_angle:
            return False
        if self.end_angle != other.end_angle:
            return False
        if self.yaw_angle != other.yaw_angle:
            return False
        if self.pitch_angle != other.pitch_angle:
            return False
        if self.roll_angle != other.roll_angle:
            return False
        if self.offset_x != other.offset_x:
            return False
        if self.offset_y != other.offset_y:
            return False
        if self.offset_z != other.offset_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def scanner_type(self):
        """Message field 'scanner_type'."""
        return self._scanner_type

    @scanner_type.setter
    def scanner_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scanner_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'scanner_type' field must be an unsigned integer in [0, 255]"
        self._scanner_type = value

    @property
    def scan_number(self):
        """Message field 'scan_number'."""
        return self._scan_number

    @scan_number.setter
    def scan_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scan_number' field must be an unsigned integer in [0, 65535]"
        self._scan_number = value

    @property
    def start_angle(self):
        """Message field 'start_angle'."""
        return self._start_angle

    @start_angle.setter
    def start_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_angle' field must be of type 'float'"
        self._start_angle = value

    @property
    def end_angle(self):
        """Message field 'end_angle'."""
        return self._end_angle

    @end_angle.setter
    def end_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_angle' field must be of type 'float'"
        self._end_angle = value

    @property
    def yaw_angle(self):
        """Message field 'yaw_angle'."""
        return self._yaw_angle

    @yaw_angle.setter
    def yaw_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_angle' field must be of type 'float'"
        self._yaw_angle = value

    @property
    def pitch_angle(self):
        """Message field 'pitch_angle'."""
        return self._pitch_angle

    @pitch_angle.setter
    def pitch_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_angle' field must be of type 'float'"
        self._pitch_angle = value

    @property
    def roll_angle(self):
        """Message field 'roll_angle'."""
        return self._roll_angle

    @roll_angle.setter
    def roll_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_angle' field must be of type 'float'"
        self._roll_angle = value

    @property
    def offset_x(self):
        """Message field 'offset_x'."""
        return self._offset_x

    @offset_x.setter
    def offset_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_x' field must be of type 'float'"
        self._offset_x = value

    @property
    def offset_y(self):
        """Message field 'offset_y'."""
        return self._offset_y

    @offset_y.setter
    def offset_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_y' field must be of type 'float'"
        self._offset_y = value

    @property
    def offset_z(self):
        """Message field 'offset_z'."""
        return self._offset_z

    @offset_z.setter
    def offset_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_z' field must be of type 'float'"
        self._offset_z = value
