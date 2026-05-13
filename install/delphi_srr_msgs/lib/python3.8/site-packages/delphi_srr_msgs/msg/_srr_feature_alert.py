# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_srr_msgs:msg/SrrFeatureAlert.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SrrFeatureAlert(type):
    """Metaclass of message 'SrrFeatureAlert'."""

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
                'delphi_srr_msgs.msg.SrrFeatureAlert')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__srr_feature_alert
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__srr_feature_alert
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__srr_feature_alert
            cls._TYPE_SUPPORT = module.type_support_msg__msg__srr_feature_alert
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__srr_feature_alert

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


class SrrFeatureAlert(metaclass=Metaclass_SrrFeatureAlert):
    """Message class 'SrrFeatureAlert'."""

    __slots__ = [
        '_header',
        '_lcma_blis_ignored_track_id',
        '_lcma_blis_track_id',
        '_lcma_cvw_ttc',
        '_cta_ttc_alert',
        '_cta_selected_track_ttc',
        '_cta_selected_track',
        '_cta_alert',
        '_cta_active',
        '_lcma_cvw_cipv',
        '_lcma_cvw_alert_state',
        '_lcma_blis_alert_state',
        '_lcma_active',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'lcma_blis_ignored_track_id': 'uint8',
        'lcma_blis_track_id': 'uint8',
        'lcma_cvw_ttc': 'float',
        'cta_ttc_alert': 'boolean',
        'cta_selected_track_ttc': 'float',
        'cta_selected_track': 'uint16',
        'cta_alert': 'uint8',
        'cta_active': 'boolean',
        'lcma_cvw_cipv': 'uint8',
        'lcma_cvw_alert_state': 'uint8',
        'lcma_blis_alert_state': 'uint8',
        'lcma_active': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.lcma_blis_ignored_track_id = kwargs.get('lcma_blis_ignored_track_id', int())
        self.lcma_blis_track_id = kwargs.get('lcma_blis_track_id', int())
        self.lcma_cvw_ttc = kwargs.get('lcma_cvw_ttc', float())
        self.cta_ttc_alert = kwargs.get('cta_ttc_alert', bool())
        self.cta_selected_track_ttc = kwargs.get('cta_selected_track_ttc', float())
        self.cta_selected_track = kwargs.get('cta_selected_track', int())
        self.cta_alert = kwargs.get('cta_alert', int())
        self.cta_active = kwargs.get('cta_active', bool())
        self.lcma_cvw_cipv = kwargs.get('lcma_cvw_cipv', int())
        self.lcma_cvw_alert_state = kwargs.get('lcma_cvw_alert_state', int())
        self.lcma_blis_alert_state = kwargs.get('lcma_blis_alert_state', int())
        self.lcma_active = kwargs.get('lcma_active', bool())

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
        if self.lcma_blis_ignored_track_id != other.lcma_blis_ignored_track_id:
            return False
        if self.lcma_blis_track_id != other.lcma_blis_track_id:
            return False
        if self.lcma_cvw_ttc != other.lcma_cvw_ttc:
            return False
        if self.cta_ttc_alert != other.cta_ttc_alert:
            return False
        if self.cta_selected_track_ttc != other.cta_selected_track_ttc:
            return False
        if self.cta_selected_track != other.cta_selected_track:
            return False
        if self.cta_alert != other.cta_alert:
            return False
        if self.cta_active != other.cta_active:
            return False
        if self.lcma_cvw_cipv != other.lcma_cvw_cipv:
            return False
        if self.lcma_cvw_alert_state != other.lcma_cvw_alert_state:
            return False
        if self.lcma_blis_alert_state != other.lcma_blis_alert_state:
            return False
        if self.lcma_active != other.lcma_active:
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
    def lcma_blis_ignored_track_id(self):
        """Message field 'lcma_blis_ignored_track_id'."""
        return self._lcma_blis_ignored_track_id

    @lcma_blis_ignored_track_id.setter
    def lcma_blis_ignored_track_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lcma_blis_ignored_track_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lcma_blis_ignored_track_id' field must be an unsigned integer in [0, 255]"
        self._lcma_blis_ignored_track_id = value

    @property
    def lcma_blis_track_id(self):
        """Message field 'lcma_blis_track_id'."""
        return self._lcma_blis_track_id

    @lcma_blis_track_id.setter
    def lcma_blis_track_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lcma_blis_track_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lcma_blis_track_id' field must be an unsigned integer in [0, 255]"
        self._lcma_blis_track_id = value

    @property
    def lcma_cvw_ttc(self):
        """Message field 'lcma_cvw_ttc'."""
        return self._lcma_cvw_ttc

    @lcma_cvw_ttc.setter
    def lcma_cvw_ttc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lcma_cvw_ttc' field must be of type 'float'"
        self._lcma_cvw_ttc = value

    @property
    def cta_ttc_alert(self):
        """Message field 'cta_ttc_alert'."""
        return self._cta_ttc_alert

    @cta_ttc_alert.setter
    def cta_ttc_alert(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cta_ttc_alert' field must be of type 'bool'"
        self._cta_ttc_alert = value

    @property
    def cta_selected_track_ttc(self):
        """Message field 'cta_selected_track_ttc'."""
        return self._cta_selected_track_ttc

    @cta_selected_track_ttc.setter
    def cta_selected_track_ttc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cta_selected_track_ttc' field must be of type 'float'"
        self._cta_selected_track_ttc = value

    @property
    def cta_selected_track(self):
        """Message field 'cta_selected_track'."""
        return self._cta_selected_track

    @cta_selected_track.setter
    def cta_selected_track(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cta_selected_track' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cta_selected_track' field must be an unsigned integer in [0, 65535]"
        self._cta_selected_track = value

    @property
    def cta_alert(self):
        """Message field 'cta_alert'."""
        return self._cta_alert

    @cta_alert.setter
    def cta_alert(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cta_alert' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cta_alert' field must be an unsigned integer in [0, 255]"
        self._cta_alert = value

    @property
    def cta_active(self):
        """Message field 'cta_active'."""
        return self._cta_active

    @cta_active.setter
    def cta_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cta_active' field must be of type 'bool'"
        self._cta_active = value

    @property
    def lcma_cvw_cipv(self):
        """Message field 'lcma_cvw_cipv'."""
        return self._lcma_cvw_cipv

    @lcma_cvw_cipv.setter
    def lcma_cvw_cipv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lcma_cvw_cipv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lcma_cvw_cipv' field must be an unsigned integer in [0, 255]"
        self._lcma_cvw_cipv = value

    @property
    def lcma_cvw_alert_state(self):
        """Message field 'lcma_cvw_alert_state'."""
        return self._lcma_cvw_alert_state

    @lcma_cvw_alert_state.setter
    def lcma_cvw_alert_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lcma_cvw_alert_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lcma_cvw_alert_state' field must be an unsigned integer in [0, 255]"
        self._lcma_cvw_alert_state = value

    @property
    def lcma_blis_alert_state(self):
        """Message field 'lcma_blis_alert_state'."""
        return self._lcma_blis_alert_state

    @lcma_blis_alert_state.setter
    def lcma_blis_alert_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lcma_blis_alert_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lcma_blis_alert_state' field must be an unsigned integer in [0, 255]"
        self._lcma_blis_alert_state = value

    @property
    def lcma_active(self):
        """Message field 'lcma_active'."""
        return self._lcma_active

    @lcma_active.setter
    def lcma_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lcma_active' field must be of type 'bool'"
        self._lcma_active = value
