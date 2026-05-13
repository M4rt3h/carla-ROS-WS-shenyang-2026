// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/EnhancedPositionRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__STRUCT_HPP_

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
# define DEPRECATED__kartech_linear_actuator_msgs__msg__EnhancedPositionRpt __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__EnhancedPositionRpt __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnhancedPositionRpt_
{
  using Type = EnhancedPositionRpt_<ContainerAllocator>;

  explicit EnhancedPositionRpt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shaft_extension = 0.0;
      this->motor_overload_error = false;
      this->clutch_overload_error = false;
      this->motor_open_load_error = false;
      this->clutch_open_load_error = false;
      this->position_reach_error = false;
      this->hardware_warning_1_error = false;
      this->hardware_warning_2_error = false;
      this->motor_current = 0;
    }
  }

  explicit EnhancedPositionRpt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shaft_extension = 0.0;
      this->motor_overload_error = false;
      this->clutch_overload_error = false;
      this->motor_open_load_error = false;
      this->clutch_open_load_error = false;
      this->position_reach_error = false;
      this->hardware_warning_1_error = false;
      this->hardware_warning_2_error = false;
      this->motor_current = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _shaft_extension_type =
    double;
  _shaft_extension_type shaft_extension;
  using _motor_overload_error_type =
    bool;
  _motor_overload_error_type motor_overload_error;
  using _clutch_overload_error_type =
    bool;
  _clutch_overload_error_type clutch_overload_error;
  using _motor_open_load_error_type =
    bool;
  _motor_open_load_error_type motor_open_load_error;
  using _clutch_open_load_error_type =
    bool;
  _clutch_open_load_error_type clutch_open_load_error;
  using _position_reach_error_type =
    bool;
  _position_reach_error_type position_reach_error;
  using _hardware_warning_1_error_type =
    bool;
  _hardware_warning_1_error_type hardware_warning_1_error;
  using _hardware_warning_2_error_type =
    bool;
  _hardware_warning_2_error_type hardware_warning_2_error;
  using _motor_current_type =
    uint16_t;
  _motor_current_type motor_current;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__shaft_extension(
    const double & _arg)
  {
    this->shaft_extension = _arg;
    return *this;
  }
  Type & set__motor_overload_error(
    const bool & _arg)
  {
    this->motor_overload_error = _arg;
    return *this;
  }
  Type & set__clutch_overload_error(
    const bool & _arg)
  {
    this->clutch_overload_error = _arg;
    return *this;
  }
  Type & set__motor_open_load_error(
    const bool & _arg)
  {
    this->motor_open_load_error = _arg;
    return *this;
  }
  Type & set__clutch_open_load_error(
    const bool & _arg)
  {
    this->clutch_open_load_error = _arg;
    return *this;
  }
  Type & set__position_reach_error(
    const bool & _arg)
  {
    this->position_reach_error = _arg;
    return *this;
  }
  Type & set__hardware_warning_1_error(
    const bool & _arg)
  {
    this->hardware_warning_1_error = _arg;
    return *this;
  }
  Type & set__hardware_warning_2_error(
    const bool & _arg)
  {
    this->hardware_warning_2_error = _arg;
    return *this;
  }
  Type & set__motor_current(
    const uint16_t & _arg)
  {
    this->motor_current = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__EnhancedPositionRpt
    std::shared_ptr<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__EnhancedPositionRpt
    std::shared_ptr<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnhancedPositionRpt_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->shaft_extension != other.shaft_extension) {
      return false;
    }
    if (this->motor_overload_error != other.motor_overload_error) {
      return false;
    }
    if (this->clutch_overload_error != other.clutch_overload_error) {
      return false;
    }
    if (this->motor_open_load_error != other.motor_open_load_error) {
      return false;
    }
    if (this->clutch_open_load_error != other.clutch_open_load_error) {
      return false;
    }
    if (this->position_reach_error != other.position_reach_error) {
      return false;
    }
    if (this->hardware_warning_1_error != other.hardware_warning_1_error) {
      return false;
    }
    if (this->hardware_warning_2_error != other.hardware_warning_2_error) {
      return false;
    }
    if (this->motor_current != other.motor_current) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnhancedPositionRpt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnhancedPositionRpt_

// alias to use template instance with default allocator
using EnhancedPositionRpt =
  kartech_linear_actuator_msgs::msg::EnhancedPositionRpt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__STRUCT_HPP_
