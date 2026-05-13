# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mobileye_560_660_msgs:msg/Ahbc.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Ahbc(type):
    """Metaclass of message 'Ahbc'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HIGH_LOW_BEAM_DECISION_NO_RECOMMENDATION': 0,
        'HIGH_LOW_BEAM_DECISION_RECOMMENDATION_OFF': 1,
        'HIGH_LOW_BEAM_DECISION_RECOMMENDATION_ON': 2,
        'HIGH_LOW_BEAM_DECISION_INVALID': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mobileye_560_660_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mobileye_560_660_msgs.msg.Ahbc')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ahbc
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ahbc
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ahbc
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ahbc
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ahbc

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HIGH_LOW_BEAM_DECISION_NO_RECOMMENDATION': cls.__constants['HIGH_LOW_BEAM_DECISION_NO_RECOMMENDATION'],
            'HIGH_LOW_BEAM_DECISION_RECOMMENDATION_OFF': cls.__constants['HIGH_LOW_BEAM_DECISION_RECOMMENDATION_OFF'],
            'HIGH_LOW_BEAM_DECISION_RECOMMENDATION_ON': cls.__constants['HIGH_LOW_BEAM_DECISION_RECOMMENDATION_ON'],
            'HIGH_LOW_BEAM_DECISION_INVALID': cls.__constants['HIGH_LOW_BEAM_DECISION_INVALID'],
        }

    @property
    def HIGH_LOW_BEAM_DECISION_NO_RECOMMENDATION(self):
        """Message constant 'HIGH_LOW_BEAM_DECISION_NO_RECOMMENDATION'."""
        return Metaclass_Ahbc.__constants['HIGH_LOW_BEAM_DECISION_NO_RECOMMENDATION']

    @property
    def HIGH_LOW_BEAM_DECISION_RECOMMENDATION_OFF(self):
        """Message constant 'HIGH_LOW_BEAM_DECISION_RECOMMENDATION_OFF'."""
        return Metaclass_Ahbc.__constants['HIGH_LOW_BEAM_DECISION_RECOMMENDATION_OFF']

    @property
    def HIGH_LOW_BEAM_DECISION_RECOMMENDATION_ON(self):
        """Message constant 'HIGH_LOW_BEAM_DECISION_RECOMMENDATION_ON'."""
        return Metaclass_Ahbc.__constants['HIGH_LOW_BEAM_DECISION_RECOMMENDATION_ON']

    @property
    def HIGH_LOW_BEAM_DECISION_INVALID(self):
        """Message constant 'HIGH_LOW_BEAM_DECISION_INVALID'."""
        return Metaclass_Ahbc.__constants['HIGH_LOW_BEAM_DECISION_INVALID']


class Ahbc(metaclass=Metaclass_Ahbc):
    """
    Message class 'Ahbc'.

    Constants:
      HIGH_LOW_BEAM_DECISION_NO_RECOMMENDATION
      HIGH_LOW_BEAM_DECISION_RECOMMENDATION_OFF
      HIGH_LOW_BEAM_DECISION_RECOMMENDATION_ON
      HIGH_LOW_BEAM_DECISION_INVALID
    """

    __slots__ = [
        '_header',
        '_high_low_beam_decision',
        '_reasons_for_switch_to_low_beam',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'high_low_beam_decision': 'uint8',
        'reasons_for_switch_to_low_beam': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.high_low_beam_decision = kwargs.get('high_low_beam_decision', int())
        self.reasons_for_switch_to_low_beam = kwargs.get('reasons_for_switch_to_low_beam', int())

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
        if self.high_low_beam_decision != other.high_low_beam_decision:
            return False
        if self.reasons_for_switch_to_low_beam != other.reasons_for_switch_to_low_beam:
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
    def high_low_beam_decision(self):
        """Message field 'high_low_beam_decision'."""
        return self._high_low_beam_decision

    @high_low_beam_decision.setter
    def high_low_beam_decision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'high_low_beam_decision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'high_low_beam_decision' field must be an unsigned integer in [0, 255]"
        self._high_low_beam_decision = value

    @property
    def reasons_for_switch_to_low_beam(self):
        """Message field 'reasons_for_switch_to_low_beam'."""
        return self._reasons_for_switch_to_low_beam

    @reasons_for_switch_to_low_beam.setter
    def reasons_for_switch_to_low_beam(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reasons_for_switch_to_low_beam' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reasons_for_switch_to_low_beam' field must be an unsigned integer in [0, 65535]"
        self._reasons_for_switch_to_low_beam = value
