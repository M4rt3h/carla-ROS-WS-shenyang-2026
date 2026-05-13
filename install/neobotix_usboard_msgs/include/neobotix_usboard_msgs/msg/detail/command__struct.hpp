// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neobotix_usboard_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__STRUCT_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__STRUCT_HPP_

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
# define DEPRECATED__neobotix_usboard_msgs__msg__Command __attribute__((deprecated))
#else
# define DEPRECATED__neobotix_usboard_msgs__msg__Command __declspec(deprecated)
#endif

namespace neobotix_usboard_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Command_
{
  using Type = Command_<ContainerAllocator>;

  explicit Command_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->command_data = 0ull;
      this->set_num = 0;
      this->paraset_byte6 = 0;
      this->paraset_byte5 = 0;
      this->paraset_byte4 = 0;
      this->paraset_byte3 = 0;
      this->paraset_byte2 = 0;
      this->paraset_byte1 = 0;
      this->set_active_9to16 = 0;
      this->set_active_1to8 = 0;
    }
  }

  explicit Command_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->command_data = 0ull;
      this->set_num = 0;
      this->paraset_byte6 = 0;
      this->paraset_byte5 = 0;
      this->paraset_byte4 = 0;
      this->paraset_byte3 = 0;
      this->paraset_byte2 = 0;
      this->paraset_byte1 = 0;
      this->set_active_9to16 = 0;
      this->set_active_1to8 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _command_type =
    uint8_t;
  _command_type command;
  using _command_data_type =
    uint64_t;
  _command_data_type command_data;
  using _set_num_type =
    uint8_t;
  _set_num_type set_num;
  using _paraset_byte6_type =
    uint8_t;
  _paraset_byte6_type paraset_byte6;
  using _paraset_byte5_type =
    uint8_t;
  _paraset_byte5_type paraset_byte5;
  using _paraset_byte4_type =
    uint8_t;
  _paraset_byte4_type paraset_byte4;
  using _paraset_byte3_type =
    uint8_t;
  _paraset_byte3_type paraset_byte3;
  using _paraset_byte2_type =
    uint8_t;
  _paraset_byte2_type paraset_byte2;
  using _paraset_byte1_type =
    uint8_t;
  _paraset_byte1_type paraset_byte1;
  using _set_active_9to16_type =
    uint8_t;
  _set_active_9to16_type set_active_9to16;
  using _set_active_1to8_type =
    uint8_t;
  _set_active_1to8_type set_active_1to8;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__command_data(
    const uint64_t & _arg)
  {
    this->command_data = _arg;
    return *this;
  }
  Type & set__set_num(
    const uint8_t & _arg)
  {
    this->set_num = _arg;
    return *this;
  }
  Type & set__paraset_byte6(
    const uint8_t & _arg)
  {
    this->paraset_byte6 = _arg;
    return *this;
  }
  Type & set__paraset_byte5(
    const uint8_t & _arg)
  {
    this->paraset_byte5 = _arg;
    return *this;
  }
  Type & set__paraset_byte4(
    const uint8_t & _arg)
  {
    this->paraset_byte4 = _arg;
    return *this;
  }
  Type & set__paraset_byte3(
    const uint8_t & _arg)
  {
    this->paraset_byte3 = _arg;
    return *this;
  }
  Type & set__paraset_byte2(
    const uint8_t & _arg)
  {
    this->paraset_byte2 = _arg;
    return *this;
  }
  Type & set__paraset_byte1(
    const uint8_t & _arg)
  {
    this->paraset_byte1 = _arg;
    return *this;
  }
  Type & set__set_active_9to16(
    const uint8_t & _arg)
  {
    this->set_active_9to16 = _arg;
    return *this;
  }
  Type & set__set_active_1to8(
    const uint8_t & _arg)
  {
    this->set_active_1to8 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neobotix_usboard_msgs::msg::Command_<ContainerAllocator> *;
  using ConstRawPtr =
    const neobotix_usboard_msgs::msg::Command_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::Command_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::Command_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::Command_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::Command_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::Command_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::Command_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::Command_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::Command_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neobotix_usboard_msgs__msg__Command
    std::shared_ptr<neobotix_usboard_msgs::msg::Command_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neobotix_usboard_msgs__msg__Command
    std::shared_ptr<neobotix_usboard_msgs::msg::Command_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->command_data != other.command_data) {
      return false;
    }
    if (this->set_num != other.set_num) {
      return false;
    }
    if (this->paraset_byte6 != other.paraset_byte6) {
      return false;
    }
    if (this->paraset_byte5 != other.paraset_byte5) {
      return false;
    }
    if (this->paraset_byte4 != other.paraset_byte4) {
      return false;
    }
    if (this->paraset_byte3 != other.paraset_byte3) {
      return false;
    }
    if (this->paraset_byte2 != other.paraset_byte2) {
      return false;
    }
    if (this->paraset_byte1 != other.paraset_byte1) {
      return false;
    }
    if (this->set_active_9to16 != other.set_active_9to16) {
      return false;
    }
    if (this->set_active_1to8 != other.set_active_1to8) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_

// alias to use template instance with default allocator
using Command =
  neobotix_usboard_msgs::msg::Command_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__STRUCT_HPP_
