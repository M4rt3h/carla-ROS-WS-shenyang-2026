# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/MrrControlMsgNR.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrrControlMsgNR(type):
    """Metaclass of message 'MrrControlMsgNR'."""

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
                'delphi_mrr_msgs.msg.MrrControlMsgNR')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrr_control_msg_nr
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrr_control_msg_nr
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrr_control_msg_nr
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrr_control_msg_nr
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrr_control_msg_nr

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


class MrrControlMsgNR(metaclass=Metaclass_MrrControlMsgNR):
    """Message class 'MrrControlMsgNR'."""

    __slots__ = [
        '_header',
        '_can_stop_frequency_nrml',
        '_can_prp_factor_nrml',
        '_can_desired_sweep_bw_nrml',
        '_can_radiation_ctrl',
        '_can_stop_frequency_nrll',
        '_can_prp_factor_nrll',
        '_can_desired_sweep_bw_nrll',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_stop_frequency_nrml': 'uint16',
        'can_prp_factor_nrml': 'uint16',
        'can_desired_sweep_bw_nrml': 'uint8',
        'can_radiation_ctrl': 'boolean',
        'can_stop_frequency_nrll': 'uint16',
        'can_prp_factor_nrll': 'uint16',
        'can_desired_sweep_bw_nrll': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_stop_frequency_nrml = kwargs.get('can_stop_frequency_nrml', int())
        self.can_prp_factor_nrml = kwargs.get('can_prp_factor_nrml', int())
        self.can_desired_sweep_bw_nrml = kwargs.get('can_desired_sweep_bw_nrml', int())
        self.can_radiation_ctrl = kwargs.get('can_radiation_ctrl', bool())
        self.can_stop_frequency_nrll = kwargs.get('can_stop_frequency_nrll', int())
        self.can_prp_factor_nrll = kwargs.get('can_prp_factor_nrll', int())
        self.can_desired_sweep_bw_nrll = kwargs.get('can_desired_sweep_bw_nrll', int())

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
        if self.can_stop_frequency_nrml != other.can_stop_frequency_nrml:
            return False
        if self.can_prp_factor_nrml != other.can_prp_factor_nrml:
            return False
        if self.can_desired_sweep_bw_nrml != other.can_desired_sweep_bw_nrml:
            return False
        if self.can_radiation_ctrl != other.can_radiation_ctrl:
            return False
        if self.can_stop_frequency_nrll != other.can_stop_frequency_nrll:
            return False
        if self.can_prp_factor_nrll != other.can_prp_factor_nrll:
            return False
        if self.can_desired_sweep_bw_nrll != other.can_desired_sweep_bw_nrll:
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
    def can_stop_frequency_nrml(self):
        """Message field 'can_stop_frequency_nrml'."""
        return self._can_stop_frequency_nrml

    @can_stop_frequency_nrml.setter
    def can_stop_frequency_nrml(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_stop_frequency_nrml' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_stop_frequency_nrml' field must be an unsigned integer in [0, 65535]"
        self._can_stop_frequency_nrml = value

    @property
    def can_prp_factor_nrml(self):
        """Message field 'can_prp_factor_nrml'."""
        return self._can_prp_factor_nrml

    @can_prp_factor_nrml.setter
    def can_prp_factor_nrml(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_prp_factor_nrml' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_prp_factor_nrml' field must be an unsigned integer in [0, 65535]"
        self._can_prp_factor_nrml = value

    @property
    def can_desired_sweep_bw_nrml(self):
        """Message field 'can_desired_sweep_bw_nrml'."""
        return self._can_desired_sweep_bw_nrml

    @can_desired_sweep_bw_nrml.setter
    def can_desired_sweep_bw_nrml(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_desired_sweep_bw_nrml' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_desired_sweep_bw_nrml' field must be an unsigned integer in [0, 255]"
        self._can_desired_sweep_bw_nrml = value

    @property
    def can_radiation_ctrl(self):
        """Message field 'can_radiation_ctrl'."""
        return self._can_radiation_ctrl

    @can_radiation_ctrl.setter
    def can_radiation_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_radiation_ctrl' field must be of type 'bool'"
        self._can_radiation_ctrl = value

    @property
    def can_stop_frequency_nrll(self):
        """Message field 'can_stop_frequency_nrll'."""
        return self._can_stop_frequency_nrll

    @can_stop_frequency_nrll.setter
    def can_stop_frequency_nrll(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_stop_frequency_nrll' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_stop_frequency_nrll' field must be an unsigned integer in [0, 65535]"
        self._can_stop_frequency_nrll = value

    @property
    def can_prp_factor_nrll(self):
        """Message field 'can_prp_factor_nrll'."""
        return self._can_prp_factor_nrll

    @can_prp_factor_nrll.setter
    def can_prp_factor_nrll(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_prp_factor_nrll' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_prp_factor_nrll' field must be an unsigned integer in [0, 65535]"
        self._can_prp_factor_nrll = value

    @property
    def can_desired_sweep_bw_nrll(self):
        """Message field 'can_desired_sweep_bw_nrll'."""
        return self._can_desired_sweep_bw_nrll

    @can_desired_sweep_bw_nrll.setter
    def can_desired_sweep_bw_nrll(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_desired_sweep_bw_nrll' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_desired_sweep_bw_nrll' field must be an unsigned integer in [0, 255]"
        self._can_desired_sweep_bw_nrll = value
