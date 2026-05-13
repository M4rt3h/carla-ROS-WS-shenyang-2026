# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mobileye_560_660_msgs:msg/Tsr.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tsr(type):
    """Metaclass of message 'Tsr'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SIGN_TYPE_REGULAR_10': 0,
        'SIGN_TYPE_REGULAR_20': 1,
        'SIGN_TYPE_REGULAR_30': 2,
        'SIGN_TYPE_REGULAR_40': 3,
        'SIGN_TYPE_REGULAR_50': 4,
        'SIGN_TYPE_REGULAR_60': 5,
        'SIGN_TYPE_REGULAR_70': 6,
        'SIGN_TYPE_REGULAR_80': 7,
        'SIGN_TYPE_REGULAR_90': 8,
        'SIGN_TYPE_REGULAR_100': 9,
        'SIGN_TYPE_REGULAR_110': 10,
        'SIGN_TYPE_REGULAR_120': 11,
        'SIGN_TYPE_REGULAR_130': 12,
        'SIGN_TYPE_REGULAR_140': 13,
        'SIGN_TYPE_REGULAR_END_RESTRICTION_OF_NUMBER': 20,
        'SIGN_TYPE_ELECTRONIC_10': 28,
        'SIGN_TYPE_ELECTRONIC_20': 29,
        'SIGN_TYPE_ELECTRONIC_30': 30,
        'SIGN_TYPE_ELECTRONIC_40': 31,
        'SIGN_TYPE_ELECTRONIC_50': 32,
        'SIGN_TYPE_ELECTRONIC_60': 33,
        'SIGN_TYPE_ELECTRONIC_70': 34,
        'SIGN_TYPE_ELECTRONIC_80': 35,
        'SIGN_TYPE_ELECTRONIC_90': 36,
        'SIGN_TYPE_ELECTRONIC_100': 37,
        'SIGN_TYPE_ELECTRONIC_110': 38,
        'SIGN_TYPE_ELECTRONIC_120': 39,
        'SIGN_TYPE_ELECTRONIC_130': 40,
        'SIGN_TYPE_ELECTRONIC_140': 41,
        'SIGN_TYPE_ELECTRONIC_END_RESTRICTION_OF_NUMBER': 50,
        'SIGN_TYPE_REGULAR_GENERAL_END_ALL_RESTRICTION': 64,
        'SIGN_TYPE_ELECTRONIC_GENERAL_END_ALL_RESTRICTION': 65,
        'SIGN_TYPE_REGULAR_5': 100,
        'SIGN_TYPE_REGULAR_15': 101,
        'SIGN_TYPE_REGULAR_25': 102,
        'SIGN_TYPE_REGULAR_35': 103,
        'SIGN_TYPE_REGULAR_45': 104,
        'SIGN_TYPE_REGULAR_55': 105,
        'SIGN_TYPE_REGULAR_65': 106,
        'SIGN_TYPE_REGULAR_75': 107,
        'SIGN_TYPE_REGULAR_85': 108,
        'SIGN_TYPE_REGULAR_95': 109,
        'SIGN_TYPE_REGULAR_105': 110,
        'SIGN_TYPE_REGULAR_115': 111,
        'SIGN_TYPE_REGULAR_125': 112,
        'SIGN_TYPE_REGULAR_135': 113,
        'SIGN_TYPE_REGULAR_145': 114,
        'SIGN_TYPE_ELECTRONIC_5': 115,
        'SIGN_TYPE_ELECTRONIC_15': 116,
        'SIGN_TYPE_ELECTRONIC_25': 117,
        'SIGN_TYPE_ELECTRONIC_35': 118,
        'SIGN_TYPE_ELECTRONIC_45': 119,
        'SIGN_TYPE_ELECTRONIC_55': 120,
        'SIGN_TYPE_ELECTRONIC_65': 121,
        'SIGN_TYPE_ELECTRONIC_75': 122,
        'SIGN_TYPE_ELECTRONIC_85': 123,
        'SIGN_TYPE_ELECTRONIC_95': 124,
        'SIGN_TYPE_ELECTRONIC_105': 125,
        'SIGN_TYPE_ELECTRONIC_115': 126,
        'SIGN_TYPE_ELECTRONIC_125': 127,
        'SIGN_TYPE_ELECTRONIC_135': 128,
        'SIGN_TYPE_ELECTRONIC_145': 129,
        'SIGN_TYPE_REGULAR_MOTORWAY_BEGIN': 171,
        'SIGN_TYPE_REGULAR_END_OF_MOTORWAY': 172,
        'SIGN_TYPE_REGULAR_EXPRESSWAY_BEGIN': 173,
        'SIGN_TYPE_REGULAR_END_OF_EXPRESSWAY': 174,
        'SIGN_TYPE_REGULAR_PLAYGROUND_AREA_BEGIN': 175,
        'SIGN_TYPE_REGULAR_END_OF_PLAYGROUND_AREA': 176,
        'SIGN_TYPE_REGULAR_NO_PASSING_START': 200,
        'SIGN_TYPE_REGULAR_END_OF_NO_PASSING': 201,
        'SIGN_TYPE_ELECTRONIC_NO_PASSING_START': 220,
        'SIGN_TYPE_ELECTRONIC_END_OF_NO_PASSING': 221,
        'SIGN_TYPE_NONE_DETECTED': 254,
        'SIGN_TYPE_INVALID': 255,
        'SUPP_SIGN_TYPE_NONE': 0,
        'SUPP_SIGN_TYPE_RAIN': 1,
        'SUPP_SIGN_TYPE_SNOW': 2,
        'SUPP_SIGN_TYPE_TRAILER': 3,
        'SUPP_SIGN_TYPE_TIME': 4,
        'SUPP_SIGN_TYPE_ARROW_LEFT': 5,
        'SUPP_SIGN_TYPE_ARROW_RIGHT': 6,
        'SUPP_SIGN_TYPE_BEND_ARROW_LEFT': 7,
        'SUPP_SIGN_TYPE_BEND_ARROW_RIGHT': 8,
        'SUPP_SIGN_TYPE_TRUCK': 9,
        'SUPP_SIGN_TYPE_DISTANCE_ARROW': 10,
        'SUPP_SIGN_TYPE_WEIGHT': 11,
        'SUPP_SIGN_TYPE_DISTANCE_IN': 12,
        'SUPP_SIGN_TYPE_TRACTOR': 13,
        'SUPP_SIGN_TYPE_SNOW_RAIN': 14,
        'SUPP_SIGN_TYPE_SCHOOL': 15,
        'SUPP_SIGN_TYPE_RAIN_CLOUD': 16,
        'SUPP_SIGN_TYPE_FOG': 17,
        'SUPP_SIGN_TYPE_HAZARDOUS_MATERIALS': 18,
        'SUPP_SIGN_TYPE_NIGHT': 19,
        'SUPP_SIGN_TYPE_GENERIC': 20,
        'SUPP_SIGN_TYPE_RAPPEL': 21,
        'SUPP_SIGN_TYPE_ZONE': 22,
        'SUPP_SIGN_TYPE_INVALID': 255,
        'FILTER_TYPE_NOT_FILTERED': 0,
        'FILTER_TYPE_IRRELEVANT_TO_DRIVER': 1,
        'FILTER_TYPE_ON_VEHICLE': 2,
        'FILTER_TYPE_EMBEDDED': 3,
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
                'mobileye_560_660_msgs.msg.Tsr')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tsr
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tsr
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tsr
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tsr
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tsr

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SIGN_TYPE_REGULAR_10': cls.__constants['SIGN_TYPE_REGULAR_10'],
            'SIGN_TYPE_REGULAR_20': cls.__constants['SIGN_TYPE_REGULAR_20'],
            'SIGN_TYPE_REGULAR_30': cls.__constants['SIGN_TYPE_REGULAR_30'],
            'SIGN_TYPE_REGULAR_40': cls.__constants['SIGN_TYPE_REGULAR_40'],
            'SIGN_TYPE_REGULAR_50': cls.__constants['SIGN_TYPE_REGULAR_50'],
            'SIGN_TYPE_REGULAR_60': cls.__constants['SIGN_TYPE_REGULAR_60'],
            'SIGN_TYPE_REGULAR_70': cls.__constants['SIGN_TYPE_REGULAR_70'],
            'SIGN_TYPE_REGULAR_80': cls.__constants['SIGN_TYPE_REGULAR_80'],
            'SIGN_TYPE_REGULAR_90': cls.__constants['SIGN_TYPE_REGULAR_90'],
            'SIGN_TYPE_REGULAR_100': cls.__constants['SIGN_TYPE_REGULAR_100'],
            'SIGN_TYPE_REGULAR_110': cls.__constants['SIGN_TYPE_REGULAR_110'],
            'SIGN_TYPE_REGULAR_120': cls.__constants['SIGN_TYPE_REGULAR_120'],
            'SIGN_TYPE_REGULAR_130': cls.__constants['SIGN_TYPE_REGULAR_130'],
            'SIGN_TYPE_REGULAR_140': cls.__constants['SIGN_TYPE_REGULAR_140'],
            'SIGN_TYPE_REGULAR_END_RESTRICTION_OF_NUMBER': cls.__constants['SIGN_TYPE_REGULAR_END_RESTRICTION_OF_NUMBER'],
            'SIGN_TYPE_ELECTRONIC_10': cls.__constants['SIGN_TYPE_ELECTRONIC_10'],
            'SIGN_TYPE_ELECTRONIC_20': cls.__constants['SIGN_TYPE_ELECTRONIC_20'],
            'SIGN_TYPE_ELECTRONIC_30': cls.__constants['SIGN_TYPE_ELECTRONIC_30'],
            'SIGN_TYPE_ELECTRONIC_40': cls.__constants['SIGN_TYPE_ELECTRONIC_40'],
            'SIGN_TYPE_ELECTRONIC_50': cls.__constants['SIGN_TYPE_ELECTRONIC_50'],
            'SIGN_TYPE_ELECTRONIC_60': cls.__constants['SIGN_TYPE_ELECTRONIC_60'],
            'SIGN_TYPE_ELECTRONIC_70': cls.__constants['SIGN_TYPE_ELECTRONIC_70'],
            'SIGN_TYPE_ELECTRONIC_80': cls.__constants['SIGN_TYPE_ELECTRONIC_80'],
            'SIGN_TYPE_ELECTRONIC_90': cls.__constants['SIGN_TYPE_ELECTRONIC_90'],
            'SIGN_TYPE_ELECTRONIC_100': cls.__constants['SIGN_TYPE_ELECTRONIC_100'],
            'SIGN_TYPE_ELECTRONIC_110': cls.__constants['SIGN_TYPE_ELECTRONIC_110'],
            'SIGN_TYPE_ELECTRONIC_120': cls.__constants['SIGN_TYPE_ELECTRONIC_120'],
            'SIGN_TYPE_ELECTRONIC_130': cls.__constants['SIGN_TYPE_ELECTRONIC_130'],
            'SIGN_TYPE_ELECTRONIC_140': cls.__constants['SIGN_TYPE_ELECTRONIC_140'],
            'SIGN_TYPE_ELECTRONIC_END_RESTRICTION_OF_NUMBER': cls.__constants['SIGN_TYPE_ELECTRONIC_END_RESTRICTION_OF_NUMBER'],
            'SIGN_TYPE_REGULAR_GENERAL_END_ALL_RESTRICTION': cls.__constants['SIGN_TYPE_REGULAR_GENERAL_END_ALL_RESTRICTION'],
            'SIGN_TYPE_ELECTRONIC_GENERAL_END_ALL_RESTRICTION': cls.__constants['SIGN_TYPE_ELECTRONIC_GENERAL_END_ALL_RESTRICTION'],
            'SIGN_TYPE_REGULAR_5': cls.__constants['SIGN_TYPE_REGULAR_5'],
            'SIGN_TYPE_REGULAR_15': cls.__constants['SIGN_TYPE_REGULAR_15'],
            'SIGN_TYPE_REGULAR_25': cls.__constants['SIGN_TYPE_REGULAR_25'],
            'SIGN_TYPE_REGULAR_35': cls.__constants['SIGN_TYPE_REGULAR_35'],
            'SIGN_TYPE_REGULAR_45': cls.__constants['SIGN_TYPE_REGULAR_45'],
            'SIGN_TYPE_REGULAR_55': cls.__constants['SIGN_TYPE_REGULAR_55'],
            'SIGN_TYPE_REGULAR_65': cls.__constants['SIGN_TYPE_REGULAR_65'],
            'SIGN_TYPE_REGULAR_75': cls.__constants['SIGN_TYPE_REGULAR_75'],
            'SIGN_TYPE_REGULAR_85': cls.__constants['SIGN_TYPE_REGULAR_85'],
            'SIGN_TYPE_REGULAR_95': cls.__constants['SIGN_TYPE_REGULAR_95'],
            'SIGN_TYPE_REGULAR_105': cls.__constants['SIGN_TYPE_REGULAR_105'],
            'SIGN_TYPE_REGULAR_115': cls.__constants['SIGN_TYPE_REGULAR_115'],
            'SIGN_TYPE_REGULAR_125': cls.__constants['SIGN_TYPE_REGULAR_125'],
            'SIGN_TYPE_REGULAR_135': cls.__constants['SIGN_TYPE_REGULAR_135'],
            'SIGN_TYPE_REGULAR_145': cls.__constants['SIGN_TYPE_REGULAR_145'],
            'SIGN_TYPE_ELECTRONIC_5': cls.__constants['SIGN_TYPE_ELECTRONIC_5'],
            'SIGN_TYPE_ELECTRONIC_15': cls.__constants['SIGN_TYPE_ELECTRONIC_15'],
            'SIGN_TYPE_ELECTRONIC_25': cls.__constants['SIGN_TYPE_ELECTRONIC_25'],
            'SIGN_TYPE_ELECTRONIC_35': cls.__constants['SIGN_TYPE_ELECTRONIC_35'],
            'SIGN_TYPE_ELECTRONIC_45': cls.__constants['SIGN_TYPE_ELECTRONIC_45'],
            'SIGN_TYPE_ELECTRONIC_55': cls.__constants['SIGN_TYPE_ELECTRONIC_55'],
            'SIGN_TYPE_ELECTRONIC_65': cls.__constants['SIGN_TYPE_ELECTRONIC_65'],
            'SIGN_TYPE_ELECTRONIC_75': cls.__constants['SIGN_TYPE_ELECTRONIC_75'],
            'SIGN_TYPE_ELECTRONIC_85': cls.__constants['SIGN_TYPE_ELECTRONIC_85'],
            'SIGN_TYPE_ELECTRONIC_95': cls.__constants['SIGN_TYPE_ELECTRONIC_95'],
            'SIGN_TYPE_ELECTRONIC_105': cls.__constants['SIGN_TYPE_ELECTRONIC_105'],
            'SIGN_TYPE_ELECTRONIC_115': cls.__constants['SIGN_TYPE_ELECTRONIC_115'],
            'SIGN_TYPE_ELECTRONIC_125': cls.__constants['SIGN_TYPE_ELECTRONIC_125'],
            'SIGN_TYPE_ELECTRONIC_135': cls.__constants['SIGN_TYPE_ELECTRONIC_135'],
            'SIGN_TYPE_ELECTRONIC_145': cls.__constants['SIGN_TYPE_ELECTRONIC_145'],
            'SIGN_TYPE_REGULAR_MOTORWAY_BEGIN': cls.__constants['SIGN_TYPE_REGULAR_MOTORWAY_BEGIN'],
            'SIGN_TYPE_REGULAR_END_OF_MOTORWAY': cls.__constants['SIGN_TYPE_REGULAR_END_OF_MOTORWAY'],
            'SIGN_TYPE_REGULAR_EXPRESSWAY_BEGIN': cls.__constants['SIGN_TYPE_REGULAR_EXPRESSWAY_BEGIN'],
            'SIGN_TYPE_REGULAR_END_OF_EXPRESSWAY': cls.__constants['SIGN_TYPE_REGULAR_END_OF_EXPRESSWAY'],
            'SIGN_TYPE_REGULAR_PLAYGROUND_AREA_BEGIN': cls.__constants['SIGN_TYPE_REGULAR_PLAYGROUND_AREA_BEGIN'],
            'SIGN_TYPE_REGULAR_END_OF_PLAYGROUND_AREA': cls.__constants['SIGN_TYPE_REGULAR_END_OF_PLAYGROUND_AREA'],
            'SIGN_TYPE_REGULAR_NO_PASSING_START': cls.__constants['SIGN_TYPE_REGULAR_NO_PASSING_START'],
            'SIGN_TYPE_REGULAR_END_OF_NO_PASSING': cls.__constants['SIGN_TYPE_REGULAR_END_OF_NO_PASSING'],
            'SIGN_TYPE_ELECTRONIC_NO_PASSING_START': cls.__constants['SIGN_TYPE_ELECTRONIC_NO_PASSING_START'],
            'SIGN_TYPE_ELECTRONIC_END_OF_NO_PASSING': cls.__constants['SIGN_TYPE_ELECTRONIC_END_OF_NO_PASSING'],
            'SIGN_TYPE_NONE_DETECTED': cls.__constants['SIGN_TYPE_NONE_DETECTED'],
            'SIGN_TYPE_INVALID': cls.__constants['SIGN_TYPE_INVALID'],
            'SUPP_SIGN_TYPE_NONE': cls.__constants['SUPP_SIGN_TYPE_NONE'],
            'SUPP_SIGN_TYPE_RAIN': cls.__constants['SUPP_SIGN_TYPE_RAIN'],
            'SUPP_SIGN_TYPE_SNOW': cls.__constants['SUPP_SIGN_TYPE_SNOW'],
            'SUPP_SIGN_TYPE_TRAILER': cls.__constants['SUPP_SIGN_TYPE_TRAILER'],
            'SUPP_SIGN_TYPE_TIME': cls.__constants['SUPP_SIGN_TYPE_TIME'],
            'SUPP_SIGN_TYPE_ARROW_LEFT': cls.__constants['SUPP_SIGN_TYPE_ARROW_LEFT'],
            'SUPP_SIGN_TYPE_ARROW_RIGHT': cls.__constants['SUPP_SIGN_TYPE_ARROW_RIGHT'],
            'SUPP_SIGN_TYPE_BEND_ARROW_LEFT': cls.__constants['SUPP_SIGN_TYPE_BEND_ARROW_LEFT'],
            'SUPP_SIGN_TYPE_BEND_ARROW_RIGHT': cls.__constants['SUPP_SIGN_TYPE_BEND_ARROW_RIGHT'],
            'SUPP_SIGN_TYPE_TRUCK': cls.__constants['SUPP_SIGN_TYPE_TRUCK'],
            'SUPP_SIGN_TYPE_DISTANCE_ARROW': cls.__constants['SUPP_SIGN_TYPE_DISTANCE_ARROW'],
            'SUPP_SIGN_TYPE_WEIGHT': cls.__constants['SUPP_SIGN_TYPE_WEIGHT'],
            'SUPP_SIGN_TYPE_DISTANCE_IN': cls.__constants['SUPP_SIGN_TYPE_DISTANCE_IN'],
            'SUPP_SIGN_TYPE_TRACTOR': cls.__constants['SUPP_SIGN_TYPE_TRACTOR'],
            'SUPP_SIGN_TYPE_SNOW_RAIN': cls.__constants['SUPP_SIGN_TYPE_SNOW_RAIN'],
            'SUPP_SIGN_TYPE_SCHOOL': cls.__constants['SUPP_SIGN_TYPE_SCHOOL'],
            'SUPP_SIGN_TYPE_RAIN_CLOUD': cls.__constants['SUPP_SIGN_TYPE_RAIN_CLOUD'],
            'SUPP_SIGN_TYPE_FOG': cls.__constants['SUPP_SIGN_TYPE_FOG'],
            'SUPP_SIGN_TYPE_HAZARDOUS_MATERIALS': cls.__constants['SUPP_SIGN_TYPE_HAZARDOUS_MATERIALS'],
            'SUPP_SIGN_TYPE_NIGHT': cls.__constants['SUPP_SIGN_TYPE_NIGHT'],
            'SUPP_SIGN_TYPE_GENERIC': cls.__constants['SUPP_SIGN_TYPE_GENERIC'],
            'SUPP_SIGN_TYPE_RAPPEL': cls.__constants['SUPP_SIGN_TYPE_RAPPEL'],
            'SUPP_SIGN_TYPE_ZONE': cls.__constants['SUPP_SIGN_TYPE_ZONE'],
            'SUPP_SIGN_TYPE_INVALID': cls.__constants['SUPP_SIGN_TYPE_INVALID'],
            'FILTER_TYPE_NOT_FILTERED': cls.__constants['FILTER_TYPE_NOT_FILTERED'],
            'FILTER_TYPE_IRRELEVANT_TO_DRIVER': cls.__constants['FILTER_TYPE_IRRELEVANT_TO_DRIVER'],
            'FILTER_TYPE_ON_VEHICLE': cls.__constants['FILTER_TYPE_ON_VEHICLE'],
            'FILTER_TYPE_EMBEDDED': cls.__constants['FILTER_TYPE_EMBEDDED'],
        }

    @property
    def SIGN_TYPE_REGULAR_10(self):
        """Message constant 'SIGN_TYPE_REGULAR_10'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_10']

    @property
    def SIGN_TYPE_REGULAR_20(self):
        """Message constant 'SIGN_TYPE_REGULAR_20'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_20']

    @property
    def SIGN_TYPE_REGULAR_30(self):
        """Message constant 'SIGN_TYPE_REGULAR_30'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_30']

    @property
    def SIGN_TYPE_REGULAR_40(self):
        """Message constant 'SIGN_TYPE_REGULAR_40'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_40']

    @property
    def SIGN_TYPE_REGULAR_50(self):
        """Message constant 'SIGN_TYPE_REGULAR_50'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_50']

    @property
    def SIGN_TYPE_REGULAR_60(self):
        """Message constant 'SIGN_TYPE_REGULAR_60'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_60']

    @property
    def SIGN_TYPE_REGULAR_70(self):
        """Message constant 'SIGN_TYPE_REGULAR_70'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_70']

    @property
    def SIGN_TYPE_REGULAR_80(self):
        """Message constant 'SIGN_TYPE_REGULAR_80'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_80']

    @property
    def SIGN_TYPE_REGULAR_90(self):
        """Message constant 'SIGN_TYPE_REGULAR_90'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_90']

    @property
    def SIGN_TYPE_REGULAR_100(self):
        """Message constant 'SIGN_TYPE_REGULAR_100'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_100']

    @property
    def SIGN_TYPE_REGULAR_110(self):
        """Message constant 'SIGN_TYPE_REGULAR_110'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_110']

    @property
    def SIGN_TYPE_REGULAR_120(self):
        """Message constant 'SIGN_TYPE_REGULAR_120'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_120']

    @property
    def SIGN_TYPE_REGULAR_130(self):
        """Message constant 'SIGN_TYPE_REGULAR_130'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_130']

    @property
    def SIGN_TYPE_REGULAR_140(self):
        """Message constant 'SIGN_TYPE_REGULAR_140'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_140']

    @property
    def SIGN_TYPE_REGULAR_END_RESTRICTION_OF_NUMBER(self):
        """Message constant 'SIGN_TYPE_REGULAR_END_RESTRICTION_OF_NUMBER'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_END_RESTRICTION_OF_NUMBER']

    @property
    def SIGN_TYPE_ELECTRONIC_10(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_10'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_10']

    @property
    def SIGN_TYPE_ELECTRONIC_20(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_20'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_20']

    @property
    def SIGN_TYPE_ELECTRONIC_30(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_30'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_30']

    @property
    def SIGN_TYPE_ELECTRONIC_40(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_40'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_40']

    @property
    def SIGN_TYPE_ELECTRONIC_50(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_50'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_50']

    @property
    def SIGN_TYPE_ELECTRONIC_60(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_60'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_60']

    @property
    def SIGN_TYPE_ELECTRONIC_70(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_70'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_70']

    @property
    def SIGN_TYPE_ELECTRONIC_80(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_80'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_80']

    @property
    def SIGN_TYPE_ELECTRONIC_90(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_90'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_90']

    @property
    def SIGN_TYPE_ELECTRONIC_100(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_100'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_100']

    @property
    def SIGN_TYPE_ELECTRONIC_110(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_110'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_110']

    @property
    def SIGN_TYPE_ELECTRONIC_120(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_120'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_120']

    @property
    def SIGN_TYPE_ELECTRONIC_130(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_130'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_130']

    @property
    def SIGN_TYPE_ELECTRONIC_140(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_140'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_140']

    @property
    def SIGN_TYPE_ELECTRONIC_END_RESTRICTION_OF_NUMBER(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_END_RESTRICTION_OF_NUMBER'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_END_RESTRICTION_OF_NUMBER']

    @property
    def SIGN_TYPE_REGULAR_GENERAL_END_ALL_RESTRICTION(self):
        """Message constant 'SIGN_TYPE_REGULAR_GENERAL_END_ALL_RESTRICTION'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_GENERAL_END_ALL_RESTRICTION']

    @property
    def SIGN_TYPE_ELECTRONIC_GENERAL_END_ALL_RESTRICTION(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_GENERAL_END_ALL_RESTRICTION'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_GENERAL_END_ALL_RESTRICTION']

    @property
    def SIGN_TYPE_REGULAR_5(self):
        """Message constant 'SIGN_TYPE_REGULAR_5'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_5']

    @property
    def SIGN_TYPE_REGULAR_15(self):
        """Message constant 'SIGN_TYPE_REGULAR_15'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_15']

    @property
    def SIGN_TYPE_REGULAR_25(self):
        """Message constant 'SIGN_TYPE_REGULAR_25'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_25']

    @property
    def SIGN_TYPE_REGULAR_35(self):
        """Message constant 'SIGN_TYPE_REGULAR_35'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_35']

    @property
    def SIGN_TYPE_REGULAR_45(self):
        """Message constant 'SIGN_TYPE_REGULAR_45'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_45']

    @property
    def SIGN_TYPE_REGULAR_55(self):
        """Message constant 'SIGN_TYPE_REGULAR_55'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_55']

    @property
    def SIGN_TYPE_REGULAR_65(self):
        """Message constant 'SIGN_TYPE_REGULAR_65'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_65']

    @property
    def SIGN_TYPE_REGULAR_75(self):
        """Message constant 'SIGN_TYPE_REGULAR_75'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_75']

    @property
    def SIGN_TYPE_REGULAR_85(self):
        """Message constant 'SIGN_TYPE_REGULAR_85'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_85']

    @property
    def SIGN_TYPE_REGULAR_95(self):
        """Message constant 'SIGN_TYPE_REGULAR_95'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_95']

    @property
    def SIGN_TYPE_REGULAR_105(self):
        """Message constant 'SIGN_TYPE_REGULAR_105'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_105']

    @property
    def SIGN_TYPE_REGULAR_115(self):
        """Message constant 'SIGN_TYPE_REGULAR_115'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_115']

    @property
    def SIGN_TYPE_REGULAR_125(self):
        """Message constant 'SIGN_TYPE_REGULAR_125'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_125']

    @property
    def SIGN_TYPE_REGULAR_135(self):
        """Message constant 'SIGN_TYPE_REGULAR_135'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_135']

    @property
    def SIGN_TYPE_REGULAR_145(self):
        """Message constant 'SIGN_TYPE_REGULAR_145'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_145']

    @property
    def SIGN_TYPE_ELECTRONIC_5(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_5'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_5']

    @property
    def SIGN_TYPE_ELECTRONIC_15(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_15'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_15']

    @property
    def SIGN_TYPE_ELECTRONIC_25(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_25'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_25']

    @property
    def SIGN_TYPE_ELECTRONIC_35(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_35'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_35']

    @property
    def SIGN_TYPE_ELECTRONIC_45(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_45'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_45']

    @property
    def SIGN_TYPE_ELECTRONIC_55(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_55'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_55']

    @property
    def SIGN_TYPE_ELECTRONIC_65(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_65'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_65']

    @property
    def SIGN_TYPE_ELECTRONIC_75(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_75'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_75']

    @property
    def SIGN_TYPE_ELECTRONIC_85(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_85'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_85']

    @property
    def SIGN_TYPE_ELECTRONIC_95(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_95'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_95']

    @property
    def SIGN_TYPE_ELECTRONIC_105(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_105'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_105']

    @property
    def SIGN_TYPE_ELECTRONIC_115(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_115'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_115']

    @property
    def SIGN_TYPE_ELECTRONIC_125(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_125'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_125']

    @property
    def SIGN_TYPE_ELECTRONIC_135(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_135'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_135']

    @property
    def SIGN_TYPE_ELECTRONIC_145(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_145'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_145']

    @property
    def SIGN_TYPE_REGULAR_MOTORWAY_BEGIN(self):
        """Message constant 'SIGN_TYPE_REGULAR_MOTORWAY_BEGIN'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_MOTORWAY_BEGIN']

    @property
    def SIGN_TYPE_REGULAR_END_OF_MOTORWAY(self):
        """Message constant 'SIGN_TYPE_REGULAR_END_OF_MOTORWAY'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_END_OF_MOTORWAY']

    @property
    def SIGN_TYPE_REGULAR_EXPRESSWAY_BEGIN(self):
        """Message constant 'SIGN_TYPE_REGULAR_EXPRESSWAY_BEGIN'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_EXPRESSWAY_BEGIN']

    @property
    def SIGN_TYPE_REGULAR_END_OF_EXPRESSWAY(self):
        """Message constant 'SIGN_TYPE_REGULAR_END_OF_EXPRESSWAY'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_END_OF_EXPRESSWAY']

    @property
    def SIGN_TYPE_REGULAR_PLAYGROUND_AREA_BEGIN(self):
        """Message constant 'SIGN_TYPE_REGULAR_PLAYGROUND_AREA_BEGIN'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_PLAYGROUND_AREA_BEGIN']

    @property
    def SIGN_TYPE_REGULAR_END_OF_PLAYGROUND_AREA(self):
        """Message constant 'SIGN_TYPE_REGULAR_END_OF_PLAYGROUND_AREA'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_END_OF_PLAYGROUND_AREA']

    @property
    def SIGN_TYPE_REGULAR_NO_PASSING_START(self):
        """Message constant 'SIGN_TYPE_REGULAR_NO_PASSING_START'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_NO_PASSING_START']

    @property
    def SIGN_TYPE_REGULAR_END_OF_NO_PASSING(self):
        """Message constant 'SIGN_TYPE_REGULAR_END_OF_NO_PASSING'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_REGULAR_END_OF_NO_PASSING']

    @property
    def SIGN_TYPE_ELECTRONIC_NO_PASSING_START(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_NO_PASSING_START'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_NO_PASSING_START']

    @property
    def SIGN_TYPE_ELECTRONIC_END_OF_NO_PASSING(self):
        """Message constant 'SIGN_TYPE_ELECTRONIC_END_OF_NO_PASSING'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_ELECTRONIC_END_OF_NO_PASSING']

    @property
    def SIGN_TYPE_NONE_DETECTED(self):
        """Message constant 'SIGN_TYPE_NONE_DETECTED'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_NONE_DETECTED']

    @property
    def SIGN_TYPE_INVALID(self):
        """Message constant 'SIGN_TYPE_INVALID'."""
        return Metaclass_Tsr.__constants['SIGN_TYPE_INVALID']

    @property
    def SUPP_SIGN_TYPE_NONE(self):
        """Message constant 'SUPP_SIGN_TYPE_NONE'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_NONE']

    @property
    def SUPP_SIGN_TYPE_RAIN(self):
        """Message constant 'SUPP_SIGN_TYPE_RAIN'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_RAIN']

    @property
    def SUPP_SIGN_TYPE_SNOW(self):
        """Message constant 'SUPP_SIGN_TYPE_SNOW'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_SNOW']

    @property
    def SUPP_SIGN_TYPE_TRAILER(self):
        """Message constant 'SUPP_SIGN_TYPE_TRAILER'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_TRAILER']

    @property
    def SUPP_SIGN_TYPE_TIME(self):
        """Message constant 'SUPP_SIGN_TYPE_TIME'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_TIME']

    @property
    def SUPP_SIGN_TYPE_ARROW_LEFT(self):
        """Message constant 'SUPP_SIGN_TYPE_ARROW_LEFT'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_ARROW_LEFT']

    @property
    def SUPP_SIGN_TYPE_ARROW_RIGHT(self):
        """Message constant 'SUPP_SIGN_TYPE_ARROW_RIGHT'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_ARROW_RIGHT']

    @property
    def SUPP_SIGN_TYPE_BEND_ARROW_LEFT(self):
        """Message constant 'SUPP_SIGN_TYPE_BEND_ARROW_LEFT'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_BEND_ARROW_LEFT']

    @property
    def SUPP_SIGN_TYPE_BEND_ARROW_RIGHT(self):
        """Message constant 'SUPP_SIGN_TYPE_BEND_ARROW_RIGHT'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_BEND_ARROW_RIGHT']

    @property
    def SUPP_SIGN_TYPE_TRUCK(self):
        """Message constant 'SUPP_SIGN_TYPE_TRUCK'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_TRUCK']

    @property
    def SUPP_SIGN_TYPE_DISTANCE_ARROW(self):
        """Message constant 'SUPP_SIGN_TYPE_DISTANCE_ARROW'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_DISTANCE_ARROW']

    @property
    def SUPP_SIGN_TYPE_WEIGHT(self):
        """Message constant 'SUPP_SIGN_TYPE_WEIGHT'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_WEIGHT']

    @property
    def SUPP_SIGN_TYPE_DISTANCE_IN(self):
        """Message constant 'SUPP_SIGN_TYPE_DISTANCE_IN'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_DISTANCE_IN']

    @property
    def SUPP_SIGN_TYPE_TRACTOR(self):
        """Message constant 'SUPP_SIGN_TYPE_TRACTOR'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_TRACTOR']

    @property
    def SUPP_SIGN_TYPE_SNOW_RAIN(self):
        """Message constant 'SUPP_SIGN_TYPE_SNOW_RAIN'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_SNOW_RAIN']

    @property
    def SUPP_SIGN_TYPE_SCHOOL(self):
        """Message constant 'SUPP_SIGN_TYPE_SCHOOL'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_SCHOOL']

    @property
    def SUPP_SIGN_TYPE_RAIN_CLOUD(self):
        """Message constant 'SUPP_SIGN_TYPE_RAIN_CLOUD'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_RAIN_CLOUD']

    @property
    def SUPP_SIGN_TYPE_FOG(self):
        """Message constant 'SUPP_SIGN_TYPE_FOG'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_FOG']

    @property
    def SUPP_SIGN_TYPE_HAZARDOUS_MATERIALS(self):
        """Message constant 'SUPP_SIGN_TYPE_HAZARDOUS_MATERIALS'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_HAZARDOUS_MATERIALS']

    @property
    def SUPP_SIGN_TYPE_NIGHT(self):
        """Message constant 'SUPP_SIGN_TYPE_NIGHT'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_NIGHT']

    @property
    def SUPP_SIGN_TYPE_GENERIC(self):
        """Message constant 'SUPP_SIGN_TYPE_GENERIC'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_GENERIC']

    @property
    def SUPP_SIGN_TYPE_RAPPEL(self):
        """Message constant 'SUPP_SIGN_TYPE_RAPPEL'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_RAPPEL']

    @property
    def SUPP_SIGN_TYPE_ZONE(self):
        """Message constant 'SUPP_SIGN_TYPE_ZONE'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_ZONE']

    @property
    def SUPP_SIGN_TYPE_INVALID(self):
        """Message constant 'SUPP_SIGN_TYPE_INVALID'."""
        return Metaclass_Tsr.__constants['SUPP_SIGN_TYPE_INVALID']

    @property
    def FILTER_TYPE_NOT_FILTERED(self):
        """Message constant 'FILTER_TYPE_NOT_FILTERED'."""
        return Metaclass_Tsr.__constants['FILTER_TYPE_NOT_FILTERED']

    @property
    def FILTER_TYPE_IRRELEVANT_TO_DRIVER(self):
        """Message constant 'FILTER_TYPE_IRRELEVANT_TO_DRIVER'."""
        return Metaclass_Tsr.__constants['FILTER_TYPE_IRRELEVANT_TO_DRIVER']

    @property
    def FILTER_TYPE_ON_VEHICLE(self):
        """Message constant 'FILTER_TYPE_ON_VEHICLE'."""
        return Metaclass_Tsr.__constants['FILTER_TYPE_ON_VEHICLE']

    @property
    def FILTER_TYPE_EMBEDDED(self):
        """Message constant 'FILTER_TYPE_EMBEDDED'."""
        return Metaclass_Tsr.__constants['FILTER_TYPE_EMBEDDED']


class Tsr(metaclass=Metaclass_Tsr):
    """
    Message class 'Tsr'.

    Constants:
      SIGN_TYPE_REGULAR_10
      SIGN_TYPE_REGULAR_20
      SIGN_TYPE_REGULAR_30
      SIGN_TYPE_REGULAR_40
      SIGN_TYPE_REGULAR_50
      SIGN_TYPE_REGULAR_60
      SIGN_TYPE_REGULAR_70
      SIGN_TYPE_REGULAR_80
      SIGN_TYPE_REGULAR_90
      SIGN_TYPE_REGULAR_100
      SIGN_TYPE_REGULAR_110
      SIGN_TYPE_REGULAR_120
      SIGN_TYPE_REGULAR_130
      SIGN_TYPE_REGULAR_140
      SIGN_TYPE_REGULAR_END_RESTRICTION_OF_NUMBER
      SIGN_TYPE_ELECTRONIC_10
      SIGN_TYPE_ELECTRONIC_20
      SIGN_TYPE_ELECTRONIC_30
      SIGN_TYPE_ELECTRONIC_40
      SIGN_TYPE_ELECTRONIC_50
      SIGN_TYPE_ELECTRONIC_60
      SIGN_TYPE_ELECTRONIC_70
      SIGN_TYPE_ELECTRONIC_80
      SIGN_TYPE_ELECTRONIC_90
      SIGN_TYPE_ELECTRONIC_100
      SIGN_TYPE_ELECTRONIC_110
      SIGN_TYPE_ELECTRONIC_120
      SIGN_TYPE_ELECTRONIC_130
      SIGN_TYPE_ELECTRONIC_140
      SIGN_TYPE_ELECTRONIC_END_RESTRICTION_OF_NUMBER
      SIGN_TYPE_REGULAR_GENERAL_END_ALL_RESTRICTION
      SIGN_TYPE_ELECTRONIC_GENERAL_END_ALL_RESTRICTION
      SIGN_TYPE_REGULAR_5
      SIGN_TYPE_REGULAR_15
      SIGN_TYPE_REGULAR_25
      SIGN_TYPE_REGULAR_35
      SIGN_TYPE_REGULAR_45
      SIGN_TYPE_REGULAR_55
      SIGN_TYPE_REGULAR_65
      SIGN_TYPE_REGULAR_75
      SIGN_TYPE_REGULAR_85
      SIGN_TYPE_REGULAR_95
      SIGN_TYPE_REGULAR_105
      SIGN_TYPE_REGULAR_115
      SIGN_TYPE_REGULAR_125
      SIGN_TYPE_REGULAR_135
      SIGN_TYPE_REGULAR_145
      SIGN_TYPE_ELECTRONIC_5
      SIGN_TYPE_ELECTRONIC_15
      SIGN_TYPE_ELECTRONIC_25
      SIGN_TYPE_ELECTRONIC_35
      SIGN_TYPE_ELECTRONIC_45
      SIGN_TYPE_ELECTRONIC_55
      SIGN_TYPE_ELECTRONIC_65
      SIGN_TYPE_ELECTRONIC_75
      SIGN_TYPE_ELECTRONIC_85
      SIGN_TYPE_ELECTRONIC_95
      SIGN_TYPE_ELECTRONIC_105
      SIGN_TYPE_ELECTRONIC_115
      SIGN_TYPE_ELECTRONIC_125
      SIGN_TYPE_ELECTRONIC_135
      SIGN_TYPE_ELECTRONIC_145
      SIGN_TYPE_REGULAR_MOTORWAY_BEGIN
      SIGN_TYPE_REGULAR_END_OF_MOTORWAY
      SIGN_TYPE_REGULAR_EXPRESSWAY_BEGIN
      SIGN_TYPE_REGULAR_END_OF_EXPRESSWAY
      SIGN_TYPE_REGULAR_PLAYGROUND_AREA_BEGIN
      SIGN_TYPE_REGULAR_END_OF_PLAYGROUND_AREA
      SIGN_TYPE_REGULAR_NO_PASSING_START
      SIGN_TYPE_REGULAR_END_OF_NO_PASSING
      SIGN_TYPE_ELECTRONIC_NO_PASSING_START
      SIGN_TYPE_ELECTRONIC_END_OF_NO_PASSING
      SIGN_TYPE_NONE_DETECTED
      SIGN_TYPE_INVALID
      SUPP_SIGN_TYPE_NONE
      SUPP_SIGN_TYPE_RAIN
      SUPP_SIGN_TYPE_SNOW
      SUPP_SIGN_TYPE_TRAILER
      SUPP_SIGN_TYPE_TIME
      SUPP_SIGN_TYPE_ARROW_LEFT
      SUPP_SIGN_TYPE_ARROW_RIGHT
      SUPP_SIGN_TYPE_BEND_ARROW_LEFT
      SUPP_SIGN_TYPE_BEND_ARROW_RIGHT
      SUPP_SIGN_TYPE_TRUCK
      SUPP_SIGN_TYPE_DISTANCE_ARROW
      SUPP_SIGN_TYPE_WEIGHT
      SUPP_SIGN_TYPE_DISTANCE_IN
      SUPP_SIGN_TYPE_TRACTOR
      SUPP_SIGN_TYPE_SNOW_RAIN
      SUPP_SIGN_TYPE_SCHOOL
      SUPP_SIGN_TYPE_RAIN_CLOUD
      SUPP_SIGN_TYPE_FOG
      SUPP_SIGN_TYPE_HAZARDOUS_MATERIALS
      SUPP_SIGN_TYPE_NIGHT
      SUPP_SIGN_TYPE_GENERIC
      SUPP_SIGN_TYPE_RAPPEL
      SUPP_SIGN_TYPE_ZONE
      SUPP_SIGN_TYPE_INVALID
      FILTER_TYPE_NOT_FILTERED
      FILTER_TYPE_IRRELEVANT_TO_DRIVER
      FILTER_TYPE_ON_VEHICLE
      FILTER_TYPE_EMBEDDED
    """

    __slots__ = [
        '_header',
        '_vision_only_sign_type',
        '_vision_only_supplementary_sign_type',
        '_sign_position_x',
        '_sign_position_y',
        '_sign_position_z',
        '_filter_type',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vision_only_sign_type': 'uint8',
        'vision_only_supplementary_sign_type': 'uint8',
        'sign_position_x': 'float',
        'sign_position_y': 'float',
        'sign_position_z': 'float',
        'filter_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.vision_only_sign_type = kwargs.get('vision_only_sign_type', int())
        self.vision_only_supplementary_sign_type = kwargs.get('vision_only_supplementary_sign_type', int())
        self.sign_position_x = kwargs.get('sign_position_x', float())
        self.sign_position_y = kwargs.get('sign_position_y', float())
        self.sign_position_z = kwargs.get('sign_position_z', float())
        self.filter_type = kwargs.get('filter_type', int())

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
        if self.vision_only_sign_type != other.vision_only_sign_type:
            return False
        if self.vision_only_supplementary_sign_type != other.vision_only_supplementary_sign_type:
            return False
        if self.sign_position_x != other.sign_position_x:
            return False
        if self.sign_position_y != other.sign_position_y:
            return False
        if self.sign_position_z != other.sign_position_z:
            return False
        if self.filter_type != other.filter_type:
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
    def vision_only_sign_type(self):
        """Message field 'vision_only_sign_type'."""
        return self._vision_only_sign_type

    @vision_only_sign_type.setter
    def vision_only_sign_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vision_only_sign_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vision_only_sign_type' field must be an unsigned integer in [0, 255]"
        self._vision_only_sign_type = value

    @property
    def vision_only_supplementary_sign_type(self):
        """Message field 'vision_only_supplementary_sign_type'."""
        return self._vision_only_supplementary_sign_type

    @vision_only_supplementary_sign_type.setter
    def vision_only_supplementary_sign_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vision_only_supplementary_sign_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vision_only_supplementary_sign_type' field must be an unsigned integer in [0, 255]"
        self._vision_only_supplementary_sign_type = value

    @property
    def sign_position_x(self):
        """Message field 'sign_position_x'."""
        return self._sign_position_x

    @sign_position_x.setter
    def sign_position_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sign_position_x' field must be of type 'float'"
        self._sign_position_x = value

    @property
    def sign_position_y(self):
        """Message field 'sign_position_y'."""
        return self._sign_position_y

    @sign_position_y.setter
    def sign_position_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sign_position_y' field must be of type 'float'"
        self._sign_position_y = value

    @property
    def sign_position_z(self):
        """Message field 'sign_position_z'."""
        return self._sign_position_z

    @sign_position_z.setter
    def sign_position_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sign_position_z' field must be of type 'float'"
        self._sign_position_z = value

    @property
    def filter_type(self):
        """Message field 'filter_type'."""
        return self._filter_type

    @filter_type.setter
    def filter_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'filter_type' field must be an unsigned integer in [0, 255]"
        self._filter_type = value
