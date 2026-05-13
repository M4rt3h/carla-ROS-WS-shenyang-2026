// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/ScanPoint2205.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__ScanPoint2205 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__ScanPoint2205 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScanPoint2205_
{
  using Type = ScanPoint2205_<ContainerAllocator>;

  explicit ScanPoint2205_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_position = 0.0f;
      this->y_position = 0.0f;
      this->z_position = 0.0f;
      this->echo_width = 0.0f;
      this->device_id = 0;
      this->layer = 0;
      this->echo = 0;
      this->time_offset = 0ul;
      this->ground = false;
      this->dirt = false;
      this->precipitation = false;
      this->transparent = false;
    }
  }

  explicit ScanPoint2205_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_position = 0.0f;
      this->y_position = 0.0f;
      this->z_position = 0.0f;
      this->echo_width = 0.0f;
      this->device_id = 0;
      this->layer = 0;
      this->echo = 0;
      this->time_offset = 0ul;
      this->ground = false;
      this->dirt = false;
      this->precipitation = false;
      this->transparent = false;
    }
  }

  // field types and members
  using _x_position_type =
    float;
  _x_position_type x_position;
  using _y_position_type =
    float;
  _y_position_type y_position;
  using _z_position_type =
    float;
  _z_position_type z_position;
  using _echo_width_type =
    float;
  _echo_width_type echo_width;
  using _device_id_type =
    uint8_t;
  _device_id_type device_id;
  using _layer_type =
    uint8_t;
  _layer_type layer;
  using _echo_type =
    uint8_t;
  _echo_type echo;
  using _time_offset_type =
    uint32_t;
  _time_offset_type time_offset;
  using _ground_type =
    bool;
  _ground_type ground;
  using _dirt_type =
    bool;
  _dirt_type dirt;
  using _precipitation_type =
    bool;
  _precipitation_type precipitation;
  using _transparent_type =
    bool;
  _transparent_type transparent;

  // setters for named parameter idiom
  Type & set__x_position(
    const float & _arg)
  {
    this->x_position = _arg;
    return *this;
  }
  Type & set__y_position(
    const float & _arg)
  {
    this->y_position = _arg;
    return *this;
  }
  Type & set__z_position(
    const float & _arg)
  {
    this->z_position = _arg;
    return *this;
  }
  Type & set__echo_width(
    const float & _arg)
  {
    this->echo_width = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint8_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
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
  Type & set__time_offset(
    const uint32_t & _arg)
  {
    this->time_offset = _arg;
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
  Type & set__precipitation(
    const bool & _arg)
  {
    this->precipitation = _arg;
    return *this;
  }
  Type & set__transparent(
    const bool & _arg)
  {
    this->transparent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__ScanPoint2205
    std::shared_ptr<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__ScanPoint2205
    std::shared_ptr<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScanPoint2205_ & other) const
  {
    if (this->x_position != other.x_position) {
      return false;
    }
    if (this->y_position != other.y_position) {
      return false;
    }
    if (this->z_position != other.z_position) {
      return false;
    }
    if (this->echo_width != other.echo_width) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->layer != other.layer) {
      return false;
    }
    if (this->echo != other.echo) {
      return false;
    }
    if (this->time_offset != other.time_offset) {
      return false;
    }
    if (this->ground != other.ground) {
      return false;
    }
    if (this->dirt != other.dirt) {
      return false;
    }
    if (this->precipitation != other.precipitation) {
      return false;
    }
    if (this->transparent != other.transparent) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScanPoint2205_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScanPoint2205_

// alias to use template instance with default allocator
using ScanPoint2205 =
  ibeo_msgs::msg::ScanPoint2205_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__STRUCT_HPP_
