// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/HostVehicleState2806.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2806__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2806__STRUCT_HPP_

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
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__HostVehicleState2806 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__HostVehicleState2806 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HostVehicleState2806_
{
  using Type = HostVehicleState2806_<ContainerAllocator>;

  explicit HostVehicleState2806_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ibeo_header(_init),
    timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_x = 0l;
      this->distance_y = 0l;
      this->course_angle = 0.0f;
      this->longitudinal_velocity = 0.0f;
      this->yaw_rate = 0.0f;
      this->steering_wheel_angle = 0.0f;
      this->cross_acceleration = 0.0f;
      this->front_wheel_angle = 0.0f;
      this->vehicle_width = 0.0f;
      this->vehicle_front_to_front_axle = 0.0f;
      this->rear_axle_to_front_axle = 0.0f;
      this->rear_axle_to_vehicle_rear = 0.0f;
      this->steer_ratio_poly_0 = 0.0f;
      this->steer_ratio_poly_1 = 0.0f;
      this->steer_ratio_poly_2 = 0.0f;
      this->steer_ratio_poly_3 = 0.0f;
    }
  }

  explicit HostVehicleState2806_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ibeo_header(_alloc, _init),
    timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_x = 0l;
      this->distance_y = 0l;
      this->course_angle = 0.0f;
      this->longitudinal_velocity = 0.0f;
      this->yaw_rate = 0.0f;
      this->steering_wheel_angle = 0.0f;
      this->cross_acceleration = 0.0f;
      this->front_wheel_angle = 0.0f;
      this->vehicle_width = 0.0f;
      this->vehicle_front_to_front_axle = 0.0f;
      this->rear_axle_to_front_axle = 0.0f;
      this->rear_axle_to_vehicle_rear = 0.0f;
      this->steer_ratio_poly_0 = 0.0f;
      this->steer_ratio_poly_1 = 0.0f;
      this->steer_ratio_poly_2 = 0.0f;
      this->steer_ratio_poly_3 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ibeo_header_type =
    ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>;
  _ibeo_header_type ibeo_header;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _distance_x_type =
    int32_t;
  _distance_x_type distance_x;
  using _distance_y_type =
    int32_t;
  _distance_y_type distance_y;
  using _course_angle_type =
    float;
  _course_angle_type course_angle;
  using _longitudinal_velocity_type =
    float;
  _longitudinal_velocity_type longitudinal_velocity;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;
  using _steering_wheel_angle_type =
    float;
  _steering_wheel_angle_type steering_wheel_angle;
  using _cross_acceleration_type =
    float;
  _cross_acceleration_type cross_acceleration;
  using _front_wheel_angle_type =
    float;
  _front_wheel_angle_type front_wheel_angle;
  using _vehicle_width_type =
    float;
  _vehicle_width_type vehicle_width;
  using _vehicle_front_to_front_axle_type =
    float;
  _vehicle_front_to_front_axle_type vehicle_front_to_front_axle;
  using _rear_axle_to_front_axle_type =
    float;
  _rear_axle_to_front_axle_type rear_axle_to_front_axle;
  using _rear_axle_to_vehicle_rear_type =
    float;
  _rear_axle_to_vehicle_rear_type rear_axle_to_vehicle_rear;
  using _steer_ratio_poly_0_type =
    float;
  _steer_ratio_poly_0_type steer_ratio_poly_0;
  using _steer_ratio_poly_1_type =
    float;
  _steer_ratio_poly_1_type steer_ratio_poly_1;
  using _steer_ratio_poly_2_type =
    float;
  _steer_ratio_poly_2_type steer_ratio_poly_2;
  using _steer_ratio_poly_3_type =
    float;
  _steer_ratio_poly_3_type steer_ratio_poly_3;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ibeo_header(
    const ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator> & _arg)
  {
    this->ibeo_header = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__distance_x(
    const int32_t & _arg)
  {
    this->distance_x = _arg;
    return *this;
  }
  Type & set__distance_y(
    const int32_t & _arg)
  {
    this->distance_y = _arg;
    return *this;
  }
  Type & set__course_angle(
    const float & _arg)
  {
    this->course_angle = _arg;
    return *this;
  }
  Type & set__longitudinal_velocity(
    const float & _arg)
  {
    this->longitudinal_velocity = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__steering_wheel_angle(
    const float & _arg)
  {
    this->steering_wheel_angle = _arg;
    return *this;
  }
  Type & set__cross_acceleration(
    const float & _arg)
  {
    this->cross_acceleration = _arg;
    return *this;
  }
  Type & set__front_wheel_angle(
    const float & _arg)
  {
    this->front_wheel_angle = _arg;
    return *this;
  }
  Type & set__vehicle_width(
    const float & _arg)
  {
    this->vehicle_width = _arg;
    return *this;
  }
  Type & set__vehicle_front_to_front_axle(
    const float & _arg)
  {
    this->vehicle_front_to_front_axle = _arg;
    return *this;
  }
  Type & set__rear_axle_to_front_axle(
    const float & _arg)
  {
    this->rear_axle_to_front_axle = _arg;
    return *this;
  }
  Type & set__rear_axle_to_vehicle_rear(
    const float & _arg)
  {
    this->rear_axle_to_vehicle_rear = _arg;
    return *this;
  }
  Type & set__steer_ratio_poly_0(
    const float & _arg)
  {
    this->steer_ratio_poly_0 = _arg;
    return *this;
  }
  Type & set__steer_ratio_poly_1(
    const float & _arg)
  {
    this->steer_ratio_poly_1 = _arg;
    return *this;
  }
  Type & set__steer_ratio_poly_2(
    const float & _arg)
  {
    this->steer_ratio_poly_2 = _arg;
    return *this;
  }
  Type & set__steer_ratio_poly_3(
    const float & _arg)
  {
    this->steer_ratio_poly_3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__HostVehicleState2806
    std::shared_ptr<ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__HostVehicleState2806
    std::shared_ptr<ibeo_msgs::msg::HostVehicleState2806_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HostVehicleState2806_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ibeo_header != other.ibeo_header) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->distance_x != other.distance_x) {
      return false;
    }
    if (this->distance_y != other.distance_y) {
      return false;
    }
    if (this->course_angle != other.course_angle) {
      return false;
    }
    if (this->longitudinal_velocity != other.longitudinal_velocity) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->steering_wheel_angle != other.steering_wheel_angle) {
      return false;
    }
    if (this->cross_acceleration != other.cross_acceleration) {
      return false;
    }
    if (this->front_wheel_angle != other.front_wheel_angle) {
      return false;
    }
    if (this->vehicle_width != other.vehicle_width) {
      return false;
    }
    if (this->vehicle_front_to_front_axle != other.vehicle_front_to_front_axle) {
      return false;
    }
    if (this->rear_axle_to_front_axle != other.rear_axle_to_front_axle) {
      return false;
    }
    if (this->rear_axle_to_vehicle_rear != other.rear_axle_to_vehicle_rear) {
      return false;
    }
    if (this->steer_ratio_poly_0 != other.steer_ratio_poly_0) {
      return false;
    }
    if (this->steer_ratio_poly_1 != other.steer_ratio_poly_1) {
      return false;
    }
    if (this->steer_ratio_poly_2 != other.steer_ratio_poly_2) {
      return false;
    }
    if (this->steer_ratio_poly_3 != other.steer_ratio_poly_3) {
      return false;
    }
    return true;
  }
  bool operator!=(const HostVehicleState2806_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HostVehicleState2806_

// alias to use template instance with default allocator
using HostVehicleState2806 =
  ibeo_msgs::msg::HostVehicleState2806_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2806__STRUCT_HPP_
