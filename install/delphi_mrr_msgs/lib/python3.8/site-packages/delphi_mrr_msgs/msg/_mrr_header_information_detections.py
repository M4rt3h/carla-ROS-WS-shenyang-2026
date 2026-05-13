# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_mrr_msgs:msg/MrrHeaderInformationDetections.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrrHeaderInformationDetections(type):
    """Metaclass of message 'MrrHeaderInformationDetections'."""

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
                'delphi_mrr_msgs.msg.MrrHeaderInformationDetections')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrr_header_information_detections
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrr_header_information_detections
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrr_header_information_detections
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrr_header_information_detections
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrr_header_information_detections

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


class MrrHeaderInformationDetections(metaclass=Metaclass_MrrHeaderInformationDetections):
    """Message class 'MrrHeaderInformationDetections'."""

    __slots__ = [
        '_header',
        '_can_align_updates_done',
        '_can_scan_index',
        '_can_number_of_det',
        '_can_look_id',
        '_can_look_index',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'can_align_updates_done': 'uint16',
        'can_scan_index': 'uint16',
        'can_number_of_det': 'uint8',
        'can_look_id': 'uint8',
        'can_look_index': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.can_align_updates_done = kwargs.get('can_align_updates_done', int())
        self.can_scan_index = kwargs.get('can_scan_index', int())
        self.can_number_of_det = kwargs.get('can_number_of_det', int())
        self.can_look_id = kwargs.get('can_look_id', int())
        self.can_look_index = kwargs.get('can_look_index', int())

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
        if self.can_align_updates_done != other.can_align_updates_done:
            return False
        if self.can_scan_index != other.can_scan_index:
            return False
        if self.can_number_of_det != other.can_number_of_det:
            return False
        if self.can_look_id != other.can_look_id:
            return False
        if self.can_look_index != other.can_look_index:
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
    def can_align_updates_done(self):
        """Message field 'can_align_updates_done'."""
        return self._can_align_updates_done

    @can_align_updates_done.setter
    def can_align_updates_done(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_align_updates_done' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_align_updates_done' field must be an unsigned integer in [0, 65535]"
        self._can_align_updates_done = value

    @property
    def can_scan_index(self):
        """Message field 'can_scan_index'."""
        return self._can_scan_index

    @can_scan_index.setter
    def can_scan_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_scan_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_scan_index' field must be an unsigned integer in [0, 65535]"
        self._can_scan_index = value

    @property
    def can_number_of_det(self):
        """Message field 'can_number_of_det'."""
        return self._can_number_of_det

    @can_number_of_det.setter
    def can_number_of_det(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_number_of_det' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_number_of_det' field must be an unsigned integer in [0, 255]"
        self._can_number_of_det = value

    @property
    def can_look_id(self):
        """Message field 'can_look_id'."""
        return self._can_look_id

    @can_look_id.setter
    def can_look_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_look_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_look_id' field must be an unsigned integer in [0, 255]"
        self._can_look_id = value

    @property
    def can_look_index(self):
        """Message field 'can_look_index'."""
        return self._can_look_index

    @can_look_index.setter
    def can_look_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_look_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'can_look_index' field must be an unsigned integer in [0, 65535]"
        self._can_look_index = value
