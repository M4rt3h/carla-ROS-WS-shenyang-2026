# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kartech_linear_actuator_msgs:msg/ResetCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ResetCmd(type):
    """Metaclass of message 'ResetCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESET_OUTPUTS': 0,
        'RESET_USER_DEFINED_IDS': 1,
        'RESET_REPORT_RATES': 2,
        'RESET_HARDWARE_CONFIGURATIONS': 3,
        'RESET_USER_CONFIGURATIONS': 4,
        'RESET_EVERYTHING': 5,
        'RESET_NONE': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('kartech_linear_actuator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kartech_linear_actuator_msgs.msg.ResetCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__reset_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__reset_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__reset_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__reset_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__reset_cmd

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESET_OUTPUTS': cls.__constants['RESET_OUTPUTS'],
            'RESET_USER_DEFINED_IDS': cls.__constants['RESET_USER_DEFINED_IDS'],
            'RESET_REPORT_RATES': cls.__constants['RESET_REPORT_RATES'],
            'RESET_HARDWARE_CONFIGURATIONS': cls.__constants['RESET_HARDWARE_CONFIGURATIONS'],
            'RESET_USER_CONFIGURATIONS': cls.__constants['RESET_USER_CONFIGURATIONS'],
            'RESET_EVERYTHING': cls.__constants['RESET_EVERYTHING'],
            'RESET_NONE': cls.__constants['RESET_NONE'],
        }

    @property
    def RESET_OUTPUTS(self):
        """Message constant 'RESET_OUTPUTS'."""
        return Metaclass_ResetCmd.__constants['RESET_OUTPUTS']

    @property
    def RESET_USER_DEFINED_IDS(self):
        """Message constant 'RESET_USER_DEFINED_IDS'."""
        return Metaclass_ResetCmd.__constants['RESET_USER_DEFINED_IDS']

    @property
    def RESET_REPORT_RATES(self):
        """Message constant 'RESET_REPORT_RATES'."""
        return Metaclass_ResetCmd.__constants['RESET_REPORT_RATES']

    @property
    def RESET_HARDWARE_CONFIGURATIONS(self):
        """Message constant 'RESET_HARDWARE_CONFIGURATIONS'."""
        return Metaclass_ResetCmd.__constants['RESET_HARDWARE_CONFIGURATIONS']

    @property
    def RESET_USER_CONFIGURATIONS(self):
        """Message constant 'RESET_USER_CONFIGURATIONS'."""
        return Metaclass_ResetCmd.__constants['RESET_USER_CONFIGURATIONS']

    @property
    def RESET_EVERYTHING(self):
        """Message constant 'RESET_EVERYTHING'."""
        return Metaclass_ResetCmd.__constants['RESET_EVERYTHING']

    @property
    def RESET_NONE(self):
        """Message constant 'RESET_NONE'."""
        return Metaclass_ResetCmd.__constants['RESET_NONE']


class ResetCmd(metaclass=Metaclass_ResetCmd):
    """
    Message class 'ResetCmd'.

    Constants:
      RESET_OUTPUTS
      RESET_USER_DEFINED_IDS
      RESET_REPORT_RATES
      RESET_HARDWARE_CONFIGURATIONS
      RESET_USER_CONFIGURATIONS
      RESET_EVERYTHING
      RESET_NONE
    """

    __slots__ = [
        '_header',
        '_confirm',
        '_reset_type',
        '_reset_user_rpt_id',
        '_reset_user_cmd_id_1',
        '_reset_user_cmd_id_2',
        '_reset_user_cmd_id_3',
        '_reset_user_cmd_id_4',
        '_disable_user_rpt_id',
        '_reenable_default_cmd_id',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'confirm': 'boolean',
        'reset_type': 'uint8',
        'reset_user_rpt_id': 'boolean',
        'reset_user_cmd_id_1': 'boolean',
        'reset_user_cmd_id_2': 'boolean',
        'reset_user_cmd_id_3': 'boolean',
        'reset_user_cmd_id_4': 'boolean',
        'disable_user_rpt_id': 'boolean',
        'reenable_default_cmd_id': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.confirm = kwargs.get('confirm', bool())
        self.reset_type = kwargs.get('reset_type', int())
        self.reset_user_rpt_id = kwargs.get('reset_user_rpt_id', bool())
        self.reset_user_cmd_id_1 = kwargs.get('reset_user_cmd_id_1', bool())
        self.reset_user_cmd_id_2 = kwargs.get('reset_user_cmd_id_2', bool())
        self.reset_user_cmd_id_3 = kwargs.get('reset_user_cmd_id_3', bool())
        self.reset_user_cmd_id_4 = kwargs.get('reset_user_cmd_id_4', bool())
        self.disable_user_rpt_id = kwargs.get('disable_user_rpt_id', bool())
        self.reenable_default_cmd_id = kwargs.get('reenable_default_cmd_id', bool())

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
        if self.confirm != other.confirm:
            return False
        if self.reset_type != other.reset_type:
            return False
        if self.reset_user_rpt_id != other.reset_user_rpt_id:
            return False
        if self.reset_user_cmd_id_1 != other.reset_user_cmd_id_1:
            return False
        if self.reset_user_cmd_id_2 != other.reset_user_cmd_id_2:
            return False
        if self.reset_user_cmd_id_3 != other.reset_user_cmd_id_3:
            return False
        if self.reset_user_cmd_id_4 != other.reset_user_cmd_id_4:
            return False
        if self.disable_user_rpt_id != other.disable_user_rpt_id:
            return False
        if self.reenable_default_cmd_id != other.reenable_default_cmd_id:
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
    def confirm(self):
        """Message field 'confirm'."""
        return self._confirm

    @confirm.setter
    def confirm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'confirm' field must be of type 'bool'"
        self._confirm = value

    @property
    def reset_type(self):
        """Message field 'reset_type'."""
        return self._reset_type

    @reset_type.setter
    def reset_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reset_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reset_type' field must be an unsigned integer in [0, 255]"
        self._reset_type = value

    @property
    def reset_user_rpt_id(self):
        """Message field 'reset_user_rpt_id'."""
        return self._reset_user_rpt_id

    @reset_user_rpt_id.setter
    def reset_user_rpt_id(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_user_rpt_id' field must be of type 'bool'"
        self._reset_user_rpt_id = value

    @property
    def reset_user_cmd_id_1(self):
        """Message field 'reset_user_cmd_id_1'."""
        return self._reset_user_cmd_id_1

    @reset_user_cmd_id_1.setter
    def reset_user_cmd_id_1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_user_cmd_id_1' field must be of type 'bool'"
        self._reset_user_cmd_id_1 = value

    @property
    def reset_user_cmd_id_2(self):
        """Message field 'reset_user_cmd_id_2'."""
        return self._reset_user_cmd_id_2

    @reset_user_cmd_id_2.setter
    def reset_user_cmd_id_2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_user_cmd_id_2' field must be of type 'bool'"
        self._reset_user_cmd_id_2 = value

    @property
    def reset_user_cmd_id_3(self):
        """Message field 'reset_user_cmd_id_3'."""
        return self._reset_user_cmd_id_3

    @reset_user_cmd_id_3.setter
    def reset_user_cmd_id_3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_user_cmd_id_3' field must be of type 'bool'"
        self._reset_user_cmd_id_3 = value

    @property
    def reset_user_cmd_id_4(self):
        """Message field 'reset_user_cmd_id_4'."""
        return self._reset_user_cmd_id_4

    @reset_user_cmd_id_4.setter
    def reset_user_cmd_id_4(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_user_cmd_id_4' field must be of type 'bool'"
        self._reset_user_cmd_id_4 = value

    @property
    def disable_user_rpt_id(self):
        """Message field 'disable_user_rpt_id'."""
        return self._disable_user_rpt_id

    @disable_user_rpt_id.setter
    def disable_user_rpt_id(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'disable_user_rpt_id' field must be of type 'bool'"
        self._disable_user_rpt_id = value

    @property
    def reenable_default_cmd_id(self):
        """Message field 'reenable_default_cmd_id'."""
        return self._reenable_default_cmd_id

    @reenable_default_cmd_id.setter
    def reenable_default_cmd_id(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reenable_default_cmd_id' field must be of type 'bool'"
        self._reenable_default_cmd_id = value
