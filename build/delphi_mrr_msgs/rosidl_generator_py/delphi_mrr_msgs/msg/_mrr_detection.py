# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/MrrDetection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrrDetection(type):
    """Metaclass of message 'MrrDetection'."""

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
            module = import_type_support('delphi_mrr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_mrr_msgs.msg.MrrDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrr_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrr_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrr_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrr_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrr_detection

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MrrDetection(metaclass=Metaclass_MrrDetection):
    """Message class 'MrrDetection'."""

    __slots__ = [
        '_header',
        '_detection_id',
        '_confid_azimuth',
        '_super_res_target',
        '_nd_target',
        '_host_veh_clutter',
        '_valid_level',
        '_azimuth',
        '_range',
        '_range_rate',
        '_amplitude',
        '_index_2lsb',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'detection_id': 'uint8',
        'confid_azimuth': 'uint8',
        'super_res_target': 'boolean',
        'nd_target': 'boolean',
        'host_veh_clutter': 'boolean',
        'valid_level': 'boolean',
        'azimuth': 'float',
        'range': 'float',
        'range_rate': 'float',
        'amplitude': 'int8',
        'index_2lsb': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.detection_id = kwargs.get('detection_id', int())
        self.confid_azimuth = kwargs.get('confid_azimuth', int())
        self.super_res_target = kwargs.get('super_res_target', bool())
        self.nd_target = kwargs.get('nd_target', bool())
        self.host_veh_clutter = kwargs.get('host_veh_clutter', bool())
        self.valid_level = kwargs.get('valid_level', bool())
        self.azimuth = kwargs.get('azimuth', float())
        self.range = kwargs.get('range', float())
        self.range_rate = kwargs.get('range_rate', float())
        self.amplitude = kwargs.get('amplitude', int())
        self.index_2lsb = kwargs.get('index_2lsb', int())

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
        if self.detection_id != other.detection_id:
            return False
        if self.confid_azimuth != other.confid_azimuth:
            return False
        if self.super_res_target != other.super_res_target:
            return False
        if self.nd_target != other.nd_target:
            return False
        if self.host_veh_clutter != other.host_veh_clutter:
            return False
        if self.valid_level != other.valid_level:
            return False
        if self.azimuth != other.azimuth:
            return False
        if self.range != other.range:
            return False
        if self.range_rate != other.range_rate:
            return False
        if self.amplitude != other.amplitude:
            return False
        if self.index_2lsb != other.index_2lsb:
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
    def detection_id(self):
        """Message field 'detection_id'."""
        return self._detection_id

    @detection_id.setter
    def detection_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'detection_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'detection_id' field must be an unsigned integer in [0, 255]"
        self._detection_id = value

    @property
    def confid_azimuth(self):
        """Message field 'confid_azimuth'."""
        return self._confid_azimuth

    @confid_azimuth.setter
    def confid_azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confid_azimuth' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confid_azimuth' field must be an unsigned integer in [0, 255]"
        self._confid_azimuth = value

    @property
    def super_res_target(self):
        """Message field 'super_res_target'."""
        return self._super_res_target

    @super_res_target.setter
    def super_res_target(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'super_res_target' field must be of type 'bool'"
        self._super_res_target = value

    @property
    def nd_target(self):
        """Message field 'nd_target'."""
        return self._nd_target

    @nd_target.setter
    def nd_target(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'nd_target' field must be of type 'bool'"
        self._nd_target = value

    @property
    def host_veh_clutter(self):
        """Message field 'host_veh_clutter'."""
        return self._host_veh_clutter

    @host_veh_clutter.setter
    def host_veh_clutter(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'host_veh_clutter' field must be of type 'bool'"
        self._host_veh_clutter = value

    @property
    def valid_level(self):
        """Message field 'valid_level'."""
        return self._valid_level

    @valid_level.setter
    def valid_level(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid_level' field must be of type 'bool'"
        self._valid_level = value

    @property
    def azimuth(self):
        """Message field 'azimuth'."""
        return self._azimuth

    @azimuth.setter
    def azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'azimuth' field must be of type 'float'"
        self._azimuth = value

    @property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
        self._range = value

    @property
    def range_rate(self):
        """Message field 'range_rate'."""
        return self._range_rate

    @range_rate.setter
    def range_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_rate' field must be of type 'float'"
        self._range_rate = value

    @property
    def amplitude(self):
        """Message field 'amplitude'."""
        return self._amplitude

    @amplitude.setter
    def amplitude(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'amplitude' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'amplitude' field must be an integer in [-128, 127]"
        self._amplitude = value

    @property
    def index_2lsb(self):
        """Message field 'index_2lsb'."""
        return self._index_2lsb

    @index_2lsb.setter
    def index_2lsb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index_2lsb' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'index_2lsb' field must be an unsigned integer in [0, 255]"
        self._index_2lsb = value
