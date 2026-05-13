// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusSerialNumber.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SERIAL_NUMBER__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SERIAL_NUMBER__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrStatusSerialNumber __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrStatusSerialNumber __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrStatusSerialNumber_
{
  using Type = MrrStatusSerialNumber_<ContainerAllocator>;

  explicit MrrStatusSerialNumber_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_sequence_number = 0;
      this->can_serial_number = 0ull;
    }
  }

  explicit MrrStatusSerialNumber_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_sequence_number = 0;
      this->can_serial_number = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_sequence_number_type =
    uint16_t;
  _can_sequence_number_type can_sequence_number;
  using _can_serial_number_type =
    uint64_t;
  _can_serial_number_type can_serial_number;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_sequence_number(
    const uint16_t & _arg)
  {
    this->can_sequence_number = _arg;
    return *this;
  }
  Type & set__can_serial_number(
    const uint64_t & _arg)
  {
    this->can_serial_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrStatusSerialNumber
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrStatusSerialNumber
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusSerialNumber_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrStatusSerialNumber_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_sequence_number != other.can_sequence_number) {
      return false;
    }
    if (this->can_serial_number != other.can_serial_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrStatusSerialNumber_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrStatusSerialNumber_

// alias to use template instance with default allocator
using MrrStatusSerialNumber =
  delphi_mrr_msgs::msg::MrrStatusSerialNumber_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SERIAL_NUMBER__STRUCT_HPP_
