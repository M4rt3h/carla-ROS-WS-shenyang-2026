// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_srr_msgs:msg/SrrDebug5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG5__STRUCT_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG5__STRUCT_HPP_

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
# define DEPRECATED__delphi_srr_msgs__msg__SrrDebug5 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_srr_msgs__msg__SrrDebug5 __declspec(deprecated)
#endif

namespace delphi_srr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SrrDebug5_
{
  using Type = SrrDebug5_<ContainerAllocator>;

  explicit SrrDebug5_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_align_updates = 0;
    }
  }

  explicit SrrDebug5_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_align_updates = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_tx_align_updates_type =
    uint16_t;
  _can_tx_align_updates_type can_tx_align_updates;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_tx_align_updates(
    const uint16_t & _arg)
  {
    this->can_tx_align_updates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrDebug5
    std::shared_ptr<delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrDebug5
    std::shared_ptr<delphi_srr_msgs::msg::SrrDebug5_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrrDebug5_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_tx_align_updates != other.can_tx_align_updates) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrrDebug5_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrrDebug5_

// alias to use template instance with default allocator
using SrrDebug5 =
  delphi_srr_msgs::msg::SrrDebug5_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG5__STRUCT_HPP_
