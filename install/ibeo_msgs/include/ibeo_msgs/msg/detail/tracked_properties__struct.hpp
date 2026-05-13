// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/TrackedProperties.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'position_closest_point'
// Member 'relative_velocity'
// Member 'object_box_size'
// Member 'tracking_point_coordinate'
// Member 'velocity'
// Member 'acceleration'
#include "ibeo_msgs/msg/detail/point2_di__struct.hpp"
// Member 'relative_velocity_sigma'
// Member 'object_box_size_sigma'
// Member 'tracking_point_coordinate_sigma'
// Member 'velocity_sigma'
// Member 'acceleration_sigma'
#include "ibeo_msgs/msg/detail/point2_dui__struct.hpp"
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/contour_point_sigma__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__TrackedProperties __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__TrackedProperties __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedProperties_
{
  using Type = TrackedProperties_<ContainerAllocator>;

  explicit TrackedProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_closest_point(_init),
    relative_velocity(_init),
    relative_velocity_sigma(_init),
    object_box_size(_init),
    object_box_size_sigma(_init),
    tracking_point_coordinate(_init),
    tracking_point_coordinate_sigma(_init),
    velocity(_init),
    velocity_sigma(_init),
    acceleration(_init),
    acceleration_sigma(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_age = 0;
      this->hidden_status_age = 0;
      this->object_phase = 0;
      this->dynamic_property = 0;
      this->relative_time_of_measure = 0;
      this->classification = 0;
      this->classification_age = 0;
      this->object_box_orientation = 0;
      this->object_box_orientation_sigma = 0;
      this->tracking_point_location = 0;
      this->yaw_rate = 0;
      this->yaw_rate_sigma = 0;
      this->number_of_contour_points = 0;
    }
  }

  explicit TrackedProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_closest_point(_alloc, _init),
    relative_velocity(_alloc, _init),
    relative_velocity_sigma(_alloc, _init),
    object_box_size(_alloc, _init),
    object_box_size_sigma(_alloc, _init),
    tracking_point_coordinate(_alloc, _init),
    tracking_point_coordinate_sigma(_alloc, _init),
    velocity(_alloc, _init),
    velocity_sigma(_alloc, _init),
    acceleration(_alloc, _init),
    acceleration_sigma(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_age = 0;
      this->hidden_status_age = 0;
      this->object_phase = 0;
      this->dynamic_property = 0;
      this->relative_time_of_measure = 0;
      this->classification = 0;
      this->classification_age = 0;
      this->object_box_orientation = 0;
      this->object_box_orientation_sigma = 0;
      this->tracking_point_location = 0;
      this->yaw_rate = 0;
      this->yaw_rate_sigma = 0;
      this->number_of_contour_points = 0;
    }
  }

  // field types and members
  using _object_age_type =
    uint16_t;
  _object_age_type object_age;
  using _hidden_status_age_type =
    uint16_t;
  _hidden_status_age_type hidden_status_age;
  using _object_phase_type =
    uint8_t;
  _object_phase_type object_phase;
  using _dynamic_property_type =
    uint8_t;
  _dynamic_property_type dynamic_property;
  using _relative_time_of_measure_type =
    uint16_t;
  _relative_time_of_measure_type relative_time_of_measure;
  using _position_closest_point_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _position_closest_point_type position_closest_point;
  using _relative_velocity_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _relative_velocity_type relative_velocity;
  using _relative_velocity_sigma_type =
    ibeo_msgs::msg::Point2Dui_<ContainerAllocator>;
  _relative_velocity_sigma_type relative_velocity_sigma;
  using _classification_type =
    uint8_t;
  _classification_type classification;
  using _classification_age_type =
    uint16_t;
  _classification_age_type classification_age;
  using _object_box_size_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _object_box_size_type object_box_size;
  using _object_box_size_sigma_type =
    ibeo_msgs::msg::Point2Dui_<ContainerAllocator>;
  _object_box_size_sigma_type object_box_size_sigma;
  using _object_box_orientation_type =
    int16_t;
  _object_box_orientation_type object_box_orientation;
  using _object_box_orientation_sigma_type =
    uint16_t;
  _object_box_orientation_sigma_type object_box_orientation_sigma;
  using _tracking_point_location_type =
    uint8_t;
  _tracking_point_location_type tracking_point_location;
  using _tracking_point_coordinate_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _tracking_point_coordinate_type tracking_point_coordinate;
  using _tracking_point_coordinate_sigma_type =
    ibeo_msgs::msg::Point2Dui_<ContainerAllocator>;
  _tracking_point_coordinate_sigma_type tracking_point_coordinate_sigma;
  using _velocity_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _velocity_type velocity;
  using _velocity_sigma_type =
    ibeo_msgs::msg::Point2Dui_<ContainerAllocator>;
  _velocity_sigma_type velocity_sigma;
  using _acceleration_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _acceleration_sigma_type =
    ibeo_msgs::msg::Point2Dui_<ContainerAllocator>;
  _acceleration_sigma_type acceleration_sigma;
  using _yaw_rate_type =
    int16_t;
  _yaw_rate_type yaw_rate;
  using _yaw_rate_sigma_type =
    uint16_t;
  _yaw_rate_sigma_type yaw_rate_sigma;
  using _number_of_contour_points_type =
    uint8_t;
  _number_of_contour_points_type number_of_contour_points;
  using _contour_point_list_type =
    std::vector<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>>>;
  _contour_point_list_type contour_point_list;

  // setters for named parameter idiom
  Type & set__object_age(
    const uint16_t & _arg)
  {
    this->object_age = _arg;
    return *this;
  }
  Type & set__hidden_status_age(
    const uint16_t & _arg)
  {
    this->hidden_status_age = _arg;
    return *this;
  }
  Type & set__object_phase(
    const uint8_t & _arg)
  {
    this->object_phase = _arg;
    return *this;
  }
  Type & set__dynamic_property(
    const uint8_t & _arg)
  {
    this->dynamic_property = _arg;
    return *this;
  }
  Type & set__relative_time_of_measure(
    const uint16_t & _arg)
  {
    this->relative_time_of_measure = _arg;
    return *this;
  }
  Type & set__position_closest_point(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->position_closest_point = _arg;
    return *this;
  }
  Type & set__relative_velocity(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->relative_velocity = _arg;
    return *this;
  }
  Type & set__relative_velocity_sigma(
    const ibeo_msgs::msg::Point2Dui_<ContainerAllocator> & _arg)
  {
    this->relative_velocity_sigma = _arg;
    return *this;
  }
  Type & set__classification(
    const uint8_t & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__classification_age(
    const uint16_t & _arg)
  {
    this->classification_age = _arg;
    return *this;
  }
  Type & set__object_box_size(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->object_box_size = _arg;
    return *this;
  }
  Type & set__object_box_size_sigma(
    const ibeo_msgs::msg::Point2Dui_<ContainerAllocator> & _arg)
  {
    this->object_box_size_sigma = _arg;
    return *this;
  }
  Type & set__object_box_orientation(
    const int16_t & _arg)
  {
    this->object_box_orientation = _arg;
    return *this;
  }
  Type & set__object_box_orientation_sigma(
    const uint16_t & _arg)
  {
    this->object_box_orientation_sigma = _arg;
    return *this;
  }
  Type & set__tracking_point_location(
    const uint8_t & _arg)
  {
    this->tracking_point_location = _arg;
    return *this;
  }
  Type & set__tracking_point_coordinate(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->tracking_point_coordinate = _arg;
    return *this;
  }
  Type & set__tracking_point_coordinate_sigma(
    const ibeo_msgs::msg::Point2Dui_<ContainerAllocator> & _arg)
  {
    this->tracking_point_coordinate_sigma = _arg;
    return *this;
  }
  Type & set__velocity(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__velocity_sigma(
    const ibeo_msgs::msg::Point2Dui_<ContainerAllocator> & _arg)
  {
    this->velocity_sigma = _arg;
    return *this;
  }
  Type & set__acceleration(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__acceleration_sigma(
    const ibeo_msgs::msg::Point2Dui_<ContainerAllocator> & _arg)
  {
    this->acceleration_sigma = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const int16_t & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__yaw_rate_sigma(
    const uint16_t & _arg)
  {
    this->yaw_rate_sigma = _arg;
    return *this;
  }
  Type & set__number_of_contour_points(
    const uint8_t & _arg)
  {
    this->number_of_contour_points = _arg;
    return *this;
  }
  Type & set__contour_point_list(
    const std::vector<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>>> & _arg)
  {
    this->contour_point_list = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INITIALIZATION_PHASE =
    0u;
  static constexpr uint8_t TRACKING_PHASE =
    1u;
  static constexpr uint8_t DYNAMIC_AND_MOVING =
    0u;
  static constexpr uint8_t DYNAMIC_AND_STOPPED =
    1u;
  static constexpr uint8_t A_PRIORI_STATIONARY =
    2u;
  static constexpr uint8_t UNCLASSIFIED =
    0u;
  static constexpr uint8_t UNKNOWN_SMALL =
    1u;
  static constexpr uint8_t UNKNOWN_BIG =
    2u;
  static constexpr uint8_t PEDESTRIAN =
    3u;
  static constexpr uint8_t BIKE =
    4u;
  static constexpr uint8_t CAR =
    5u;
  static constexpr uint8_t TRUCK =
    6u;
  static constexpr uint8_t OVER_DRIVABLE =
    10u;
  static constexpr uint8_t UNDER_DRIVABLE =
    11u;
  static constexpr uint8_t CENTER_OF_GRAVITY =
    0u;
  static constexpr uint8_t TOP_FRONT_LEFT_CORNER =
    1u;
  static constexpr uint8_t TOP_FRONT_RIGHT_CORNER =
    2u;
  static constexpr uint8_t BOTTOM_REAR_RIGHT_CORNER =
    3u;
  static constexpr uint8_t BOTTOM_REAR_LEFT_CORNER =
    4u;
  static constexpr uint8_t CENTER_OF_TOP_FRONT_EDGE =
    5u;
  static constexpr uint8_t CENTER_OF_RIGHT_EDGE =
    6u;
  static constexpr uint8_t CENTER_OF_BOTTOM_REAR_EDGE =
    7u;
  static constexpr uint8_t CENTER_OF_LEFT_EDGE =
    8u;
  static constexpr uint8_t BOX_CENTER =
    9u;
  static constexpr uint8_t INVALID =
    255u;

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::TrackedProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::TrackedProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::TrackedProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::TrackedProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::TrackedProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::TrackedProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::TrackedProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::TrackedProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::TrackedProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::TrackedProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__TrackedProperties
    std::shared_ptr<ibeo_msgs::msg::TrackedProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__TrackedProperties
    std::shared_ptr<ibeo_msgs::msg::TrackedProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedProperties_ & other) const
  {
    if (this->object_age != other.object_age) {
      return false;
    }
    if (this->hidden_status_age != other.hidden_status_age) {
      return false;
    }
    if (this->object_phase != other.object_phase) {
      return false;
    }
    if (this->dynamic_property != other.dynamic_property) {
      return false;
    }
    if (this->relative_time_of_measure != other.relative_time_of_measure) {
      return false;
    }
    if (this->position_closest_point != other.position_closest_point) {
      return false;
    }
    if (this->relative_velocity != other.relative_velocity) {
      return false;
    }
    if (this->relative_velocity_sigma != other.relative_velocity_sigma) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->classification_age != other.classification_age) {
      return false;
    }
    if (this->object_box_size != other.object_box_size) {
      return false;
    }
    if (this->object_box_size_sigma != other.object_box_size_sigma) {
      return false;
    }
    if (this->object_box_orientation != other.object_box_orientation) {
      return false;
    }
    if (this->object_box_orientation_sigma != other.object_box_orientation_sigma) {
      return false;
    }
    if (this->tracking_point_location != other.tracking_point_location) {
      return false;
    }
    if (this->tracking_point_coordinate != other.tracking_point_coordinate) {
      return false;
    }
    if (this->tracking_point_coordinate_sigma != other.tracking_point_coordinate_sigma) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->velocity_sigma != other.velocity_sigma) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->acceleration_sigma != other.acceleration_sigma) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->yaw_rate_sigma != other.yaw_rate_sigma) {
      return false;
    }
    if (this->number_of_contour_points != other.number_of_contour_points) {
      return false;
    }
    if (this->contour_point_list != other.contour_point_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedProperties_

// alias to use template instance with default allocator
using TrackedProperties =
  ibeo_msgs::msg::TrackedProperties_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::INITIALIZATION_PHASE;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::TRACKING_PHASE;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::DYNAMIC_AND_MOVING;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::DYNAMIC_AND_STOPPED;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::A_PRIORI_STATIONARY;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::UNCLASSIFIED;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::UNKNOWN_SMALL;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::UNKNOWN_BIG;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::PEDESTRIAN;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::BIKE;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::CAR;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::TRUCK;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::OVER_DRIVABLE;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::UNDER_DRIVABLE;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::CENTER_OF_GRAVITY;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::TOP_FRONT_LEFT_CORNER;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::TOP_FRONT_RIGHT_CORNER;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::BOTTOM_REAR_RIGHT_CORNER;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::BOTTOM_REAR_LEFT_CORNER;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::CENTER_OF_TOP_FRONT_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::CENTER_OF_RIGHT_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::CENTER_OF_BOTTOM_REAR_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::CENTER_OF_LEFT_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::BOX_CENTER;
template<typename ContainerAllocator>
constexpr uint8_t TrackedProperties_<ContainerAllocator>::INVALID;

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__STRUCT_HPP_
