# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kartech_linear_actuator_msgs:msg/ReportIndex.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReportIndex(type):
    """Metaclass of message 'ReportIndex'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POSITION_REPORT_INDEX': 128,
        'MOTOR_CURRENT_REPORT_INDEX': 129,
        'ENHANCED_POSITION_REPORT_INDEX': 152,
        'UNIQUE_DEVICE_ID_REPORTS_INDEX': 167,
        'SOFTWARE_REVISION_REPORT_INDEX': 229,
        'ZEROING_MESSAGE_REPORT_INDEX': 238,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('kartech_linear_actuator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kartech_linear_actuator_msgs.msg.ReportIndex')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__report_index
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__report_index
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__report_index
            cls._TYPE_SUPPORT = module.type_support_msg__msg__report_index
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__report_index

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POSITION_REPORT_INDEX': cls.__constants['POSITION_REPORT_INDEX'],
            'MOTOR_CURRENT_REPORT_INDEX': cls.__constants['MOTOR_CURRENT_REPORT_INDEX'],
            'ENHANCED_POSITION_REPORT_INDEX': cls.__constants['ENHANCED_POSITION_REPORT_INDEX'],
            'UNIQUE_DEVICE_ID_REPORTS_INDEX': cls.__constants['UNIQUE_DEVICE_ID_REPORTS_INDEX'],
            'SOFTWARE_REVISION_REPORT_INDEX': cls.__constants['SOFTWARE_REVISION_REPORT_INDEX'],
            'ZEROING_MESSAGE_REPORT_INDEX': cls.__constants['ZEROING_MESSAGE_REPORT_INDEX'],
        }

    @property
    def POSITION_REPORT_INDEX(self):
        """Message constant 'POSITION_REPORT_INDEX'."""
        return Metaclass_ReportIndex.__constants['POSITION_REPORT_INDEX']

    @property
    def MOTOR_CURRENT_REPORT_INDEX(self):
        """Message constant 'MOTOR_CURRENT_REPORT_INDEX'."""
        return Metaclass_ReportIndex.__constants['MOTOR_CURRENT_REPORT_INDEX']

    @property
    def ENHANCED_POSITION_REPORT_INDEX(self):
        """Message constant 'ENHANCED_POSITION_REPORT_INDEX'."""
        return Metaclass_ReportIndex.__constants['ENHANCED_POSITION_REPORT_INDEX']

    @property
    def UNIQUE_DEVICE_ID_REPORTS_INDEX(self):
        """Message constant 'UNIQUE_DEVICE_ID_REPORTS_INDEX'."""
        return Metaclass_ReportIndex.__constants['UNIQUE_DEVICE_ID_REPORTS_INDEX']

    @property
    def SOFTWARE_REVISION_REPORT_INDEX(self):
        """Message constant 'SOFTWARE_REVISION_REPORT_INDEX'."""
        return Metaclass_ReportIndex.__constants['SOFTWARE_REVISION_REPORT_INDEX']

    @property
    def ZEROING_MESSAGE_REPORT_INDEX(self):
        """Message constant 'ZEROING_MESSAGE_REPORT_INDEX'."""
        return Metaclass_ReportIndex.__constants['ZEROING_MESSAGE_REPORT_INDEX']


class ReportIndex(metaclass=Metaclass_ReportIndex):
    """
    Message class 'ReportIndex'.

    Constants:
      POSITION_REPORT_INDEX
      MOTOR_CURRENT_REPORT_INDEX
      ENHANCED_POSITION_REPORT_INDEX
      UNIQUE_DEVICE_ID_REPORTS_INDEX
      SOFTWARE_REVISION_REPORT_INDEX
      ZEROING_MESSAGE_REPORT_INDEX
    """

    __slots__ = [
        '_report_index',
    ]

    _fields_and_field_types = {
        'report_index': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.report_index = kwargs.get('report_index', int())

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
        if self.report_index != other.report_index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def report_index(self):
        """Message field 'report_index'."""
        return self._report_index

    @report_index.setter
    def report_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'report_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'report_index' field must be an unsigned integer in [0, 255]"
        self._report_index = value
