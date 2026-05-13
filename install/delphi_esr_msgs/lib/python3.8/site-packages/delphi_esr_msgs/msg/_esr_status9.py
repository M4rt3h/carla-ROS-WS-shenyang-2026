# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrStatus9.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrStatus9(type):
    """Metaclass of message 'EsrStatus9'."""

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
                'delphi_esr_msgs.msg.EsrStatus9')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_status9
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_status9
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_status9
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_status9
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_status9

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


class EsrStatus9(metaclass=Metaclass_EsrStatus9):
    """Message class 'EsrStatus9'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_avg_pwr_cwblkg',
        '_sideslip_angle',
        '_serial_num_3rd_byte',
        '_water_spray_target_id',
        '_filtered_xohp_acc_cipv',
        '_path_id_acc_2',
        '_path_id_acc_3',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'avg_pwr_cwblkg': 'uint16',
        'sideslip_angle': 'float',
        'serial_num_3rd_byte': 'uint8',
        'water_spray_target_id': 'uint8',
        'filtered_xohp_acc_cipv': 'float',
        'path_id_acc_2': 'uint8',
        'path_id_acc_3': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.canmsg = kwargs.get('canmsg', str())
        self.avg_pwr_cwblkg = kwargs.get('avg_pwr_cwblkg', int())
        self.sideslip_angle = kwargs.get('sideslip_angle', float())
        self.serial_num_3rd_byte = kwargs.get('serial_num_3rd_byte', int())
        self.water_spray_target_id = kwargs.get('water_spray_target_id', int())
        self.filtered_xohp_acc_cipv = kwargs.get('filtered_xohp_acc_cipv', float())
        self.path_id_acc_2 = kwargs.get('path_id_acc_2', int())
        self.path_id_acc_3 = kwargs.get('path_id_acc_3', int())

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
        if self.avg_pwr_cwblkg != other.avg_pwr_cwblkg:
            return False
        if self.sideslip_angle != other.sideslip_angle:
            return False
        if self.serial_num_3rd_byte != other.serial_num_3rd_byte:
            return False
        if self.water_spray_target_id != other.water_spray_target_id:
            return False
        if self.filtered_xohp_acc_cipv != other.filtered_xohp_acc_cipv:
            return False
        if self.path_id_acc_2 != other.path_id_acc_2:
            return False
        if self.path_id_acc_3 != other.path_id_acc_3:
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
    def avg_pwr_cwblkg(self):
        """Message field 'avg_pwr_cwblkg'."""
        return self._avg_pwr_cwblkg

    @avg_pwr_cwblkg.setter
    def avg_pwr_cwblkg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'avg_pwr_cwblkg' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'avg_pwr_cwblkg' field must be an unsigned integer in [0, 65535]"
        self._avg_pwr_cwblkg = value

    @property
    def sideslip_angle(self):
        """Message field 'sideslip_angle'."""
        return self._sideslip_angle

    @sideslip_angle.setter
    def sideslip_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sideslip_angle' field must be of type 'float'"
        self._sideslip_angle = value

    @property
    def serial_num_3rd_byte(self):
        """Message field 'serial_num_3rd_byte'."""
        return self._serial_num_3rd_byte

    @serial_num_3rd_byte.setter
    def serial_num_3rd_byte(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'serial_num_3rd_byte' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'serial_num_3rd_byte' field must be an unsigned integer in [0, 255]"
        self._serial_num_3rd_byte = value

    @property
    def water_spray_target_id(self):
        """Message field 'water_spray_target_id'."""
        return self._water_spray_target_id

    @water_spray_target_id.setter
    def water_spray_target_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'water_spray_target_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'water_spray_target_id' field must be an unsigned integer in [0, 255]"
        self._water_spray_target_id = value

    @property
    def filtered_xohp_acc_cipv(self):
        """Message field 'filtered_xohp_acc_cipv'."""
        return self._filtered_xohp_acc_cipv

    @filtered_xohp_acc_cipv.setter
    def filtered_xohp_acc_cipv(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'filtered_xohp_acc_cipv' field must be of type 'float'"
        self._filtered_xohp_acc_cipv = value

    @property
    def path_id_acc_2(self):
        """Message field 'path_id_acc_2'."""
        return self._path_id_acc_2

    @path_id_acc_2.setter
    def path_id_acc_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_id_acc_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'path_id_acc_2' field must be an unsigned integer in [0, 255]"
        self._path_id_acc_2 = value

    @property
    def path_id_acc_3(self):
        """Message field 'path_id_acc_3'."""
        return self._path_id_acc_3

    @path_id_acc_3.setter
    def path_id_acc_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_id_acc_3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'path_id_acc_3' field must be an unsigned integer in [0, 255]"
        self._path_id_acc_3 = value
