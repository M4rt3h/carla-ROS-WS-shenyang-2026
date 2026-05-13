// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/LkaReferencePoints.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__STRUCT_HPP_

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
# define DEPRECATED__mobileye_560_660_msgs__msg__LkaReferencePoints __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__LkaReferencePoints __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LkaReferencePoints_
{
  using Type = LkaReferencePoints_<ContainerAllocator>;

  explicit LkaReferencePoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_point_1_position = 0.0;
      this->ref_point_1_distance = 0.0;
      this->ref_point_1_validity = false;
      this->ref_point_2_position = 0.0;
      this->ref_point_2_distance = 0.0;
      this->ref_point_2_validity = false;
    }
  }

  explicit LkaReferencePoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_point_1_position = 0.0;
      this->ref_point_1_distance = 0.0;
      this->ref_point_1_validity = false;
      this->ref_point_2_position = 0.0;
      this->ref_point_2_distance = 0.0;
      this->ref_point_2_validity = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ref_point_1_position_type =
    double;
  _ref_point_1_position_type ref_point_1_position;
  using _ref_point_1_distance_type =
    double;
  _ref_point_1_distance_type ref_point_1_distance;
  using _ref_point_1_validity_type =
    bool;
  _ref_point_1_validity_type ref_point_1_validity;
  using _ref_point_2_position_type =
    double;
  _ref_point_2_position_type ref_point_2_position;
  using _ref_point_2_distance_type =
    double;
  _ref_point_2_distance_type ref_point_2_distance;
  using _ref_point_2_validity_type =
    bool;
  _ref_point_2_validity_type ref_point_2_validity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ref_point_1_position(
    const double & _arg)
  {
    this->ref_point_1_position = _arg;
    return *this;
  }
  Type & set__ref_point_1_distance(
    const double & _arg)
  {
    this->ref_point_1_distance = _arg;
    return *this;
  }
  Type & set__ref_point_1_validity(
    const bool & _arg)
  {
    this->ref_point_1_validity = _arg;
    return *this;
  }
  Type & set__ref_point_2_position(
    const double & _arg)
  {
    this->ref_point_2_position = _arg;
    return *this;
  }
  Type & set__ref_point_2_distance(
    const double & _arg)
  {
    this->ref_point_2_distance = _arg;
    return *this;
  }
  Type & set__ref_point_2_validity(
    const bool & _arg)
  {
    this->ref_point_2_validity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__LkaReferencePoints
    std::shared_ptr<mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__LkaReferencePoints
    std::shared_ptr<mobileye_560_660_msgs::msg::LkaReferencePoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LkaReferencePoints_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ref_point_1_position != other.ref_point_1_position) {
      return false;
    }
    if (this->ref_point_1_distance != other.ref_point_1_distance) {
      return false;
    }
    if (this->ref_point_1_validity != other.ref_point_1_validity) {
      return false;
    }
    if (this->ref_point_2_position != other.ref_point_2_position) {
      return false;
    }
    if (this->ref_point_2_distance != other.ref_point_2_distance) {
      return false;
    }
    if (this->ref_point_2_validity != other.ref_point_2_validity) {
      return false;
    }
    return true;
  }
  bool operator!=(const LkaReferencePoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LkaReferencePoints_

// alias to use template instance with default allocator
using LkaReferencePoints =
  mobileye_560_660_msgs::msg::LkaReferencePoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__STRUCT_HPP_
