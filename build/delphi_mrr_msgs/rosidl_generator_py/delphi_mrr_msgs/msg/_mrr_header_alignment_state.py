# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/MrrHeaderAlignmentState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrrHeaderAlignmentState(type):
    """Metaclass of message 'MrrHeaderAlignmentState'."""

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
                'delphi_mrr_msgs.msg.MrrHeaderAlignmentState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrr_header_alignment_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrr_header_alignment_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrr_header_alignment_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrr_header_alignment_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrr_header_alignment_state

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


class MrrHeaderAlignmentState(metaclass=Metaclass_MrrHeaderAlignmentState):
    """Message class 'MrrHeaderAlignmentState'."""

    __slots__ = [
        '_header',
        '_can_auto_align_hangle_qf',
        '_can_alignment_status',
        '_can_alignment_state',
        '_can_auto_align_hangle_ref',
        '_can_auto_align_hangle',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_auto_align_hangle_qf': 'uint8',
        'can_alignment_status': 'uint8',
        'can_alignment_state': 'uint8',
        'can_auto_align_hangle_ref': 'float',
        'can_auto_align_hangle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.can_auto_align_hangle_qf = kwargs.get('can_auto_align_hangle_qf', int())
        self.can_alignment_status = kwargs.get('can_alignment_status', int())
        self.can_alignment_state = kwargs.get('can_alignment_state', int())
        self.can_auto_align_hangle_ref = kwargs.get('can_auto_align_hangle_ref', float())
        self.can_auto_align_hangle = kwargs.get('can_auto_align_hangle', float())

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
        if self.can_auto_align_hangle_qf != other.can_auto_align_hangle_qf:
            return False
        if self.can_alignment_status != other.can_alignment_status:
            return False
        if self.can_alignment_state != other.can_alignment_state:
            return False
        if self.can_auto_align_hangle_ref != other.can_auto_align_hangle_ref:
            return False
        if self.can_auto_align_hangle != other.can_auto_align_hangle:
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
    def can_auto_align_hangle_qf(self):
        """Message field 'can_auto_align_hangle_qf'."""
        return self._can_auto_align_hangle_qf

    @can_auto_align_hangle_qf.setter
    def can_auto_align_hangle_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_auto_align_hangle_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_auto_align_hangle_qf' field must be an unsigned integer in [0, 255]"
        self._can_auto_align_hangle_qf = value

    @property
    def can_alignment_status(self):
        """Message field 'can_alignment_status'."""
        return self._can_alignment_status

    @can_alignment_status.setter
    def can_alignment_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_alignment_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_alignment_status' field must be an unsigned integer in [0, 255]"
        self._can_alignment_status = value

    @property
    def can_alignment_state(self):
        """Message field 'can_alignment_state'."""
        return self._can_alignment_state

    @can_alignment_state.setter
    def can_alignment_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_alignment_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_alignment_state' field must be an unsigned integer in [0, 255]"
        self._can_alignment_state = value

    @property
    def can_auto_align_hangle_ref(self):
        """Message field 'can_auto_align_hangle_ref'."""
        return self._can_auto_align_hangle_ref

    @can_auto_align_hangle_ref.setter
    def can_auto_align_hangle_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_auto_align_hangle_ref' field must be of type 'float'"
        self._can_auto_align_hangle_ref = value

    @property
    def can_auto_align_hangle(self):
        """Message field 'can_auto_align_hangle'."""
        return self._can_auto_align_hangle

    @can_auto_align_hangle.setter
    def can_auto_align_hangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_auto_align_hangle' field must be of type 'float'"
        self._can_auto_align_hangle = value
