// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/ResolutionInfo.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__RESOLUTION_INFO__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__RESOLUTION_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__ResolutionInfo __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__ResolutionInfo __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResolutionInfo_
{
  using Type = ResolutionInfo_<ContainerAllocator>;

  explicit ResolutionInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution_start_angle = 0.0f;
      this->resolution = 0.0f;
    }
  }

  explicit ResolutionInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution_start_angle = 0.0f;
      this->resolution = 0.0f;
    }
  }

  // field types and members
  using _resolution_start_angle_type =
    float;
  _resolution_start_angle_type resolution_start_angle;
  using _resolution_type =
    float;
  _resolution_type resolution;

  // setters for named parameter idiom
  Type & set__resolution_start_angle(
    const float & _arg)
  {
    this->resolution_start_angle = _arg;
    return *this;
  }
  Type & set__resolution(
    const float & _arg)
  {
    this->resolution = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__ResolutionInfo
    std::shared_ptr<ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__ResolutionInfo
    std::shared_ptr<ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResolutionInfo_ & other) const
  {
    if (this->resolution_start_angle != other.resolution_start_angle) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResolutionInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResolutionInfo_

// alias to use template instance with default allocator
using ResolutionInfo =
  ibeo_msgs::msg::ResolutionInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__RESOLUTION_INFO__STRUCT_HPP_
