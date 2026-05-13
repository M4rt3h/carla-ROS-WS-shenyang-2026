// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/SoftwareRevisionRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__STRUCT_HPP_

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
# define DEPRECATED__kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SoftwareRevisionRpt_
{
  using Type = SoftwareRevisionRpt_<ContainerAllocator>;

  explicit SoftwareRevisionRpt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->software_version_0 = 0;
      this->software_version_1 = 0;
      this->software_version_2 = 0;
      this->software_day = 0;
      this->software_month_year = 0;
    }
  }

  explicit SoftwareRevisionRpt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->software_version_0 = 0;
      this->software_version_1 = 0;
      this->software_version_2 = 0;
      this->software_day = 0;
      this->software_month_year = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _software_version_0_type =
    uint8_t;
  _software_version_0_type software_version_0;
  using _software_version_1_type =
    uint8_t;
  _software_version_1_type software_version_1;
  using _software_version_2_type =
    uint8_t;
  _software_version_2_type software_version_2;
  using _software_day_type =
    uint8_t;
  _software_day_type software_day;
  using _software_month_year_type =
    uint16_t;
  _software_month_year_type software_month_year;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__software_version_0(
    const uint8_t & _arg)
  {
    this->software_version_0 = _arg;
    return *this;
  }
  Type & set__software_version_1(
    const uint8_t & _arg)
  {
    this->software_version_1 = _arg;
    return *this;
  }
  Type & set__software_version_2(
    const uint8_t & _arg)
  {
    this->software_version_2 = _arg;
    return *this;
  }
  Type & set__software_day(
    const uint8_t & _arg)
  {
    this->software_day = _arg;
    return *this;
  }
  Type & set__software_month_year(
    const uint16_t & _arg)
  {
    this->software_month_year = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt
    std::shared_ptr<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt
    std::shared_ptr<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoftwareRevisionRpt_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->software_version_0 != other.software_version_0) {
      return false;
    }
    if (this->software_version_1 != other.software_version_1) {
      return false;
    }
    if (this->software_version_2 != other.software_version_2) {
      return false;
    }
    if (this->software_day != other.software_day) {
      return false;
    }
    if (this->software_month_year != other.software_month_year) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoftwareRevisionRpt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoftwareRevisionRpt_

// alias to use template instance with default allocator
using SoftwareRevisionRpt =
  kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__STRUCT_HPP_
