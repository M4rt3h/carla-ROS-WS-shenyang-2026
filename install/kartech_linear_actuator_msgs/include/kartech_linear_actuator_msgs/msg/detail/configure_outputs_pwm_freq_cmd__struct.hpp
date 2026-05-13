// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ConfigureOutputsPwmFreqCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_PWM_FREQ_CMD__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_PWM_FREQ_CMD__STRUCT_HPP_

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
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ConfigureOutputsPwmFreqCmd __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ConfigureOutputsPwmFreqCmd __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConfigureOutputsPwmFreqCmd_
{
  using Type = ConfigureOutputsPwmFreqCmd_<ContainerAllocator>;

  explicit ConfigureOutputsPwmFreqCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->min_pwm_pct = 0;
      this->max_pwm_pct = 0;
      this->pwm_freq = 0;
    }
  }

  explicit ConfigureOutputsPwmFreqCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->min_pwm_pct = 0;
      this->max_pwm_pct = 0;
      this->pwm_freq = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _confirm_type =
    bool;
  _confirm_type confirm;
  using _min_pwm_pct_type =
    uint8_t;
  _min_pwm_pct_type min_pwm_pct;
  using _max_pwm_pct_type =
    uint8_t;
  _max_pwm_pct_type max_pwm_pct;
  using _pwm_freq_type =
    uint16_t;
  _pwm_freq_type pwm_freq;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__confirm(
    const bool & _arg)
  {
    this->confirm = _arg;
    return *this;
  }
  Type & set__min_pwm_pct(
    const uint8_t & _arg)
  {
    this->min_pwm_pct = _arg;
    return *this;
  }
  Type & set__max_pwm_pct(
    const uint8_t & _arg)
  {
    this->max_pwm_pct = _arg;
    return *this;
  }
  Type & set__pwm_freq(
    const uint16_t & _arg)
  {
    this->pwm_freq = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ConfigureOutputsPwmFreqCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ConfigureOutputsPwmFreqCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureOutputsPwmFreqCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->confirm != other.confirm) {
      return false;
    }
    if (this->min_pwm_pct != other.min_pwm_pct) {
      return false;
    }
    if (this->max_pwm_pct != other.max_pwm_pct) {
      return false;
    }
    if (this->pwm_freq != other.pwm_freq) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureOutputsPwmFreqCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureOutputsPwmFreqCmd_

// alias to use template instance with default allocator
using ConfigureOutputsPwmFreqCmd =
  kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_PWM_FREQ_CMD__STRUCT_HPP_
