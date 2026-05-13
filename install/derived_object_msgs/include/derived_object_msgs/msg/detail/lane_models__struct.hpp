// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from derived_object_msgs:msg/LaneModels.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__STRUCT_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__STRUCT_HPP_

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
// Member 'left_lane'
// Member 'right_lane'
// Member 'additional_lanes'
#include "derived_object_msgs/msg/detail/lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__derived_object_msgs__msg__LaneModels __attribute__((deprecated))
#else
# define DEPRECATED__derived_object_msgs__msg__LaneModels __declspec(deprecated)
#endif

namespace derived_object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneModels_
{
  using Type = LaneModels_<ContainerAllocator>;

  explicit LaneModels_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    left_lane(_init),
    right_lane(_init)
  {
    (void)_init;
  }

  explicit LaneModels_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    left_lane(_alloc, _init),
    right_lane(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _left_lane_type =
    derived_object_msgs::msg::Lane_<ContainerAllocator>;
  _left_lane_type left_lane;
  using _right_lane_type =
    derived_object_msgs::msg::Lane_<ContainerAllocator>;
  _right_lane_type right_lane;
  using _additional_lanes_type =
    std::vector<derived_object_msgs::msg::Lane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<derived_object_msgs::msg::Lane_<ContainerAllocator>>>;
  _additional_lanes_type additional_lanes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__left_lane(
    const derived_object_msgs::msg::Lane_<ContainerAllocator> & _arg)
  {
    this->left_lane = _arg;
    return *this;
  }
  Type & set__right_lane(
    const derived_object_msgs::msg::Lane_<ContainerAllocator> & _arg)
  {
    this->right_lane = _arg;
    return *this;
  }
  Type & set__additional_lanes(
    const std::vector<derived_object_msgs::msg::Lane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<derived_object_msgs::msg::Lane_<ContainerAllocator>>> & _arg)
  {
    this->additional_lanes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    derived_object_msgs::msg::LaneModels_<ContainerAllocator> *;
  using ConstRawPtr =
    const derived_object_msgs::msg::LaneModels_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<derived_object_msgs::msg::LaneModels_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<derived_object_msgs::msg::LaneModels_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      derived_object_msgs::msg::LaneModels_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<derived_object_msgs::msg::LaneModels_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      derived_object_msgs::msg::LaneModels_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<derived_object_msgs::msg::LaneModels_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<derived_object_msgs::msg::LaneModels_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<derived_object_msgs::msg::LaneModels_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__derived_object_msgs__msg__LaneModels
    std::shared_ptr<derived_object_msgs::msg::LaneModels_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__derived_object_msgs__msg__LaneModels
    std::shared_ptr<derived_object_msgs::msg::LaneModels_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneModels_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->left_lane != other.left_lane) {
      return false;
    }
    if (this->right_lane != other.right_lane) {
      return false;
    }
    if (this->additional_lanes != other.additional_lanes) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneModels_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneModels_

// alias to use template instance with default allocator
using LaneModels =
  derived_object_msgs::msg::LaneModels_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace derived_object_msgs

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__STRUCT_HPP_
