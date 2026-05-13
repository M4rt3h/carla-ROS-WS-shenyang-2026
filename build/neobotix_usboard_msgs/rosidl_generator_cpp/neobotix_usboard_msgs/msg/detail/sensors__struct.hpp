// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neobotix_usboard_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__STRUCT_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__STRUCT_HPP_

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
// Member 'sensors'
#include "neobotix_usboard_msgs/msg/detail/sensor_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__neobotix_usboard_msgs__msg__Sensors __attribute__((deprecated))
#else
# define DEPRECATED__neobotix_usboard_msgs__msg__Sensors __declspec(deprecated)
#endif

namespace neobotix_usboard_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sensors_
{
  using Type = Sensors_<ContainerAllocator>;

  explicit Sensors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Sensors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensors_type =
    std::vector<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator>>>;
  _sensors_type sensors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensors(
    const std::vector<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<neobotix_usboard_msgs::msg::SensorData_<ContainerAllocator>>> & _arg)
  {
    this->sensors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator> *;
  using ConstRawPtr =
    const neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neobotix_usboard_msgs__msg__Sensors
    std::shared_ptr<neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neobotix_usboard_msgs__msg__Sensors
    std::shared_ptr<neobotix_usboard_msgs::msg::Sensors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sensors_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensors != other.sensors) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sensors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sensors_

// alias to use template instance with default allocator
using Sensors =
  neobotix_usboard_msgs::msg::Sensors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__STRUCT_HPP_
