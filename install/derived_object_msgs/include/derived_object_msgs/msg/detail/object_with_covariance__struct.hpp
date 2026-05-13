// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from derived_object_msgs:msg/ObjectWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__STRUCT_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.hpp"
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__struct.hpp"
// Member 'shape'
#include "derived_object_msgs/msg/detail/solid_primitive_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__derived_object_msgs__msg__ObjectWithCovariance __attribute__((deprecated))
#else
# define DEPRECATED__derived_object_msgs__msg__ObjectWithCovariance __declspec(deprecated)
#endif

namespace derived_object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectWithCovariance_
{
  using Type = ObjectWithCovariance_<ContainerAllocator>;

  explicit ObjectWithCovariance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    twist(_init),
    accel(_init),
    polygon(_init),
    shape(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->detection_level = 0;
      this->object_classified = false;
      this->classification = 0;
      this->classification_certainty = 0;
      this->classification_age = 0ul;
    }
  }

  explicit ObjectWithCovariance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    twist(_alloc, _init),
    accel(_alloc, _init),
    polygon(_alloc, _init),
    shape(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->detection_level = 0;
      this->object_classified = false;
      this->classification = 0;
      this->classification_certainty = 0;
      this->classification_age = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint32_t;
  _id_type id;
  using _detection_level_type =
    uint8_t;
  _detection_level_type detection_level;
  using _object_classified_type =
    bool;
  _object_classified_type object_classified;
  using _pose_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _twist_type twist;
  using _accel_type =
    geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>;
  _accel_type accel;
  using _polygon_type =
    geometry_msgs::msg::Polygon_<ContainerAllocator>;
  _polygon_type polygon;
  using _shape_type =
    derived_object_msgs::msg::SolidPrimitiveWithCovariance_<ContainerAllocator>;
  _shape_type shape;
  using _classification_type =
    uint8_t;
  _classification_type classification;
  using _classification_certainty_type =
    uint8_t;
  _classification_certainty_type classification_certainty;
  using _classification_age_type =
    uint32_t;
  _classification_age_type classification_age;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__detection_level(
    const uint8_t & _arg)
  {
    this->detection_level = _arg;
    return *this;
  }
  Type & set__object_classified(
    const bool & _arg)
  {
    this->object_classified = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__accel(
    const geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__polygon(
    const geometry_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->polygon = _arg;
    return *this;
  }
  Type & set__shape(
    const derived_object_msgs::msg::SolidPrimitiveWithCovariance_<ContainerAllocator> & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__classification(
    const uint8_t & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__classification_certainty(
    const uint8_t & _arg)
  {
    this->classification_certainty = _arg;
    return *this;
  }
  Type & set__classification_age(
    const uint32_t & _arg)
  {
    this->classification_age = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OBJECT_DETECTED =
    0u;
  static constexpr uint8_t OBJECT_TRACKED =
    1u;
  static constexpr uint8_t CLASSIFICATION_UNKNOWN =
    0u;
  static constexpr uint8_t CLASSIFICATION_UNKNOWN_SMALL =
    1u;
  static constexpr uint8_t CLASSIFICATION_UNKNOWN_MEDIUM =
    2u;
  static constexpr uint8_t CLASSIFICATION_UNKNOWN_BIG =
    3u;
  static constexpr uint8_t CLASSIFICATION_PEDESTRIAN =
    4u;
  static constexpr uint8_t CLASSIFICATION_BIKE =
    5u;
  static constexpr uint8_t CLASSIFICATION_CAR =
    6u;
  static constexpr uint8_t CLASSIFICATION_TRUCK =
    7u;
  static constexpr uint8_t CLASSIFICATION_MOTORCYCLE =
    8u;
  static constexpr uint8_t CLASSIFICATION_OTHER_VEHICLE =
    9u;
  static constexpr uint8_t CLASSIFICATION_BARRIER =
    10u;
  static constexpr uint8_t CLASSIFICATION_SIGN =
    11u;

  // pointer types
  using RawPtr =
    derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator> *;
  using ConstRawPtr =
    const derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__derived_object_msgs__msg__ObjectWithCovariance
    std::shared_ptr<derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__derived_object_msgs__msg__ObjectWithCovariance
    std::shared_ptr<derived_object_msgs::msg::ObjectWithCovariance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectWithCovariance_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->detection_level != other.detection_level) {
      return false;
    }
    if (this->object_classified != other.object_classified) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->polygon != other.polygon) {
      return false;
    }
    if (this->shape != other.shape) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->classification_certainty != other.classification_certainty) {
      return false;
    }
    if (this->classification_age != other.classification_age) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectWithCovariance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectWithCovariance_

// alias to use template instance with default allocator
using ObjectWithCovariance =
  derived_object_msgs::msg::ObjectWithCovariance_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::OBJECT_DETECTED;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::OBJECT_TRACKED;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_UNKNOWN_SMALL;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_UNKNOWN_MEDIUM;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_UNKNOWN_BIG;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_PEDESTRIAN;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_BIKE;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_CAR;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_TRUCK;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_MOTORCYCLE;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_OTHER_VEHICLE;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_BARRIER;
template<typename ContainerAllocator>
constexpr uint8_t ObjectWithCovariance_<ContainerAllocator>::CLASSIFICATION_SIGN;

}  // namespace msg

}  // namespace derived_object_msgs

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__STRUCT_HPP_
