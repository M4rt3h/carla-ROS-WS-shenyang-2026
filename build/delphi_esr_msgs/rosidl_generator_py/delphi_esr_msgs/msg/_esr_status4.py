# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrStatus4.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrStatus4(type):
    """Metaclass of message 'EsrStatus4'."""

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
                'delphi_esr_msgs.msg.EsrStatus4')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_status4
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_status4
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_status4
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_status4
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_status4

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


class EsrStatus4(metaclass=Metaclass_EsrStatus4):
    """Message class 'EsrStatus4'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_truck_target_det',
        '_lr_only_grating_lobe_det',
        '_sidelobe_blockage',
        '_partial_blockage',
        '_mr_lr_mode',
        '_rolling_count_3',
        '_path_id_acc',
        '_path_id_cmbb_move',
        '_path_id_cmbb_stat',
        '_path_id_fcw_move',
        '_path_id_fcw_stat',
        '_auto_align_angle',
        '_path_id_acc_stat',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'truck_target_det': 'boolean',
        'lr_only_grating_lobe_det': 'boolean',
        'sidelobe_blockage': 'boolean',
        'partial_blockage': 'boolean',
        'mr_lr_mode': 'uint8',
        'rolling_count_3': 'uint8',
        'path_id_acc': 'uint8',
        'path_id_cmbb_move': 'uint8',
        'path_id_cmbb_stat': 'uint8',
        'path_id_fcw_move': 'uint8',
        'path_id_fcw_stat': 'uint8',
        'auto_align_angle': 'float',
        'path_id_acc_stat': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.canmsg = kwargs.get('canmsg', str())
        self.truck_target_det = kwargs.get('truck_target_det', bool())
        self.lr_only_grating_lobe_det = kwargs.get('lr_only_grating_lobe_det', bool())
        self.sidelobe_blockage = kwargs.get('sidelobe_blockage', bool())
        self.partial_blockage = kwargs.get('partial_blockage', bool())
        self.mr_lr_mode = kwargs.get('mr_lr_mode', int())
        self.rolling_count_3 = kwargs.get('rolling_count_3', int())
        self.path_id_acc = kwargs.get('path_id_acc', int())
        self.path_id_cmbb_move = kwargs.get('path_id_cmbb_move', int())
        self.path_id_cmbb_stat = kwargs.get('path_id_cmbb_stat', int())
        self.path_id_fcw_move = kwargs.get('path_id_fcw_move', int())
        self.path_id_fcw_stat = kwargs.get('path_id_fcw_stat', int())
        self.auto_align_angle = kwargs.get('auto_align_angle', float())
        self.path_id_acc_stat = kwargs.get('path_id_acc_stat', int())

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
        if self.canmsg != other.canmsg:
            return False
        if self.truck_target_det != other.truck_target_det:
            return False
        if self.lr_only_grating_lobe_det != other.lr_only_grating_lobe_det:
            return False
        if self.sidelobe_blockage != other.sidelobe_blockage:
            return False
        if self.partial_blockage != other.partial_blockage:
            return False
        if self.mr_lr_mode != other.mr_lr_mode:
            return False
        if self.rolling_count_3 != other.rolling_count_3:
            return False
        if self.path_id_acc != other.path_id_acc:
            return False
        if self.path_id_cmbb_move != other.path_id_cmbb_move:
            return False
        if self.path_id_cmbb_stat != other.path_id_cmbb_stat:
            return False
        if self.path_id_fcw_move != other.path_id_fcw_move:
            return False
        if self.path_id_fcw_stat != other.path_id_fcw_stat:
            return False
        if self.auto_align_angle != other.auto_align_angle:
            return False
        if self.path_id_acc_stat != other.path_id_acc_stat:
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
    def canmsg(self):
        """Message field 'canmsg'."""
        return self._canmsg

    @canmsg.setter
    def canmsg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'canmsg' field must be of type 'str'"
        self._canmsg = value

    @property
    def truck_target_det(self):
        """Message field 'truck_target_det'."""
        return self._truck_target_det

    @truck_target_det.setter
    def truck_target_det(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'truck_target_det' field must be of type 'bool'"
        self._truck_target_det = value

    @property
    def lr_only_grating_lobe_det(self):
        """Message field 'lr_only_grating_lobe_det'."""
        return self._lr_only_grating_lobe_det

    @lr_only_grating_lobe_det.setter
    def lr_only_grating_lobe_det(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lr_only_grating_lobe_det' field must be of type 'bool'"
        self._lr_only_grating_lobe_det = value

    @property
    def sidelobe_blockage(self):
        """Message field 'sidelobe_blockage'."""
        return self._sidelobe_blockage

    @sidelobe_blockage.setter
    def sidelobe_blockage(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sidelobe_blockage' field must be of type 'bool'"
        self._sidelobe_blockage = value

    @property
    def partial_blockage(self):
        """Message field 'partial_blockage'."""
        return self._partial_blockage

    @partial_blockage.setter
    def partial_blockage(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'partial_blockage' field must be of type 'bool'"
        self._partial_blockage = value

    @property
    def mr_lr_mode(self):
        """Message field 'mr_lr_mode'."""
        return self._mr_lr_mode

    @mr_lr_mode.setter
    def mr_lr_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mr_lr_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mr_lr_mode' field must be an unsigned integer in [0, 255]"
        self._mr_lr_mode = value

    @property
    def rolling_count_3(self):
        """Message field 'rolling_count_3'."""
        return self._rolling_count_3

    @rolling_count_3.setter
    def rolling_count_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rolling_count_3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rolling_count_3' field must be an unsigned integer in [0, 255]"
        self._rolling_count_3 = value

    @property
    def path_id_acc(self):
        """Message field 'path_id_acc'."""
        return self._path_id_acc

    @path_id_acc.setter
    def path_id_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_id_acc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'path_id_acc' field must be an unsigned integer in [0, 255]"
        self._path_id_acc = value

    @property
    def path_id_cmbb_move(self):
        """Message field 'path_id_cmbb_move'."""
        return self._path_id_cmbb_move

    @path_id_cmbb_move.setter
    def path_id_cmbb_move(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_id_cmbb_move' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'path_id_cmbb_move' field must be an unsigned integer in [0, 255]"
        self._path_id_cmbb_move = value

    @property
    def path_id_cmbb_stat(self):
        """Message field 'path_id_cmbb_stat'."""
        return self._path_id_cmbb_stat

    @path_id_cmbb_stat.setter
    def path_id_cmbb_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_id_cmbb_stat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'path_id_cmbb_stat' field must be an unsigned integer in [0, 255]"
        self._path_id_cmbb_stat = value

    @property
    def path_id_fcw_move(self):
        """Message field 'path_id_fcw_move'."""
        return self._path_id_fcw_move

    @path_id_fcw_move.setter
    def path_id_fcw_move(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_id_fcw_move' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'path_id_fcw_move' field must be an unsigned integer in [0, 255]"
        self._path_id_fcw_move = value

    @property
    def path_id_fcw_stat(self):
        """Message field 'path_id_fcw_stat'."""
        return self._path_id_fcw_stat

    @path_id_fcw_stat.setter
    def path_id_fcw_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_id_fcw_stat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'path_id_fcw_stat' field must be an unsigned integer in [0, 255]"
        self._path_id_fcw_stat = value

    @property
    def auto_align_angle(self):
        """Message field 'auto_align_angle'."""
        return self._auto_align_angle

    @auto_align_angle.setter
    def auto_align_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'auto_align_angle' field must be of type 'float'"
        self._auto_align_angle = value

    @property
    def path_id_acc_stat(self):
        """Message field 'path_id_acc_stat'."""
        return self._path_id_acc_stat

    @path_id_acc_stat.setter
    def path_id_acc_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_id_acc_stat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'path_id_acc_stat' field must be an unsigned integer in [0, 255]"
        self._path_id_acc_stat = value
