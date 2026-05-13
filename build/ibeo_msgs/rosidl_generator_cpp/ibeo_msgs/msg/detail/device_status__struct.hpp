// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__DeviceStatus __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__DeviceStatus __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeviceStatus_
{
  using Type = DeviceStatus_<ContainerAllocator>;

  explicit DeviceStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ibeo_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scanner_type = 0;
      this->sensor_temperature = 0.0f;
      this->frequency = 0.0f;
    }
  }

  explicit DeviceStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ibeo_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scanner_type = 0;
      this->sensor_temperature = 0.0f;
      this->frequency = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ibeo_header_type =
    ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>;
  _ibeo_header_type ibeo_header;
  using _scanner_type_type =
    uint8_t;
  _scanner_type_type scanner_type;
  using _sensor_temperature_type =
    float;
  _sensor_temperature_type sensor_temperature;
  using _frequency_type =
    float;
  _frequency_type frequency;

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
  Type & set__scanner_type(
    const uint8_t & _arg)
  {
    this->scanner_type = _arg;
    return *this;
  }
  Type & set__sensor_temperature(
    const float & _arg)
  {
    this->sensor_temperature = _arg;
    return *this;
  }
  Type & set__frequency(
    const float & _arg)
  {
    this->frequency = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::DeviceStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::DeviceStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::DeviceStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::DeviceStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::DeviceStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::DeviceStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::DeviceStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::DeviceStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::DeviceStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::DeviceStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__DeviceStatus
    std::shared_ptr<ibeo_msgs::msg::DeviceStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__DeviceStatus
    std::shared_ptr<ibeo_msgs::msg::DeviceStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeviceStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ibeo_header != other.ibeo_header) {
      return false;
    }
    if (this->scanner_type != other.scanner_type) {
      return false;
    }
    if (this->sensor_temperature != other.sensor_temperature) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeviceStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeviceStatus_

// alias to use template instance with default allocator
using DeviceStatus =
  ibeo_msgs::msg::DeviceStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_HPP_
