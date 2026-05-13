# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/MrrStatusTempVolt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrrStatusTempVolt(type):
    """Metaclass of message 'MrrStatusTempVolt'."""

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
                'delphi_mrr_msgs.msg.MrrStatusTempVolt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrr_status_temp_volt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrr_status_temp_volt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrr_status_temp_volt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrr_status_temp_volt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrr_status_temp_volt

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


class MrrStatusTempVolt(metaclass=Metaclass_MrrStatusTempVolt):
    """Message class 'MrrStatusTempVolt'."""

    __slots__ = [
        '_header',
        '_can_batt_volts',
        '_can_1_25_v',
        '_can_5_v',
        '_can_3_3_v_raw',
        '_can_3_3_v_dac',
        '_can_mmic_temp1',
        '_can_processor_thermistor',
        '_can_processor_temp1',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_batt_volts': 'float',
        'can_1_25_v': 'float',
        'can_5_v': 'float',
        'can_3_3_v_raw': 'float',
        'can_3_3_v_dac': 'float',
        'can_mmic_temp1': 'int8',
        'can_processor_thermistor': 'int8',
        'can_processor_temp1': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_batt_volts = kwargs.get('can_batt_volts', float())
        self.can_1_25_v = kwargs.get('can_1_25_v', float())
        self.can_5_v = kwargs.get('can_5_v', float())
        self.can_3_3_v_raw = kwargs.get('can_3_3_v_raw', float())
        self.can_3_3_v_dac = kwargs.get('can_3_3_v_dac', float())
        self.can_mmic_temp1 = kwargs.get('can_mmic_temp1', int())
        self.can_processor_thermistor = kwargs.get('can_processor_thermistor', int())
        self.can_processor_temp1 = kwargs.get('can_processor_temp1', int())

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
        if self.can_batt_volts != other.can_batt_volts:
            return False
        if self.can_1_25_v != other.can_1_25_v:
            return False
        if self.can_5_v != other.can_5_v:
            return False
        if self.can_3_3_v_raw != other.can_3_3_v_raw:
            return False
        if self.can_3_3_v_dac != other.can_3_3_v_dac:
            return False
        if self.can_mmic_temp1 != other.can_mmic_temp1:
            return False
        if self.can_processor_thermistor != other.can_processor_thermistor:
            return False
        if self.can_processor_temp1 != other.can_processor_temp1:
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
    def can_batt_volts(self):
        """Message field 'can_batt_volts'."""
        return self._can_batt_volts

    @can_batt_volts.setter
    def can_batt_volts(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_batt_volts' field must be of type 'float'"
        self._can_batt_volts = value

    @property
    def can_1_25_v(self):
        """Message field 'can_1_25_v'."""
        return self._can_1_25_v

    @can_1_25_v.setter
    def can_1_25_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_1_25_v' field must be of type 'float'"
        self._can_1_25_v = value

    @property
    def can_5_v(self):
        """Message field 'can_5_v'."""
        return self._can_5_v

    @can_5_v.setter
    def can_5_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_5_v' field must be of type 'float'"
        self._can_5_v = value

    @property
    def can_3_3_v_raw(self):
        """Message field 'can_3_3_v_raw'."""
        return self._can_3_3_v_raw

    @can_3_3_v_raw.setter
    def can_3_3_v_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_3_3_v_raw' field must be of type 'float'"
        self._can_3_3_v_raw = value

    @property
    def can_3_3_v_dac(self):
        """Message field 'can_3_3_v_dac'."""
        return self._can_3_3_v_dac

    @can_3_3_v_dac.setter
    def can_3_3_v_dac(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_3_3_v_dac' field must be of type 'float'"
        self._can_3_3_v_dac = value

    @property
    def can_mmic_temp1(self):
        """Message field 'can_mmic_temp1'."""
        return self._can_mmic_temp1

    @can_mmic_temp1.setter
    def can_mmic_temp1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_mmic_temp1' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'can_mmic_temp1' field must be an integer in [-128, 127]"
        self._can_mmic_temp1 = value

    @property
    def can_processor_thermistor(self):
        """Message field 'can_processor_thermistor'."""
        return self._can_processor_thermistor

    @can_processor_thermistor.setter
    def can_processor_thermistor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_processor_thermistor' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'can_processor_thermistor' field must be an integer in [-128, 127]"
        self._can_processor_thermistor = value

    @property
    def can_processor_temp1(self):
        """Message field 'can_processor_temp1'."""
        return self._can_processor_temp1

    @can_processor_temp1.setter
    def can_processor_temp1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_processor_temp1' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'can_processor_temp1' field must be an integer in [-128, 127]"
        self._can_processor_temp1 = value
