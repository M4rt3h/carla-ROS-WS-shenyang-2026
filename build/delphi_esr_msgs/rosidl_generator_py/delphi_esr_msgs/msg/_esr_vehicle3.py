# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrVehicle3.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrVehicle3(type):
    """Metaclass of message 'EsrVehicle3'."""

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
                'delphi_esr_msgs.msg.EsrVehicle3')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_vehicle3
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_vehicle3
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_vehicle3
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_vehicle3
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_vehicle3

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


class EsrVehicle3(metaclass=Metaclass_EsrVehicle3):
    """Message class 'EsrVehicle3'."""

    __slots__ = [
        '_header',
        '_long_accel_validity',
        '_lat_accel_validity',
        '_lat_accel',
        '_long_accel',
        '_radar_fov_lr',
        '_radar_fov_mr',
        '_auto_align_disable',
        '_radar_height',
        '_serv_align_type',
        '_serv_align_enable',
        '_aalign_avg_ctr_total',
        '_auto_align_converged',
        '_wheel_slip',
        '_serv_align_updates_need',
        '_angle_mounting_offset',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'long_accel_validity': 'boolean',
        'lat_accel_validity': 'boolean',
        'lat_accel': 'float',
        'long_accel': 'float',
        'radar_fov_lr': 'uint8',
        'radar_fov_mr': 'uint8',
        'auto_align_disable': 'boolean',
        'radar_height': 'uint8',
        'serv_align_type': 'boolean',
        'serv_align_enable': 'boolean',
        'aalign_avg_ctr_total': 'uint16',
        'auto_align_converged': 'boolean',
        'wheel_slip': 'uint8',
        'serv_align_updates_need': 'uint8',
        'angle_mounting_offset': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.long_accel_validity = kwargs.get('long_accel_validity', bool())
        self.lat_accel_validity = kwargs.get('lat_accel_validity', bool())
        self.lat_accel = kwargs.get('lat_accel', float())
        self.long_accel = kwargs.get('long_accel', float())
        self.radar_fov_lr = kwargs.get('radar_fov_lr', int())
        self.radar_fov_mr = kwargs.get('radar_fov_mr', int())
        self.auto_align_disable = kwargs.get('auto_align_disable', bool())
        self.radar_height = kwargs.get('radar_height', int())
        self.serv_align_type = kwargs.get('serv_align_type', bool())
        self.serv_align_enable = kwargs.get('serv_align_enable', bool())
        self.aalign_avg_ctr_total = kwargs.get('aalign_avg_ctr_total', int())
        self.auto_align_converged = kwargs.get('auto_align_converged', bool())
        self.wheel_slip = kwargs.get('wheel_slip', int())
        self.serv_align_updates_need = kwargs.get('serv_align_updates_need', int())
        self.angle_mounting_offset = kwargs.get('angle_mounting_offset', int())

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
        if self.long_accel_validity != other.long_accel_validity:
            return False
        if self.lat_accel_validity != other.lat_accel_validity:
            return False
        if self.lat_accel != other.lat_accel:
            return False
        if self.long_accel != other.long_accel:
            return False
        if self.radar_fov_lr != other.radar_fov_lr:
            return False
        if self.radar_fov_mr != other.radar_fov_mr:
            return False
        if self.auto_align_disable != other.auto_align_disable:
            return False
        if self.radar_height != other.radar_height:
            return False
        if self.serv_align_type != other.serv_align_type:
            return False
        if self.serv_align_enable != other.serv_align_enable:
            return False
        if self.aalign_avg_ctr_total != other.aalign_avg_ctr_total:
            return False
        if self.auto_align_converged != other.auto_align_converged:
            return False
        if self.wheel_slip != other.wheel_slip:
            return False
        if self.serv_align_updates_need != other.serv_align_updates_need:
            return False
        if self.angle_mounting_offset != other.angle_mounting_offset:
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
    def long_accel_validity(self):
        """Message field 'long_accel_validity'."""
        return self._long_accel_validity

    @long_accel_validity.setter
    def long_accel_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'long_accel_validity' field must be of type 'bool'"
        self._long_accel_validity = value

    @property
    def lat_accel_validity(self):
        """Message field 'lat_accel_validity'."""
        return self._lat_accel_validity

    @lat_accel_validity.setter
    def lat_accel_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lat_accel_validity' field must be of type 'bool'"
        self._lat_accel_validity = value

    @property
    def lat_accel(self):
        """Message field 'lat_accel'."""
        return self._lat_accel

    @lat_accel.setter
    def lat_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_accel' field must be of type 'float'"
        self._lat_accel = value

    @property
    def long_accel(self):
        """Message field 'long_accel'."""
        return self._long_accel

    @long_accel.setter
    def long_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'long_accel' field must be of type 'float'"
        self._long_accel = value

    @property
    def radar_fov_lr(self):
        """Message field 'radar_fov_lr'."""
        return self._radar_fov_lr

    @radar_fov_lr.setter
    def radar_fov_lr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radar_fov_lr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'radar_fov_lr' field must be an unsigned integer in [0, 255]"
        self._radar_fov_lr = value

    @property
    def radar_fov_mr(self):
        """Message field 'radar_fov_mr'."""
        return self._radar_fov_mr

    @radar_fov_mr.setter
    def radar_fov_mr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radar_fov_mr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'radar_fov_mr' field must be an unsigned integer in [0, 255]"
        self._radar_fov_mr = value

    @property
    def auto_align_disable(self):
        """Message field 'auto_align_disable'."""
        return self._auto_align_disable

    @auto_align_disable.setter
    def auto_align_disable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_align_disable' field must be of type 'bool'"
        self._auto_align_disable = value

    @property
    def radar_height(self):
        """Message field 'radar_height'."""
        return self._radar_height

    @radar_height.setter
    def radar_height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radar_height' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'radar_height' field must be an unsigned integer in [0, 255]"
        self._radar_height = value

    @property
    def serv_align_type(self):
        """Message field 'serv_align_type'."""
        return self._serv_align_type

    @serv_align_type.setter
    def serv_align_type(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'serv_align_type' field must be of type 'bool'"
        self._serv_align_type = value

    @property
    def serv_align_enable(self):
        """Message field 'serv_align_enable'."""
        return self._serv_align_enable

    @serv_align_enable.setter
    def serv_align_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'serv_align_enable' field must be of type 'bool'"
        self._serv_align_enable = value

    @property
    def aalign_avg_ctr_total(self):
        """Message field 'aalign_avg_ctr_total'."""
        return self._aalign_avg_ctr_total

    @aalign_avg_ctr_total.setter
    def aalign_avg_ctr_total(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aalign_avg_ctr_total' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'aalign_avg_ctr_total' field must be an unsigned integer in [0, 65535]"
        self._aalign_avg_ctr_total = value

    @property
    def auto_align_converged(self):
        """Message field 'auto_align_converged'."""
        return self._auto_align_converged

    @auto_align_converged.setter
    def auto_align_converged(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_align_converged' field must be of type 'bool'"
        self._auto_align_converged = value

    @property
    def wheel_slip(self):
        """Message field 'wheel_slip'."""
        return self._wheel_slip

    @wheel_slip.setter
    def wheel_slip(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wheel_slip' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wheel_slip' field must be an unsigned integer in [0, 255]"
        self._wheel_slip = value

    @property
    def serv_align_updates_need(self):
        """Message field 'serv_align_updates_need'."""
        return self._serv_align_updates_need

    @serv_align_updates_need.setter
    def serv_align_updates_need(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'serv_align_updates_need' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'serv_align_updates_need' field must be an unsigned integer in [0, 255]"
        self._serv_align_updates_need = value

    @property
    def angle_mounting_offset(self):
        """Message field 'angle_mounting_offset'."""
        return self._angle_mounting_offset

    @angle_mounting_offset.setter
    def angle_mounting_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angle_mounting_offset' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'angle_mounting_offset' field must be an integer in [-128, 127]"
        self._angle_mounting_offset = value
