# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/ActiveFaultLatched2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActiveFaultLatched2(type):
    """Metaclass of message 'ActiveFaultLatched2'."""

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
                'delphi_mrr_msgs.msg.ActiveFaultLatched2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__active_fault_latched2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__active_fault_latched2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__active_fault_latched2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__active_fault_latched2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__active_fault_latched2

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


class ActiveFaultLatched2(metaclass=Metaclass_ActiveFaultLatched2):
    """Message class 'ActiveFaultLatched2'."""

    __slots__ = [
        '_header',
        '_ipma_pcan_data_range_check',
        '_ipma_pcan_missing_msg',
        '_vin_signal_compare_failure',
        '_module_not_configured_error',
        '_car_cfg_not_configured_error',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ipma_pcan_data_range_check': 'boolean',
        'ipma_pcan_missing_msg': 'boolean',
        'vin_signal_compare_failure': 'boolean',
        'module_not_configured_error': 'boolean',
        'car_cfg_not_configured_error': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ipma_pcan_data_range_check = kwargs.get('ipma_pcan_data_range_check', bool())
        self.ipma_pcan_missing_msg = kwargs.get('ipma_pcan_missing_msg', bool())
        self.vin_signal_compare_failure = kwargs.get('vin_signal_compare_failure', bool())
        self.module_not_configured_error = kwargs.get('module_not_configured_error', bool())
        self.car_cfg_not_configured_error = kwargs.get('car_cfg_not_configured_error', bool())

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
        if self.ipma_pcan_data_range_check != other.ipma_pcan_data_range_check:
            return False
        if self.ipma_pcan_missing_msg != other.ipma_pcan_missing_msg:
            return False
        if self.vin_signal_compare_failure != other.vin_signal_compare_failure:
            return False
        if self.module_not_configured_error != other.module_not_configured_error:
            return False
        if self.car_cfg_not_configured_error != other.car_cfg_not_configured_error:
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
    def ipma_pcan_data_range_check(self):
        """Message field 'ipma_pcan_data_range_check'."""
        return self._ipma_pcan_data_range_check

    @ipma_pcan_data_range_check.setter
    def ipma_pcan_data_range_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ipma_pcan_data_range_check' field must be of type 'bool'"
        self._ipma_pcan_data_range_check = value

    @property
    def ipma_pcan_missing_msg(self):
        """Message field 'ipma_pcan_missing_msg'."""
        return self._ipma_pcan_missing_msg

    @ipma_pcan_missing_msg.setter
    def ipma_pcan_missing_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ipma_pcan_missing_msg' field must be of type 'bool'"
        self._ipma_pcan_missing_msg = value

    @property
    def vin_signal_compare_failure(self):
        """Message field 'vin_signal_compare_failure'."""
        return self._vin_signal_compare_failure

    @vin_signal_compare_failure.setter
    def vin_signal_compare_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vin_signal_compare_failure' field must be of type 'bool'"
        self._vin_signal_compare_failure = value

    @property
    def module_not_configured_error(self):
        """Message field 'module_not_configured_error'."""
        return self._module_not_configured_error

    @module_not_configured_error.setter
    def module_not_configured_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'module_not_configured_error' field must be of type 'bool'"
        self._module_not_configured_error = value

    @property
    def car_cfg_not_configured_error(self):
        """Message field 'car_cfg_not_configured_error'."""
        return self._car_cfg_not_configured_error

    @car_cfg_not_configured_error.setter
    def car_cfg_not_configured_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'car_cfg_not_configured_error' field must be of type 'bool'"
        self._car_cfg_not_configured_error = value
