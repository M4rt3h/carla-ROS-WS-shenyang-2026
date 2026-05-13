// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/HostVehicleState2805.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__STRUCT_HPP_

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
# define DEPRECATED__ibeo_msgs__msg__HostVehicleState2805 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__HostVehicleState2805 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HostVehicleState2805_
{
  using Type = HostVehicleState2805_<ContainerAllocator>;

  explicit HostVehicleState2805_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ibeo_header(_init),
    timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_number = 0;
      this->error_flags = 0;
      this->longitudinal_velocity = 0.0;
      this->steering_wheel_angle = 0.0;
      this->front_wheel_angle = 0.0;
      this->x_position = 0l;
      this->y_position = 0l;
      this->course_angle = 0;
      this->time_difference = 0;
      this->x_difference = 0;
      this->y_difference = 0;
      this->heading_difference = 0;
      this->current_yaw_rate = 0;
    }
  }

  explicit HostVehicleState2805_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ibeo_header(_alloc, _init),
    timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_number = 0;
      this->error_flags = 0;
      this->longitudinal_velocity = 0.0;
      this->steering_wheel_angle = 0.0;
      this->front_wheel_angle = 0.0;
      this->x_position = 0l;
      this->y_position = 0l;
      this->course_angle = 0;
      this->time_difference = 0;
      this->x_difference = 0;
      this->y_difference = 0;
      this->heading_difference = 0;
      this->current_yaw_rate = 0;
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
  using _scan_number_type =
    uint16_t;
  _scan_number_type scan_number;
  using _error_flags_type =
    uint16_t;
  _error_flags_type error_flags;
  using _longitudinal_velocity_type =
    double;
  _longitudinal_velocity_type longitudinal_velocity;
  using _steering_wheel_angle_type =
    double;
  _steering_wheel_angle_type steering_wheel_angle;
  using _front_wheel_angle_type =
    double;
  _front_wheel_angle_type front_wheel_angle;
  using _x_position_type =
    int32_t;
  _x_position_type x_position;
  using _y_position_type =
    int32_t;
  _y_position_type y_position;
  using _course_angle_type =
    int16_t;
  _course_angle_type course_angle;
  using _time_difference_type =
    uint16_t;
  _time_difference_type time_difference;
  using _x_difference_type =
    int16_t;
  _x_difference_type x_difference;
  using _y_difference_type =
    int16_t;
  _y_difference_type y_difference;
  using _heading_difference_type =
    int16_t;
  _heading_difference_type heading_difference;
  using _current_yaw_rate_type =
    int16_t;
  _current_yaw_rate_type current_yaw_rate;

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
  Type & set__scan_number(
    const uint16_t & _arg)
  {
    this->scan_number = _arg;
    return *this;
  }
  Type & set__error_flags(
    const uint16_t & _arg)
  {
    this->error_flags = _arg;
    return *this;
  }
  Type & set__longitudinal_velocity(
    const double & _arg)
  {
    this->longitudinal_velocity = _arg;
    return *this;
  }
  Type & set__steering_wheel_angle(
    const double & _arg)
  {
    this->steering_wheel_angle = _arg;
    return *this;
  }
  Type & set__front_wheel_angle(
    const double & _arg)
  {
    this->front_wheel_angle = _arg;
    return *this;
  }
  Type & set__x_position(
    const int32_t & _arg)
  {
    this->x_position = _arg;
    return *this;
  }
  Type & set__y_position(
    const int32_t & _arg)
  {
    this->y_position = _arg;
    return *this;
  }
  Type & set__course_angle(
    const int16_t & _arg)
  {
    this->course_angle = _arg;
    return *this;
  }
  Type & set__time_difference(
    const uint16_t & _arg)
  {
    this->time_difference = _arg;
    return *this;
  }
  Type & set__x_difference(
    const int16_t & _arg)
  {
    this->x_difference = _arg;
    return *this;
  }
  Type & set__y_difference(
    const int16_t & _arg)
  {
    this->y_difference = _arg;
    return *this;
  }
  Type & set__heading_difference(
    const int16_t & _arg)
  {
    this->heading_difference = _arg;
    return *this;
  }
  Type & set__current_yaw_rate(
    const int16_t & _arg)
  {
    this->current_yaw_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__HostVehicleState2805
    std::shared_ptr<ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__HostVehicleState2805
    std::shared_ptr<ibeo_msgs::msg::HostVehicleState2805_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HostVehicleState2805_ & other) const
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
    if (this->scan_number != other.scan_number) {
      return false;
    }
    if (this->error_flags != other.error_flags) {
      return false;
    }
    if (this->longitudinal_velocity != other.longitudinal_velocity) {
      return false;
    }
    if (this->steering_wheel_angle != other.steering_wheel_angle) {
      return false;
    }
    if (this->front_wheel_angle != other.front_wheel_angle) {
      return false;
    }
    if (this->x_position != other.x_position) {
      return false;
    }
    if (this->y_position != other.y_position) {
      return false;
    }
    if (this->course_angle != other.course_angle) {
      return false;
    }
    if (this->time_difference != other.time_difference) {
      return false;
    }
    if (this->x_difference != other.x_difference) {
      return false;
    }
    if (this->y_difference != other.y_difference) {
      return false;
    }
    if (this->heading_difference != other.heading_difference) {
      return false;
    }
    if (this->current_yaw_rate != other.current_yaw_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const HostVehicleState2805_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HostVehicleState2805_

// alias to use template instance with default allocator
using HostVehicleState2805 =
  ibeo_msgs::msg::HostVehicleState2805_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__STRUCT_HPP_
