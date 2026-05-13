// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/UntrackedProperties.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'position_closest_point'
// Member 'object_box_size'
// Member 'tracking_point_coordinate'
#include "ibeo_msgs/msg/detail/point2_di__struct.hpp"
// Member 'object_box_size_sigma'
// Member 'tracking_point_coordinate_sigma'
#include "ibeo_msgs/msg/detail/point2_dui__struct.hpp"
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/contour_point_sigma__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__UntrackedProperties __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__UntrackedProperties __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UntrackedProperties_
{
  using Type = UntrackedProperties_<ContainerAllocator>;

  explicit UntrackedProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_closest_point(_init),
    object_box_size(_init),
    object_box_size_sigma(_init),
    tracking_point_coordinate(_init),
    tracking_point_coordinate_sigma(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->relative_time_of_measurement = 0;
      this->object_box_orientation = 0;
      this->object_box_orientation_sigma = 0;
      this->number_of_contour_points = 0;
    }
  }

  explicit UntrackedProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_closest_point(_alloc, _init),
    object_box_size(_alloc, _init),
    object_box_size_sigma(_alloc, _init),
    tracking_point_coordinate(_alloc, _init),
    tracking_point_coordinate_sigma(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->relative_time_of_measurement = 0;
      this->object_box_orientation = 0;
      this->object_box_orientation_sigma = 0;
      this->number_of_contour_points = 0;
    }
  }

  // field types and members
  using _relative_time_of_measurement_type =
    uint16_t;
  _relative_time_of_measurement_type relative_time_of_measurement;
  using _position_closest_point_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _position_closest_point_type position_closest_point;
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
  using _tracking_point_coordinate_type =
    ibeo_msgs::msg::Point2Di_<ContainerAllocator>;
  _tracking_point_coordinate_type tracking_point_coordinate;
  using _tracking_point_coordinate_sigma_type =
    ibeo_msgs::msg::Point2Dui_<ContainerAllocator>;
  _tracking_point_coordinate_sigma_type tracking_point_coordinate_sigma;
  using _number_of_contour_points_type =
    uint8_t;
  _number_of_contour_points_type number_of_contour_points;
  using _contour_point_list_type =
    std::vector<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>>>;
  _contour_point_list_type contour_point_list;

  // setters for named parameter idiom
  Type & set__relative_time_of_measurement(
    const uint16_t & _arg)
  {
    this->relative_time_of_measurement = _arg;
    return *this;
  }
  Type & set__position_closest_point(
    const ibeo_msgs::msg::Point2Di_<ContainerAllocator> & _arg)
  {
    this->position_closest_point = _arg;
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

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__UntrackedProperties
    std::shared_ptr<ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__UntrackedProperties
    std::shared_ptr<ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UntrackedProperties_ & other) const
  {
    if (this->relative_time_of_measurement != other.relative_time_of_measurement) {
      return false;
    }
    if (this->position_closest_point != other.position_closest_point) {
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
    if (this->tracking_point_coordinate != other.tracking_point_coordinate) {
      return false;
    }
    if (this->tracking_point_coordinate_sigma != other.tracking_point_coordinate_sigma) {
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
  bool operator!=(const UntrackedProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UntrackedProperties_

// alias to use template instance with default allocator
using UntrackedProperties =
  ibeo_msgs::msg::UntrackedProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__STRUCT_HPP_
