// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neobotix_usboard_msgs:msg/AnsToCmdConnect.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__STRUCT_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__STRUCT_HPP_

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
# define DEPRECATED__neobotix_usboard_msgs__msg__AnsToCmdConnect __attribute__((deprecated))
#else
# define DEPRECATED__neobotix_usboard_msgs__msg__AnsToCmdConnect __declspec(deprecated)
#endif

namespace neobotix_usboard_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AnsToCmdConnect_
{
  using Type = AnsToCmdConnect_<ContainerAllocator>;

  explicit AnsToCmdConnect_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->cmd_connect_ans_d7 = 0;
      this->cmd_connect_ans_d6 = 0;
      this->cmd_connect_ans_d5 = 0;
      this->cmd_connect_ans_d4 = 0;
      this->cmd_connect_ans_d3 = 0;
      this->cmd_connect_ans_d2 = 0;
      this->cmd_connect_ans_d1 = 0;
    }
  }

  explicit AnsToCmdConnect_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->cmd_connect_ans_d7 = 0;
      this->cmd_connect_ans_d6 = 0;
      this->cmd_connect_ans_d5 = 0;
      this->cmd_connect_ans_d4 = 0;
      this->cmd_connect_ans_d3 = 0;
      this->cmd_connect_ans_d2 = 0;
      this->cmd_connect_ans_d1 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _command_type =
    uint8_t;
  _command_type command;
  using _cmd_connect_ans_d7_type =
    uint8_t;
  _cmd_connect_ans_d7_type cmd_connect_ans_d7;
  using _cmd_connect_ans_d6_type =
    uint8_t;
  _cmd_connect_ans_d6_type cmd_connect_ans_d6;
  using _cmd_connect_ans_d5_type =
    uint8_t;
  _cmd_connect_ans_d5_type cmd_connect_ans_d5;
  using _cmd_connect_ans_d4_type =
    uint8_t;
  _cmd_connect_ans_d4_type cmd_connect_ans_d4;
  using _cmd_connect_ans_d3_type =
    uint8_t;
  _cmd_connect_ans_d3_type cmd_connect_ans_d3;
  using _cmd_connect_ans_d2_type =
    uint8_t;
  _cmd_connect_ans_d2_type cmd_connect_ans_d2;
  using _cmd_connect_ans_d1_type =
    uint8_t;
  _cmd_connect_ans_d1_type cmd_connect_ans_d1;

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
  Type & set__cmd_connect_ans_d7(
    const uint8_t & _arg)
  {
    this->cmd_connect_ans_d7 = _arg;
    return *this;
  }
  Type & set__cmd_connect_ans_d6(
    const uint8_t & _arg)
  {
    this->cmd_connect_ans_d6 = _arg;
    return *this;
  }
  Type & set__cmd_connect_ans_d5(
    const uint8_t & _arg)
  {
    this->cmd_connect_ans_d5 = _arg;
    return *this;
  }
  Type & set__cmd_connect_ans_d4(
    const uint8_t & _arg)
  {
    this->cmd_connect_ans_d4 = _arg;
    return *this;
  }
  Type & set__cmd_connect_ans_d3(
    const uint8_t & _arg)
  {
    this->cmd_connect_ans_d3 = _arg;
    return *this;
  }
  Type & set__cmd_connect_ans_d2(
    const uint8_t & _arg)
  {
    this->cmd_connect_ans_d2 = _arg;
    return *this;
  }
  Type & set__cmd_connect_ans_d1(
    const uint8_t & _arg)
  {
    this->cmd_connect_ans_d1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator> *;
  using ConstRawPtr =
    const neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neobotix_usboard_msgs__msg__AnsToCmdConnect
    std::shared_ptr<neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neobotix_usboard_msgs__msg__AnsToCmdConnect
    std::shared_ptr<neobotix_usboard_msgs::msg::AnsToCmdConnect_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnsToCmdConnect_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->cmd_connect_ans_d7 != other.cmd_connect_ans_d7) {
      return false;
    }
    if (this->cmd_connect_ans_d6 != other.cmd_connect_ans_d6) {
      return false;
    }
    if (this->cmd_connect_ans_d5 != other.cmd_connect_ans_d5) {
      return false;
    }
    if (this->cmd_connect_ans_d4 != other.cmd_connect_ans_d4) {
      return false;
    }
    if (this->cmd_connect_ans_d3 != other.cmd_connect_ans_d3) {
      return false;
    }
    if (this->cmd_connect_ans_d2 != other.cmd_connect_ans_d2) {
      return false;
    }
    if (this->cmd_connect_ans_d1 != other.cmd_connect_ans_d1) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnsToCmdConnect_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnsToCmdConnect_

// alias to use template instance with default allocator
using AnsToCmdConnect =
  neobotix_usboard_msgs::msg::AnsToCmdConnect_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__STRUCT_HPP_
