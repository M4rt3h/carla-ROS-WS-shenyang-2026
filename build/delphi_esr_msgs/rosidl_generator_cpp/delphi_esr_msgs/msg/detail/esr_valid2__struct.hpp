// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrValid2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrValid2 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrValid2 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrValid2_
{
  using Type = EsrValid2_<ContainerAllocator>;

  explicit EsrValid2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->mr_sn = 0;
      this->mr_range = 0.0f;
      this->mr_range_rate = 0.0f;
      this->mr_angle = 0.0f;
      this->mr_power = 0;
    }
  }

  explicit EsrValid2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    canmsg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->mr_sn = 0;
      this->mr_range = 0.0f;
      this->mr_range_rate = 0.0f;
      this->mr_angle = 0.0f;
      this->mr_power = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _canmsg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _canmsg_type canmsg;
  using _mr_sn_type =
    uint8_t;
  _mr_sn_type mr_sn;
  using _mr_range_type =
    float;
  _mr_range_type mr_range;
  using _mr_range_rate_type =
    float;
  _mr_range_rate_type mr_range_rate;
  using _mr_angle_type =
    float;
  _mr_angle_type mr_angle;
  using _mr_power_type =
    int8_t;
  _mr_power_type mr_power;

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
  Type & set__mr_sn(
    const uint8_t & _arg)
  {
    this->mr_sn = _arg;
    return *this;
  }
  Type & set__mr_range(
    const float & _arg)
  {
    this->mr_range = _arg;
    return *this;
  }
  Type & set__mr_range_rate(
    const float & _arg)
  {
    this->mr_range_rate = _arg;
    return *this;
  }
  Type & set__mr_angle(
    const float & _arg)
  {
    this->mr_angle = _arg;
    return *this;
  }
  Type & set__mr_power(
    const int8_t & _arg)
  {
    this->mr_power = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrValid2
    std::shared_ptr<delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrValid2
    std::shared_ptr<delphi_esr_msgs::msg::EsrValid2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrValid2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->canmsg != other.canmsg) {
      return false;
    }
    if (this->mr_sn != other.mr_sn) {
      return false;
    }
    if (this->mr_range != other.mr_range) {
      return false;
    }
    if (this->mr_range_rate != other.mr_range_rate) {
      return false;
    }
    if (this->mr_angle != other.mr_angle) {
      return false;
    }
    if (this->mr_power != other.mr_power) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrValid2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrValid2_

// alias to use template instance with default allocator
using EsrValid2 =
  delphi_esr_msgs::msg::EsrValid2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__STRUCT_HPP_
