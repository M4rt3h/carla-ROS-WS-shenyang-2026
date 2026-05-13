// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from derived_object_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__derived_object_msgs__msg__Lane __attribute__((deprecated))
#else
# define DEPRECATED__derived_object_msgs__msg__Lane __declspec(deprecated)
#endif

namespace derived_object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lane_
{
  using Type = Lane_<ContainerAllocator>;

  explicit Lane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quality = 0;
      this->marker_kind = 0;
      this->curve_model_kind = 0;
      this->marker_offset = 0.0;
      this->heading_angle = 0.0;
      this->curvature = 0.0;
      this->curvature_derivative = 0.0;
      this->marker_width = 0.0;
      this->view_range = 0.0;
    }
  }

  explicit Lane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quality = 0;
      this->marker_kind = 0;
      this->curve_model_kind = 0;
      this->marker_offset = 0.0;
      this->heading_angle = 0.0;
      this->curvature = 0.0;
      this->curvature_derivative = 0.0;
      this->marker_width = 0.0;
      this->view_range = 0.0;
    }
  }

  // field types and members
  using _quality_type =
    uint8_t;
  _quality_type quality;
  using _marker_kind_type =
    uint8_t;
  _marker_kind_type marker_kind;
  using _curve_model_kind_type =
    uint8_t;
  _curve_model_kind_type curve_model_kind;
  using _marker_offset_type =
    double;
  _marker_offset_type marker_offset;
  using _heading_angle_type =
    double;
  _heading_angle_type heading_angle;
  using _curvature_type =
    double;
  _curvature_type curvature;
  using _curvature_derivative_type =
    double;
  _curvature_derivative_type curvature_derivative;
  using _marker_width_type =
    double;
  _marker_width_type marker_width;
  using _view_range_type =
    double;
  _view_range_type view_range;

  // setters for named parameter idiom
  Type & set__quality(
    const uint8_t & _arg)
  {
    this->quality = _arg;
    return *this;
  }
  Type & set__marker_kind(
    const uint8_t & _arg)
  {
    this->marker_kind = _arg;
    return *this;
  }
  Type & set__curve_model_kind(
    const uint8_t & _arg)
  {
    this->curve_model_kind = _arg;
    return *this;
  }
  Type & set__marker_offset(
    const double & _arg)
  {
    this->marker_offset = _arg;
    return *this;
  }
  Type & set__heading_angle(
    const double & _arg)
  {
    this->heading_angle = _arg;
    return *this;
  }
  Type & set__curvature(
    const double & _arg)
  {
    this->curvature = _arg;
    return *this;
  }
  Type & set__curvature_derivative(
    const double & _arg)
  {
    this->curvature_derivative = _arg;
    return *this;
  }
  Type & set__marker_width(
    const double & _arg)
  {
    this->marker_width = _arg;
    return *this;
  }
  Type & set__view_range(
    const double & _arg)
  {
    this->view_range = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LANE_QUALITY_INVALID =
    0u;
  static constexpr uint8_t LANE_QUALITY_UNKNOWN =
    1u;
  static constexpr uint8_t LANE_QUALITY_NOT_AVAILABLE =
    2u;
  static constexpr uint8_t LANE_QUALITY_0 =
    3u;
  static constexpr uint8_t LANE_QUALITY_1 =
    4u;
  static constexpr uint8_t LANE_QUALITY_2 =
    5u;
  static constexpr uint8_t LANE_QUALITY_3 =
    6u;
  static constexpr uint8_t LANE_QUALITY_4 =
    7u;
  static constexpr uint8_t LANE_QUALITY_5 =
    8u;
  static constexpr uint8_t LANE_QUALITY_6 =
    9u;
  static constexpr uint8_t LANE_QUALITY_7 =
    10u;
  static constexpr uint8_t LANE_QUALITY_8 =
    11u;
  static constexpr uint8_t LANE_QUALITY_9 =
    12u;
  static constexpr uint8_t LANE_QUALITY_KIND_COUNT =
    13u;
  static constexpr uint8_t LANE_MARKER_INVALID =
    0u;
  static constexpr uint8_t LANE_MARKER_UNKNOWN =
    1u;
  static constexpr uint8_t LANE_MARKER_NOT_AVAILABLE =
    2u;
  static constexpr uint8_t LANE_MARKER_NONE =
    3u;
  static constexpr uint8_t LANE_MARKER_SOLID =
    4u;
  static constexpr uint8_t LANE_MARKER_DASHED =
    5u;
  static constexpr uint8_t LANE_MARKER_VIRTUAL =
    6u;
  static constexpr uint8_t LANE_MARKER_DOTS =
    7u;
  static constexpr uint8_t LANE_MARKER_ROAD_EDGE =
    8u;
  static constexpr uint8_t LANE_MARKER_DOUBLE_LINE =
    9u;
  static constexpr uint8_t LANE_MARKER_KIND_COUNT =
    10u;
  static constexpr uint8_t LANE_CURVE_MODEL_INVALID =
    0u;
  static constexpr uint8_t LANE_CURVE_MODEL_UNKNOWN =
    1u;
  static constexpr uint8_t LANE_CURVE_MODEL_NOT_AVAILABLE =
    2u;
  static constexpr uint8_t LANE_CURVE_MODEL_LINEAR =
    3u;
  static constexpr uint8_t LANE_CURVE_MODEL_PARABOLIC =
    4u;
  static constexpr uint8_t LANE_CURVE_MODEL_3D =
    5u;
  static constexpr uint8_t LANE_CURVE_MODEL_KIND_COUNT =
    6u;

  // pointer types
  using RawPtr =
    derived_object_msgs::msg::Lane_<ContainerAllocator> *;
  using ConstRawPtr =
    const derived_object_msgs::msg::Lane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<derived_object_msgs::msg::Lane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<derived_object_msgs::msg::Lane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      derived_object_msgs::msg::Lane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<derived_object_msgs::msg::Lane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      derived_object_msgs::msg::Lane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<derived_object_msgs::msg::Lane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<derived_object_msgs::msg::Lane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<derived_object_msgs::msg::Lane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__derived_object_msgs__msg__Lane
    std::shared_ptr<derived_object_msgs::msg::Lane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__derived_object_msgs__msg__Lane
    std::shared_ptr<derived_object_msgs::msg::Lane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lane_ & other) const
  {
    if (this->quality != other.quality) {
      return false;
    }
    if (this->marker_kind != other.marker_kind) {
      return false;
    }
    if (this->curve_model_kind != other.curve_model_kind) {
      return false;
    }
    if (this->marker_offset != other.marker_offset) {
      return false;
    }
    if (this->heading_angle != other.heading_angle) {
      return false;
    }
    if (this->curvature != other.curvature) {
      return false;
    }
    if (this->curvature_derivative != other.curvature_derivative) {
      return false;
    }
    if (this->marker_width != other.marker_width) {
      return false;
    }
    if (this->view_range != other.view_range) {
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
  derived_object_msgs::msg::Lane_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_INVALID;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_NOT_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_0;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_1;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_2;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_3;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_4;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_5;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_6;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_7;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_8;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_9;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_QUALITY_KIND_COUNT;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_MARKER_INVALID;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_MARKER_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_MARKER_NOT_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_MARKER_NONE;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_MARKER_SOLID;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_MARKER_DASHED;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_MARKER_VIRTUAL;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_MARKER_DOTS;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_MARKER_ROAD_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_MARKER_DOUBLE_LINE;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_MARKER_KIND_COUNT;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_CURVE_MODEL_INVALID;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_CURVE_MODEL_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_CURVE_MODEL_NOT_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_CURVE_MODEL_LINEAR;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_CURVE_MODEL_PARABOLIC;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_CURVE_MODEL_3D;
template<typename ContainerAllocator>
constexpr uint8_t Lane_<ContainerAllocator>::LANE_CURVE_MODEL_KIND_COUNT;

}  // namespace msg

}  // namespace derived_object_msgs

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_
