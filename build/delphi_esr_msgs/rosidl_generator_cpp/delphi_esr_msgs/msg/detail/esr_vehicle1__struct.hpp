// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delphi_esr_msgs__msg__EsrVehicle1 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrVehicle1 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrVehicle1_
{
  using Type = EsrVehicle1_<ContainerAllocator>;

  explicit EsrVehicle1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_speed = 0.0f;
      this->vehicle_speed_direction = false;
      this->yaw_rate = 0.0f;
      this->yaw_rate_validity = false;
      this->steering_angle_rate_sign = false;
      this->radius_curvature = 0;
      this->steering_angle_validity = false;
      this->steering_angle_sign = false;
      this->steering_angle = 0;
      this->steering_angle_rate = 0;
    }
  }

  explicit EsrVehicle1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_speed = 0.0f;
      this->vehicle_speed_direction = false;
      this->yaw_rate = 0.0f;
      this->yaw_rate_validity = false;
      this->steering_angle_rate_sign = false;
      this->radius_curvature = 0;
      this->steering_angle_validity = false;
      this->steering_angle_sign = false;
      this->steering_angle = 0;
      this->steering_angle_rate = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vehicle_speed_type =
    float;
  _vehicle_speed_type vehicle_speed;
  using _vehicle_speed_direction_type =
    bool;
  _vehicle_speed_direction_type vehicle_speed_direction;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;
  using _yaw_rate_validity_type =
    bool;
  _yaw_rate_validity_type yaw_rate_validity;
  using _steering_angle_rate_sign_type =
    bool;
  _steering_angle_rate_sign_type steering_angle_rate_sign;
  using _radius_curvature_type =
    int16_t;
  _radius_curvature_type radius_curvature;
  using _steering_angle_validity_type =
    bool;
  _steering_angle_validity_type steering_angle_validity;
  using _steering_angle_sign_type =
    bool;
  _steering_angle_sign_type steering_angle_sign;
  using _steering_angle_type =
    uint16_t;
  _steering_angle_type steering_angle;
  using _steering_angle_rate_type =
    uint16_t;
  _steering_angle_rate_type steering_angle_rate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vehicle_speed(
    const float & _arg)
  {
    this->vehicle_speed = _arg;
    return *this;
  }
  Type & set__vehicle_speed_direction(
    const bool & _arg)
  {
    this->vehicle_speed_direction = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__yaw_rate_validity(
    const bool & _arg)
  {
    this->yaw_rate_validity = _arg;
    return *this;
  }
  Type & set__steering_angle_rate_sign(
    const bool & _arg)
  {
    this->steering_angle_rate_sign = _arg;
    return *this;
  }
  Type & set__radius_curvature(
    const int16_t & _arg)
  {
    this->radius_curvature = _arg;
    return *this;
  }
  Type & set__steering_angle_validity(
    const bool & _arg)
  {
    this->steering_angle_validity = _arg;
    return *this;
  }
  Type & set__steering_angle_sign(
    const bool & _arg)
  {
    this->steering_angle_sign = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const uint16_t & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }
  Type & set__steering_angle_rate(
    const uint16_t & _arg)
  {
    this->steering_angle_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrVehicle1
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrVehicle1
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrVehicle1_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vehicle_speed != other.vehicle_speed) {
      return false;
    }
    if (this->vehicle_speed_direction != other.vehicle_speed_direction) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->yaw_rate_validity != other.yaw_rate_validity) {
      return false;
    }
    if (this->steering_angle_rate_sign != other.steering_angle_rate_sign) {
      return false;
    }
    if (this->radius_curvature != other.radius_curvature) {
      return false;
    }
    if (this->steering_angle_validity != other.steering_angle_validity) {
      return false;
    }
    if (this->steering_angle_sign != other.steering_angle_sign) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    if (this->steering_angle_rate != other.steering_angle_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrVehicle1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrVehicle1_

// alias to use template instance with default allocator
using EsrVehicle1 =
  delphi_esr_msgs::msg::EsrVehicle1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__STRUCT_HPP_
