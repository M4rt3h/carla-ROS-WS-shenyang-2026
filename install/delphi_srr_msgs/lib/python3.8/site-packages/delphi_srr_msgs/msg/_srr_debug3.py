# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_srr_msgs:msg/SrrDebug3.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SrrDebug3(type):
    """Metaclass of message 'SrrDebug3'."""

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
                'delphi_srr_msgs.msg.SrrDebug3')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__srr_debug3
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__srr_debug3
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__srr_debug3
            cls._TYPE_SUPPORT = module.type_support_msg__msg__srr_debug3
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__srr_debug3

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


class SrrDebug3(metaclass=Metaclass_SrrDebug3):
    """Message class 'SrrDebug3'."""

    __slots__ = [
        '_header',
        '_timer_create_error',
        '_thread_create_error',
        '_arm_calibration_error',
        '_spi_fee_error',
        '_spi_comm_error',
        '_socket_write_error',
        '_dsp_cal_obsolete_62_error',
        '_socket_read_error',
        '_socket_init_error',
        '_signal_wait_error',
        '_signal_send_error',
        '_signal_create_error',
        '_shared_mem_write_error',
        '_shared_mem_read_error',
        '_shared_mem_config_error',
        '_share_mem_init_error',
        '_ram_test_error',
        '_num_errors',
        '_mmap_memory_error',
        '_isr_attach_error',
        '_ipc_drv_write_error',
        '_ipc_drv_trigger_error',
        '_ipc_drv_sync_error',
        '_ipc_drv_read_error',
        '_ipc_drv_init_error',
        '_interrupt_enable_error',
        '_hil_format_error',
        '_flash_filesystem_error',
        '_error_none',
        '_dsp_load_read_error',
        '_dsp_load_open_error',
        '_dsp_load_address_error',
        '_dsp_isp_write_error',
        '_dsp_ipc_read_error',
        '_dsp_ipc_init',
        '_dsp_init_error',
        '_dsp_drv_start_error',
        '_dsp_drv_load_error',
        '_dsp_drv_init_error',
        '_dsp_drv_init2_error',
        '_dsp_drv_init1_error',
        '_dsp_calibration_error',
        '_can_xmt_error',
        '_can_rcv_error',
        '_can_hardware_error',
        '_always_true',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'timer_create_error': 'boolean',
        'thread_create_error': 'boolean',
        'arm_calibration_error': 'boolean',
        'spi_fee_error': 'boolean',
        'spi_comm_error': 'boolean',
        'socket_write_error': 'boolean',
        'dsp_cal_obsolete_62_error': 'boolean',
        'socket_read_error': 'boolean',
        'socket_init_error': 'boolean',
        'signal_wait_error': 'boolean',
        'signal_send_error': 'boolean',
        'signal_create_error': 'boolean',
        'shared_mem_write_error': 'boolean',
        'shared_mem_read_error': 'boolean',
        'shared_mem_config_error': 'boolean',
        'share_mem_init_error': 'boolean',
        'ram_test_error': 'boolean',
        'num_errors': 'boolean',
        'mmap_memory_error': 'boolean',
        'isr_attach_error': 'boolean',
        'ipc_drv_write_error': 'boolean',
        'ipc_drv_trigger_error': 'boolean',
        'ipc_drv_sync_error': 'boolean',
        'ipc_drv_read_error': 'boolean',
        'ipc_drv_init_error': 'boolean',
        'interrupt_enable_error': 'boolean',
        'hil_format_error': 'boolean',
        'flash_filesystem_error': 'boolean',
        'error_none': 'boolean',
        'dsp_load_read_error': 'boolean',
        'dsp_load_open_error': 'boolean',
        'dsp_load_address_error': 'boolean',
        'dsp_isp_write_error': 'boolean',
        'dsp_ipc_read_error': 'boolean',
        'dsp_ipc_init': 'boolean',
        'dsp_init_error': 'boolean',
        'dsp_drv_start_error': 'boolean',
        'dsp_drv_load_error': 'boolean',
        'dsp_drv_init_error': 'boolean',
        'dsp_drv_init2_error': 'boolean',
        'dsp_drv_init1_error': 'boolean',
        'dsp_calibration_error': 'boolean',
        'can_xmt_error': 'boolean',
        'can_rcv_error': 'boolean',
        'can_hardware_error': 'boolean',
        'always_true': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.timer_create_error = kwargs.get('timer_create_error', bool())
        self.thread_create_error = kwargs.get('thread_create_error', bool())
        self.arm_calibration_error = kwargs.get('arm_calibration_error', bool())
        self.spi_fee_error = kwargs.get('spi_fee_error', bool())
        self.spi_comm_error = kwargs.get('spi_comm_error', bool())
        self.socket_write_error = kwargs.get('socket_write_error', bool())
        self.dsp_cal_obsolete_62_error = kwargs.get('dsp_cal_obsolete_62_error', bool())
        self.socket_read_error = kwargs.get('socket_read_error', bool())
        self.socket_init_error = kwargs.get('socket_init_error', bool())
        self.signal_wait_error = kwargs.get('signal_wait_error', bool())
        self.signal_send_error = kwargs.get('signal_send_error', bool())
        self.signal_create_error = kwargs.get('signal_create_error', bool())
        self.shared_mem_write_error = kwargs.get('shared_mem_write_error', bool())
        self.shared_mem_read_error = kwargs.get('shared_mem_read_error', bool())
        self.shared_mem_config_error = kwargs.get('shared_mem_config_error', bool())
        self.share_mem_init_error = kwargs.get('share_mem_init_error', bool())
        self.ram_test_error = kwargs.get('ram_test_error', bool())
        self.num_errors = kwargs.get('num_errors', bool())
        self.mmap_memory_error = kwargs.get('mmap_memory_error', bool())
        self.isr_attach_error = kwargs.get('isr_attach_error', bool())
        self.ipc_drv_write_error = kwargs.get('ipc_drv_write_error', bool())
        self.ipc_drv_trigger_error = kwargs.get('ipc_drv_trigger_error', bool())
        self.ipc_drv_sync_error = kwargs.get('ipc_drv_sync_error', bool())
        self.ipc_drv_read_error = kwargs.get('ipc_drv_read_error', bool())
        self.ipc_drv_init_error = kwargs.get('ipc_drv_init_error', bool())
        self.interrupt_enable_error = kwargs.get('interrupt_enable_error', bool())
        self.hil_format_error = kwargs.get('hil_format_error', bool())
        self.flash_filesystem_error = kwargs.get('flash_filesystem_error', bool())
        self.error_none = kwargs.get('error_none', bool())
        self.dsp_load_read_error = kwargs.get('dsp_load_read_error', bool())
        self.dsp_load_open_error = kwargs.get('dsp_load_open_error', bool())
        self.dsp_load_address_error = kwargs.get('dsp_load_address_error', bool())
        self.dsp_isp_write_error = kwargs.get('dsp_isp_write_error', bool())
        self.dsp_ipc_read_error = kwargs.get('dsp_ipc_read_error', bool())
        self.dsp_ipc_init = kwargs.get('dsp_ipc_init', bool())
        self.dsp_init_error = kwargs.get('dsp_init_error', bool())
        self.dsp_drv_start_error = kwargs.get('dsp_drv_start_error', bool())
        self.dsp_drv_load_error = kwargs.get('dsp_drv_load_error', bool())
        self.dsp_drv_init_error = kwargs.get('dsp_drv_init_error', bool())
        self.dsp_drv_init2_error = kwargs.get('dsp_drv_init2_error', bool())
        self.dsp_drv_init1_error = kwargs.get('dsp_drv_init1_error', bool())
        self.dsp_calibration_error = kwargs.get('dsp_calibration_error', bool())
        self.can_xmt_error = kwargs.get('can_xmt_error', bool())
        self.can_rcv_error = kwargs.get('can_rcv_error', bool())
        self.can_hardware_error = kwargs.get('can_hardware_error', bool())
        self.always_true = kwargs.get('always_true', bool())

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
        if self.timer_create_error != other.timer_create_error:
            return False
        if self.thread_create_error != other.thread_create_error:
            return False
        if self.arm_calibration_error != other.arm_calibration_error:
            return False
        if self.spi_fee_error != other.spi_fee_error:
            return False
        if self.spi_comm_error != other.spi_comm_error:
            return False
        if self.socket_write_error != other.socket_write_error:
            return False
        if self.dsp_cal_obsolete_62_error != other.dsp_cal_obsolete_62_error:
            return False
        if self.socket_read_error != other.socket_read_error:
            return False
        if self.socket_init_error != other.socket_init_error:
            return False
        if self.signal_wait_error != other.signal_wait_error:
            return False
        if self.signal_send_error != other.signal_send_error:
            return False
        if self.signal_create_error != other.signal_create_error:
            return False
        if self.shared_mem_write_error != other.shared_mem_write_error:
            return False
        if self.shared_mem_read_error != other.shared_mem_read_error:
            return False
        if self.shared_mem_config_error != other.shared_mem_config_error:
            return False
        if self.share_mem_init_error != other.share_mem_init_error:
            return False
        if self.ram_test_error != other.ram_test_error:
            return False
        if self.num_errors != other.num_errors:
            return False
        if self.mmap_memory_error != other.mmap_memory_error:
            return False
        if self.isr_attach_error != other.isr_attach_error:
            return False
        if self.ipc_drv_write_error != other.ipc_drv_write_error:
            return False
        if self.ipc_drv_trigger_error != other.ipc_drv_trigger_error:
            return False
        if self.ipc_drv_sync_error != other.ipc_drv_sync_error:
            return False
        if self.ipc_drv_read_error != other.ipc_drv_read_error:
            return False
        if self.ipc_drv_init_error != other.ipc_drv_init_error:
            return False
        if self.interrupt_enable_error != other.interrupt_enable_error:
            return False
        if self.hil_format_error != other.hil_format_error:
            return False
        if self.flash_filesystem_error != other.flash_filesystem_error:
            return False
        if self.error_none != other.error_none:
            return False
        if self.dsp_load_read_error != other.dsp_load_read_error:
            return False
        if self.dsp_load_open_error != other.dsp_load_open_error:
            return False
        if self.dsp_load_address_error != other.dsp_load_address_error:
            return False
        if self.dsp_isp_write_error != other.dsp_isp_write_error:
            return False
        if self.dsp_ipc_read_error != other.dsp_ipc_read_error:
            return False
        if self.dsp_ipc_init != other.dsp_ipc_init:
            return False
        if self.dsp_init_error != other.dsp_init_error:
            return False
        if self.dsp_drv_start_error != other.dsp_drv_start_error:
            return False
        if self.dsp_drv_load_error != other.dsp_drv_load_error:
            return False
        if self.dsp_drv_init_error != other.dsp_drv_init_error:
            return False
        if self.dsp_drv_init2_error != other.dsp_drv_init2_error:
            return False
        if self.dsp_drv_init1_error != other.dsp_drv_init1_error:
            return False
        if self.dsp_calibration_error != other.dsp_calibration_error:
            return False
        if self.can_xmt_error != other.can_xmt_error:
            return False
        if self.can_rcv_error != other.can_rcv_error:
            return False
        if self.can_hardware_error != other.can_hardware_error:
            return False
        if self.always_true != other.always_true:
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
    def timer_create_error(self):
        """Message field 'timer_create_error'."""
        return self._timer_create_error

    @timer_create_error.setter
    def timer_create_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'timer_create_error' field must be of type 'bool'"
        self._timer_create_error = value

    @property
    def thread_create_error(self):
        """Message field 'thread_create_error'."""
        return self._thread_create_error

    @thread_create_error.setter
    def thread_create_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'thread_create_error' field must be of type 'bool'"
        self._thread_create_error = value

    @property
    def arm_calibration_error(self):
        """Message field 'arm_calibration_error'."""
        return self._arm_calibration_error

    @arm_calibration_error.setter
    def arm_calibration_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arm_calibration_error' field must be of type 'bool'"
        self._arm_calibration_error = value

    @property
    def spi_fee_error(self):
        """Message field 'spi_fee_error'."""
        return self._spi_fee_error

    @spi_fee_error.setter
    def spi_fee_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'spi_fee_error' field must be of type 'bool'"
        self._spi_fee_error = value

    @property
    def spi_comm_error(self):
        """Message field 'spi_comm_error'."""
        return self._spi_comm_error

    @spi_comm_error.setter
    def spi_comm_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'spi_comm_error' field must be of type 'bool'"
        self._spi_comm_error = value

    @property
    def socket_write_error(self):
        """Message field 'socket_write_error'."""
        return self._socket_write_error

    @socket_write_error.setter
    def socket_write_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'socket_write_error' field must be of type 'bool'"
        self._socket_write_error = value

    @property
    def dsp_cal_obsolete_62_error(self):
        """Message field 'dsp_cal_obsolete_62_error'."""
        return self._dsp_cal_obsolete_62_error

    @dsp_cal_obsolete_62_error.setter
    def dsp_cal_obsolete_62_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_cal_obsolete_62_error' field must be of type 'bool'"
        self._dsp_cal_obsolete_62_error = value

    @property
    def socket_read_error(self):
        """Message field 'socket_read_error'."""
        return self._socket_read_error

    @socket_read_error.setter
    def socket_read_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'socket_read_error' field must be of type 'bool'"
        self._socket_read_error = value

    @property
    def socket_init_error(self):
        """Message field 'socket_init_error'."""
        return self._socket_init_error

    @socket_init_error.setter
    def socket_init_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'socket_init_error' field must be of type 'bool'"
        self._socket_init_error = value

    @property
    def signal_wait_error(self):
        """Message field 'signal_wait_error'."""
        return self._signal_wait_error

    @signal_wait_error.setter
    def signal_wait_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'signal_wait_error' field must be of type 'bool'"
        self._signal_wait_error = value

    @property
    def signal_send_error(self):
        """Message field 'signal_send_error'."""
        return self._signal_send_error

    @signal_send_error.setter
    def signal_send_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'signal_send_error' field must be of type 'bool'"
        self._signal_send_error = value

    @property
    def signal_create_error(self):
        """Message field 'signal_create_error'."""
        return self._signal_create_error

    @signal_create_error.setter
    def signal_create_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'signal_create_error' field must be of type 'bool'"
        self._signal_create_error = value

    @property
    def shared_mem_write_error(self):
        """Message field 'shared_mem_write_error'."""
        return self._shared_mem_write_error

    @shared_mem_write_error.setter
    def shared_mem_write_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'shared_mem_write_error' field must be of type 'bool'"
        self._shared_mem_write_error = value

    @property
    def shared_mem_read_error(self):
        """Message field 'shared_mem_read_error'."""
        return self._shared_mem_read_error

    @shared_mem_read_error.setter
    def shared_mem_read_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'shared_mem_read_error' field must be of type 'bool'"
        self._shared_mem_read_error = value

    @property
    def shared_mem_config_error(self):
        """Message field 'shared_mem_config_error'."""
        return self._shared_mem_config_error

    @shared_mem_config_error.setter
    def shared_mem_config_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'shared_mem_config_error' field must be of type 'bool'"
        self._shared_mem_config_error = value

    @property
    def share_mem_init_error(self):
        """Message field 'share_mem_init_error'."""
        return self._share_mem_init_error

    @share_mem_init_error.setter
    def share_mem_init_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'share_mem_init_error' field must be of type 'bool'"
        self._share_mem_init_error = value

    @property
    def ram_test_error(self):
        """Message field 'ram_test_error'."""
        return self._ram_test_error

    @ram_test_error.setter
    def ram_test_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ram_test_error' field must be of type 'bool'"
        self._ram_test_error = value

    @property
    def num_errors(self):
        """Message field 'num_errors'."""
        return self._num_errors

    @num_errors.setter
    def num_errors(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'num_errors' field must be of type 'bool'"
        self._num_errors = value

    @property
    def mmap_memory_error(self):
        """Message field 'mmap_memory_error'."""
        return self._mmap_memory_error

    @mmap_memory_error.setter
    def mmap_memory_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mmap_memory_error' field must be of type 'bool'"
        self._mmap_memory_error = value

    @property
    def isr_attach_error(self):
        """Message field 'isr_attach_error'."""
        return self._isr_attach_error

    @isr_attach_error.setter
    def isr_attach_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isr_attach_error' field must be of type 'bool'"
        self._isr_attach_error = value

    @property
    def ipc_drv_write_error(self):
        """Message field 'ipc_drv_write_error'."""
        return self._ipc_drv_write_error

    @ipc_drv_write_error.setter
    def ipc_drv_write_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ipc_drv_write_error' field must be of type 'bool'"
        self._ipc_drv_write_error = value

    @property
    def ipc_drv_trigger_error(self):
        """Message field 'ipc_drv_trigger_error'."""
        return self._ipc_drv_trigger_error

    @ipc_drv_trigger_error.setter
    def ipc_drv_trigger_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ipc_drv_trigger_error' field must be of type 'bool'"
        self._ipc_drv_trigger_error = value

    @property
    def ipc_drv_sync_error(self):
        """Message field 'ipc_drv_sync_error'."""
        return self._ipc_drv_sync_error

    @ipc_drv_sync_error.setter
    def ipc_drv_sync_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ipc_drv_sync_error' field must be of type 'bool'"
        self._ipc_drv_sync_error = value

    @property
    def ipc_drv_read_error(self):
        """Message field 'ipc_drv_read_error'."""
        return self._ipc_drv_read_error

    @ipc_drv_read_error.setter
    def ipc_drv_read_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ipc_drv_read_error' field must be of type 'bool'"
        self._ipc_drv_read_error = value

    @property
    def ipc_drv_init_error(self):
        """Message field 'ipc_drv_init_error'."""
        return self._ipc_drv_init_error

    @ipc_drv_init_error.setter
    def ipc_drv_init_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ipc_drv_init_error' field must be of type 'bool'"
        self._ipc_drv_init_error = value

    @property
    def interrupt_enable_error(self):
        """Message field 'interrupt_enable_error'."""
        return self._interrupt_enable_error

    @interrupt_enable_error.setter
    def interrupt_enable_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'interrupt_enable_error' field must be of type 'bool'"
        self._interrupt_enable_error = value

    @property
    def hil_format_error(self):
        """Message field 'hil_format_error'."""
        return self._hil_format_error

    @hil_format_error.setter
    def hil_format_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hil_format_error' field must be of type 'bool'"
        self._hil_format_error = value

    @property
    def flash_filesystem_error(self):
        """Message field 'flash_filesystem_error'."""
        return self._flash_filesystem_error

    @flash_filesystem_error.setter
    def flash_filesystem_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flash_filesystem_error' field must be of type 'bool'"
        self._flash_filesystem_error = value

    @property
    def error_none(self):
        """Message field 'error_none'."""
        return self._error_none

    @error_none.setter
    def error_none(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'error_none' field must be of type 'bool'"
        self._error_none = value

    @property
    def dsp_load_read_error(self):
        """Message field 'dsp_load_read_error'."""
        return self._dsp_load_read_error

    @dsp_load_read_error.setter
    def dsp_load_read_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_load_read_error' field must be of type 'bool'"
        self._dsp_load_read_error = value

    @property
    def dsp_load_open_error(self):
        """Message field 'dsp_load_open_error'."""
        return self._dsp_load_open_error

    @dsp_load_open_error.setter
    def dsp_load_open_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_load_open_error' field must be of type 'bool'"
        self._dsp_load_open_error = value

    @property
    def dsp_load_address_error(self):
        """Message field 'dsp_load_address_error'."""
        return self._dsp_load_address_error

    @dsp_load_address_error.setter
    def dsp_load_address_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_load_address_error' field must be of type 'bool'"
        self._dsp_load_address_error = value

    @property
    def dsp_isp_write_error(self):
        """Message field 'dsp_isp_write_error'."""
        return self._dsp_isp_write_error

    @dsp_isp_write_error.setter
    def dsp_isp_write_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_isp_write_error' field must be of type 'bool'"
        self._dsp_isp_write_error = value

    @property
    def dsp_ipc_read_error(self):
        """Message field 'dsp_ipc_read_error'."""
        return self._dsp_ipc_read_error

    @dsp_ipc_read_error.setter
    def dsp_ipc_read_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_ipc_read_error' field must be of type 'bool'"
        self._dsp_ipc_read_error = value

    @property
    def dsp_ipc_init(self):
        """Message field 'dsp_ipc_init'."""
        return self._dsp_ipc_init

    @dsp_ipc_init.setter
    def dsp_ipc_init(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_ipc_init' field must be of type 'bool'"
        self._dsp_ipc_init = value

    @property
    def dsp_init_error(self):
        """Message field 'dsp_init_error'."""
        return self._dsp_init_error

    @dsp_init_error.setter
    def dsp_init_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_init_error' field must be of type 'bool'"
        self._dsp_init_error = value

    @property
    def dsp_drv_start_error(self):
        """Message field 'dsp_drv_start_error'."""
        return self._dsp_drv_start_error

    @dsp_drv_start_error.setter
    def dsp_drv_start_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_drv_start_error' field must be of type 'bool'"
        self._dsp_drv_start_error = value

    @property
    def dsp_drv_load_error(self):
        """Message field 'dsp_drv_load_error'."""
        return self._dsp_drv_load_error

    @dsp_drv_load_error.setter
    def dsp_drv_load_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_drv_load_error' field must be of type 'bool'"
        self._dsp_drv_load_error = value

    @property
    def dsp_drv_init_error(self):
        """Message field 'dsp_drv_init_error'."""
        return self._dsp_drv_init_error

    @dsp_drv_init_error.setter
    def dsp_drv_init_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_drv_init_error' field must be of type 'bool'"
        self._dsp_drv_init_error = value

    @property
    def dsp_drv_init2_error(self):
        """Message field 'dsp_drv_init2_error'."""
        return self._dsp_drv_init2_error

    @dsp_drv_init2_error.setter
    def dsp_drv_init2_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_drv_init2_error' field must be of type 'bool'"
        self._dsp_drv_init2_error = value

    @property
    def dsp_drv_init1_error(self):
        """Message field 'dsp_drv_init1_error'."""
        return self._dsp_drv_init1_error

    @dsp_drv_init1_error.setter
    def dsp_drv_init1_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_drv_init1_error' field must be of type 'bool'"
        self._dsp_drv_init1_error = value

    @property
    def dsp_calibration_error(self):
        """Message field 'dsp_calibration_error'."""
        return self._dsp_calibration_error

    @dsp_calibration_error.setter
    def dsp_calibration_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsp_calibration_error' field must be of type 'bool'"
        self._dsp_calibration_error = value

    @property
    def can_xmt_error(self):
        """Message field 'can_xmt_error'."""
        return self._can_xmt_error

    @can_xmt_error.setter
    def can_xmt_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_xmt_error' field must be of type 'bool'"
        self._can_xmt_error = value

    @property
    def can_rcv_error(self):
        """Message field 'can_rcv_error'."""
        return self._can_rcv_error

    @can_rcv_error.setter
    def can_rcv_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_rcv_error' field must be of type 'bool'"
        self._can_rcv_error = value

    @property
    def can_hardware_error(self):
        """Message field 'can_hardware_error'."""
        return self._can_hardware_error

    @can_hardware_error.setter
    def can_hardware_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_hardware_error' field must be of type 'bool'"
        self._can_hardware_error = value

    @property
    def always_true(self):
        """Message field 'always_true'."""
        return self._always_true

    @always_true.setter
    def always_true(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'always_true' field must be of type 'bool'"
        self._always_true = value
