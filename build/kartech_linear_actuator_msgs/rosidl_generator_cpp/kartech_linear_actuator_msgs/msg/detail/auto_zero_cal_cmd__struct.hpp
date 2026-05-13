// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/AutoZeroCalCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__AUTO_ZERO_CAL_CMD__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__AUTO_ZERO_CAL_CMD__STRUCT_HPP_

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
# define DEPRECATED__kartech_linear_actuator_msgs__msg__AutoZeroCalCmd __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__AutoZeroCalCmd __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutoZeroCalCmd_
{
  using Type = AutoZeroCalCmd_<ContainerAllocator>;

  explicit AutoZeroCalCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->auto_reply = false;
    }
  }

  explicit AutoZeroCalCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->auto_reply = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _confirm_type =
    bool;
  _confirm_type confirm;
  using _auto_reply_type =
    bool;
  _auto_reply_type auto_reply;

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
  Type & set__auto_reply(
    const bool & _arg)
  {
    this->auto_reply = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__AutoZeroCalCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__AutoZeroCalCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoZeroCalCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->confirm != other.confirm) {
      return false;
    }
    if (this->auto_reply != other.auto_reply) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoZeroCalCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoZeroCalCmd_

// alias to use template instance with default allocator
using AutoZeroCalCmd =
  kartech_linear_actuator_msgs::msg::AutoZeroCalCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__AUTO_ZERO_CAL_CMD__STRUCT_HPP_
