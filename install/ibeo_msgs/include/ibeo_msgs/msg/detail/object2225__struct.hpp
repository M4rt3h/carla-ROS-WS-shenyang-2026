// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/Object2225.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2225__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2225__STRUCT_HPP_

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
// Member 'bounding_box_center'
// Member 'bounding_box_size'
// Member 'object_box_center'
// Member 'object_box_center_sigma'
// Member 'object_box_size'
// Member 'relative_velocity'
// Member 'relative_velocity_sigma'
// Member 'absolute_velocity'
// Member 'absolute_velocity_sigma'
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_df__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__Object2225 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__Object2225 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object2225_
{
  using Type = Object2225_<ContainerAllocator>;

  explicit Object2225_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    bounding_box_center(_init),
    bounding_box_size(_init),
    object_box_center(_init),
    object_box_center_sigma(_init),
    object_box_size(_init),
    relative_velocity(_init),
    relative_velocity_sigma(_init),
    absolute_velocity(_init),
    absolute_velocity_sigma(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->age = 0ul;
      this->hidden_status_age = 0;
      this->classification = 0;
      this->classification_certainty = 0;
      this->classification_age = 0ul;
      this->yaw_angle = 0.0f;
      this->number_of_contour_points = 0;
      this->closest_point_index = 0;
    }
  }

  explicit Object2225_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    bounding_box_center(_alloc, _init),
    bounding_box_size(_alloc, _init),
    object_box_center(_alloc, _init),
    object_box_center_sigma(_alloc, _init),
    object_box_size(_alloc, _init),
    relative_velocity(_alloc, _init),
    relative_velocity_sigma(_alloc, _init),
    absolute_velocity(_alloc, _init),
    absolute_velocity_sigma(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->age = 0ul;
      this->hidden_status_age = 0;
      this->classification = 0;
      this->classification_certainty = 0;
      this->classification_age = 0ul;
      this->yaw_angle = 0.0f;
      this->number_of_contour_points = 0;
      this->closest_point_index = 0;
    }
  }

  // field types and members
  using _id_type =
    uint16_t;
  _id_type id;
  using _age_type =
    uint32_t;
  _age_type age;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _hidden_status_age_type =
    uint16_t;
  _hidden_status_age_type hidden_status_age;
  using _classification_type =
    uint8_t;
  _classification_type classification;
  using _classification_certainty_type =
    uint8_t;
  _classification_certainty_type classification_certainty;
  using _classification_age_type =
    uint32_t;
  _classification_age_type classification_age;
  using _bounding_box_center_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _bounding_box_center_type bounding_box_center;
  using _bounding_box_size_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _bounding_box_size_type bounding_box_size;
  using _object_box_center_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _object_box_center_type object_box_center;
  using _object_box_center_sigma_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _object_box_center_sigma_type object_box_center_sigma;
  using _object_box_size_type =
    ibeo_msgs::msg::Point2Df_<ContainerAllocator>;
  _object_box_size_type object_box_size;
  using _yaw_angle_type =
    float;
  _yaw_angle_type yaw_angle;
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
  Type & set__age(
    const uint32_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__hidden_status_age(
    const uint16_t & _arg)
  {
    this->hidden_status_age = _arg;
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
  Type & set__bounding_box_center(
    const ibeo_msgs::msg::Point2Df_<ContainerAllocator> & _arg)
  {
    this->bounding_box_center = _arg;
    return *this;
  }
  Type & set__bounding_box_size(
    const ibeo_msgs::msg::Point2Df_<ContainerAllocator> & _arg)
  {
    this->bounding_box_size = _arg;
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
  Type & set__yaw_angle(
    const float & _arg)
  {
    this->yaw_angle = _arg;
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
  Type & set__contour_point_list(
    const std::vector<ibeo_msgs::msg::Point2Df_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::Point2Df_<ContainerAllocator>>> & _arg)
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
    ibeo_msgs::msg::Object2225_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::Object2225_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Object2225_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Object2225_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Object2225_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Object2225_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Object2225_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Object2225_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Object2225_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Object2225_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__Object2225
    std::shared_ptr<ibeo_msgs::msg::Object2225_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__Object2225
    std::shared_ptr<ibeo_msgs::msg::Object2225_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object2225_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->hidden_status_age != other.hidden_status_age) {
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
    if (this->bounding_box_center != other.bounding_box_center) {
      return false;
    }
    if (this->bounding_box_size != other.bounding_box_size) {
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
    if (this->yaw_angle != other.yaw_angle) {
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
    if (this->contour_point_list != other.contour_point_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object2225_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object2225_

// alias to use template instance with default allocator
using Object2225 =
  ibeo_msgs::msg::Object2225_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Object2225_<ContainerAllocator>::UNCLASSIFIED;
template<typename ContainerAllocator>
constexpr uint8_t Object2225_<ContainerAllocator>::UNKNOWN_SMALL;
template<typename ContainerAllocator>
constexpr uint8_t Object2225_<ContainerAllocator>::UNKNOWN_BIG;
template<typename ContainerAllocator>
constexpr uint8_t Object2225_<ContainerAllocator>::PEDESTRIAN;
template<typename ContainerAllocator>
constexpr uint8_t Object2225_<ContainerAllocator>::BIKE;
template<typename ContainerAllocator>
constexpr uint8_t Object2225_<ContainerAllocator>::CAR;
template<typename ContainerAllocator>
constexpr uint8_t Object2225_<ContainerAllocator>::TRUCK;

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2225__STRUCT_HPP_
