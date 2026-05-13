// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/Object2280.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2280__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2280__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'object_box_center'
// Member 'object_box_center_sigma'
// Member 'object_box_size'
// Member 'relative_velocity'
// Member 'relative_velocity_sigma'
// Member 'absolute_velocity'
// Member 'absolute_velocity_sigma'
// Member 'reference_point_coordinate'
// Member 'reference_point_coordinate_sigma'
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_df__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__Object2280 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__Object2280 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object2280_
{
  using Type = Object2280_<ContainerAllocator>;

  explicit Object2280_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    object_box_center(_init),
    object_box_center_sigma(_init),
    object_box_size(_init),
    relative_velocity(_init),
    relative_velocity_sigma(_init),
    absolute_velocity(_init),
    absolute_velocity_sigma(_init),
    reference_point_coordinate(_init),
    reference_point_coordinate_sigma(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->tracking_model = 0;
      this->mobility_of_dyn_object_detected = false;
      this->motion_model_validated = false;
      this->object_age = 0ul;
      this->object_prediction_age = 0;
      this->classification = 0;
      this->classification_certainty = 0;
      this->classification_age = 0ul;
      this->object_box_orientation_angle = 0.0f;
      this->object_box_orientation_angle_sigma = 0.0f;
      this->number_of_contour_points = 0;
      this->closest_point_index = 0;
      this->reference_point_location = 0;
      this->reference_point_position_correction_coefficient = 0.0f;
      this->object_priority = 0;
      this->object_existence_measurement = 0.0f;
    }
  }

  explicit Object2280_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    object_box_center(_alloc, _init),
    object_box_center_sigma(_alloc, _init),
    object_box_size(_alloc, _init),
    relative_velocity(_alloc, _init),
    relative_velocity_sigma(_alloc, _init),
    absolute_velocity(_alloc, _init),
    absolute_velocity_sigma(_alloc, _init),
    reference_point_coordinate(_alloc, _init),
    reference_point_coordinate_sigma(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->tracking_model = 0;
      this->mobility_of_dyn_object_detected = false;
      this->motion_model_validated = false;
      this->object_age = 0ul;
      this->object_prediction_age = 0;
      this->classification = 0;
      this->classification_certainty = 0;
      this->classification_age = 0ul;
      this->object_box_orientation_angle = 0.0f;
      this->object_box_orientation_angle_sigma = 0.0f;
      this->number_of_contour_points = 0;
      this->closest_point_index = 0;
      this->reference_point_location = 0;
      this->reference_point_position_correction_coefficient = 0.0f;
      this->object_priority = 0;
      this->object_existence_measurement = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    uint16_t;
  _id_type id;
  using _tracking_model_type =
    uint8_t;
  _tracking_model_type tracking_model;
  using _mobility_of_dyn_object_detected_type =
    bool;
  _mobility_of_dyn_object_detected_type mobility_of_dyn_object_detected;
  using _motion_model_validated_type =
    bool;
  _motion_model_validated_type motion_model_validated;
  using _object_age_type =
    uint32_t;
  _object_age_type object_age;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _object_prediction_age_type =
    uint16_t;
  _object_prediction_age_type object_prediction_age;
  using _classification_type =
    uint8_t;
  _classification_type classification;
  using _classification_certainty_type =
    uint8_t;
  _classification_certainty_type classification_certainty;
  using _classification_age_type =
    uint32_t;
  _classification_age_type classification_age;
  using _object_box_center_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _object_box_center_type object_box_center;
  using _object_box_center_sigma_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _object_box_center_sigma_type object_box_center_sigma;
  using _object_box_size_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _object_box_size_type object_box_size;
  using _object_box_orientation_angle_type =
    float;
  _object_box_orientation_angle_type object_box_orientation_angle;
  using _object_box_orientation_angle_sigma_type =
    float;
  _object_box_orientation_angle_sigma_type object_box_orientation_angle_sigma;
  using _relative_velocity_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _relative_velocity_type relative_velocity;
  using _relative_velocity_sigma_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _relative_velocity_sigma_type relative_velocity_sigma;
  using _absolute_velocity_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _absolute_velocity_type absolute_velocity;
  using _absolute_velocity_sigma_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _absolute_velocity_sigma_type absolute_velocity_sigma;
  using _number_of_contour_points_type =
    uint8_t;
  _number_of_contour_points_type number_of_contour_points;
  using _closest_point_index_type =
    uint8_t;
  _closest_point_index_type closest_point_index;
  using _reference_point_location_type =
    uint16_t;
  _reference_point_location_type reference_point_location;
  using _reference_point_coordinate_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _reference_point_coordinate_type reference_point_coordinate;
  using _reference_point_coordinate_sigma_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _reference_point_coordinate_sigma_type reference_point_coordinate_sigma;
  using _reference_point_position_correction_coefficient_type =
    float;
  _reference_point_position_correction_coefficient_type reference_point_position_correction_coefficient;
  using _object_priority_type =
    uint16_t;
  _object_priority_type object_priority;
  using _object_existence_measurement_type =
    float;
  _object_existence_measurement_type object_existence_measurement;
  using _contour_point_list_type =
    std::vector<ibeo_msgs::msg::Point2Df_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::Point2Df_<ContainerAllocator>>>;
  _contour_point_list_type contour_point_list;

  // setters for named parameter idiom
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__tracking_model(
    const uint8_t & _arg)
  {
    this->tracking_model = _arg;
    return *this;
  }
  Type & set__mobility_of_dyn_object_detected(
    const bool & _arg)
  {
    this->mobility_of_dyn_object_detected = _arg;
    return *this;
  }
  Type & set__motion_model_validated(
    const bool & _arg)
  {
    this->motion_model_validated = _arg;
    return *this;
  }
  Type & set__object_age(
    const uint32_t & _arg)
  {
    this->object_age = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__object_prediction_age(
    const uint16_t & _arg)
  {
    this->object_prediction_age = _arg;
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
  Type & set__object_box_center(
    const ibeo_msgs::msg::Point2Df_<ContainerAllocator> & _arg)
  {
    this->object_box_center = _arg;
    return *this;
  }
  Type & set__object_box_center_sigma(
    const ibeo_msgs::msg::Point2Df_<ContainerAllocator> & _arg)
  {
    this->object_box_center_sigma = _arg;
    return *this;
  }
  Type & set__object_box_size(
    const ibeo_msgs::msg::Point2Df_<ContainerAllocator> & _arg)
  {
    this->object_box_size = _arg;
    return *this;
  }
  Type & set__object_box_orientation_angle(
    const float & _arg)
  {
    this->object_box_orientation_angle = _arg;
    return *this;
  }
  Type & set__object_box_orientation_angle_sigma(
    const float & _arg)
  {
    this->object_box_orientation_angle_sigma = _arg;
    return *this;
  }
  Type & set__relative_velocity(
    const ibeo_msgs::msg::Point2Df_<ContainerAllocator> & _arg)
  {
    this->relative_velocity = _arg;
    return *this;
  }
  Type & set__relative_velocity_sigma(
    const ibeo_msgs::msg::Point2Df_<ContainerAllocator> & _arg)
  {
    this->relative_velocity_sigma = _arg;
    return *this;
  }
  Type & set__absolute_velocity(
    const ibeo_msgs::msg::Point2Df_<ContainerAllocator> & _arg)
  {
    this->absolute_velocity = _arg;
    return *this;
  }
  Type & set__absolute_velocity_sigma(
    const ibeo_msgs::msg::Point2Df_<ContainerAllocator> & _arg)
  {
    this->absolute_velocity_sigma = _arg;
    return *this;
  }
  Type & set__number_of_contour_points(
    const uint8_t & _arg)
  {
    this->number_of_contour_points = _arg;
    return *this;
  }
  Type & set__closest_point_index(
    const uint8_t & _arg)
  {
    this->closest_point_index = _arg;
    return *this;
  }
  Type & set__reference_point_location(
    const uint16_t & _arg)
  {
    this->reference_point_location = _arg;
    return *this;
  }
  Type & set__reference_point_coordinate(
    const ibeo_msgs::msg::Point2Df_<ContainerAllocator> & _arg)
  {
    this->reference_point_coordinate = _arg;
    return *this;
  }
  Type & set__reference_point_coordinate_sigma(
    const ibeo_msgs::msg::Point2Df_<ContainerAllocator> & _arg)
  {
    this->reference_point_coordinate_sigma = _arg;
    return *this;
  }
  Type & set__reference_point_position_correction_coefficient(
    const float & _arg)
  {
    this->reference_point_position_correction_coefficient = _arg;
    return *this;
  }
  Type & set__object_priority(
    const uint16_t & _arg)
  {
    this->object_priority = _arg;
    return *this;
  }
  Type & set__object_existence_measurement(
    const float & _arg)
  {
    this->object_existence_measurement = _arg;
    return *this;
  }
  Type & set__contour_point_list(
    const std::vector<ibeo_msgs::msg::Point2Df_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::Point2Df_<ContainerAllocator>>> & _arg)
  {
    this->contour_point_list = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DYNAMIC_MODEL =
    0u;
  static constexpr uint8_t STATIC_MODEL =
    1u;
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
  static constexpr uint8_t UNDER_DRIVABLE =
    12u;
  static constexpr uint8_t OVER_DRIVABLE =
    13u;
  static constexpr uint16_t CENTER_OF_GRAVITY =
    0u;
  static constexpr uint16_t FRONT_LEFT =
    1u;
  static constexpr uint16_t FRONT_RIGHT =
    2u;
  static constexpr uint16_t REAR_RIGHT =
    3u;
  static constexpr uint16_t REAR_LEFT =
    4u;
  static constexpr uint16_t FRONT_CENTER =
    5u;
  static constexpr uint16_t RIGHT_CENTER =
    6u;
  static constexpr uint16_t REAR_CENTER =
    7u;
  static constexpr uint16_t LEFT_CENTER =
    8u;
  static constexpr uint16_t OBJECT_CENTER =
    9u;
  static constexpr uint16_t UNKNOWN =
    255u;

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::Object2280_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::Object2280_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Object2280_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Object2280_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Object2280_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Object2280_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Object2280_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Object2280_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Object2280_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Object2280_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__Object2280
    std::shared_ptr<ibeo_msgs::msg::Object2280_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__Object2280
    std::shared_ptr<ibeo_msgs::msg::Object2280_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object2280_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->tracking_model != other.tracking_model) {
      return false;
    }
    if (this->mobility_of_dyn_object_detected != other.mobility_of_dyn_object_detected) {
      return false;
    }
    if (this->motion_model_validated != other.motion_model_validated) {
      return false;
    }
    if (this->object_age != other.object_age) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->object_prediction_age != other.object_prediction_age) {
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
    if (this->object_box_center != other.object_box_center) {
      return false;
    }
    if (this->object_box_center_sigma != other.object_box_center_sigma) {
      return false;
    }
    if (this->object_box_size != other.object_box_size) {
      return false;
    }
    if (this->object_box_orientation_angle != other.object_box_orientation_angle) {
      return false;
    }
    if (this->object_box_orientation_angle_sigma != other.object_box_orientation_angle_sigma) {
      return false;
    }
    if (this->relative_velocity != other.relative_velocity) {
      return false;
    }
    if (this->relative_velocity_sigma != other.relative_velocity_sigma) {
      return false;
    }
    if (this->absolute_velocity != other.absolute_velocity) {
      return false;
    }
    if (this->absolute_velocity_sigma != other.absolute_velocity_sigma) {
      return false;
    }
    if (this->number_of_contour_points != other.number_of_contour_points) {
      return false;
    }
    if (this->closest_point_index != other.closest_point_index) {
      return false;
    }
    if (this->reference_point_location != other.reference_point_location) {
      return false;
    }
    if (this->reference_point_coordinate != other.reference_point_coordinate) {
      return false;
    }
    if (this->reference_point_coordinate_sigma != other.reference_point_coordinate_sigma) {
      return false;
    }
    if (this->reference_point_position_correction_coefficient != other.reference_point_position_correction_coefficient) {
      return false;
    }
    if (this->object_priority != other.object_priority) {
      return false;
    }
    if (this->object_existence_measurement != other.object_existence_measurement) {
      return false;
    }
    if (this->contour_point_list != other.contour_point_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object2280_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object2280_

// alias to use template instance with default allocator
using Object2280 =
  ibeo_msgs::msg::Object2280_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Object2280_<ContainerAllocator>::DYNAMIC_MODEL;
template<typename ContainerAllocator>
constexpr uint8_t Object2280_<ContainerAllocator>::STATIC_MODEL;
template<typename ContainerAllocator>
constexpr uint8_t Object2280_<ContainerAllocator>::UNCLASSIFIED;
template<typename ContainerAllocator>
constexpr uint8_t Object2280_<ContainerAllocator>::UNKNOWN_SMALL;
template<typename ContainerAllocator>
constexpr uint8_t Object2280_<ContainerAllocator>::UNKNOWN_BIG;
template<typename ContainerAllocator>
constexpr uint8_t Object2280_<ContainerAllocator>::PEDESTRIAN;
template<typename ContainerAllocator>
constexpr uint8_t Object2280_<ContainerAllocator>::BIKE;
template<typename ContainerAllocator>
constexpr uint8_t Object2280_<ContainerAllocator>::CAR;
template<typename ContainerAllocator>
constexpr uint8_t Object2280_<ContainerAllocator>::TRUCK;
template<typename ContainerAllocator>
constexpr uint8_t Object2280_<ContainerAllocator>::UNDER_DRIVABLE;
template<typename ContainerAllocator>
constexpr uint8_t Object2280_<ContainerAllocator>::OVER_DRIVABLE;
template<typename ContainerAllocator>
constexpr uint16_t Object2280_<ContainerAllocator>::CENTER_OF_GRAVITY;
template<typename ContainerAllocator>
constexpr uint16_t Object2280_<ContainerAllocator>::FRONT_LEFT;
template<typename ContainerAllocator>
constexpr uint16_t Object2280_<ContainerAllocator>::FRONT_RIGHT;
template<typename ContainerAllocator>
constexpr uint16_t Object2280_<ContainerAllocator>::REAR_RIGHT;
template<typename ContainerAllocator>
constexpr uint16_t Object2280_<ContainerAllocator>::REAR_LEFT;
template<typename ContainerAllocator>
constexpr uint16_t Object2280_<ContainerAllocator>::FRONT_CENTER;
template<typename ContainerAllocator>
constexpr uint16_t Object2280_<ContainerAllocator>::RIGHT_CENTER;
template<typename ContainerAllocator>
constexpr uint16_t Object2280_<ContainerAllocator>::REAR_CENTER;
template<typename ContainerAllocator>
constexpr uint16_t Object2280_<ContainerAllocator>::LEFT_CENTER;
template<typename ContainerAllocator>
constexpr uint16_t Object2280_<ContainerAllocator>::OBJECT_CENTER;
template<typename ContainerAllocator>
constexpr uint16_t Object2280_<ContainerAllocator>::UNKNOWN;

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2280__STRUCT_HPP_
