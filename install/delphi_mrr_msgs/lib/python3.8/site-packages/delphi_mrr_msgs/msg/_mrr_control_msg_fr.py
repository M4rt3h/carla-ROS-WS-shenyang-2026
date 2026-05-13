# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/MrrControlMsgFR.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrrControlMsgFR(type):
    """Metaclass of message 'MrrControlMsgFR'."""

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
                'delphi_mrr_msgs.msg.MrrControlMsgFR')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrr_control_msg_fr
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrr_control_msg_fr
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrr_control_msg_fr
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrr_control_msg_fr
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrr_control_msg_fr

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


class MrrControlMsgFR(metaclass=Metaclass_MrrControlMsgFR):
    """Message class 'MrrControlMsgFR'."""

    __slots__ = [
        '_header',
        '_can_sensitivity_profile_select',
        '_can_stop_frequency_frml',
        '_can_stop_frequency_frll',
        '_can_prp_factor_frml',
        '_can_prp_factor_frll',
        '_can_desired_sweep_bw_frml',
        '_can_desired_sweep_bw_frll',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_sensitivity_profile_select': 'uint8',
        'can_stop_frequency_frml': 'uint16',
        'can_stop_frequency_frll': 'uint16',
        'can_prp_factor_frml': 'float',
        'can_prp_factor_frll': 'float',
        'can_desired_sweep_bw_frml': 'uint8',
        'can_desired_sweep_bw_frll': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_sensitivity_profile_select = kwargs.get('can_sensitivity_profile_select', int())
        self.can_stop_frequency_frml = kwargs.get('can_stop_frequency_frml', int())
        self.can_stop_frequency_frll = kwargs.get('can_stop_frequency_frll', int())
        self.can_prp_factor_frml = kwargs.get('can_prp_factor_frml', float())
        self.can_prp_factor_frll = kwargs.get('can_prp_factor_frll', float())
        self.can_desired_sweep_bw_frml = kwargs.get('can_desired_sweep_bw_frml', int())
        self.can_desired_sweep_bw_frll = kwargs.get('can_desired_sweep_bw_frll', int())

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
        if self.can_sensitivity_profile_select != other.can_sensitivity_profile_select:
            return False
        if self.can_stop_frequency_frml != other.can_stop_frequency_frml:
            return False
        if self.can_stop_frequency_frll != other.can_stop_frequency_frll:
            return False
        if self.can_prp_factor_frml != other.can_prp_factor_frml:
            return False
        if self.can_prp_factor_frll != other.can_prp_factor_frll:
            return False
        if self.can_desired_sweep_bw_frml != other.can_desired_sweep_bw_frml:
            return False
        if self.can_desired_sweep_bw_frll != other.can_desired_sweep_bw_frll:
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
    def can_sensitivity_profile_select(self):
        """Message field 'can_sensitivity_profile_select'."""
        return self._can_sensitivity_profile_select

    @can_sensitivity_profile_select.setter
    def can_sensitivity_profile_select(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_sensitivity_profile_select' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_sensitivity_profile_select' field must be an unsigned integer in [0, 255]"
        self._can_sensitivity_profile_select = value

    @property
    def can_stop_frequency_frml(self):
        """Message field 'can_stop_frequency_frml'."""
        return self._can_stop_frequency_frml

    @can_stop_frequency_frml.setter
    def can_stop_frequency_frml(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_stop_frequency_frml' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_stop_frequency_frml' field must be an unsigned integer in [0, 65535]"
        self._can_stop_frequency_frml = value

    @property
    def can_stop_frequency_frll(self):
        """Message field 'can_stop_frequency_frll'."""
        return self._can_stop_frequency_frll

    @can_stop_frequency_frll.setter
    def can_stop_frequency_frll(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_stop_frequency_frll' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_stop_frequency_frll' field must be an unsigned integer in [0, 65535]"
        self._can_stop_frequency_frll = value

    @property
    def can_prp_factor_frml(self):
        """Message field 'can_prp_factor_frml'."""
        return self._can_prp_factor_frml

    @can_prp_factor_frml.setter
    def can_prp_factor_frml(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_prp_factor_frml' field must be of type 'float'"
        self._can_prp_factor_frml = value

    @property
    def can_prp_factor_frll(self):
        """Message field 'can_prp_factor_frll'."""
        return self._can_prp_factor_frll

    @can_prp_factor_frll.setter
    def can_prp_factor_frll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_prp_factor_frll' field must be of type 'float'"
        self._can_prp_factor_frll = value

    @property
    def can_desired_sweep_bw_frml(self):
        """Message field 'can_desired_sweep_bw_frml'."""
        return self._can_desired_sweep_bw_frml

    @can_desired_sweep_bw_frml.setter
    def can_desired_sweep_bw_frml(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_desired_sweep_bw_frml' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_desired_sweep_bw_frml' field must be an unsigned integer in [0, 255]"
        self._can_desired_sweep_bw_frml = value

    @property
    def can_desired_sweep_bw_frll(self):
        """Message field 'can_desired_sweep_bw_frll'."""
        return self._can_desired_sweep_bw_frll

    @can_desired_sweep_bw_frll.setter
    def can_desired_sweep_bw_frll(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_desired_sweep_bw_frll' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_desired_sweep_bw_frll' field must be an unsigned integer in [0, 255]"
        self._can_desired_sweep_bw_frll = value
