// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/ScanPoint2202.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__ScanPoint2202 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__ScanPoint2202 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScanPoint2202_
{
  using Type = ScanPoint2202_<ContainerAllocator>;

  explicit ScanPoint2202_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->layer = 0;
      this->echo = 0;
      this->transparent_point = false;
      this->clutter_atmospheric = false;
      this->ground = false;
      this->dirt = false;
      this->horizontal_angle = 0;
      this->radial_distance = 0;
      this->echo_pulse_width = 0;
    }
  }

  explicit ScanPoint2202_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->layer = 0;
      this->echo = 0;
      this->transparent_point = false;
      this->clutter_atmospheric = false;
      this->ground = false;
      this->dirt = false;
      this->horizontal_angle = 0;
      this->radial_distance = 0;
      this->echo_pulse_width = 0;
    }
  }

  // field types and members
  using _layer_type =
    uint8_t;
  _layer_type layer;
  using _echo_type =
    uint8_t;
  _echo_type echo;
  using _transparent_point_type =
    bool;
  _transparent_point_type transparent_point;
  using _clutter_atmospheric_type =
    bool;
  _clutter_atmospheric_type clutter_atmospheric;
  using _ground_type =
    bool;
  _ground_type ground;
  using _dirt_type =
    bool;
  _dirt_type dirt;
  using _horizontal_angle_type =
    int16_t;
  _horizontal_angle_type horizontal_angle;
  using _radial_distance_type =
    uint16_t;
  _radial_distance_type radial_distance;
  using _echo_pulse_width_type =
    uint16_t;
  _echo_pulse_width_type echo_pulse_width;

  // setters for named parameter idiom
  Type & set__layer(
    const uint8_t & _arg)
  {
    this->layer = _arg;
    return *this;
  }
  Type & set__echo(
    const uint8_t & _arg)
  {
    this->echo = _arg;
    return *this;
  }
  Type & set__transparent_point(
    const bool & _arg)
  {
    this->transparent_point = _arg;
    return *this;
  }
  Type & set__clutter_atmospheric(
    const bool & _arg)
  {
    this->clutter_atmospheric = _arg;
    return *this;
  }
  Type & set__ground(
    const bool & _arg)
  {
    this->ground = _arg;
    return *this;
  }
  Type & set__dirt(
    const bool & _arg)
  {
    this->dirt = _arg;
    return *this;
  }
  Type & set__horizontal_angle(
    const int16_t & _arg)
  {
    this->horizontal_angle = _arg;
    return *this;
  }
  Type & set__radial_distance(
    const uint16_t & _arg)
  {
    this->radial_distance = _arg;
    return *this;
  }
  Type & set__echo_pulse_width(
    const uint16_t & _arg)
  {
    this->echo_pulse_width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__ScanPoint2202
    std::shared_ptr<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__ScanPoint2202
    std::shared_ptr<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScanPoint2202_ & other) const
  {
    if (this->layer != other.layer) {
      return false;
    }
    if (this->echo != other.echo) {
      return false;
    }
    if (this->transparent_point != other.transparent_point) {
      return false;
    }
    if (this->clutter_atmospheric != other.clutter_atmospheric) {
      return false;
    }
    if (this->ground != other.ground) {
      return false;
    }
    if (this->dirt != other.dirt) {
      return false;
    }
    if (this->horizontal_angle != other.horizontal_angle) {
      return false;
    }
    if (this->radial_distance != other.radial_distance) {
      return false;
    }
    if (this->echo_pulse_width != other.echo_pulse_width) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScanPoint2202_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScanPoint2202_

// alias to use template instance with default allocator
using ScanPoint2202 =
  ibeo_msgs::msg::ScanPoint2202_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__STRUCT_HPP_
