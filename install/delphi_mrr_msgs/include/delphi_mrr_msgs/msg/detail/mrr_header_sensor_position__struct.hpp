// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderSensorPosition.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_POSITION__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_POSITION__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderSensorPosition __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderSensorPosition __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrHeaderSensorPosition_
{
  using Type = MrrHeaderSensorPosition_<ContainerAllocator>;

  explicit MrrHeaderSensorPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_sensor_polarity = false;
      this->can_sensor_lat_offset = 0.0f;
      this->can_sensor_long_offset = 0.0f;
      this->can_sensor_hangle_offset = 0.0f;
    }
  }

  explicit MrrHeaderSensorPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_sensor_polarity = false;
      this->can_sensor_lat_offset = 0.0f;
      this->can_sensor_long_offset = 0.0f;
      this->can_sensor_hangle_offset = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_sensor_polarity_type =
    bool;
  _can_sensor_polarity_type can_sensor_polarity;
  using _can_sensor_lat_offset_type =
    float;
  _can_sensor_lat_offset_type can_sensor_lat_offset;
  using _can_sensor_long_offset_type =
    float;
  _can_sensor_long_offset_type can_sensor_long_offset;
  using _can_sensor_hangle_offset_type =
    float;
  _can_sensor_hangle_offset_type can_sensor_hangle_offset;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_sensor_polarity(
    const bool & _arg)
  {
    this->can_sensor_polarity = _arg;
    return *this;
  }
  Type & set__can_sensor_lat_offset(
    const float & _arg)
  {
    this->can_sensor_lat_offset = _arg;
    return *this;
  }
  Type & set__can_sensor_long_offset(
    const float & _arg)
  {
    this->can_sensor_long_offset = _arg;
    return *this;
  }
  Type & set__can_sensor_hangle_offset(
    const float & _arg)
  {
    this->can_sensor_hangle_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderSensorPosition
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderSensorPosition
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrHeaderSensorPosition_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_sensor_polarity != other.can_sensor_polarity) {
      return false;
    }
    if (this->can_sensor_lat_offset != other.can_sensor_lat_offset) {
      return false;
    }
    if (this->can_sensor_long_offset != other.can_sensor_long_offset) {
      return false;
    }
    if (this->can_sensor_hangle_offset != other.can_sensor_hangle_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrHeaderSensorPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrHeaderSensorPosition_

// alias to use template instance with default allocator
using MrrHeaderSensorPosition =
  delphi_mrr_msgs::msg::MrrHeaderSensorPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_POSITION__STRUCT_HPP_
