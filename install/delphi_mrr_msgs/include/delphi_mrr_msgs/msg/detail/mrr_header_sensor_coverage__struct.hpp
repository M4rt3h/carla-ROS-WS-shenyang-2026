// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderSensorCoverage.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderSensorCoverage __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderSensorCoverage __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrHeaderSensorCoverage_
{
  using Type = MrrHeaderSensorCoverage_<ContainerAllocator>;

  explicit MrrHeaderSensorCoverage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_sensor_fov_hor = 0;
      this->can_doppler_coverage = 0;
      this->can_range_coverage = 0;
    }
  }

  explicit MrrHeaderSensorCoverage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_sensor_fov_hor = 0;
      this->can_doppler_coverage = 0;
      this->can_range_coverage = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_sensor_fov_hor_type =
    uint8_t;
  _can_sensor_fov_hor_type can_sensor_fov_hor;
  using _can_doppler_coverage_type =
    int8_t;
  _can_doppler_coverage_type can_doppler_coverage;
  using _can_range_coverage_type =
    uint8_t;
  _can_range_coverage_type can_range_coverage;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_sensor_fov_hor(
    const uint8_t & _arg)
  {
    this->can_sensor_fov_hor = _arg;
    return *this;
  }
  Type & set__can_doppler_coverage(
    const int8_t & _arg)
  {
    this->can_doppler_coverage = _arg;
    return *this;
  }
  Type & set__can_range_coverage(
    const uint8_t & _arg)
  {
    this->can_range_coverage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderSensorCoverage
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderSensorCoverage
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrHeaderSensorCoverage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_sensor_fov_hor != other.can_sensor_fov_hor) {
      return false;
    }
    if (this->can_doppler_coverage != other.can_doppler_coverage) {
      return false;
    }
    if (this->can_range_coverage != other.can_range_coverage) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrHeaderSensorCoverage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrHeaderSensorCoverage_

// alias to use template instance with default allocator
using MrrHeaderSensorCoverage =
  delphi_mrr_msgs::msg::MrrHeaderSensorCoverage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__STRUCT_HPP_
