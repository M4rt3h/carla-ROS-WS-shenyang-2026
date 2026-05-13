// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/AwsDisplay.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__STRUCT_HPP_

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
# define DEPRECATED__mobileye_560_660_msgs__msg__AwsDisplay __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__AwsDisplay __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AwsDisplay_
{
  using Type = AwsDisplay_<ContainerAllocator>;

  explicit AwsDisplay_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->suppress_sound = false;
      this->night_time = false;
      this->dusk_time = false;
      this->sound_type = 0;
      this->headway_valid = false;
      this->headway_measurement = 0.0f;
      this->lanes_on = false;
      this->left_ldw_on = false;
      this->right_ldw_on = false;
      this->fcw_on = false;
      this->left_crossing = false;
      this->right_crossing = false;
      this->maintenance = false;
      this->failsafe = false;
      this->ped_fcw = false;
      this->ped_in_dz = false;
      this->headway_warning_level = 0;
    }
  }

  explicit AwsDisplay_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->suppress_sound = false;
      this->night_time = false;
      this->dusk_time = false;
      this->sound_type = 0;
      this->headway_valid = false;
      this->headway_measurement = 0.0f;
      this->lanes_on = false;
      this->left_ldw_on = false;
      this->right_ldw_on = false;
      this->fcw_on = false;
      this->left_crossing = false;
      this->right_crossing = false;
      this->maintenance = false;
      this->failsafe = false;
      this->ped_fcw = false;
      this->ped_in_dz = false;
      this->headway_warning_level = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _suppress_sound_type =
    bool;
  _suppress_sound_type suppress_sound;
  using _night_time_type =
    bool;
  _night_time_type night_time;
  using _dusk_time_type =
    bool;
  _dusk_time_type dusk_time;
  using _sound_type_type =
    uint8_t;
  _sound_type_type sound_type;
  using _headway_valid_type =
    bool;
  _headway_valid_type headway_valid;
  using _headway_measurement_type =
    float;
  _headway_measurement_type headway_measurement;
  using _lanes_on_type =
    bool;
  _lanes_on_type lanes_on;
  using _left_ldw_on_type =
    bool;
  _left_ldw_on_type left_ldw_on;
  using _right_ldw_on_type =
    bool;
  _right_ldw_on_type right_ldw_on;
  using _fcw_on_type =
    bool;
  _fcw_on_type fcw_on;
  using _left_crossing_type =
    bool;
  _left_crossing_type left_crossing;
  using _right_crossing_type =
    bool;
  _right_crossing_type right_crossing;
  using _maintenance_type =
    bool;
  _maintenance_type maintenance;
  using _failsafe_type =
    bool;
  _failsafe_type failsafe;
  using _ped_fcw_type =
    bool;
  _ped_fcw_type ped_fcw;
  using _ped_in_dz_type =
    bool;
  _ped_in_dz_type ped_in_dz;
  using _headway_warning_level_type =
    uint8_t;
  _headway_warning_level_type headway_warning_level;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__suppress_sound(
    const bool & _arg)
  {
    this->suppress_sound = _arg;
    return *this;
  }
  Type & set__night_time(
    const bool & _arg)
  {
    this->night_time = _arg;
    return *this;
  }
  Type & set__dusk_time(
    const bool & _arg)
  {
    this->dusk_time = _arg;
    return *this;
  }
  Type & set__sound_type(
    const uint8_t & _arg)
  {
    this->sound_type = _arg;
    return *this;
  }
  Type & set__headway_valid(
    const bool & _arg)
  {
    this->headway_valid = _arg;
    return *this;
  }
  Type & set__headway_measurement(
    const float & _arg)
  {
    this->headway_measurement = _arg;
    return *this;
  }
  Type & set__lanes_on(
    const bool & _arg)
  {
    this->lanes_on = _arg;
    return *this;
  }
  Type & set__left_ldw_on(
    const bool & _arg)
  {
    this->left_ldw_on = _arg;
    return *this;
  }
  Type & set__right_ldw_on(
    const bool & _arg)
  {
    this->right_ldw_on = _arg;
    return *this;
  }
  Type & set__fcw_on(
    const bool & _arg)
  {
    this->fcw_on = _arg;
    return *this;
  }
  Type & set__left_crossing(
    const bool & _arg)
  {
    this->left_crossing = _arg;
    return *this;
  }
  Type & set__right_crossing(
    const bool & _arg)
  {
    this->right_crossing = _arg;
    return *this;
  }
  Type & set__maintenance(
    const bool & _arg)
  {
    this->maintenance = _arg;
    return *this;
  }
  Type & set__failsafe(
    const bool & _arg)
  {
    this->failsafe = _arg;
    return *this;
  }
  Type & set__ped_fcw(
    const bool & _arg)
  {
    this->ped_fcw = _arg;
    return *this;
  }
  Type & set__ped_in_dz(
    const bool & _arg)
  {
    this->ped_in_dz = _arg;
    return *this;
  }
  Type & set__headway_warning_level(
    const uint8_t & _arg)
  {
    this->headway_warning_level = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SOUND_SILENT =
    0u;
  static constexpr uint8_t SOUND_LDWL =
    1u;
  static constexpr uint8_t SOUND_LDWR =
    2u;
  static constexpr uint8_t SOUND_FAR_HW =
    3u;
  static constexpr uint8_t SOUND_NEAR_HW =
    4u;
  static constexpr uint8_t SOUND_SOFT_FCW =
    5u;
  static constexpr uint8_t SOUND_HARD_FCW =
    6u;
  static constexpr uint8_t SOUND_RESERVED =
    7u;
  static constexpr uint8_t HEADWAY_LEVEL_OFF =
    0u;
  static constexpr uint8_t HEADWAY_LEVEL_GREEN =
    1u;
  static constexpr uint8_t HEADWAY_LEVEL_ORANGE =
    2u;
  static constexpr uint8_t HEADWAY_LEVEL_RED =
    3u;

  // pointer types
  using RawPtr =
    mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__AwsDisplay
    std::shared_ptr<mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__AwsDisplay
    std::shared_ptr<mobileye_560_660_msgs::msg::AwsDisplay_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AwsDisplay_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->suppress_sound != other.suppress_sound) {
      return false;
    }
    if (this->night_time != other.night_time) {
      return false;
    }
    if (this->dusk_time != other.dusk_time) {
      return false;
    }
    if (this->sound_type != other.sound_type) {
      return false;
    }
    if (this->headway_valid != other.headway_valid) {
      return false;
    }
    if (this->headway_measurement != other.headway_measurement) {
      return false;
    }
    if (this->lanes_on != other.lanes_on) {
      return false;
    }
    if (this->left_ldw_on != other.left_ldw_on) {
      return false;
    }
    if (this->right_ldw_on != other.right_ldw_on) {
      return false;
    }
    if (this->fcw_on != other.fcw_on) {
      return false;
    }
    if (this->left_crossing != other.left_crossing) {
      return false;
    }
    if (this->right_crossing != other.right_crossing) {
      return false;
    }
    if (this->maintenance != other.maintenance) {
      return false;
    }
    if (this->failsafe != other.failsafe) {
      return false;
    }
    if (this->ped_fcw != other.ped_fcw) {
      return false;
    }
    if (this->ped_in_dz != other.ped_in_dz) {
      return false;
    }
    if (this->headway_warning_level != other.headway_warning_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const AwsDisplay_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AwsDisplay_

// alias to use template instance with default allocator
using AwsDisplay =
  mobileye_560_660_msgs::msg::AwsDisplay_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::SOUND_SILENT;
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::SOUND_LDWL;
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::SOUND_LDWR;
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::SOUND_FAR_HW;
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::SOUND_NEAR_HW;
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::SOUND_SOFT_FCW;
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::SOUND_HARD_FCW;
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::SOUND_RESERVED;
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::HEADWAY_LEVEL_OFF;
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::HEADWAY_LEVEL_GREEN;
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::HEADWAY_LEVEL_ORANGE;
template<typename ContainerAllocator>
constexpr uint8_t AwsDisplay_<ContainerAllocator>::HEADWAY_LEVEL_RED;

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__STRUCT_HPP_
