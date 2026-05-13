// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_

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
# define DEPRECATED__mobileye_560_660_msgs__msg__Lane __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__Lane __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lane_
{
  using Type = Lane_<ContainerAllocator>;

  explicit Lane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_curvature = 0.0;
      this->lane_heading = 0.0;
      this->construction_area = false;
      this->pitch_angle = 0.0;
      this->yaw_angle = 0.0;
      this->right_ldw_availability = false;
      this->left_ldw_availability = false;
    }
  }

  explicit Lane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_curvature = 0.0;
      this->lane_heading = 0.0;
      this->construction_area = false;
      this->pitch_angle = 0.0;
      this->yaw_angle = 0.0;
      this->right_ldw_availability = false;
      this->left_ldw_availability = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lane_curvature_type =
    double;
  _lane_curvature_type lane_curvature;
  using _lane_heading_type =
    double;
  _lane_heading_type lane_heading;
  using _construction_area_type =
    bool;
  _construction_area_type construction_area;
  using _pitch_angle_type =
    double;
  _pitch_angle_type pitch_angle;
  using _yaw_angle_type =
    double;
  _yaw_angle_type yaw_angle;
  using _right_ldw_availability_type =
    bool;
  _right_ldw_availability_type right_ldw_availability;
  using _left_ldw_availability_type =
    bool;
  _left_ldw_availability_type left_ldw_availability;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lane_curvature(
    const double & _arg)
  {
    this->lane_curvature = _arg;
    return *this;
  }
  Type & set__lane_heading(
    const double & _arg)
  {
    this->lane_heading = _arg;
    return *this;
  }
  Type & set__construction_area(
    const bool & _arg)
  {
    this->construction_area = _arg;
    return *this;
  }
  Type & set__pitch_angle(
    const double & _arg)
  {
    this->pitch_angle = _arg;
    return *this;
  }
  Type & set__yaw_angle(
    const double & _arg)
  {
    this->yaw_angle = _arg;
    return *this;
  }
  Type & set__right_ldw_availability(
    const bool & _arg)
  {
    this->right_ldw_availability = _arg;
    return *this;
  }
  Type & set__left_ldw_availability(
    const bool & _arg)
  {
    this->left_ldw_availability = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobileye_560_660_msgs::msg::Lane_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::Lane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::Lane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::Lane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::Lane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::Lane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::Lane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::Lane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::Lane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::Lane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__Lane
    std::shared_ptr<mobileye_560_660_msgs::msg::Lane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__Lane
    std::shared_ptr<mobileye_560_660_msgs::msg::Lane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lane_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lane_curvature != other.lane_curvature) {
      return false;
    }
    if (this->lane_heading != other.lane_heading) {
      return false;
    }
    if (this->construction_area != other.construction_area) {
      return false;
    }
    if (this->pitch_angle != other.pitch_angle) {
      return false;
    }
    if (this->yaw_angle != other.yaw_angle) {
      return false;
    }
    if (this->right_ldw_availability != other.right_ldw_availability) {
      return false;
    }
    if (this->left_ldw_availability != other.left_ldw_availability) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lane_

// alias to use template instance with default allocator
using Lane =
  mobileye_560_660_msgs::msg::Lane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_
