# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neobotix_usboard_msgs:msg/Paraset.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Paraset(type):
    """Metaclass of message 'Paraset'."""

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
            module = import_type_support('neobotix_usboard_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'neobotix_usboard_msgs.msg.Paraset')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__paraset
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__paraset
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__paraset
            cls._TYPE_SUPPORT = module.type_support_msg__msg__paraset
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__paraset

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


class Paraset(metaclass=Metaclass_Paraset):
    """Message class 'Paraset'."""

    __slots__ = [
        '_header',
        '_command',
        '_set_num',
        '_paraset_byte54',
        '_paraset_byte53',
        '_paraset_byte52',
        '_paraset_byte51',
        '_paraset_byte50',
        '_paraset_byte49',
        '_paraset_byte48',
        '_paraset_byte47',
        '_paraset_byte46',
        '_paraset_byte45',
        '_paraset_byte44',
        '_paraset_byte43',
        '_paraset_byte42',
        '_paraset_byte41',
        '_paraset_byte40',
        '_paraset_byte39',
        '_paraset_byte38',
        '_paraset_byte37',
        '_paraset_byte36',
        '_paraset_byte35',
        '_paraset_byte34',
        '_paraset_byte33',
        '_paraset_byte32',
        '_paraset_byte31',
        '_paraset_byte30',
        '_paraset_byte29',
        '_paraset_byte28',
        '_paraset_byte27',
        '_paraset_byte26',
        '_paraset_byte25',
        '_paraset_byte24',
        '_paraset_byte23',
        '_paraset_byte22',
        '_paraset_byte21',
        '_paraset_byte20',
        '_paraset_byte19',
        '_paraset_byte18',
        '_paraset_byte17',
        '_paraset_byte16',
        '_paraset_byte15',
        '_paraset_byte14',
        '_paraset_byte13',
        '_paraset_byte12',
        '_paraset_byte11',
        '_paraset_byte10',
        '_paraset_byte9',
        '_paraset_byte8',
        '_paraset_byte7',
        '_paraset_byte6',
        '_paraset_byte5',
        '_paraset_byte4',
        '_paraset_byte3',
        '_paraset_byte2',
        '_paraset_byte1',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'command': 'uint8',
        'set_num': 'uint8',
        'paraset_byte54': 'uint8',
        'paraset_byte53': 'uint8',
        'paraset_byte52': 'uint8',
        'paraset_byte51': 'uint8',
        'paraset_byte50': 'uint8',
        'paraset_byte49': 'uint8',
        'paraset_byte48': 'uint8',
        'paraset_byte47': 'uint8',
        'paraset_byte46': 'uint8',
        'paraset_byte45': 'uint8',
        'paraset_byte44': 'uint8',
        'paraset_byte43': 'uint8',
        'paraset_byte42': 'uint8',
        'paraset_byte41': 'uint8',
        'paraset_byte40': 'uint8',
        'paraset_byte39': 'uint8',
        'paraset_byte38': 'uint8',
        'paraset_byte37': 'uint8',
        'paraset_byte36': 'uint8',
        'paraset_byte35': 'uint8',
        'paraset_byte34': 'uint8',
        'paraset_byte33': 'uint8',
        'paraset_byte32': 'uint8',
        'paraset_byte31': 'uint8',
        'paraset_byte30': 'uint8',
        'paraset_byte29': 'uint8',
        'paraset_byte28': 'uint8',
        'paraset_byte27': 'uint8',
        'paraset_byte26': 'uint8',
        'paraset_byte25': 'uint8',
        'paraset_byte24': 'uint8',
        'paraset_byte23': 'uint8',
        'paraset_byte22': 'uint8',
        'paraset_byte21': 'uint8',
        'paraset_byte20': 'uint8',
        'paraset_byte19': 'uint8',
        'paraset_byte18': 'uint8',
        'paraset_byte17': 'uint8',
        'paraset_byte16': 'uint8',
        'paraset_byte15': 'uint8',
        'paraset_byte14': 'uint8',
        'paraset_byte13': 'uint8',
        'paraset_byte12': 'uint8',
        'paraset_byte11': 'uint8',
        'paraset_byte10': 'uint8',
        'paraset_byte9': 'uint8',
        'paraset_byte8': 'uint8',
        'paraset_byte7': 'uint8',
        'paraset_byte6': 'uint8',
        'paraset_byte5': 'uint8',
        'paraset_byte4': 'uint8',
        'paraset_byte3': 'uint8',
        'paraset_byte2': 'uint8',
        'paraset_byte1': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.command = kwargs.get('command', int())
        self.set_num = kwargs.get('set_num', int())
        self.paraset_byte54 = kwargs.get('paraset_byte54', int())
        self.paraset_byte53 = kwargs.get('paraset_byte53', int())
        self.paraset_byte52 = kwargs.get('paraset_byte52', int())
        self.paraset_byte51 = kwargs.get('paraset_byte51', int())
        self.paraset_byte50 = kwargs.get('paraset_byte50', int())
        self.paraset_byte49 = kwargs.get('paraset_byte49', int())
        self.paraset_byte48 = kwargs.get('paraset_byte48', int())
        self.paraset_byte47 = kwargs.get('paraset_byte47', int())
        self.paraset_byte46 = kwargs.get('paraset_byte46', int())
        self.paraset_byte45 = kwargs.get('paraset_byte45', int())
        self.paraset_byte44 = kwargs.get('paraset_byte44', int())
        self.paraset_byte43 = kwargs.get('paraset_byte43', int())
        self.paraset_byte42 = kwargs.get('paraset_byte42', int())
        self.paraset_byte41 = kwargs.get('paraset_byte41', int())
        self.paraset_byte40 = kwargs.get('paraset_byte40', int())
        self.paraset_byte39 = kwargs.get('paraset_byte39', int())
        self.paraset_byte38 = kwargs.get('paraset_byte38', int())
        self.paraset_byte37 = kwargs.get('paraset_byte37', int())
        self.paraset_byte36 = kwargs.get('paraset_byte36', int())
        self.paraset_byte35 = kwargs.get('paraset_byte35', int())
        self.paraset_byte34 = kwargs.get('paraset_byte34', int())
        self.paraset_byte33 = kwargs.get('paraset_byte33', int())
        self.paraset_byte32 = kwargs.get('paraset_byte32', int())
        self.paraset_byte31 = kwargs.get('paraset_byte31', int())
        self.paraset_byte30 = kwargs.get('paraset_byte30', int())
        self.paraset_byte29 = kwargs.get('paraset_byte29', int())
        self.paraset_byte28 = kwargs.get('paraset_byte28', int())
        self.paraset_byte27 = kwargs.get('paraset_byte27', int())
        self.paraset_byte26 = kwargs.get('paraset_byte26', int())
        self.paraset_byte25 = kwargs.get('paraset_byte25', int())
        self.paraset_byte24 = kwargs.get('paraset_byte24', int())
        self.paraset_byte23 = kwargs.get('paraset_byte23', int())
        self.paraset_byte22 = kwargs.get('paraset_byte22', int())
        self.paraset_byte21 = kwargs.get('paraset_byte21', int())
        self.paraset_byte20 = kwargs.get('paraset_byte20', int())
        self.paraset_byte19 = kwargs.get('paraset_byte19', int())
        self.paraset_byte18 = kwargs.get('paraset_byte18', int())
        self.paraset_byte17 = kwargs.get('paraset_byte17', int())
        self.paraset_byte16 = kwargs.get('paraset_byte16', int())
        self.paraset_byte15 = kwargs.get('paraset_byte15', int())
        self.paraset_byte14 = kwargs.get('paraset_byte14', int())
        self.paraset_byte13 = kwargs.get('paraset_byte13', int())
        self.paraset_byte12 = kwargs.get('paraset_byte12', int())
        self.paraset_byte11 = kwargs.get('paraset_byte11', int())
        self.paraset_byte10 = kwargs.get('paraset_byte10', int())
        self.paraset_byte9 = kwargs.get('paraset_byte9', int())
        self.paraset_byte8 = kwargs.get('paraset_byte8', int())
        self.paraset_byte7 = kwargs.get('paraset_byte7', int())
        self.paraset_byte6 = kwargs.get('paraset_byte6', int())
        self.paraset_byte5 = kwargs.get('paraset_byte5', int())
        self.paraset_byte4 = kwargs.get('paraset_byte4', int())
        self.paraset_byte3 = kwargs.get('paraset_byte3', int())
        self.paraset_byte2 = kwargs.get('paraset_byte2', int())
        self.paraset_byte1 = kwargs.get('paraset_byte1', int())

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
        if self.command != other.command:
            return False
        if self.set_num != other.set_num:
            return False
        if self.paraset_byte54 != other.paraset_byte54:
            return False
        if self.paraset_byte53 != other.paraset_byte53:
            return False
        if self.paraset_byte52 != other.paraset_byte52:
            return False
        if self.paraset_byte51 != other.paraset_byte51:
            return False
        if self.paraset_byte50 != other.paraset_byte50:
            return False
        if self.paraset_byte49 != other.paraset_byte49:
            return False
        if self.paraset_byte48 != other.paraset_byte48:
            return False
        if self.paraset_byte47 != other.paraset_byte47:
            return False
        if self.paraset_byte46 != other.paraset_byte46:
            return False
        if self.paraset_byte45 != other.paraset_byte45:
            return False
        if self.paraset_byte44 != other.paraset_byte44:
            return False
        if self.paraset_byte43 != other.paraset_byte43:
            return False
        if self.paraset_byte42 != other.paraset_byte42:
            return False
        if self.paraset_byte41 != other.paraset_byte41:
            return False
        if self.paraset_byte40 != other.paraset_byte40:
            return False
        if self.paraset_byte39 != other.paraset_byte39:
            return False
        if self.paraset_byte38 != other.paraset_byte38:
            return False
        if self.paraset_byte37 != other.paraset_byte37:
            return False
        if self.paraset_byte36 != other.paraset_byte36:
            return False
        if self.paraset_byte35 != other.paraset_byte35:
            return False
        if self.paraset_byte34 != other.paraset_byte34:
            return False
        if self.paraset_byte33 != other.paraset_byte33:
            return False
        if self.paraset_byte32 != other.paraset_byte32:
            return False
        if self.paraset_byte31 != other.paraset_byte31:
            return False
        if self.paraset_byte30 != other.paraset_byte30:
            return False
        if self.paraset_byte29 != other.paraset_byte29:
            return False
        if self.paraset_byte28 != other.paraset_byte28:
            return False
        if self.paraset_byte27 != other.paraset_byte27:
            return False
        if self.paraset_byte26 != other.paraset_byte26:
            return False
        if self.paraset_byte25 != other.paraset_byte25:
            return False
        if self.paraset_byte24 != other.paraset_byte24:
            return False
        if self.paraset_byte23 != other.paraset_byte23:
            return False
        if self.paraset_byte22 != other.paraset_byte22:
            return False
        if self.paraset_byte21 != other.paraset_byte21:
            return False
        if self.paraset_byte20 != other.paraset_byte20:
            return False
        if self.paraset_byte19 != other.paraset_byte19:
            return False
        if self.paraset_byte18 != other.paraset_byte18:
            return False
        if self.paraset_byte17 != other.paraset_byte17:
            return False
        if self.paraset_byte16 != other.paraset_byte16:
            return False
        if self.paraset_byte15 != other.paraset_byte15:
            return False
        if self.paraset_byte14 != other.paraset_byte14:
            return False
        if self.paraset_byte13 != other.paraset_byte13:
            return False
        if self.paraset_byte12 != other.paraset_byte12:
            return False
        if self.paraset_byte11 != other.paraset_byte11:
            return False
        if self.paraset_byte10 != other.paraset_byte10:
            return False
        if self.paraset_byte9 != other.paraset_byte9:
            return False
        if self.paraset_byte8 != other.paraset_byte8:
            return False
        if self.paraset_byte7 != other.paraset_byte7:
            return False
        if self.paraset_byte6 != other.paraset_byte6:
            return False
        if self.paraset_byte5 != other.paraset_byte5:
            return False
        if self.paraset_byte4 != other.paraset_byte4:
            return False
        if self.paraset_byte3 != other.paraset_byte3:
            return False
        if self.paraset_byte2 != other.paraset_byte2:
            return False
        if self.paraset_byte1 != other.paraset_byte1:
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
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @property
    def set_num(self):
        """Message field 'set_num'."""
        return self._set_num

    @set_num.setter
    def set_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'set_num' field must be an unsigned integer in [0, 255]"
        self._set_num = value

    @property
    def paraset_byte54(self):
        """Message field 'paraset_byte54'."""
        return self._paraset_byte54

    @paraset_byte54.setter
    def paraset_byte54(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte54' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte54' field must be an unsigned integer in [0, 255]"
        self._paraset_byte54 = value

    @property
    def paraset_byte53(self):
        """Message field 'paraset_byte53'."""
        return self._paraset_byte53

    @paraset_byte53.setter
    def paraset_byte53(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte53' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte53' field must be an unsigned integer in [0, 255]"
        self._paraset_byte53 = value

    @property
    def paraset_byte52(self):
        """Message field 'paraset_byte52'."""
        return self._paraset_byte52

    @paraset_byte52.setter
    def paraset_byte52(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte52' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte52' field must be an unsigned integer in [0, 255]"
        self._paraset_byte52 = value

    @property
    def paraset_byte51(self):
        """Message field 'paraset_byte51'."""
        return self._paraset_byte51

    @paraset_byte51.setter
    def paraset_byte51(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte51' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte51' field must be an unsigned integer in [0, 255]"
        self._paraset_byte51 = value

    @property
    def paraset_byte50(self):
        """Message field 'paraset_byte50'."""
        return self._paraset_byte50

    @paraset_byte50.setter
    def paraset_byte50(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte50' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte50' field must be an unsigned integer in [0, 255]"
        self._paraset_byte50 = value

    @property
    def paraset_byte49(self):
        """Message field 'paraset_byte49'."""
        return self._paraset_byte49

    @paraset_byte49.setter
    def paraset_byte49(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte49' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte49' field must be an unsigned integer in [0, 255]"
        self._paraset_byte49 = value

    @property
    def paraset_byte48(self):
        """Message field 'paraset_byte48'."""
        return self._paraset_byte48

    @paraset_byte48.setter
    def paraset_byte48(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte48' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte48' field must be an unsigned integer in [0, 255]"
        self._paraset_byte48 = value

    @property
    def paraset_byte47(self):
        """Message field 'paraset_byte47'."""
        return self._paraset_byte47

    @paraset_byte47.setter
    def paraset_byte47(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte47' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte47' field must be an unsigned integer in [0, 255]"
        self._paraset_byte47 = value

    @property
    def paraset_byte46(self):
        """Message field 'paraset_byte46'."""
        return self._paraset_byte46

    @paraset_byte46.setter
    def paraset_byte46(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte46' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte46' field must be an unsigned integer in [0, 255]"
        self._paraset_byte46 = value

    @property
    def paraset_byte45(self):
        """Message field 'paraset_byte45'."""
        return self._paraset_byte45

    @paraset_byte45.setter
    def paraset_byte45(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte45' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte45' field must be an unsigned integer in [0, 255]"
        self._paraset_byte45 = value

    @property
    def paraset_byte44(self):
        """Message field 'paraset_byte44'."""
        return self._paraset_byte44

    @paraset_byte44.setter
    def paraset_byte44(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte44' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte44' field must be an unsigned integer in [0, 255]"
        self._paraset_byte44 = value

    @property
    def paraset_byte43(self):
        """Message field 'paraset_byte43'."""
        return self._paraset_byte43

    @paraset_byte43.setter
    def paraset_byte43(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte43' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte43' field must be an unsigned integer in [0, 255]"
        self._paraset_byte43 = value

    @property
    def paraset_byte42(self):
        """Message field 'paraset_byte42'."""
        return self._paraset_byte42

    @paraset_byte42.setter
    def paraset_byte42(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte42' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte42' field must be an unsigned integer in [0, 255]"
        self._paraset_byte42 = value

    @property
    def paraset_byte41(self):
        """Message field 'paraset_byte41'."""
        return self._paraset_byte41

    @paraset_byte41.setter
    def paraset_byte41(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte41' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte41' field must be an unsigned integer in [0, 255]"
        self._paraset_byte41 = value

    @property
    def paraset_byte40(self):
        """Message field 'paraset_byte40'."""
        return self._paraset_byte40

    @paraset_byte40.setter
    def paraset_byte40(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte40' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte40' field must be an unsigned integer in [0, 255]"
        self._paraset_byte40 = value

    @property
    def paraset_byte39(self):
        """Message field 'paraset_byte39'."""
        return self._paraset_byte39

    @paraset_byte39.setter
    def paraset_byte39(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte39' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte39' field must be an unsigned integer in [0, 255]"
        self._paraset_byte39 = value

    @property
    def paraset_byte38(self):
        """Message field 'paraset_byte38'."""
        return self._paraset_byte38

    @paraset_byte38.setter
    def paraset_byte38(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte38' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte38' field must be an unsigned integer in [0, 255]"
        self._paraset_byte38 = value

    @property
    def paraset_byte37(self):
        """Message field 'paraset_byte37'."""
        return self._paraset_byte37

    @paraset_byte37.setter
    def paraset_byte37(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte37' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte37' field must be an unsigned integer in [0, 255]"
        self._paraset_byte37 = value

    @property
    def paraset_byte36(self):
        """Message field 'paraset_byte36'."""
        return self._paraset_byte36

    @paraset_byte36.setter
    def paraset_byte36(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte36' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte36' field must be an unsigned integer in [0, 255]"
        self._paraset_byte36 = value

    @property
    def paraset_byte35(self):
        """Message field 'paraset_byte35'."""
        return self._paraset_byte35

    @paraset_byte35.setter
    def paraset_byte35(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte35' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte35' field must be an unsigned integer in [0, 255]"
        self._paraset_byte35 = value

    @property
    def paraset_byte34(self):
        """Message field 'paraset_byte34'."""
        return self._paraset_byte34

    @paraset_byte34.setter
    def paraset_byte34(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte34' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte34' field must be an unsigned integer in [0, 255]"
        self._paraset_byte34 = value

    @property
    def paraset_byte33(self):
        """Message field 'paraset_byte33'."""
        return self._paraset_byte33

    @paraset_byte33.setter
    def paraset_byte33(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte33' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte33' field must be an unsigned integer in [0, 255]"
        self._paraset_byte33 = value

    @property
    def paraset_byte32(self):
        """Message field 'paraset_byte32'."""
        return self._paraset_byte32

    @paraset_byte32.setter
    def paraset_byte32(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte32' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte32' field must be an unsigned integer in [0, 255]"
        self._paraset_byte32 = value

    @property
    def paraset_byte31(self):
        """Message field 'paraset_byte31'."""
        return self._paraset_byte31

    @paraset_byte31.setter
    def paraset_byte31(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte31' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte31' field must be an unsigned integer in [0, 255]"
        self._paraset_byte31 = value

    @property
    def paraset_byte30(self):
        """Message field 'paraset_byte30'."""
        return self._paraset_byte30

    @paraset_byte30.setter
    def paraset_byte30(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte30' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte30' field must be an unsigned integer in [0, 255]"
        self._paraset_byte30 = value

    @property
    def paraset_byte29(self):
        """Message field 'paraset_byte29'."""
        return self._paraset_byte29

    @paraset_byte29.setter
    def paraset_byte29(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte29' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte29' field must be an unsigned integer in [0, 255]"
        self._paraset_byte29 = value

    @property
    def paraset_byte28(self):
        """Message field 'paraset_byte28'."""
        return self._paraset_byte28

    @paraset_byte28.setter
    def paraset_byte28(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte28' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte28' field must be an unsigned integer in [0, 255]"
        self._paraset_byte28 = value

    @property
    def paraset_byte27(self):
        """Message field 'paraset_byte27'."""
        return self._paraset_byte27

    @paraset_byte27.setter
    def paraset_byte27(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte27' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte27' field must be an unsigned integer in [0, 255]"
        self._paraset_byte27 = value

    @property
    def paraset_byte26(self):
        """Message field 'paraset_byte26'."""
        return self._paraset_byte26

    @paraset_byte26.setter
    def paraset_byte26(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte26' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte26' field must be an unsigned integer in [0, 255]"
        self._paraset_byte26 = value

    @property
    def paraset_byte25(self):
        """Message field 'paraset_byte25'."""
        return self._paraset_byte25

    @paraset_byte25.setter
    def paraset_byte25(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte25' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte25' field must be an unsigned integer in [0, 255]"
        self._paraset_byte25 = value

    @property
    def paraset_byte24(self):
        """Message field 'paraset_byte24'."""
        return self._paraset_byte24

    @paraset_byte24.setter
    def paraset_byte24(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte24' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte24' field must be an unsigned integer in [0, 255]"
        self._paraset_byte24 = value

    @property
    def paraset_byte23(self):
        """Message field 'paraset_byte23'."""
        return self._paraset_byte23

    @paraset_byte23.setter
    def paraset_byte23(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte23' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte23' field must be an unsigned integer in [0, 255]"
        self._paraset_byte23 = value

    @property
    def paraset_byte22(self):
        """Message field 'paraset_byte22'."""
        return self._paraset_byte22

    @paraset_byte22.setter
    def paraset_byte22(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte22' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte22' field must be an unsigned integer in [0, 255]"
        self._paraset_byte22 = value

    @property
    def paraset_byte21(self):
        """Message field 'paraset_byte21'."""
        return self._paraset_byte21

    @paraset_byte21.setter
    def paraset_byte21(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte21' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte21' field must be an unsigned integer in [0, 255]"
        self._paraset_byte21 = value

    @property
    def paraset_byte20(self):
        """Message field 'paraset_byte20'."""
        return self._paraset_byte20

    @paraset_byte20.setter
    def paraset_byte20(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte20' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte20' field must be an unsigned integer in [0, 255]"
        self._paraset_byte20 = value

    @property
    def paraset_byte19(self):
        """Message field 'paraset_byte19'."""
        return self._paraset_byte19

    @paraset_byte19.setter
    def paraset_byte19(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte19' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte19' field must be an unsigned integer in [0, 255]"
        self._paraset_byte19 = value

    @property
    def paraset_byte18(self):
        """Message field 'paraset_byte18'."""
        return self._paraset_byte18

    @paraset_byte18.setter
    def paraset_byte18(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte18' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte18' field must be an unsigned integer in [0, 255]"
        self._paraset_byte18 = value

    @property
    def paraset_byte17(self):
        """Message field 'paraset_byte17'."""
        return self._paraset_byte17

    @paraset_byte17.setter
    def paraset_byte17(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte17' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte17' field must be an unsigned integer in [0, 255]"
        self._paraset_byte17 = value

    @property
    def paraset_byte16(self):
        """Message field 'paraset_byte16'."""
        return self._paraset_byte16

    @paraset_byte16.setter
    def paraset_byte16(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte16' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte16' field must be an unsigned integer in [0, 255]"
        self._paraset_byte16 = value

    @property
    def paraset_byte15(self):
        """Message field 'paraset_byte15'."""
        return self._paraset_byte15

    @paraset_byte15.setter
    def paraset_byte15(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte15' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte15' field must be an unsigned integer in [0, 255]"
        self._paraset_byte15 = value

    @property
    def paraset_byte14(self):
        """Message field 'paraset_byte14'."""
        return self._paraset_byte14

    @paraset_byte14.setter
    def paraset_byte14(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte14' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte14' field must be an unsigned integer in [0, 255]"
        self._paraset_byte14 = value

    @property
    def paraset_byte13(self):
        """Message field 'paraset_byte13'."""
        return self._paraset_byte13

    @paraset_byte13.setter
    def paraset_byte13(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte13' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte13' field must be an unsigned integer in [0, 255]"
        self._paraset_byte13 = value

    @property
    def paraset_byte12(self):
        """Message field 'paraset_byte12'."""
        return self._paraset_byte12

    @paraset_byte12.setter
    def paraset_byte12(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte12' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte12' field must be an unsigned integer in [0, 255]"
        self._paraset_byte12 = value

    @property
    def paraset_byte11(self):
        """Message field 'paraset_byte11'."""
        return self._paraset_byte11

    @paraset_byte11.setter
    def paraset_byte11(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte11' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte11' field must be an unsigned integer in [0, 255]"
        self._paraset_byte11 = value

    @property
    def paraset_byte10(self):
        """Message field 'paraset_byte10'."""
        return self._paraset_byte10

    @paraset_byte10.setter
    def paraset_byte10(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte10' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte10' field must be an unsigned integer in [0, 255]"
        self._paraset_byte10 = value

    @property
    def paraset_byte9(self):
        """Message field 'paraset_byte9'."""
        return self._paraset_byte9

    @paraset_byte9.setter
    def paraset_byte9(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte9' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte9' field must be an unsigned integer in [0, 255]"
        self._paraset_byte9 = value

    @property
    def paraset_byte8(self):
        """Message field 'paraset_byte8'."""
        return self._paraset_byte8

    @paraset_byte8.setter
    def paraset_byte8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte8' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte8' field must be an unsigned integer in [0, 255]"
        self._paraset_byte8 = value

    @property
    def paraset_byte7(self):
        """Message field 'paraset_byte7'."""
        return self._paraset_byte7

    @paraset_byte7.setter
    def paraset_byte7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte7' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte7' field must be an unsigned integer in [0, 255]"
        self._paraset_byte7 = value

    @property
    def paraset_byte6(self):
        """Message field 'paraset_byte6'."""
        return self._paraset_byte6

    @paraset_byte6.setter
    def paraset_byte6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte6' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte6' field must be an unsigned integer in [0, 255]"
        self._paraset_byte6 = value

    @property
    def paraset_byte5(self):
        """Message field 'paraset_byte5'."""
        return self._paraset_byte5

    @paraset_byte5.setter
    def paraset_byte5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte5' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte5' field must be an unsigned integer in [0, 255]"
        self._paraset_byte5 = value

    @property
    def paraset_byte4(self):
        """Message field 'paraset_byte4'."""
        return self._paraset_byte4

    @paraset_byte4.setter
    def paraset_byte4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte4' field must be an unsigned integer in [0, 255]"
        self._paraset_byte4 = value

    @property
    def paraset_byte3(self):
        """Message field 'paraset_byte3'."""
        return self._paraset_byte3

    @paraset_byte3.setter
    def paraset_byte3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte3' field must be an unsigned integer in [0, 255]"
        self._paraset_byte3 = value

    @property
    def paraset_byte2(self):
        """Message field 'paraset_byte2'."""
        return self._paraset_byte2

    @paraset_byte2.setter
    def paraset_byte2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte2' field must be an unsigned integer in [0, 255]"
        self._paraset_byte2 = value

    @property
    def paraset_byte1(self):
        """Message field 'paraset_byte1'."""
        return self._paraset_byte1

    @paraset_byte1.setter
    def paraset_byte1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_byte1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_byte1' field must be an unsigned integer in [0, 255]"
        self._paraset_byte1 = value
