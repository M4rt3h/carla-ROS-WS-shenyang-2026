# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_srr_msgs:msg/SrrStatus4.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SrrStatus4(type):
    """Metaclass of message 'SrrStatus4'."""

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
            module = import_type_support('delphi_srr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_srr_msgs.msg.SrrStatus4')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__srr_status4
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__srr_status4
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__srr_status4
            cls._TYPE_SUPPORT = module.type_support_msg__msg__srr_status4
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__srr_status4

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


class SrrStatus4(metaclass=Metaclass_SrrStatus4):
    """Message class 'SrrStatus4'."""

    __slots__ = [
        '_header',
        '_can_tx_sw_version_host',
        '_can_tx_path_id_blis_ignore',
        '_can_tx_path_id_blis',
        '_can_tx_angle_misalignment',
        '_can_tx_auto_align_angle',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_tx_sw_version_host': 'uint16',
        'can_tx_path_id_blis_ignore': 'uint8',
        'can_tx_path_id_blis': 'uint8',
        'can_tx_angle_misalignment': 'float',
        'can_tx_auto_align_angle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_tx_sw_version_host = kwargs.get('can_tx_sw_version_host', int())
        self.can_tx_path_id_blis_ignore = kwargs.get('can_tx_path_id_blis_ignore', int())
        self.can_tx_path_id_blis = kwargs.get('can_tx_path_id_blis', int())
        self.can_tx_angle_misalignment = kwargs.get('can_tx_angle_misalignment', float())
        self.can_tx_auto_align_angle = kwargs.get('can_tx_auto_align_angle', float())

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
        if self.can_tx_sw_version_host != other.can_tx_sw_version_host:
            return False
        if self.can_tx_path_id_blis_ignore != other.can_tx_path_id_blis_ignore:
            return False
        if self.can_tx_path_id_blis != other.can_tx_path_id_blis:
            return False
        if self.can_tx_angle_misalignment != other.can_tx_angle_misalignment:
            return False
        if self.can_tx_auto_align_angle != other.can_tx_auto_align_angle:
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
    def can_tx_sw_version_host(self):
        """Message field 'can_tx_sw_version_host'."""
        return self._can_tx_sw_version_host

    @can_tx_sw_version_host.setter
    def can_tx_sw_version_host(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_sw_version_host' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_tx_sw_version_host' field must be an unsigned integer in [0, 65535]"
        self._can_tx_sw_version_host = value

    @property
    def can_tx_path_id_blis_ignore(self):
        """Message field 'can_tx_path_id_blis_ignore'."""
        return self._can_tx_path_id_blis_ignore

    @can_tx_path_id_blis_ignore.setter
    def can_tx_path_id_blis_ignore(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_path_id_blis_ignore' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_path_id_blis_ignore' field must be an unsigned integer in [0, 255]"
        self._can_tx_path_id_blis_ignore = value

    @property
    def can_tx_path_id_blis(self):
        """Message field 'can_tx_path_id_blis'."""
        return self._can_tx_path_id_blis

    @can_tx_path_id_blis.setter
    def can_tx_path_id_blis(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_tx_path_id_blis' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_tx_path_id_blis' field must be an unsigned integer in [0, 255]"
        self._can_tx_path_id_blis = value

    @property
    def can_tx_angle_misalignment(self):
        """Message field 'can_tx_angle_misalignment'."""
        return self._can_tx_angle_misalignment

    @can_tx_angle_misalignment.setter
    def can_tx_angle_misalignment(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_angle_misalignment' field must be of type 'float'"
        self._can_tx_angle_misalignment = value

    @property
    def can_tx_auto_align_angle(self):
        """Message field 'can_tx_auto_align_angle'."""
        return self._can_tx_auto_align_angle

    @can_tx_auto_align_angle.setter
    def can_tx_auto_align_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_tx_auto_align_angle' field must be of type 'float'"
        self._can_tx_auto_align_angle = value
