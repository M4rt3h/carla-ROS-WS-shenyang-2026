// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/ContourPointSigma.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__CONTOUR_POINT_SIGMA__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__CONTOUR_POINT_SIGMA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__ContourPointSigma __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__ContourPointSigma __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContourPointSigma_
{
  using Type = ContourPointSigma_<ContainerAllocator>;

  explicit ContourPointSigma_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0;
      this->y = 0;
      this->x_sigma = 0;
      this->y_sigma = 0;
    }
  }

  explicit ContourPointSigma_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0;
      this->y = 0;
      this->x_sigma = 0;
      this->y_sigma = 0;
    }
  }

  // field types and members
  using _x_type =
    int16_t;
  _x_type x;
  using _y_type =
    int16_t;
  _y_type y;
  using _x_sigma_type =
    uint8_t;
  _x_sigma_type x_sigma;
  using _y_sigma_type =
    uint8_t;
  _y_sigma_type y_sigma;

  // setters for named parameter idiom
  Type & set__x(
    const int16_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int16_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__x_sigma(
    const uint8_t & _arg)
  {
    this->x_sigma = _arg;
    return *this;
  }
  Type & set__y_sigma(
    const uint8_t & _arg)
  {
    this->y_sigma = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__ContourPointSigma
    std::shared_ptr<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__ContourPointSigma
    std::shared_ptr<ibeo_msgs::msg::ContourPointSigma_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContourPointSigma_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->x_sigma != other.x_sigma) {
      return false;
    }
    if (this->y_sigma != other.y_sigma) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContourPointSigma_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContourPointSigma_

// alias to use template instance with default allocator
using ContourPointSigma =
  ibeo_msgs::msg::ContourPointSigma_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__CONTOUR_POINT_SIGMA__STRUCT_HPP_
