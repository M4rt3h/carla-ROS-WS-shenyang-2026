// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/MountingPositionF.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__MountingPositionF __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__MountingPositionF __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MountingPositionF_
{
  using Type = MountingPositionF_<ContainerAllocator>;

  explicit MountingPositionF_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_angle = 0.0f;
      this->pitch_angle = 0.0f;
      this->roll_angle = 0.0f;
      this->x_position = 0.0f;
      this->y_position = 0.0f;
      this->z_position = 0.0f;
    }
  }

  explicit MountingPositionF_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_angle = 0.0f;
      this->pitch_angle = 0.0f;
      this->roll_angle = 0.0f;
      this->x_position = 0.0f;
      this->y_position = 0.0f;
      this->z_position = 0.0f;
    }
  }

  // field types and members
  using _yaw_angle_type =
    float;
  _yaw_angle_type yaw_angle;
  using _pitch_angle_type =
    float;
  _pitch_angle_type pitch_angle;
  using _roll_angle_type =
    float;
  _roll_angle_type roll_angle;
  using _x_position_type =
    float;
  _x_position_type x_position;
  using _y_position_type =
    float;
  _y_position_type y_position;
  using _z_position_type =
    float;
  _z_position_type z_position;

  // setters for named parameter idiom
  Type & set__yaw_angle(
    const float & _arg)
  {
    this->yaw_angle = _arg;
    return *this;
  }
  Type & set__pitch_angle(
    const float & _arg)
  {
    this->pitch_angle = _arg;
    return *this;
  }
  Type & set__roll_angle(
    const float & _arg)
  {
    this->roll_angle = _arg;
    return *this;
  }
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

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::MountingPositionF_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::MountingPositionF_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::MountingPositionF_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::MountingPositionF_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::MountingPositionF_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::MountingPositionF_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::MountingPositionF_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::MountingPositionF_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::MountingPositionF_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::MountingPositionF_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__MountingPositionF
    std::shared_ptr<ibeo_msgs::msg::MountingPositionF_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__MountingPositionF
    std::shared_ptr<ibeo_msgs::msg::MountingPositionF_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MountingPositionF_ & other) const
  {
    if (this->yaw_angle != other.yaw_angle) {
      return false;
    }
    if (this->pitch_angle != other.pitch_angle) {
      return false;
    }
    if (this->roll_angle != other.roll_angle) {
      return false;
    }
    if (this->x_position != other.x_position) {
      return false;
    }
    if (this->y_position != other.y_position) {
      return false;
    }
    if (this->z_position != other.z_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const MountingPositionF_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MountingPositionF_

// alias to use template instance with default allocator
using MountingPositionF =
  ibeo_msgs::msg::MountingPositionF_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__STRUCT_HPP_
