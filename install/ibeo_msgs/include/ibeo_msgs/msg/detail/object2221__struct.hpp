// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/Object2221.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2221__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2221__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'reference_point'
// Member 'reference_point_sigma'
// Member 'closest_point'
// Member 'bounding_box_center'
// Member 'object_box_center'
// Member 'absolute_velocity'
// Member 'relative_velocity'
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_di__struct.hpp"
// Member 'object_box_size'
// Member 'absolute_velocity_sigma'
#include "ibeo_msgs/msg/detail/size2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__Object2221 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__Object2221 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object2221_
{
  using Type = Object2221_<ContainerAllocator>;

  explicit Object2221_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_point(_init),
    reference_point_sigma(_init),
    closest_point(_init),
    bounding_box_center(_init),
    object_box_center(_init),
    object_box_size(_init),
    absolute_velocity(_init),
    absolute_velocity_sigma(_init),
    relative_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->age = 0;
      this->prediction_age = 0;
      this->relative_timestamp = 0;
      this->bounding_box_width = 0;
      this->bounding_box_length = 0;
      this->object_box_orientation = 0;
      this->classification = 0;
      this->classification_age = 0;
      this->classification_certainty = 0;
      this->number_of_contour_points = 0;
    }
  }

  explicit Object2221_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_point(_alloc, _init),
    reference_point_sigma(_alloc, _init),
    closest_point(_alloc, _init),
    bounding_box_center(_alloc, _init),
    object_box_center(_alloc, _init),
    object_box_size(_alloc, _init),
    absolute_velocity(_alloc, _init),
    absolute_velocity_sigma(_alloc, _init),
    relative_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->age = 0;
      this->prediction_age = 0;
      this->relative_timestamp = 0;
      this->bounding_box_width = 0;
      this->bounding_box_length = 0;
      this->object_box_orientation = 0;
      this->classification = 0;
      this->classification_age = 0;
      this->classification_certainty = 0;
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
  using _relative_timestamp_type =
    uint16_t;
  _relative_timestamp_type relative_timestamp;
  using _reference_point_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _reference_point_type reference_point;
  using _reference_point_sigma_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _reference_point_sigma_type reference_point_sigma;
  using _closest_point_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _closest_point_type closest_point;
  using _bounding_box_center_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _bounding_box_center_type bounding_box_center;
  using _bounding_box_width_type =
    uint16_t;
  _bounding_box_width_type bounding_box_width;
  using _bounding_box_length_type =
    uint16_t;
  _bounding_box_length_type bounding_box_length;
  using _object_box_center_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _object_box_center_type object_box_center;
  using _object_box_size_type =
    ibeo_msgs::msg::Size2D_<ContainerAllocator>;
  _object_box_size_type object_box_size;
  using _object_box_orientation_type =
    int16_t;
  _object_box_orientation_type object_box_orientation;
  using _absolute_velocity_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _absolute_velocity_type absolute_velocity;
  using _absolute_velocity_sigma_type =
    ibeo_msgs::msg::Size2D_<ContainerAllocator>;
  _absolute_velocity_sigma_type absolute_velocity_sigma;
  using _relative_velocity_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _relative_velocity_type relative_velocity;
  using _classification_type =
    uint8_t;
  _classification_type classification;
  using _classification_age_type =
    uint16_t;
  _classification_age_type classification_age;
  using _classification_certainty_type =
    uint16_t;
  _classification_certainty_type classification_certainty;
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
  Type & set__relative_timestamp(
    const uint16_t & _arg)
  {
    this->relative_timestamp = _arg;
    return *this;
  }
  Type & set__reference_point(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->reference_point = _arg;
    return *this;
  }
  Type & set__reference_point_sigma(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->reference_point_sigma = _arg;
    return *this;
  }
  Type & set__closest_point(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->closest_point = _arg;
    return *this;
  }
  Type & set__bounding_box_center(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->bounding_box_center = _arg;
    return *this;
  }
  Type & set__bounding_box_width(
    const uint16_t & _arg)
  {
    this->bounding_box_width = _arg;
    return *this;
  }
  Type & set__bounding_box_length(
    const uint16_t & _arg)
  {
    this->bounding_box_length = _arg;
    return *this;
  }
  Type & set__object_box_center(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->object_box_center = _arg;
    return *this;
  }
  Type & set__object_box_size(
    const ibeo_msgs::msg::Size2D_<ContainerAllocator> & _arg)
  {
    this->object_box_size = _arg;
    return *this;
  }
  Type & set__object_box_orientation(
    const int16_t & _arg)
  {
    this->object_box_orientation = _arg;
    return *this;
  }
  Type & set__absolute_velocity(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->absolute_velocity = _arg;
    return *this;
  }
  Type & set__absolute_velocity_sigma(
    const ibeo_msgs::msg::Size2D_<ContainerAllocator> & _arg)
  {
    this->absolute_velocity_sigma = _arg;
    return *this;
  }
  Type & set__relative_velocity(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->relative_velocity = _arg;
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
  Type & set__classification_certainty(
    const uint16_t & _arg)
  {
    this->classification_certainty = _arg;
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

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::Object2221_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::Object2221_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Object2221_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Object2221_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Object2221_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Object2221_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Object2221_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Object2221_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Object2221_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Object2221_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__Object2221
    std::shared_ptr<ibeo_msgs::msg::Object2221_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__Object2221
    std::shared_ptr<ibeo_msgs::msg::Object2221_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object2221_ & other) const
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
    if (this->relative_timestamp != other.relative_timestamp) {
      return false;
    }
    if (this->reference_point != other.reference_point) {
      return false;
    }
    if (this->reference_point_sigma != other.reference_point_sigma) {
      return false;
    }
    if (this->closest_point != other.closest_point) {
      return false;
    }
    if (this->bounding_box_center != other.bounding_box_center) {
      return false;
    }
    if (this->bounding_box_width != other.bounding_box_width) {
      return false;
    }
    if (this->bounding_box_length != other.bounding_box_length) {
      return false;
    }
    if (this->object_box_center != other.object_box_center) {
      return false;
    }
    if (this->object_box_size != other.object_box_size) {
      return false;
    }
    if (this->object_box_orientation != other.object_box_orientation) {
      return false;
    }
    if (this->absolute_velocity != other.absolute_velocity) {
      return false;
    }
    if (this->absolute_velocity_sigma != other.absolute_velocity_sigma) {
      return false;
    }
    if (this->relative_velocity != other.relative_velocity) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->classification_age != other.classification_age) {
      return false;
    }
    if (this->classification_certainty != other.classification_certainty) {
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
  bool operator!=(const Object2221_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object2221_

// alias to use template instance with default allocator
using Object2221 =
  ibeo_msgs::msg::Object2221_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Object2221_<ContainerAllocator>::UNCLASSIFIED;
template<typename ContainerAllocator>
constexpr uint8_t Object2221_<ContainerAllocator>::UNKNOWN_SMALL;
template<typename ContainerAllocator>
constexpr uint8_t Object2221_<ContainerAllocator>::UNKNOWN_BIG;
template<typename ContainerAllocator>
constexpr uint8_t Object2221_<ContainerAllocator>::PEDESTRIAN;
template<typename ContainerAllocator>
constexpr uint8_t Object2221_<ContainerAllocator>::BIKE;
template<typename ContainerAllocator>
constexpr uint8_t Object2221_<ContainerAllocator>::CAR;
template<typename ContainerAllocator>
constexpr uint8_t Object2221_<ContainerAllocator>::TRUCK;

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2221__STRUCT_HPP_
