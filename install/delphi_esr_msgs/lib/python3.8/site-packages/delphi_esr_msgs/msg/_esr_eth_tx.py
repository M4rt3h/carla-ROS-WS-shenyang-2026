# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrEthTx.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'target_report_range'
# Member 'target_report_range_rate'
# Member 'target_report_theta'
# Member 'target_report_amplitude'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrEthTx(type):
    """Metaclass of message 'EsrEthTx'."""

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
            module = import_type_support('delphi_esr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_esr_msgs.msg.EsrEthTx')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_eth_tx
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_eth_tx
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_eth_tx
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_eth_tx
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_eth_tx

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


class EsrEthTx(metaclass=Metaclass_EsrEthTx):
    """Message class 'EsrEthTx'."""

    __slots__ = [
        '_header',
        '_xcp_format_version',
        '_scan_index',
        '_tcp_size',
        '_xcp_scan_type',
        '_look_index',
        '_mmr_scan_index',
        '_target_report_host_speed',
        '_target_report_host_yaw_rate',
        '_xcp_timestamp',
        '_release_revision',
        '_promote_revision',
        '_field_revision',
        '_target_report_count',
        '_target_report_range',
        '_target_report_range_rate',
        '_target_report_theta',
        '_target_report_amplitude',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'xcp_format_version': 'uint16',
        'scan_index': 'uint16',
        'tcp_size': 'uint16',
        'xcp_scan_type': 'uint8',
        'look_index': 'uint16',
        'mmr_scan_index': 'uint16',
        'target_report_host_speed': 'float',
        'target_report_host_yaw_rate': 'float',
        'xcp_timestamp': 'uint32',
        'release_revision': 'uint8',
        'promote_revision': 'uint8',
        'field_revision': 'uint8',
        'target_report_count': 'uint8',
        'target_report_range': 'float[64]',
        'target_report_range_rate': 'float[64]',
        'target_report_theta': 'float[64]',
        'target_report_amplitude': 'float[64]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 64),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 64),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 64),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 64),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.xcp_format_version = kwargs.get('xcp_format_version', int())
        self.scan_index = kwargs.get('scan_index', int())
        self.tcp_size = kwargs.get('tcp_size', int())
        self.xcp_scan_type = kwargs.get('xcp_scan_type', int())
        self.look_index = kwargs.get('look_index', int())
        self.mmr_scan_index = kwargs.get('mmr_scan_index', int())
        self.target_report_host_speed = kwargs.get('target_report_host_speed', float())
        self.target_report_host_yaw_rate = kwargs.get('target_report_host_yaw_rate', float())
        self.xcp_timestamp = kwargs.get('xcp_timestamp', int())
        self.release_revision = kwargs.get('release_revision', int())
        self.promote_revision = kwargs.get('promote_revision', int())
        self.field_revision = kwargs.get('field_revision', int())
        self.target_report_count = kwargs.get('target_report_count', int())
        if 'target_report_range' not in kwargs:
            self.target_report_range = numpy.zeros(64, dtype=numpy.float32)
        else:
            self.target_report_range = numpy.array(kwargs.get('target_report_range'), dtype=numpy.float32)
            assert self.target_report_range.shape == (64, )
        if 'target_report_range_rate' not in kwargs:
            self.target_report_range_rate = numpy.zeros(64, dtype=numpy.float32)
        else:
            self.target_report_range_rate = numpy.array(kwargs.get('target_report_range_rate'), dtype=numpy.float32)
            assert self.target_report_range_rate.shape == (64, )
        if 'target_report_theta' not in kwargs:
            self.target_report_theta = numpy.zeros(64, dtype=numpy.float32)
        else:
            self.target_report_theta = numpy.array(kwargs.get('target_report_theta'), dtype=numpy.float32)
            assert self.target_report_theta.shape == (64, )
        if 'target_report_amplitude' not in kwargs:
            self.target_report_amplitude = numpy.zeros(64, dtype=numpy.float32)
        else:
            self.target_report_amplitude = numpy.array(kwargs.get('target_report_amplitude'), dtype=numpy.float32)
            assert self.target_report_amplitude.shape == (64, )

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
        if self.xcp_format_version != other.xcp_format_version:
            return False
        if self.scan_index != other.scan_index:
            return False
        if self.tcp_size != other.tcp_size:
            return False
        if self.xcp_scan_type != other.xcp_scan_type:
            return False
        if self.look_index != other.look_index:
            return False
        if self.mmr_scan_index != other.mmr_scan_index:
            return False
        if self.target_report_host_speed != other.target_report_host_speed:
            return False
        if self.target_report_host_yaw_rate != other.target_report_host_yaw_rate:
            return False
        if self.xcp_timestamp != other.xcp_timestamp:
            return False
        if self.release_revision != other.release_revision:
            return False
        if self.promote_revision != other.promote_revision:
            return False
        if self.field_revision != other.field_revision:
            return False
        if self.target_report_count != other.target_report_count:
            return False
        if all(self.target_report_range != other.target_report_range):
            return False
        if all(self.target_report_range_rate != other.target_report_range_rate):
            return False
        if all(self.target_report_theta != other.target_report_theta):
            return False
        if all(self.target_report_amplitude != other.target_report_amplitude):
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
    def xcp_format_version(self):
        """Message field 'xcp_format_version'."""
        return self._xcp_format_version

    @xcp_format_version.setter
    def xcp_format_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'xcp_format_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'xcp_format_version' field must be an unsigned integer in [0, 65535]"
        self._xcp_format_version = value

    @property
    def scan_index(self):
        """Message field 'scan_index'."""
        return self._scan_index

    @scan_index.setter
    def scan_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scan_index' field must be an unsigned integer in [0, 65535]"
        self._scan_index = value

    @property
    def tcp_size(self):
        """Message field 'tcp_size'."""
        return self._tcp_size

    @tcp_size.setter
    def tcp_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tcp_size' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'tcp_size' field must be an unsigned integer in [0, 65535]"
        self._tcp_size = value

    @property
    def xcp_scan_type(self):
        """Message field 'xcp_scan_type'."""
        return self._xcp_scan_type

    @xcp_scan_type.setter
    def xcp_scan_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'xcp_scan_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'xcp_scan_type' field must be an unsigned integer in [0, 255]"
        self._xcp_scan_type = value

    @property
    def look_index(self):
        """Message field 'look_index'."""
        return self._look_index

    @look_index.setter
    def look_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'look_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'look_index' field must be an unsigned integer in [0, 65535]"
        self._look_index = value

    @property
    def mmr_scan_index(self):
        """Message field 'mmr_scan_index'."""
        return self._mmr_scan_index

    @mmr_scan_index.setter
    def mmr_scan_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mmr_scan_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mmr_scan_index' field must be an unsigned integer in [0, 65535]"
        self._mmr_scan_index = value

    @property
    def target_report_host_speed(self):
        """Message field 'target_report_host_speed'."""
        return self._target_report_host_speed

    @target_report_host_speed.setter
    def target_report_host_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_report_host_speed' field must be of type 'float'"
        self._target_report_host_speed = value

    @property
    def target_report_host_yaw_rate(self):
        """Message field 'target_report_host_yaw_rate'."""
        return self._target_report_host_yaw_rate

    @target_report_host_yaw_rate.setter
    def target_report_host_yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_report_host_yaw_rate' field must be of type 'float'"
        self._target_report_host_yaw_rate = value

    @property
    def xcp_timestamp(self):
        """Message field 'xcp_timestamp'."""
        return self._xcp_timestamp

    @xcp_timestamp.setter
    def xcp_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'xcp_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'xcp_timestamp' field must be an unsigned integer in [0, 4294967295]"
        self._xcp_timestamp = value

    @property
    def release_revision(self):
        """Message field 'release_revision'."""
        return self._release_revision

    @release_revision.setter
    def release_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'release_revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'release_revision' field must be an unsigned integer in [0, 255]"
        self._release_revision = value

    @property
    def promote_revision(self):
        """Message field 'promote_revision'."""
        return self._promote_revision

    @promote_revision.setter
    def promote_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'promote_revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'promote_revision' field must be an unsigned integer in [0, 255]"
        self._promote_revision = value

    @property
    def field_revision(self):
        """Message field 'field_revision'."""
        return self._field_revision

    @field_revision.setter
    def field_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'field_revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'field_revision' field must be an unsigned integer in [0, 255]"
        self._field_revision = value

    @property
    def target_report_count(self):
        """Message field 'target_report_count'."""
        return self._target_report_count

    @target_report_count.setter
    def target_report_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_report_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_report_count' field must be an unsigned integer in [0, 255]"
        self._target_report_count = value

    @property
    def target_report_range(self):
        """Message field 'target_report_range'."""
        return self._target_report_range

    @target_report_range.setter
    def target_report_range(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'target_report_range' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 64, \
                "The 'target_report_range' numpy.ndarray() must have a size of 64"
            self._target_report_range = value
            return
        if __debug__:
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
                 len(value) == 64 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'target_report_range' field must be a set or sequence with length 64 and each value of type 'float'"
        self._target_report_range = numpy.array(value, dtype=numpy.float32)

    @property
    def target_report_range_rate(self):
        """Message field 'target_report_range_rate'."""
        return self._target_report_range_rate

    @target_report_range_rate.setter
    def target_report_range_rate(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'target_report_range_rate' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 64, \
                "The 'target_report_range_rate' numpy.ndarray() must have a size of 64"
            self._target_report_range_rate = value
            return
        if __debug__:
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
                 len(value) == 64 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'target_report_range_rate' field must be a set or sequence with length 64 and each value of type 'float'"
        self._target_report_range_rate = numpy.array(value, dtype=numpy.float32)

    @property
    def target_report_theta(self):
        """Message field 'target_report_theta'."""
        return self._target_report_theta

    @target_report_theta.setter
    def target_report_theta(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'target_report_theta' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 64, \
                "The 'target_report_theta' numpy.ndarray() must have a size of 64"
            self._target_report_theta = value
            return
        if __debug__:
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
                 len(value) == 64 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'target_report_theta' field must be a set or sequence with length 64 and each value of type 'float'"
        self._target_report_theta = numpy.array(value, dtype=numpy.float32)

    @property
    def target_report_amplitude(self):
        """Message field 'target_report_amplitude'."""
        return self._target_report_amplitude

    @target_report_amplitude.setter
    def target_report_amplitude(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'target_report_amplitude' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 64, \
                "The 'target_report_amplitude' numpy.ndarray() must have a size of 64"
            self._target_report_amplitude = value
            return
        if __debug__:
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
                 len(value) == 64 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'target_report_amplitude' field must be a set or sequence with length 64 and each value of type 'float'"
        self._target_report_amplitude = numpy.array(value, dtype=numpy.float32)
