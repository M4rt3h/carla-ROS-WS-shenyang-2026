// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ZeroingMessageRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__STRUCT_HPP_

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
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ZeroingMessageRpt __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ZeroingMessageRpt __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ZeroingMessageRpt_
{
  using Type = ZeroingMessageRpt_<ContainerAllocator>;

  explicit ZeroingMessageRpt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chip_1_voltage = 0;
      this->chip_2_voltage = 0;
      this->chip_error_1 = 0;
      this->chip_error_2 = 0;
    }
  }

  explicit ZeroingMessageRpt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chip_1_voltage = 0;
      this->chip_2_voltage = 0;
      this->chip_error_1 = 0;
      this->chip_error_2 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _chip_1_voltage_type =
    uint16_t;
  _chip_1_voltage_type chip_1_voltage;
  using _chip_2_voltage_type =
    uint16_t;
  _chip_2_voltage_type chip_2_voltage;
  using _chip_error_1_type =
    uint8_t;
  _chip_error_1_type chip_error_1;
  using _chip_error_2_type =
    uint8_t;
  _chip_error_2_type chip_error_2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__chip_1_voltage(
    const uint16_t & _arg)
  {
    this->chip_1_voltage = _arg;
    return *this;
  }
  Type & set__chip_2_voltage(
    const uint16_t & _arg)
  {
    this->chip_2_voltage = _arg;
    return *this;
  }
  Type & set__chip_error_1(
    const uint8_t & _arg)
  {
    this->chip_error_1 = _arg;
    return *this;
  }
  Type & set__chip_error_2(
    const uint8_t & _arg)
  {
    this->chip_error_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ZeroingMessageRpt
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ZeroingMessageRpt
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ZeroingMessageRpt_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->chip_1_voltage != other.chip_1_voltage) {
      return false;
    }
    if (this->chip_2_voltage != other.chip_2_voltage) {
      return false;
    }
    if (this->chip_error_1 != other.chip_error_1) {
      return false;
    }
    if (this->chip_error_2 != other.chip_error_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const ZeroingMessageRpt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ZeroingMessageRpt_

// alias to use template instance with default allocator
using ZeroingMessageRpt =
  kartech_linear_actuator_msgs::msg::ZeroingMessageRpt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__STRUCT_HPP_
