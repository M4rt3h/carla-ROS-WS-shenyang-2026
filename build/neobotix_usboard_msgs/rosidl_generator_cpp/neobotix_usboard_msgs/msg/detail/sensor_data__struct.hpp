// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neobotix_usboard_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__neobotix_usboard_msgs__msg__SensorData __attribute__((deprecated))
#else
# define DEPRECATED__neobotix_usboard_msgs__msg__SensorData __declspec(deprecated)
#endif

namespace neobotix_usboard_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorData_
{
  using Type = SensorData_<ContainerAllocator>;

  explicit SensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0;
      this->warn = false;
      this->alarm = false;
      this->active = false;
    }
  }

  explicit SensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0;
      this->warn = false;
      this->alarm = false;
      this->active = false;
    }
  }

  // field types and members
  using _distance_type =
    uint8_t;
  _distance_type distance;
  using _warn_type =
    bool;
  _warn_type warn;
  using _alarm_type =
    bool;
  _alarm_type alarm;
  using _active_type =
    bool;
  _active_type active;

  // setters for named parameter idiom
  Type & set__distance(
    const uint8_t & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__warn(
    const bool & _arg)
  {
    this->warn = _arg;
    return *this;
  }
  Type & set__alarm(
    const bool & _arg)
  {
    this->alarm = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neobotix_usboard_msgs__msg__SensorData
    std::shared_ptr<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neobotix_usboard_msgs__msg__SensorData
    std::shared_ptr<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    if (this->warn != other.warn) {
      return false;
    }
    if (this->alarm != other.alarm) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_

// alias to use template instance with default allocator
using SensorData =
  neobotix_usboard_msgs::msg::SensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
