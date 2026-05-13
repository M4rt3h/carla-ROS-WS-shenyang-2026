// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/ObstacleStatus.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__STRUCT_HPP_

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
# define DEPRECATED__mobileye_560_660_msgs__msg__ObstacleStatus __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__ObstacleStatus __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleStatus_
{
  using Type = ObstacleStatus_<ContainerAllocator>;

  explicit ObstacleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_obstacles = 0;
      this->timestamp = 0;
      this->application_version = 0;
      this->active_version_number_section = 0;
      this->left_close_range_cut_in = false;
      this->right_close_range_cut_in = false;
      this->stop_go = 0;
      this->protocol_version = 0;
      this->close_car = false;
      this->failsafe = 0;
    }
  }

  explicit ObstacleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_obstacles = 0;
      this->timestamp = 0;
      this->application_version = 0;
      this->active_version_number_section = 0;
      this->left_close_range_cut_in = false;
      this->right_close_range_cut_in = false;
      this->stop_go = 0;
      this->protocol_version = 0;
      this->close_car = false;
      this->failsafe = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _num_obstacles_type =
    uint16_t;
  _num_obstacles_type num_obstacles;
  using _timestamp_type =
    uint16_t;
  _timestamp_type timestamp;
  using _application_version_type =
    uint16_t;
  _application_version_type application_version;
  using _active_version_number_section_type =
    uint16_t;
  _active_version_number_section_type active_version_number_section;
  using _left_close_range_cut_in_type =
    bool;
  _left_close_range_cut_in_type left_close_range_cut_in;
  using _right_close_range_cut_in_type =
    bool;
  _right_close_range_cut_in_type right_close_range_cut_in;
  using _stop_go_type =
    uint8_t;
  _stop_go_type stop_go;
  using _protocol_version_type =
    uint8_t;
  _protocol_version_type protocol_version;
  using _close_car_type =
    bool;
  _close_car_type close_car;
  using _failsafe_type =
    uint8_t;
  _failsafe_type failsafe;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__num_obstacles(
    const uint16_t & _arg)
  {
    this->num_obstacles = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint16_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__application_version(
    const uint16_t & _arg)
  {
    this->application_version = _arg;
    return *this;
  }
  Type & set__active_version_number_section(
    const uint16_t & _arg)
  {
    this->active_version_number_section = _arg;
    return *this;
  }
  Type & set__left_close_range_cut_in(
    const bool & _arg)
  {
    this->left_close_range_cut_in = _arg;
    return *this;
  }
  Type & set__right_close_range_cut_in(
    const bool & _arg)
  {
    this->right_close_range_cut_in = _arg;
    return *this;
  }
  Type & set__stop_go(
    const uint8_t & _arg)
  {
    this->stop_go = _arg;
    return *this;
  }
  Type & set__protocol_version(
    const uint8_t & _arg)
  {
    this->protocol_version = _arg;
    return *this;
  }
  Type & set__close_car(
    const bool & _arg)
  {
    this->close_car = _arg;
    return *this;
  }
  Type & set__failsafe(
    const uint8_t & _arg)
  {
    this->failsafe = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STOP_GO_STOP =
    0u;
  static constexpr uint8_t STOP_GO_GO =
    1u;
  static constexpr uint8_t STOP_GO_UNDECIDED =
    2u;
  static constexpr uint8_t STOP_GO_DRIVER_DECISION_REQUIRED =
    3u;
  static constexpr uint8_t STOP_GO_NOT_CALCULATED =
    15u;
  static constexpr uint8_t FAILSAFE_NONE =
    0u;
  static constexpr uint8_t FAILSAFE_LOW_SUN =
    1u;
  static constexpr uint8_t FAILSAFE_BLUR_IMAGE =
    2u;

  // pointer types
  using RawPtr =
    mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__ObstacleStatus
    std::shared_ptr<mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__ObstacleStatus
    std::shared_ptr<mobileye_560_660_msgs::msg::ObstacleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->num_obstacles != other.num_obstacles) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->application_version != other.application_version) {
      return false;
    }
    if (this->active_version_number_section != other.active_version_number_section) {
      return false;
    }
    if (this->left_close_range_cut_in != other.left_close_range_cut_in) {
      return false;
    }
    if (this->right_close_range_cut_in != other.right_close_range_cut_in) {
      return false;
    }
    if (this->stop_go != other.stop_go) {
      return false;
    }
    if (this->protocol_version != other.protocol_version) {
      return false;
    }
    if (this->close_car != other.close_car) {
      return false;
    }
    if (this->failsafe != other.failsafe) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleStatus_

// alias to use template instance with default allocator
using ObstacleStatus =
  mobileye_560_660_msgs::msg::ObstacleStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ObstacleStatus_<ContainerAllocator>::STOP_GO_STOP;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleStatus_<ContainerAllocator>::STOP_GO_GO;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleStatus_<ContainerAllocator>::STOP_GO_UNDECIDED;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleStatus_<ContainerAllocator>::STOP_GO_DRIVER_DECISION_REQUIRED;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleStatus_<ContainerAllocator>::STOP_GO_NOT_CALCULATED;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleStatus_<ContainerAllocator>::FAILSAFE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleStatus_<ContainerAllocator>::FAILSAFE_LOW_SUN;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleStatus_<ContainerAllocator>::FAILSAFE_BLUR_IMAGE;

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__STRUCT_HPP_
