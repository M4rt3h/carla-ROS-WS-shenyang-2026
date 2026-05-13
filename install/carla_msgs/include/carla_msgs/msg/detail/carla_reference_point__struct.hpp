// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaReferencePoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaReferencePoint __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaReferencePoint __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaReferencePoint_
{
  using Type = CarlaReferencePoint_<ContainerAllocator>;

  explicit CarlaReferencePoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->heading = 0.0;
      this->kappa = 0.0;
      this->dkappa = 0.0;
      this->s = 0.0;
    }
  }

  explicit CarlaReferencePoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->heading = 0.0;
      this->kappa = 0.0;
      this->dkappa = 0.0;
      this->s = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _heading_type =
    double;
  _heading_type heading;
  using _kappa_type =
    double;
  _kappa_type kappa;
  using _dkappa_type =
    double;
  _dkappa_type dkappa;
  using _s_type =
    double;
  _s_type s;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__kappa(
    const double & _arg)
  {
    this->kappa = _arg;
    return *this;
  }
  Type & set__dkappa(
    const double & _arg)
  {
    this->dkappa = _arg;
    return *this;
  }
  Type & set__s(
    const double & _arg)
  {
    this->s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaReferencePoint
    std::shared_ptr<carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaReferencePoint
    std::shared_ptr<carla_msgs::msg::CarlaReferencePoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaReferencePoint_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->kappa != other.kappa) {
      return false;
    }
    if (this->dkappa != other.dkappa) {
      return false;
    }
    if (this->s != other.s) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaReferencePoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaReferencePoint_

// alias to use template instance with default allocator
using CarlaReferencePoint =
  carla_msgs::msg::CarlaReferencePoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__STRUCT_HPP_
