// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/Object2270.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2270__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2270__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_di__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__Object2270 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__Object2270 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object2270_
{
  using Type = Object2270_<ContainerAllocator>;

  explicit Object2270_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->age = 0;
      this->prediction_age = 0;
      this->relative_moment_of_measurement = 0;
      this->reference_point_location = 0;
      this->reference_point_position_x = 0;
      this->reference_point_position_y = 0;
      this->reference_point_position_sigma_x = 0;
      this->reference_point_position_sigma_y = 0;
      this->contour_points_cog_x = 0;
      this->contour_points_cog_y = 0;
      this->object_box_length = 0;
      this->object_box_width = 0;
      this->object_box_orientation_angle = 0;
      this->object_box_orientation_angle_sigma = 0;
      this->absolute_velocity_x = 0;
      this->absolute_velocity_y = 0;
      this->absolute_velocity_sigma_x = 0;
      this->absolute_velocity_sigma_y = 0;
      this->relative_velocity_x = 0;
      this->relative_velocity_y = 0;
      this->relative_velocity_sigma_x = 0;
      this->relative_velocity_sigma_y = 0;
      this->classification = 0;
      this->tracking_model = 0;
      this->mobile_detected = false;
      this->track_valid = false;
      this->classification_age = 0;
      this->classification_confidence = 0;
      this->number_of_contour_points = 0;
    }
  }

  explicit Object2270_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->age = 0;
      this->prediction_age = 0;
      this->relative_moment_of_measurement = 0;
      this->reference_point_location = 0;
      this->reference_point_position_x = 0;
      this->reference_point_position_y = 0;
      this->reference_point_position_sigma_x = 0;
      this->reference_point_position_sigma_y = 0;
      this->contour_points_cog_x = 0;
      this->contour_points_cog_y = 0;
      this->object_box_length = 0;
      this->object_box_width = 0;
      this->object_box_orientation_angle = 0;
      this->object_box_orientation_angle_sigma = 0;
      this->absolute_velocity_x = 0;
      this->absolute_velocity_y = 0;
      this->absolute_velocity_sigma_x = 0;
      this->absolute_velocity_sigma_y = 0;
      this->relative_velocity_x = 0;
      this->relative_velocity_y = 0;
      this->relative_velocity_sigma_x = 0;
      this->relative_velocity_sigma_y = 0;
      this->classification = 0;
      this->tracking_model = 0;
      this->mobile_detected = false;
      this->track_valid = false;
      this->classification_age = 0;
      this->classification_confidence = 0;
      this->number_of_contour_points = 0;
    }
  }

  // field types and members
  using _id_type =
    uint16_t;
  _id_type id;
  using _age_type =
    uint16_t;
  _age_type age;
  using _prediction_age_type =
    uint16_t;
  _prediction_age_type prediction_age;
  using _relative_moment_of_measurement_type =
    uint16_t;
  _relative_moment_of_measurement_type relative_moment_of_measurement;
  using _reference_point_location_type =
    uint8_t;
  _reference_point_location_type reference_point_location;
  using _reference_point_position_x_type =
    int16_t;
  _reference_point_position_x_type reference_point_position_x;
  using _reference_point_position_y_type =
    int16_t;
  _reference_point_position_y_type reference_point_position_y;
  using _reference_point_position_sigma_x_type =
    uint16_t;
  _reference_point_position_sigma_x_type reference_point_position_sigma_x;
  using _reference_point_position_sigma_y_type =
    uint16_t;
  _reference_point_position_sigma_y_type reference_point_position_sigma_y;
  using _contour_points_cog_x_type =
    int16_t;
  _contour_points_cog_x_type contour_points_cog_x;
  using _contour_points_cog_y_type =
    int16_t;
  _contour_points_cog_y_type contour_points_cog_y;
  using _object_box_length_type =
    uint16_t;
  _object_box_length_type object_box_length;
  using _object_box_width_type =
    uint16_t;
  _object_box_width_type object_box_width;
  using _object_box_orientation_angle_type =
    int16_t;
  _object_box_orientation_angle_type object_box_orientation_angle;
  using _object_box_orientation_angle_sigma_type =
    int16_t;
  _object_box_orientation_angle_sigma_type object_box_orientation_angle_sigma;
  using _absolute_velocity_x_type =
    int16_t;
  _absolute_velocity_x_type absolute_velocity_x;
  using _absolute_velocity_y_type =
    int16_t;
  _absolute_velocity_y_type absolute_velocity_y;
  using _absolute_velocity_sigma_x_type =
    uint16_t;
  _absolute_velocity_sigma_x_type absolute_velocity_sigma_x;
  using _absolute_velocity_sigma_y_type =
    uint16_t;
  _absolute_velocity_sigma_y_type absolute_velocity_sigma_y;
  using _relative_velocity_x_type =
    int16_t;
  _relative_velocity_x_type relative_velocity_x;
  using _relative_velocity_y_type =
    int16_t;
  _relative_velocity_y_type relative_velocity_y;
  using _relative_velocity_sigma_x_type =
    uint16_t;
  _relative_velocity_sigma_x_type relative_velocity_sigma_x;
  using _relative_velocity_sigma_y_type =
    uint16_t;
  _relative_velocity_sigma_y_type relative_velocity_sigma_y;
  using _classification_type =
    uint8_t;
  _classification_type classification;
  using _tracking_model_type =
    uint8_t;
  _tracking_model_type tracking_model;
  using _mobile_detected_type =
    bool;
  _mobile_detected_type mobile_detected;
  using _track_valid_type =
    bool;
  _track_valid_type track_valid;
  using _classification_age_type =
    uint16_t;
  _classification_age_type classification_age;
  using _classification_confidence_type =
    uint16_t;
  _classification_confidence_type classification_confidence;
  using _number_of_contour_points_type =
    uint16_t;
  _number_of_contour_points_type number_of_contour_points;
  using _contour_point_list_type =
    std::vector<ibeo_msgs::msg::Point2Di_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::Point2Di_<ContainerAllocator>>>;
  _contour_point_list_type contour_point_list;

  // setters for named parameter idiom
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__age(
    const uint16_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__prediction_age(
    const uint16_t & _arg)
  {
    this->prediction_age = _arg;
    return *this;
  }
  Type & set__relative_moment_of_measurement(
    const uint16_t & _arg)
  {
    this->relative_moment_of_measurement = _arg;
    return *this;
  }
  Type & set__reference_point_location(
    const uint8_t & _arg)
  {
    this->reference_point_location = _arg;
    return *this;
  }
  Type & set__reference_point_position_x(
    const int16_t & _arg)
  {
    this->reference_point_position_x = _arg;
    return *this;
  }
  Type & set__reference_point_position_y(
    const int16_t & _arg)
  {
    this->reference_point_position_y = _arg;
    return *this;
  }
  Type & set__reference_point_position_sigma_x(
    const uint16_t & _arg)
  {
    this->reference_point_position_sigma_x = _arg;
    return *this;
  }
  Type & set__reference_point_position_sigma_y(
    const uint16_t & _arg)
  {
    this->reference_point_position_sigma_y = _arg;
    return *this;
  }
  Type & set__contour_points_cog_x(
    const int16_t & _arg)
  {
    this->contour_points_cog_x = _arg;
    return *this;
  }
  Type & set__contour_points_cog_y(
    const int16_t & _arg)
  {
    this->contour_points_cog_y = _arg;
    return *this;
  }
  Type & set__object_box_length(
    const uint16_t & _arg)
  {
    this->object_box_length = _arg;
    return *this;
  }
  Type & set__object_box_width(
    const uint16_t & _arg)
  {
    this->object_box_width = _arg;
    return *this;
  }
  Type & set__object_box_orientation_angle(
    const int16_t & _arg)
  {
    this->object_box_orientation_angle = _arg;
    return *this;
  }
  Type & set__object_box_orientation_angle_sigma(
    const int16_t & _arg)
  {
    this->object_box_orientation_angle_sigma = _arg;
    return *this;
  }
  Type & set__absolute_velocity_x(
    const int16_t & _arg)
  {
    this->absolute_velocity_x = _arg;
    return *this;
  }
  Type & set__absolute_velocity_y(
    const int16_t & _arg)
  {
    this->absolute_velocity_y = _arg;
    return *this;
  }
  Type & set__absolute_velocity_sigma_x(
    const uint16_t & _arg)
  {
    this->absolute_velocity_sigma_x = _arg;
    return *this;
  }
  Type & set__absolute_velocity_sigma_y(
    const uint16_t & _arg)
  {
    this->absolute_velocity_sigma_y = _arg;
    return *this;
  }
  Type & set__relative_velocity_x(
    const int16_t & _arg)
  {
    this->relative_velocity_x = _arg;
    return *this;
  }
  Type & set__relative_velocity_y(
    const int16_t & _arg)
  {
    this->relative_velocity_y = _arg;
    return *this;
  }
  Type & set__relative_velocity_sigma_x(
    const uint16_t & _arg)
  {
    this->relative_velocity_sigma_x = _arg;
    return *this;
  }
  Type & set__relative_velocity_sigma_y(
    const uint16_t & _arg)
  {
    this->relative_velocity_sigma_y = _arg;
    return *this;
  }
  Type & set__classification(
    const uint8_t & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__tracking_model(
    const uint8_t & _arg)
  {
    this->tracking_model = _arg;
    return *this;
  }
  Type & set__mobile_detected(
    const bool & _arg)
  {
    this->mobile_detected = _arg;
    return *this;
  }
  Type & set__track_valid(
    const bool & _arg)
  {
    this->track_valid = _arg;
    return *this;
  }
  Type & set__classification_age(
    const uint16_t & _arg)
  {
    this->classification_age = _arg;
    return *this;
  }
  Type & set__classification_confidence(
    const uint16_t & _arg)
  {
    this->classification_confidence = _arg;
    return *this;
  }
  Type & set__number_of_contour_points(
    const uint16_t & _arg)
  {
    this->number_of_contour_points = _arg;
    return *this;
  }
  Type & set__contour_point_list(
    const std::vector<ibeo_msgs::msg::Point2Di_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::Point2Di_<ContainerAllocator>>> & _arg)
  {
    this->contour_point_list = _arg;
    return *this;
  }

  // constant declarations
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
  static constexpr uint8_t DYNAMIC_MODEL =
    0u;
  static constexpr uint8_t STATIC_MODEL =
    1u;

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::Object2270_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::Object2270_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Object2270_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Object2270_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Object2270_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Object2270_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Object2270_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Object2270_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Object2270_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Object2270_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__Object2270
    std::shared_ptr<ibeo_msgs::msg::Object2270_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__Object2270
    std::shared_ptr<ibeo_msgs::msg::Object2270_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object2270_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->prediction_age != other.prediction_age) {
      return false;
    }
    if (this->relative_moment_of_measurement != other.relative_moment_of_measurement) {
      return false;
    }
    if (this->reference_point_location != other.reference_point_location) {
      return false;
    }
    if (this->reference_point_position_x != other.reference_point_position_x) {
      return false;
    }
    if (this->reference_point_position_y != other.reference_point_position_y) {
      return false;
    }
    if (this->reference_point_position_sigma_x != other.reference_point_position_sigma_x) {
      return false;
    }
    if (this->reference_point_position_sigma_y != other.reference_point_position_sigma_y) {
      return false;
    }
    if (this->contour_points_cog_x != other.contour_points_cog_x) {
      return false;
    }
    if (this->contour_points_cog_y != other.contour_points_cog_y) {
      return false;
    }
    if (this->object_box_length != other.object_box_length) {
      return false;
    }
    if (this->object_box_width != other.object_box_width) {
      return false;
    }
    if (this->object_box_orientation_angle != other.object_box_orientation_angle) {
      return false;
    }
    if (this->object_box_orientation_angle_sigma != other.object_box_orientation_angle_sigma) {
      return false;
    }
    if (this->absolute_velocity_x != other.absolute_velocity_x) {
      return false;
    }
    if (this->absolute_velocity_y != other.absolute_velocity_y) {
      return false;
    }
    if (this->absolute_velocity_sigma_x != other.absolute_velocity_sigma_x) {
      return false;
    }
    if (this->absolute_velocity_sigma_y != other.absolute_velocity_sigma_y) {
      return false;
    }
    if (this->relative_velocity_x != other.relative_velocity_x) {
      return false;
    }
    if (this->relative_velocity_y != other.relative_velocity_y) {
      return false;
    }
    if (this->relative_velocity_sigma_x != other.relative_velocity_sigma_x) {
      return false;
    }
    if (this->relative_velocity_sigma_y != other.relative_velocity_sigma_y) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->tracking_model != other.tracking_model) {
      return false;
    }
    if (this->mobile_detected != other.mobile_detected) {
      return false;
    }
    if (this->track_valid != other.track_valid) {
      return false;
    }
    if (this->classification_age != other.classification_age) {
      return false;
    }
    if (this->classification_confidence != other.classification_confidence) {
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
  bool operator!=(const Object2270_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object2270_

// alias to use template instance with default allocator
using Object2270 =
  ibeo_msgs::msg::Object2270_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::CENTER_OF_GRAVITY;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::TOP_FRONT_LEFT_CORNER;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::TOP_FRONT_RIGHT_CORNER;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::BOTTOM_REAR_RIGHT_CORNER;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::BOTTOM_REAR_LEFT_CORNER;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::CENTER_OF_TOP_FRONT_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::CENTER_OF_RIGHT_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::CENTER_OF_BOTTOM_REAR_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::CENTER_OF_LEFT_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::BOX_CENTER;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::INVALID;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::UNCLASSIFIED;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::UNKNOWN_SMALL;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::UNKNOWN_BIG;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::PEDESTRIAN;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::BIKE;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::CAR;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::TRUCK;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::OVER_DRIVABLE;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::UNDER_DRIVABLE;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::DYNAMIC_MODEL;
template<typename ContainerAllocator>
constexpr uint8_t Object2270_<ContainerAllocator>::STATIC_MODEL;

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2270__STRUCT_HPP_
