# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/MrrHeaderSensorCoverage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrrHeaderSensorCoverage(type):
    """Metaclass of message 'MrrHeaderSensorCoverage'."""

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
                'delphi_mrr_msgs.msg.MrrHeaderSensorCoverage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrr_header_sensor_coverage
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrr_header_sensor_coverage
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrr_header_sensor_coverage
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrr_header_sensor_coverage
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrr_header_sensor_coverage

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


class MrrHeaderSensorCoverage(metaclass=Metaclass_MrrHeaderSensorCoverage):
    """Message class 'MrrHeaderSensorCoverage'."""

    __slots__ = [
        '_header',
        '_can_sensor_fov_hor',
        '_can_doppler_coverage',
        '_can_range_coverage',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_sensor_fov_hor': 'uint8',
        'can_doppler_coverage': 'int8',
        'can_range_coverage': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_sensor_fov_hor = kwargs.get('can_sensor_fov_hor', int())
        self.can_doppler_coverage = kwargs.get('can_doppler_coverage', int())
        self.can_range_coverage = kwargs.get('can_range_coverage', int())

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
        if self.can_sensor_fov_hor != other.can_sensor_fov_hor:
            return False
        if self.can_doppler_coverage != other.can_doppler_coverage:
            return False
        if self.can_range_coverage != other.can_range_coverage:
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
    def can_sensor_fov_hor(self):
        """Message field 'can_sensor_fov_hor'."""
        return self._can_sensor_fov_hor

    @can_sensor_fov_hor.setter
    def can_sensor_fov_hor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_sensor_fov_hor' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_sensor_fov_hor' field must be an unsigned integer in [0, 255]"
        self._can_sensor_fov_hor = value

    @property
    def can_doppler_coverage(self):
        """Message field 'can_doppler_coverage'."""
        return self._can_doppler_coverage

    @can_doppler_coverage.setter
    def can_doppler_coverage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_doppler_coverage' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'can_doppler_coverage' field must be an integer in [-128, 127]"
        self._can_doppler_coverage = value

    @property
    def can_range_coverage(self):
        """Message field 'can_range_coverage'."""
        return self._can_range_coverage

    @can_range_coverage.setter
    def can_range_coverage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_range_coverage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_range_coverage' field must be an unsigned integer in [0, 255]"
        self._can_range_coverage = value
