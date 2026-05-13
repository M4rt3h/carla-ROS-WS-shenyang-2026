# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrStatus6.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrStatus6(type):
    """Metaclass of message 'EsrStatus6'."""

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
                'delphi_esr_msgs.msg.EsrStatus6')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_status6
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_status6
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_status6
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_status6
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_status6

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


class EsrStatus6(metaclass=Metaclass_EsrStatus6):
    """Message class 'EsrStatus6'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_supply_1p8v_a2d',
        '_supply_n5v_a2d',
        '_wave_diff_a2d',
        '_sw_version_dsp_3rd_byte',
        '_vertical_align_updated',
        '_system_power_mode',
        '_found_target',
        '_recommend_unconverge',
        '_factory_align_status_1',
        '_factory_align_status_2',
        '_factory_misalignment',
        '_serv_align_updates_done',
        '_vertical_misalignment',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'supply_1p8v_a2d': 'uint8',
        'supply_n5v_a2d': 'uint8',
        'wave_diff_a2d': 'uint8',
        'sw_version_dsp_3rd_byte': 'uint8',
        'vertical_align_updated': 'boolean',
        'system_power_mode': 'uint8',
        'found_target': 'boolean',
        'recommend_unconverge': 'boolean',
        'factory_align_status_1': 'uint8',
        'factory_align_status_2': 'uint8',
        'factory_misalignment': 'float',
        'serv_align_updates_done': 'uint8',
        'vertical_misalignment': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.canmsg = kwargs.get('canmsg', str())
        self.supply_1p8v_a2d = kwargs.get('supply_1p8v_a2d', int())
        self.supply_n5v_a2d = kwargs.get('supply_n5v_a2d', int())
        self.wave_diff_a2d = kwargs.get('wave_diff_a2d', int())
        self.sw_version_dsp_3rd_byte = kwargs.get('sw_version_dsp_3rd_byte', int())
        self.vertical_align_updated = kwargs.get('vertical_align_updated', bool())
        self.system_power_mode = kwargs.get('system_power_mode', int())
        self.found_target = kwargs.get('found_target', bool())
        self.recommend_unconverge = kwargs.get('recommend_unconverge', bool())
        self.factory_align_status_1 = kwargs.get('factory_align_status_1', int())
        self.factory_align_status_2 = kwargs.get('factory_align_status_2', int())
        self.factory_misalignment = kwargs.get('factory_misalignment', float())
        self.serv_align_updates_done = kwargs.get('serv_align_updates_done', int())
        self.vertical_misalignment = kwargs.get('vertical_misalignment', float())

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
        if self.supply_1p8v_a2d != other.supply_1p8v_a2d:
            return False
        if self.supply_n5v_a2d != other.supply_n5v_a2d:
            return False
        if self.wave_diff_a2d != other.wave_diff_a2d:
            return False
        if self.sw_version_dsp_3rd_byte != other.sw_version_dsp_3rd_byte:
            return False
        if self.vertical_align_updated != other.vertical_align_updated:
            return False
        if self.system_power_mode != other.system_power_mode:
            return False
        if self.found_target != other.found_target:
            return False
        if self.recommend_unconverge != other.recommend_unconverge:
            return False
        if self.factory_align_status_1 != other.factory_align_status_1:
            return False
        if self.factory_align_status_2 != other.factory_align_status_2:
            return False
        if self.factory_misalignment != other.factory_misalignment:
            return False
        if self.serv_align_updates_done != other.serv_align_updates_done:
            return False
        if self.vertical_misalignment != other.vertical_misalignment:
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
    def supply_1p8v_a2d(self):
        """Message field 'supply_1p8v_a2d'."""
        return self._supply_1p8v_a2d

    @supply_1p8v_a2d.setter
    def supply_1p8v_a2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_1p8v_a2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_1p8v_a2d' field must be an unsigned integer in [0, 255]"
        self._supply_1p8v_a2d = value

    @property
    def supply_n5v_a2d(self):
        """Message field 'supply_n5v_a2d'."""
        return self._supply_n5v_a2d

    @supply_n5v_a2d.setter
    def supply_n5v_a2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_n5v_a2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_n5v_a2d' field must be an unsigned integer in [0, 255]"
        self._supply_n5v_a2d = value

    @property
    def wave_diff_a2d(self):
        """Message field 'wave_diff_a2d'."""
        return self._wave_diff_a2d

    @wave_diff_a2d.setter
    def wave_diff_a2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wave_diff_a2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wave_diff_a2d' field must be an unsigned integer in [0, 255]"
        self._wave_diff_a2d = value

    @property
    def sw_version_dsp_3rd_byte(self):
        """Message field 'sw_version_dsp_3rd_byte'."""
        return self._sw_version_dsp_3rd_byte

    @sw_version_dsp_3rd_byte.setter
    def sw_version_dsp_3rd_byte(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sw_version_dsp_3rd_byte' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sw_version_dsp_3rd_byte' field must be an unsigned integer in [0, 255]"
        self._sw_version_dsp_3rd_byte = value

    @property
    def vertical_align_updated(self):
        """Message field 'vertical_align_updated'."""
        return self._vertical_align_updated

    @vertical_align_updated.setter
    def vertical_align_updated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vertical_align_updated' field must be of type 'bool'"
        self._vertical_align_updated = value

    @property
    def system_power_mode(self):
        """Message field 'system_power_mode'."""
        return self._system_power_mode

    @system_power_mode.setter
    def system_power_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'system_power_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'system_power_mode' field must be an unsigned integer in [0, 255]"
        self._system_power_mode = value

    @property
    def found_target(self):
        """Message field 'found_target'."""
        return self._found_target

    @found_target.setter
    def found_target(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'found_target' field must be of type 'bool'"
        self._found_target = value

    @property
    def recommend_unconverge(self):
        """Message field 'recommend_unconverge'."""
        return self._recommend_unconverge

    @recommend_unconverge.setter
    def recommend_unconverge(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'recommend_unconverge' field must be of type 'bool'"
        self._recommend_unconverge = value

    @property
    def factory_align_status_1(self):
        """Message field 'factory_align_status_1'."""
        return self._factory_align_status_1

    @factory_align_status_1.setter
    def factory_align_status_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'factory_align_status_1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'factory_align_status_1' field must be an unsigned integer in [0, 255]"
        self._factory_align_status_1 = value

    @property
    def factory_align_status_2(self):
        """Message field 'factory_align_status_2'."""
        return self._factory_align_status_2

    @factory_align_status_2.setter
    def factory_align_status_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'factory_align_status_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'factory_align_status_2' field must be an unsigned integer in [0, 255]"
        self._factory_align_status_2 = value

    @property
    def factory_misalignment(self):
        """Message field 'factory_misalignment'."""
        return self._factory_misalignment

    @factory_misalignment.setter
    def factory_misalignment(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'factory_misalignment' field must be of type 'float'"
        self._factory_misalignment = value

    @property
    def serv_align_updates_done(self):
        """Message field 'serv_align_updates_done'."""
        return self._serv_align_updates_done

    @serv_align_updates_done.setter
    def serv_align_updates_done(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'serv_align_updates_done' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'serv_align_updates_done' field must be an unsigned integer in [0, 255]"
        self._serv_align_updates_done = value

    @property
    def vertical_misalignment(self):
        """Message field 'vertical_misalignment'."""
        return self._vertical_misalignment

    @vertical_misalignment.setter
    def vertical_misalignment(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical_misalignment' field must be of type 'float'"
        self._vertical_misalignment = value
