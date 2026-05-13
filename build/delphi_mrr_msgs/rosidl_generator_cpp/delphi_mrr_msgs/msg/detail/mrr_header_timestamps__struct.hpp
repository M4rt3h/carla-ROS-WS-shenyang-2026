// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderTimestamps.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_TIMESTAMPS__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_TIMESTAMPS__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderTimestamps __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderTimestamps __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrHeaderTimestamps_
{
  using Type = MrrHeaderTimestamps_<ContainerAllocator>;

  explicit MrrHeaderTimestamps_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_det_time_since_meas = 0.0f;
      this->can_sensor_time_stamp = 0.0f;
    }
  }

  explicit MrrHeaderTimestamps_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_det_time_since_meas = 0.0f;
      this->can_sensor_time_stamp = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_det_time_since_meas_type =
    float;
  _can_det_time_since_meas_type can_det_time_since_meas;
  using _can_sensor_time_stamp_type =
    float;
  _can_sensor_time_stamp_type can_sensor_time_stamp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_det_time_since_meas(
    const float & _arg)
  {
    this->can_det_time_since_meas = _arg;
    return *this;
  }
  Type & set__can_sensor_time_stamp(
    const float & _arg)
  {
    this->can_sensor_time_stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderTimestamps
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderTimestamps
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderTimestamps_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrHeaderTimestamps_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_det_time_since_meas != other.can_det_time_since_meas) {
      return false;
    }
    if (this->can_sensor_time_stamp != other.can_sensor_time_stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrHeaderTimestamps_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrHeaderTimestamps_

// alias to use template instance with default allocator
using MrrHeaderTimestamps =
  delphi_mrr_msgs::msg::MrrHeaderTimestamps_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_TIMESTAMPS__STRUCT_HPP_
