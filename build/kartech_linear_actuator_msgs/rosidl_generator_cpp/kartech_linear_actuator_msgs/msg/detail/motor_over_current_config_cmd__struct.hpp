// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/MotorOverCurrentConfigCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__MOTOR_OVER_CURRENT_CONFIG_CMD__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__MOTOR_OVER_CURRENT_CONFIG_CMD__STRUCT_HPP_

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
# define DEPRECATED__kartech_linear_actuator_msgs__msg__MotorOverCurrentConfigCmd __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__MotorOverCurrentConfigCmd __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorOverCurrentConfigCmd_
{
  using Type = MotorOverCurrentConfigCmd_<ContainerAllocator>;

  explicit MotorOverCurrentConfigCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->over_current = 0;
    }
  }

  explicit MotorOverCurrentConfigCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->over_current = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _confirm_type =
    bool;
  _confirm_type confirm;
  using _over_current_type =
    uint16_t;
  _over_current_type over_current;

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
  Type & set__over_current(
    const uint16_t & _arg)
  {
    this->over_current = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__MotorOverCurrentConfigCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__MotorOverCurrentConfigCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorOverCurrentConfigCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->confirm != other.confirm) {
      return false;
    }
    if (this->over_current != other.over_current) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorOverCurrentConfigCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorOverCurrentConfigCmd_

// alias to use template instance with default allocator
using MotorOverCurrentConfigCmd =
  kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__MOTOR_OVER_CURRENT_CONFIG_CMD__STRUCT_HPP_
