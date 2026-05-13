// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/Tsr.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mobileye_560_660_msgs__msg__Tsr __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__Tsr __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tsr_
{
  using Type = Tsr_<ContainerAllocator>;

  explicit Tsr_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vision_only_sign_type = 0;
      this->vision_only_supplementary_sign_type = 0;
      this->sign_position_x = 0.0f;
      this->sign_position_y = 0.0f;
      this->sign_position_z = 0.0f;
      this->filter_type = 0;
    }
  }

  explicit Tsr_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vision_only_sign_type = 0;
      this->vision_only_supplementary_sign_type = 0;
      this->sign_position_x = 0.0f;
      this->sign_position_y = 0.0f;
      this->sign_position_z = 0.0f;
      this->filter_type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vision_only_sign_type_type =
    uint8_t;
  _vision_only_sign_type_type vision_only_sign_type;
  using _vision_only_supplementary_sign_type_type =
    uint8_t;
  _vision_only_supplementary_sign_type_type vision_only_supplementary_sign_type;
  using _sign_position_x_type =
    float;
  _sign_position_x_type sign_position_x;
  using _sign_position_y_type =
    float;
  _sign_position_y_type sign_position_y;
  using _sign_position_z_type =
    float;
  _sign_position_z_type sign_position_z;
  using _filter_type_type =
    uint8_t;
  _filter_type_type filter_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vision_only_sign_type(
    const uint8_t & _arg)
  {
    this->vision_only_sign_type = _arg;
    return *this;
  }
  Type & set__vision_only_supplementary_sign_type(
    const uint8_t & _arg)
  {
    this->vision_only_supplementary_sign_type = _arg;
    return *this;
  }
  Type & set__sign_position_x(
    const float & _arg)
  {
    this->sign_position_x = _arg;
    return *this;
  }
  Type & set__sign_position_y(
    const float & _arg)
  {
    this->sign_position_y = _arg;
    return *this;
  }
  Type & set__sign_position_z(
    const float & _arg)
  {
    this->sign_position_z = _arg;
    return *this;
  }
  Type & set__filter_type(
    const uint8_t & _arg)
  {
    this->filter_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SIGN_TYPE_REGULAR_10 =
    0u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_20 =
    1u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_30 =
    2u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_40 =
    3u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_50 =
    4u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_60 =
    5u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_70 =
    6u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_80 =
    7u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_90 =
    8u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_100 =
    9u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_110 =
    10u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_120 =
    11u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_130 =
    12u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_140 =
    13u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_END_RESTRICTION_OF_NUMBER =
    20u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_10 =
    28u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_20 =
    29u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_30 =
    30u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_40 =
    31u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_50 =
    32u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_60 =
    33u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_70 =
    34u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_80 =
    35u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_90 =
    36u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_100 =
    37u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_110 =
    38u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_120 =
    39u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_130 =
    40u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_140 =
    41u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_END_RESTRICTION_OF_NUMBER =
    50u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_GENERAL_END_ALL_RESTRICTION =
    64u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_GENERAL_END_ALL_RESTRICTION =
    65u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_5 =
    100u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_15 =
    101u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_25 =
    102u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_35 =
    103u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_45 =
    104u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_55 =
    105u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_65 =
    106u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_75 =
    107u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_85 =
    108u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_95 =
    109u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_105 =
    110u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_115 =
    111u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_125 =
    112u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_135 =
    113u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_145 =
    114u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_5 =
    115u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_15 =
    116u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_25 =
    117u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_35 =
    118u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_45 =
    119u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_55 =
    120u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_65 =
    121u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_75 =
    122u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_85 =
    123u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_95 =
    124u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_105 =
    125u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_115 =
    126u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_125 =
    127u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_135 =
    128u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_145 =
    129u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_MOTORWAY_BEGIN =
    171u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_END_OF_MOTORWAY =
    172u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_EXPRESSWAY_BEGIN =
    173u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_END_OF_EXPRESSWAY =
    174u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_PLAYGROUND_AREA_BEGIN =
    175u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_END_OF_PLAYGROUND_AREA =
    176u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_NO_PASSING_START =
    200u;
  static constexpr uint8_t SIGN_TYPE_REGULAR_END_OF_NO_PASSING =
    201u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_NO_PASSING_START =
    220u;
  static constexpr uint8_t SIGN_TYPE_ELECTRONIC_END_OF_NO_PASSING =
    221u;
  static constexpr uint8_t SIGN_TYPE_NONE_DETECTED =
    254u;
  static constexpr uint8_t SIGN_TYPE_INVALID =
    255u;
  static constexpr uint8_t SUPP_SIGN_TYPE_NONE =
    0u;
  static constexpr uint8_t SUPP_SIGN_TYPE_RAIN =
    1u;
  static constexpr uint8_t SUPP_SIGN_TYPE_SNOW =
    2u;
  static constexpr uint8_t SUPP_SIGN_TYPE_TRAILER =
    3u;
  static constexpr uint8_t SUPP_SIGN_TYPE_TIME =
    4u;
  static constexpr uint8_t SUPP_SIGN_TYPE_ARROW_LEFT =
    5u;
  static constexpr uint8_t SUPP_SIGN_TYPE_ARROW_RIGHT =
    6u;
  static constexpr uint8_t SUPP_SIGN_TYPE_BEND_ARROW_LEFT =
    7u;
  static constexpr uint8_t SUPP_SIGN_TYPE_BEND_ARROW_RIGHT =
    8u;
  static constexpr uint8_t SUPP_SIGN_TYPE_TRUCK =
    9u;
  static constexpr uint8_t SUPP_SIGN_TYPE_DISTANCE_ARROW =
    10u;
  static constexpr uint8_t SUPP_SIGN_TYPE_WEIGHT =
    11u;
  static constexpr uint8_t SUPP_SIGN_TYPE_DISTANCE_IN =
    12u;
  static constexpr uint8_t SUPP_SIGN_TYPE_TRACTOR =
    13u;
  static constexpr uint8_t SUPP_SIGN_TYPE_SNOW_RAIN =
    14u;
  static constexpr uint8_t SUPP_SIGN_TYPE_SCHOOL =
    15u;
  static constexpr uint8_t SUPP_SIGN_TYPE_RAIN_CLOUD =
    16u;
  static constexpr uint8_t SUPP_SIGN_TYPE_FOG =
    17u;
  static constexpr uint8_t SUPP_SIGN_TYPE_HAZARDOUS_MATERIALS =
    18u;
  static constexpr uint8_t SUPP_SIGN_TYPE_NIGHT =
    19u;
  static constexpr uint8_t SUPP_SIGN_TYPE_GENERIC =
    20u;
  static constexpr uint8_t SUPP_SIGN_TYPE_RAPPEL =
    21u;
  static constexpr uint8_t SUPP_SIGN_TYPE_ZONE =
    22u;
  static constexpr uint8_t SUPP_SIGN_TYPE_INVALID =
    255u;
  static constexpr uint8_t FILTER_TYPE_NOT_FILTERED =
    0u;
  static constexpr uint8_t FILTER_TYPE_IRRELEVANT_TO_DRIVER =
    1u;
  static constexpr uint8_t FILTER_TYPE_ON_VEHICLE =
    2u;
  static constexpr uint8_t FILTER_TYPE_EMBEDDED =
    3u;

  // pointer types
  using RawPtr =
    mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__Tsr
    std::shared_ptr<mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__Tsr
    std::shared_ptr<mobileye_560_660_msgs::msg::Tsr_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tsr_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vision_only_sign_type != other.vision_only_sign_type) {
      return false;
    }
    if (this->vision_only_supplementary_sign_type != other.vision_only_supplementary_sign_type) {
      return false;
    }
    if (this->sign_position_x != other.sign_position_x) {
      return false;
    }
    if (this->sign_position_y != other.sign_position_y) {
      return false;
    }
    if (this->sign_position_z != other.sign_position_z) {
      return false;
    }
    if (this->filter_type != other.filter_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tsr_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tsr_

// alias to use template instance with default allocator
using Tsr =
  mobileye_560_660_msgs::msg::Tsr_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_10;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_20;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_30;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_40;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_50;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_60;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_70;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_80;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_90;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_100;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_110;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_120;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_130;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_140;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_END_RESTRICTION_OF_NUMBER;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_10;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_20;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_30;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_40;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_50;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_60;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_70;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_80;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_90;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_100;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_110;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_120;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_130;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_140;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_END_RESTRICTION_OF_NUMBER;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_GENERAL_END_ALL_RESTRICTION;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_GENERAL_END_ALL_RESTRICTION;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_5;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_15;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_25;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_35;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_45;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_55;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_65;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_75;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_85;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_95;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_105;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_115;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_125;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_135;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_145;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_5;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_15;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_25;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_35;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_45;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_55;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_65;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_75;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_85;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_95;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_105;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_115;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_125;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_135;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_145;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_MOTORWAY_BEGIN;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_END_OF_MOTORWAY;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_EXPRESSWAY_BEGIN;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_END_OF_EXPRESSWAY;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_PLAYGROUND_AREA_BEGIN;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_END_OF_PLAYGROUND_AREA;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_NO_PASSING_START;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_REGULAR_END_OF_NO_PASSING;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_NO_PASSING_START;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_ELECTRONIC_END_OF_NO_PASSING;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_NONE_DETECTED;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SIGN_TYPE_INVALID;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_RAIN;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_SNOW;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_TRAILER;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_TIME;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_ARROW_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_ARROW_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_BEND_ARROW_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_BEND_ARROW_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_TRUCK;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_DISTANCE_ARROW;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_WEIGHT;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_DISTANCE_IN;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_TRACTOR;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_SNOW_RAIN;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_SCHOOL;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_RAIN_CLOUD;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_FOG;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_HAZARDOUS_MATERIALS;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_NIGHT;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_GENERIC;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_RAPPEL;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_ZONE;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::SUPP_SIGN_TYPE_INVALID;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::FILTER_TYPE_NOT_FILTERED;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::FILTER_TYPE_IRRELEVANT_TO_DRIVER;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::FILTER_TYPE_ON_VEHICLE;
template<typename ContainerAllocator>
constexpr uint8_t Tsr_<ContainerAllocator>::FILTER_TYPE_EMBEDDED;

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR__STRUCT_HPP_
