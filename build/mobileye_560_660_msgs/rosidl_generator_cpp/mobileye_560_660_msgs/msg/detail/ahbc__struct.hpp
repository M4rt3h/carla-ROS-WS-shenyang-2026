// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/Ahbc.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC__STRUCT_HPP_

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
# define DEPRECATED__mobileye_560_660_msgs__msg__Ahbc __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__Ahbc __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ahbc_
{
  using Type = Ahbc_<ContainerAllocator>;

  explicit Ahbc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->high_low_beam_decision = 0;
      this->reasons_for_switch_to_low_beam = 0;
    }
  }

  explicit Ahbc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->high_low_beam_decision = 0;
      this->reasons_for_switch_to_low_beam = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _high_low_beam_decision_type =
    uint8_t;
  _high_low_beam_decision_type high_low_beam_decision;
  using _reasons_for_switch_to_low_beam_type =
    uint16_t;
  _reasons_for_switch_to_low_beam_type reasons_for_switch_to_low_beam;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__high_low_beam_decision(
    const uint8_t & _arg)
  {
    this->high_low_beam_decision = _arg;
    return *this;
  }
  Type & set__reasons_for_switch_to_low_beam(
    const uint16_t & _arg)
  {
    this->reasons_for_switch_to_low_beam = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HIGH_LOW_BEAM_DECISION_NO_RECOMMENDATION =
    0u;
  static constexpr uint8_t HIGH_LOW_BEAM_DECISION_RECOMMENDATION_OFF =
    1u;
  static constexpr uint8_t HIGH_LOW_BEAM_DECISION_RECOMMENDATION_ON =
    2u;
  static constexpr uint8_t HIGH_LOW_BEAM_DECISION_INVALID =
    3u;

  // pointer types
  using RawPtr =
    mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__Ahbc
    std::shared_ptr<mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__Ahbc
    std::shared_ptr<mobileye_560_660_msgs::msg::Ahbc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ahbc_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->high_low_beam_decision != other.high_low_beam_decision) {
      return false;
    }
    if (this->reasons_for_switch_to_low_beam != other.reasons_for_switch_to_low_beam) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ahbc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ahbc_

// alias to use template instance with default allocator
using Ahbc =
  mobileye_560_660_msgs::msg::Ahbc_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Ahbc_<ContainerAllocator>::HIGH_LOW_BEAM_DECISION_NO_RECOMMENDATION;
template<typename ContainerAllocator>
constexpr uint8_t Ahbc_<ContainerAllocator>::HIGH_LOW_BEAM_DECISION_RECOMMENDATION_OFF;
template<typename ContainerAllocator>
constexpr uint8_t Ahbc_<ContainerAllocator>::HIGH_LOW_BEAM_DECISION_RECOMMENDATION_ON;
template<typename ContainerAllocator>
constexpr uint8_t Ahbc_<ContainerAllocator>::HIGH_LOW_BEAM_DECISION_INVALID;

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC__STRUCT_HPP_
