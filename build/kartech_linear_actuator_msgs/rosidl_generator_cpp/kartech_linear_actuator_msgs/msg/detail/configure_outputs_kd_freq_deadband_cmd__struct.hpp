// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ConfigureOutputsKdFreqDeadbandCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__STRUCT_HPP_

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
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConfigureOutputsKdFreqDeadbandCmd_
{
  using Type = ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator>;

  explicit ConfigureOutputsKdFreqDeadbandCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->kd = 0;
      this->closed_loop_freq = 0;
      this->error_dead_band = 0.0;
    }
  }

  explicit ConfigureOutputsKdFreqDeadbandCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->kd = 0;
      this->closed_loop_freq = 0;
      this->error_dead_band = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _confirm_type =
    bool;
  _confirm_type confirm;
  using _kd_type =
    uint16_t;
  _kd_type kd;
  using _closed_loop_freq_type =
    uint8_t;
  _closed_loop_freq_type closed_loop_freq;
  using _error_dead_band_type =
    double;
  _error_dead_band_type error_dead_band;

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
  Type & set__kd(
    const uint16_t & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__closed_loop_freq(
    const uint8_t & _arg)
  {
    this->closed_loop_freq = _arg;
    return *this;
  }
  Type & set__error_dead_band(
    const double & _arg)
  {
    this->error_dead_band = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureOutputsKdFreqDeadbandCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->confirm != other.confirm) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->closed_loop_freq != other.closed_loop_freq) {
      return false;
    }
    if (this->error_dead_band != other.error_dead_band) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureOutputsKdFreqDeadbandCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureOutputsKdFreqDeadbandCmd_

// alias to use template instance with default allocator
using ConfigureOutputsKdFreqDeadbandCmd =
  kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__STRUCT_HPP_
