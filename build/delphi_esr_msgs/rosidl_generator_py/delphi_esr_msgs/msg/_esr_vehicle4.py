# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrVehicle4.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrVehicle4(type):
    """Metaclass of message 'EsrVehicle4'."""

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
                'delphi_esr_msgs.msg.EsrVehicle4')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_vehicle4
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_vehicle4
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_vehicle4
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_vehicle4
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_vehicle4

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


class EsrVehicle4(metaclass=Metaclass_EsrVehicle4):
    """Message class 'EsrVehicle4'."""

    __slots__ = [
        '_header',
        '_fac_align_cmd_1',
        '_fac_align_cmd_2',
        '_fac_align_max_nt',
        '_fac_align_samp_req',
        '_fac_tgt_mtg_offset',
        '_fac_tgt_mtg_space_hor',
        '_fac_tgt_mtg_space_ver',
        '_fac_tgt_range_1',
        '_fac_tgt_range_r2m',
        '_fac_tgt_range_m2t',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'fac_align_cmd_1': 'boolean',
        'fac_align_cmd_2': 'boolean',
        'fac_align_max_nt': 'uint8',
        'fac_align_samp_req': 'uint8',
        'fac_tgt_mtg_offset': 'int8',
        'fac_tgt_mtg_space_hor': 'int8',
        'fac_tgt_mtg_space_ver': 'int8',
        'fac_tgt_range_1': 'float',
        'fac_tgt_range_r2m': 'float',
        'fac_tgt_range_m2t': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.fac_align_cmd_1 = kwargs.get('fac_align_cmd_1', bool())
        self.fac_align_cmd_2 = kwargs.get('fac_align_cmd_2', bool())
        self.fac_align_max_nt = kwargs.get('fac_align_max_nt', int())
        self.fac_align_samp_req = kwargs.get('fac_align_samp_req', int())
        self.fac_tgt_mtg_offset = kwargs.get('fac_tgt_mtg_offset', int())
        self.fac_tgt_mtg_space_hor = kwargs.get('fac_tgt_mtg_space_hor', int())
        self.fac_tgt_mtg_space_ver = kwargs.get('fac_tgt_mtg_space_ver', int())
        self.fac_tgt_range_1 = kwargs.get('fac_tgt_range_1', float())
        self.fac_tgt_range_r2m = kwargs.get('fac_tgt_range_r2m', float())
        self.fac_tgt_range_m2t = kwargs.get('fac_tgt_range_m2t', float())

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
        if self.fac_align_cmd_1 != other.fac_align_cmd_1:
            return False
        if self.fac_align_cmd_2 != other.fac_align_cmd_2:
            return False
        if self.fac_align_max_nt != other.fac_align_max_nt:
            return False
        if self.fac_align_samp_req != other.fac_align_samp_req:
            return False
        if self.fac_tgt_mtg_offset != other.fac_tgt_mtg_offset:
            return False
        if self.fac_tgt_mtg_space_hor != other.fac_tgt_mtg_space_hor:
            return False
        if self.fac_tgt_mtg_space_ver != other.fac_tgt_mtg_space_ver:
            return False
        if self.fac_tgt_range_1 != other.fac_tgt_range_1:
            return False
        if self.fac_tgt_range_r2m != other.fac_tgt_range_r2m:
            return False
        if self.fac_tgt_range_m2t != other.fac_tgt_range_m2t:
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
    def fac_align_cmd_1(self):
        """Message field 'fac_align_cmd_1'."""
        return self._fac_align_cmd_1

    @fac_align_cmd_1.setter
    def fac_align_cmd_1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fac_align_cmd_1' field must be of type 'bool'"
        self._fac_align_cmd_1 = value

    @property
    def fac_align_cmd_2(self):
        """Message field 'fac_align_cmd_2'."""
        return self._fac_align_cmd_2

    @fac_align_cmd_2.setter
    def fac_align_cmd_2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fac_align_cmd_2' field must be of type 'bool'"
        self._fac_align_cmd_2 = value

    @property
    def fac_align_max_nt(self):
        """Message field 'fac_align_max_nt'."""
        return self._fac_align_max_nt

    @fac_align_max_nt.setter
    def fac_align_max_nt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fac_align_max_nt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fac_align_max_nt' field must be an unsigned integer in [0, 255]"
        self._fac_align_max_nt = value

    @property
    def fac_align_samp_req(self):
        """Message field 'fac_align_samp_req'."""
        return self._fac_align_samp_req

    @fac_align_samp_req.setter
    def fac_align_samp_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fac_align_samp_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fac_align_samp_req' field must be an unsigned integer in [0, 255]"
        self._fac_align_samp_req = value

    @property
    def fac_tgt_mtg_offset(self):
        """Message field 'fac_tgt_mtg_offset'."""
        return self._fac_tgt_mtg_offset

    @fac_tgt_mtg_offset.setter
    def fac_tgt_mtg_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fac_tgt_mtg_offset' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'fac_tgt_mtg_offset' field must be an integer in [-128, 127]"
        self._fac_tgt_mtg_offset = value

    @property
    def fac_tgt_mtg_space_hor(self):
        """Message field 'fac_tgt_mtg_space_hor'."""
        return self._fac_tgt_mtg_space_hor

    @fac_tgt_mtg_space_hor.setter
    def fac_tgt_mtg_space_hor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fac_tgt_mtg_space_hor' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'fac_tgt_mtg_space_hor' field must be an integer in [-128, 127]"
        self._fac_tgt_mtg_space_hor = value

    @property
    def fac_tgt_mtg_space_ver(self):
        """Message field 'fac_tgt_mtg_space_ver'."""
        return self._fac_tgt_mtg_space_ver

    @fac_tgt_mtg_space_ver.setter
    def fac_tgt_mtg_space_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fac_tgt_mtg_space_ver' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'fac_tgt_mtg_space_ver' field must be an integer in [-128, 127]"
        self._fac_tgt_mtg_space_ver = value

    @property
    def fac_tgt_range_1(self):
        """Message field 'fac_tgt_range_1'."""
        return self._fac_tgt_range_1

    @fac_tgt_range_1.setter
    def fac_tgt_range_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fac_tgt_range_1' field must be of type 'float'"
        self._fac_tgt_range_1 = value

    @property
    def fac_tgt_range_r2m(self):
        """Message field 'fac_tgt_range_r2m'."""
        return self._fac_tgt_range_r2m

    @fac_tgt_range_r2m.setter
    def fac_tgt_range_r2m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fac_tgt_range_r2m' field must be of type 'float'"
        self._fac_tgt_range_r2m = value

    @property
    def fac_tgt_range_m2t(self):
        """Message field 'fac_tgt_range_m2t'."""
        return self._fac_tgt_range_m2t

    @fac_tgt_range_m2t.setter
    def fac_tgt_range_m2t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fac_tgt_range_m2t' field must be of type 'float'"
        self._fac_tgt_range_m2t = value
