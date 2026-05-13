// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS5__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS5__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus5 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus5 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrStatus5_
{
  using Type = EsrStatus5_<ContainerAllocator>;

  explicit EsrStatus5_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->swbatt_a2d = 0;
      this->ignp_a2d = 0;
      this->temp1_a2d = 0;
      this->temp2_a2d = 0;
      this->supply_5va_a2d = 0;
      this->supply_5vdx_a2d = 0;
      this->supply_3p3v_a2d = 0;
      this->supply_10v_a2d = 0;
    }
  }

  explicit EsrStatus5_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    canmsg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->swbatt_a2d = 0;
      this->ignp_a2d = 0;
      this->temp1_a2d = 0;
      this->temp2_a2d = 0;
      this->supply_5va_a2d = 0;
      this->supply_5vdx_a2d = 0;
      this->supply_3p3v_a2d = 0;
      this->supply_10v_a2d = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _canmsg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _canmsg_type canmsg;
  using _swbatt_a2d_type =
    uint8_t;
  _swbatt_a2d_type swbatt_a2d;
  using _ignp_a2d_type =
    uint8_t;
  _ignp_a2d_type ignp_a2d;
  using _temp1_a2d_type =
    uint8_t;
  _temp1_a2d_type temp1_a2d;
  using _temp2_a2d_type =
    uint8_t;
  _temp2_a2d_type temp2_a2d;
  using _supply_5va_a2d_type =
    uint8_t;
  _supply_5va_a2d_type supply_5va_a2d;
  using _supply_5vdx_a2d_type =
    uint8_t;
  _supply_5vdx_a2d_type supply_5vdx_a2d;
  using _supply_3p3v_a2d_type =
    uint8_t;
  _supply_3p3v_a2d_type supply_3p3v_a2d;
  using _supply_10v_a2d_type =
    uint8_t;
  _supply_10v_a2d_type supply_10v_a2d;

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
  Type & set__swbatt_a2d(
    const uint8_t & _arg)
  {
    this->swbatt_a2d = _arg;
    return *this;
  }
  Type & set__ignp_a2d(
    const uint8_t & _arg)
  {
    this->ignp_a2d = _arg;
    return *this;
  }
  Type & set__temp1_a2d(
    const uint8_t & _arg)
  {
    this->temp1_a2d = _arg;
    return *this;
  }
  Type & set__temp2_a2d(
    const uint8_t & _arg)
  {
    this->temp2_a2d = _arg;
    return *this;
  }
  Type & set__supply_5va_a2d(
    const uint8_t & _arg)
  {
    this->supply_5va_a2d = _arg;
    return *this;
  }
  Type & set__supply_5vdx_a2d(
    const uint8_t & _arg)
  {
    this->supply_5vdx_a2d = _arg;
    return *this;
  }
  Type & set__supply_3p3v_a2d(
    const uint8_t & _arg)
  {
    this->supply_3p3v_a2d = _arg;
    return *this;
  }
  Type & set__supply_10v_a2d(
    const uint8_t & _arg)
  {
    this->supply_10v_a2d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus5
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus5
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus5_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrStatus5_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->canmsg != other.canmsg) {
      return false;
    }
    if (this->swbatt_a2d != other.swbatt_a2d) {
      return false;
    }
    if (this->ignp_a2d != other.ignp_a2d) {
      return false;
    }
    if (this->temp1_a2d != other.temp1_a2d) {
      return false;
    }
    if (this->temp2_a2d != other.temp2_a2d) {
      return false;
    }
    if (this->supply_5va_a2d != other.supply_5va_a2d) {
      return false;
    }
    if (this->supply_5vdx_a2d != other.supply_5vdx_a2d) {
      return false;
    }
    if (this->supply_3p3v_a2d != other.supply_3p3v_a2d) {
      return false;
    }
    if (this->supply_10v_a2d != other.supply_10v_a2d) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrStatus5_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrStatus5_

// alias to use template instance with default allocator
using EsrStatus5 =
  delphi_esr_msgs::msg::EsrStatus5_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS5__STRUCT_HPP_
