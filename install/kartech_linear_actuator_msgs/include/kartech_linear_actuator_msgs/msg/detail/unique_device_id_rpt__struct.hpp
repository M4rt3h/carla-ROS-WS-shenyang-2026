// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/UniqueDeviceIdRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__UNIQUE_DEVICE_ID_RPT__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__UNIQUE_DEVICE_ID_RPT__STRUCT_HPP_

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
# define DEPRECATED__kartech_linear_actuator_msgs__msg__UniqueDeviceIdRpt __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__UniqueDeviceIdRpt __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UniqueDeviceIdRpt_
{
  using Type = UniqueDeviceIdRpt_<ContainerAllocator>;

  explicit UniqueDeviceIdRpt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_id_first_6 = 0ull;
      this->actuator_id_last_6 = 0ull;
    }
  }

  explicit UniqueDeviceIdRpt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_id_first_6 = 0ull;
      this->actuator_id_last_6 = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _actuator_id_first_6_type =
    uint64_t;
  _actuator_id_first_6_type actuator_id_first_6;
  using _actuator_id_last_6_type =
    uint64_t;
  _actuator_id_last_6_type actuator_id_last_6;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__actuator_id_first_6(
    const uint64_t & _arg)
  {
    this->actuator_id_first_6 = _arg;
    return *this;
  }
  Type & set__actuator_id_last_6(
    const uint64_t & _arg)
  {
    this->actuator_id_last_6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__UniqueDeviceIdRpt
    std::shared_ptr<kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__UniqueDeviceIdRpt
    std::shared_ptr<kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UniqueDeviceIdRpt_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->actuator_id_first_6 != other.actuator_id_first_6) {
      return false;
    }
    if (this->actuator_id_last_6 != other.actuator_id_last_6) {
      return false;
    }
    return true;
  }
  bool operator!=(const UniqueDeviceIdRpt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UniqueDeviceIdRpt_

// alias to use template instance with default allocator
using UniqueDeviceIdRpt =
  kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__UNIQUE_DEVICE_ID_RPT__STRUCT_HPP_
