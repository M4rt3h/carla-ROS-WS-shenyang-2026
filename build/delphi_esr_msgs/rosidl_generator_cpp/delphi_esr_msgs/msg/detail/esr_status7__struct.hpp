// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus7.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus7 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus7 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrStatus7_
{
  using Type = EsrStatus7_<ContainerAllocator>;

  explicit EsrStatus7_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->active_fault_0 = 0;
      this->active_fault_1 = 0;
      this->active_fault_2 = 0;
      this->active_fault_3 = 0;
      this->active_fault_4 = 0;
      this->active_fault_5 = 0;
      this->active_fault_6 = 0;
      this->active_fault_7 = 0;
    }
  }

  explicit EsrStatus7_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    canmsg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->active_fault_0 = 0;
      this->active_fault_1 = 0;
      this->active_fault_2 = 0;
      this->active_fault_3 = 0;
      this->active_fault_4 = 0;
      this->active_fault_5 = 0;
      this->active_fault_6 = 0;
      this->active_fault_7 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _canmsg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _canmsg_type canmsg;
  using _active_fault_0_type =
    uint8_t;
  _active_fault_0_type active_fault_0;
  using _active_fault_1_type =
    uint8_t;
  _active_fault_1_type active_fault_1;
  using _active_fault_2_type =
    uint8_t;
  _active_fault_2_type active_fault_2;
  using _active_fault_3_type =
    uint8_t;
  _active_fault_3_type active_fault_3;
  using _active_fault_4_type =
    uint8_t;
  _active_fault_4_type active_fault_4;
  using _active_fault_5_type =
    uint8_t;
  _active_fault_5_type active_fault_5;
  using _active_fault_6_type =
    uint8_t;
  _active_fault_6_type active_fault_6;
  using _active_fault_7_type =
    uint8_t;
  _active_fault_7_type active_fault_7;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__canmsg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->canmsg = _arg;
    return *this;
  }
  Type & set__active_fault_0(
    const uint8_t & _arg)
  {
    this->active_fault_0 = _arg;
    return *this;
  }
  Type & set__active_fault_1(
    const uint8_t & _arg)
  {
    this->active_fault_1 = _arg;
    return *this;
  }
  Type & set__active_fault_2(
    const uint8_t & _arg)
  {
    this->active_fault_2 = _arg;
    return *this;
  }
  Type & set__active_fault_3(
    const uint8_t & _arg)
  {
    this->active_fault_3 = _arg;
    return *this;
  }
  Type & set__active_fault_4(
    const uint8_t & _arg)
  {
    this->active_fault_4 = _arg;
    return *this;
  }
  Type & set__active_fault_5(
    const uint8_t & _arg)
  {
    this->active_fault_5 = _arg;
    return *this;
  }
  Type & set__active_fault_6(
    const uint8_t & _arg)
  {
    this->active_fault_6 = _arg;
    return *this;
  }
  Type & set__active_fault_7(
    const uint8_t & _arg)
  {
    this->active_fault_7 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus7
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus7
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus7_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrStatus7_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->canmsg != other.canmsg) {
      return false;
    }
    if (this->active_fault_0 != other.active_fault_0) {
      return false;
    }
    if (this->active_fault_1 != other.active_fault_1) {
      return false;
    }
    if (this->active_fault_2 != other.active_fault_2) {
      return false;
    }
    if (this->active_fault_3 != other.active_fault_3) {
      return false;
    }
    if (this->active_fault_4 != other.active_fault_4) {
      return false;
    }
    if (this->active_fault_5 != other.active_fault_5) {
      return false;
    }
    if (this->active_fault_6 != other.active_fault_6) {
      return false;
    }
    if (this->active_fault_7 != other.active_fault_7) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrStatus7_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrStatus7_

// alias to use template instance with default allocator
using EsrStatus7 =
  delphi_esr_msgs::msg::EsrStatus7_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__STRUCT_HPP_
