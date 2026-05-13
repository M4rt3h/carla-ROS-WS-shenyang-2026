// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ReassignCommandIdCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__STRUCT_HPP_

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
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReassignCommandIdCmd_
{
  using Type = ReassignCommandIdCmd_<ContainerAllocator>;

  explicit ReassignCommandIdCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->command_id_index = 0;
      this->user_command_id = 0ul;
      this->disable_default_command_id = false;
    }
  }

  explicit ReassignCommandIdCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->command_id_index = 0;
      this->user_command_id = 0ul;
      this->disable_default_command_id = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _confirm_type =
    bool;
  _confirm_type confirm;
  using _command_id_index_type =
    uint8_t;
  _command_id_index_type command_id_index;
  using _user_command_id_type =
    uint32_t;
  _user_command_id_type user_command_id;
  using _disable_default_command_id_type =
    bool;
  _disable_default_command_id_type disable_default_command_id;

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
  Type & set__command_id_index(
    const uint8_t & _arg)
  {
    this->command_id_index = _arg;
    return *this;
  }
  Type & set__user_command_id(
    const uint32_t & _arg)
  {
    this->user_command_id = _arg;
    return *this;
  }
  Type & set__disable_default_command_id(
    const bool & _arg)
  {
    this->disable_default_command_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReassignCommandIdCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->confirm != other.confirm) {
      return false;
    }
    if (this->command_id_index != other.command_id_index) {
      return false;
    }
    if (this->user_command_id != other.user_command_id) {
      return false;
    }
    if (this->disable_default_command_id != other.disable_default_command_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReassignCommandIdCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReassignCommandIdCmd_

// alias to use template instance with default allocator
using ReassignCommandIdCmd =
  kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__STRUCT_HPP_
