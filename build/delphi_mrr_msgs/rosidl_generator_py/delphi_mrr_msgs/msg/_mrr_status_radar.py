# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/MrrStatusRadar.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrrStatusRadar(type):
    """Metaclass of message 'MrrStatusRadar'."""

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
                'delphi_mrr_msgs.msg.MrrStatusRadar')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrr_status_radar
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrr_status_radar
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrr_status_radar
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrr_status_radar
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrr_status_radar

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


class MrrStatusRadar(metaclass=Metaclass_MrrStatusRadar):
    """Message class 'MrrStatusRadar'."""

    __slots__ = [
        '_header',
        '_can_interference_type',
        '_can_recommend_unconverge',
        '_can_blockage_sidelobe_filter_val',
        '_can_radar_align_incomplete',
        '_can_blockage_sidelobe',
        '_can_blockage_mnr',
        '_can_radar_ext_cond_nok',
        '_can_radar_align_out_range',
        '_can_radar_align_not_start',
        '_can_radar_overheat_error',
        '_can_radar_not_op',
        '_can_xcvr_operational',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_interference_type': 'uint8',
        'can_recommend_unconverge': 'boolean',
        'can_blockage_sidelobe_filter_val': 'uint8',
        'can_radar_align_incomplete': 'boolean',
        'can_blockage_sidelobe': 'boolean',
        'can_blockage_mnr': 'boolean',
        'can_radar_ext_cond_nok': 'boolean',
        'can_radar_align_out_range': 'boolean',
        'can_radar_align_not_start': 'boolean',
        'can_radar_overheat_error': 'boolean',
        'can_radar_not_op': 'boolean',
        'can_xcvr_operational': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.can_interference_type = kwargs.get('can_interference_type', int())
        self.can_recommend_unconverge = kwargs.get('can_recommend_unconverge', bool())
        self.can_blockage_sidelobe_filter_val = kwargs.get('can_blockage_sidelobe_filter_val', int())
        self.can_radar_align_incomplete = kwargs.get('can_radar_align_incomplete', bool())
        self.can_blockage_sidelobe = kwargs.get('can_blockage_sidelobe', bool())
        self.can_blockage_mnr = kwargs.get('can_blockage_mnr', bool())
        self.can_radar_ext_cond_nok = kwargs.get('can_radar_ext_cond_nok', bool())
        self.can_radar_align_out_range = kwargs.get('can_radar_align_out_range', bool())
        self.can_radar_align_not_start = kwargs.get('can_radar_align_not_start', bool())
        self.can_radar_overheat_error = kwargs.get('can_radar_overheat_error', bool())
        self.can_radar_not_op = kwargs.get('can_radar_not_op', bool())
        self.can_xcvr_operational = kwargs.get('can_xcvr_operational', bool())

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
        if self.can_interference_type != other.can_interference_type:
            return False
        if self.can_recommend_unconverge != other.can_recommend_unconverge:
            return False
        if self.can_blockage_sidelobe_filter_val != other.can_blockage_sidelobe_filter_val:
            return False
        if self.can_radar_align_incomplete != other.can_radar_align_incomplete:
            return False
        if self.can_blockage_sidelobe != other.can_blockage_sidelobe:
            return False
        if self.can_blockage_mnr != other.can_blockage_mnr:
            return False
        if self.can_radar_ext_cond_nok != other.can_radar_ext_cond_nok:
            return False
        if self.can_radar_align_out_range != other.can_radar_align_out_range:
            return False
        if self.can_radar_align_not_start != other.can_radar_align_not_start:
            return False
        if self.can_radar_overheat_error != other.can_radar_overheat_error:
            return False
        if self.can_radar_not_op != other.can_radar_not_op:
            return False
        if self.can_xcvr_operational != other.can_xcvr_operational:
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
    def can_interference_type(self):
        """Message field 'can_interference_type'."""
        return self._can_interference_type

    @can_interference_type.setter
    def can_interference_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_interference_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_interference_type' field must be an unsigned integer in [0, 255]"
        self._can_interference_type = value

    @property
    def can_recommend_unconverge(self):
        """Message field 'can_recommend_unconverge'."""
        return self._can_recommend_unconverge

    @can_recommend_unconverge.setter
    def can_recommend_unconverge(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_recommend_unconverge' field must be of type 'bool'"
        self._can_recommend_unconverge = value

    @property
    def can_blockage_sidelobe_filter_val(self):
        """Message field 'can_blockage_sidelobe_filter_val'."""
        return self._can_blockage_sidelobe_filter_val

    @can_blockage_sidelobe_filter_val.setter
    def can_blockage_sidelobe_filter_val(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_blockage_sidelobe_filter_val' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_blockage_sidelobe_filter_val' field must be an unsigned integer in [0, 255]"
        self._can_blockage_sidelobe_filter_val = value

    @property
    def can_radar_align_incomplete(self):
        """Message field 'can_radar_align_incomplete'."""
        return self._can_radar_align_incomplete

    @can_radar_align_incomplete.setter
    def can_radar_align_incomplete(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_radar_align_incomplete' field must be of type 'bool'"
        self._can_radar_align_incomplete = value

    @property
    def can_blockage_sidelobe(self):
        """Message field 'can_blockage_sidelobe'."""
        return self._can_blockage_sidelobe

    @can_blockage_sidelobe.setter
    def can_blockage_sidelobe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_blockage_sidelobe' field must be of type 'bool'"
        self._can_blockage_sidelobe = value

    @property
    def can_blockage_mnr(self):
        """Message field 'can_blockage_mnr'."""
        return self._can_blockage_mnr

    @can_blockage_mnr.setter
    def can_blockage_mnr(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_blockage_mnr' field must be of type 'bool'"
        self._can_blockage_mnr = value

    @property
    def can_radar_ext_cond_nok(self):
        """Message field 'can_radar_ext_cond_nok'."""
        return self._can_radar_ext_cond_nok

    @can_radar_ext_cond_nok.setter
    def can_radar_ext_cond_nok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_radar_ext_cond_nok' field must be of type 'bool'"
        self._can_radar_ext_cond_nok = value

    @property
    def can_radar_align_out_range(self):
        """Message field 'can_radar_align_out_range'."""
        return self._can_radar_align_out_range

    @can_radar_align_out_range.setter
    def can_radar_align_out_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_radar_align_out_range' field must be of type 'bool'"
        self._can_radar_align_out_range = value

    @property
    def can_radar_align_not_start(self):
        """Message field 'can_radar_align_not_start'."""
        return self._can_radar_align_not_start

    @can_radar_align_not_start.setter
    def can_radar_align_not_start(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_radar_align_not_start' field must be of type 'bool'"
        self._can_radar_align_not_start = value

    @property
    def can_radar_overheat_error(self):
        """Message field 'can_radar_overheat_error'."""
        return self._can_radar_overheat_error

    @can_radar_overheat_error.setter
    def can_radar_overheat_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_radar_overheat_error' field must be of type 'bool'"
        self._can_radar_overheat_error = value

    @property
    def can_radar_not_op(self):
        """Message field 'can_radar_not_op'."""
        return self._can_radar_not_op

    @can_radar_not_op.setter
    def can_radar_not_op(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_radar_not_op' field must be of type 'bool'"
        self._can_radar_not_op = value

    @property
    def can_xcvr_operational(self):
        """Message field 'can_xcvr_operational'."""
        return self._can_xcvr_operational

    @can_xcvr_operational.setter
    def can_xcvr_operational(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_xcvr_operational' field must be of type 'bool'"
        self._can_xcvr_operational = value
