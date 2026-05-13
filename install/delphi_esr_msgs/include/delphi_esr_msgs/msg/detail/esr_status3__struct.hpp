// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus3 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus3 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrStatus3_
{
  using Type = EsrStatus3_<ContainerAllocator>;

  explicit EsrStatus3_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->interface_version = 0;
      this->hw_version = 0;
      this->sw_version_host = "";
      this->serial_num = "";
      this->sw_version_pld = 0;
    }
  }

  explicit EsrStatus3_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    canmsg(_alloc),
    sw_version_host(_alloc),
    serial_num(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->interface_version = 0;
      this->hw_version = 0;
      this->sw_version_host = "";
      this->serial_num = "";
      this->sw_version_pld = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _canmsg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _canmsg_type canmsg;
  using _interface_version_type =
    uint8_t;
  _interface_version_type interface_version;
  using _hw_version_type =
    uint8_t;
  _hw_version_type hw_version;
  using _sw_version_host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sw_version_host_type sw_version_host;
  using _serial_num_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _serial_num_type serial_num;
  using _sw_version_pld_type =
    uint8_t;
  _sw_version_pld_type sw_version_pld;

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
  Type & set__interface_version(
    const uint8_t & _arg)
  {
    this->interface_version = _arg;
    return *this;
  }
  Type & set__hw_version(
    const uint8_t & _arg)
  {
    this->hw_version = _arg;
    return *this;
  }
  Type & set__sw_version_host(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sw_version_host = _arg;
    return *this;
  }
  Type & set__serial_num(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->serial_num = _arg;
    return *this;
  }
  Type & set__sw_version_pld(
    const uint8_t & _arg)
  {
    this->sw_version_pld = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus3
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus3
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus3_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrStatus3_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->canmsg != other.canmsg) {
      return false;
    }
    if (this->interface_version != other.interface_version) {
      return false;
    }
    if (this->hw_version != other.hw_version) {
      return false;
    }
    if (this->sw_version_host != other.sw_version_host) {
      return false;
    }
    if (this->serial_num != other.serial_num) {
      return false;
    }
    if (this->sw_version_pld != other.sw_version_pld) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrStatus3_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrStatus3_

// alias to use template instance with default allocator
using EsrStatus3 =
  delphi_esr_msgs::msg::EsrStatus3_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__STRUCT_HPP_
