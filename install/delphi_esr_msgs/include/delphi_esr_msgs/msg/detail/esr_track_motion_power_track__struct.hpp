// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__delphi_esr_msgs__msg__EsrTrackMotionPowerTrack __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrTrackMotionPowerTrack __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrTrackMotionPowerTrack_
{
  using Type = EsrTrackMotionPowerTrack_<ContainerAllocator>;

  explicit EsrTrackMotionPowerTrack_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->movable_fast = false;
      this->movable_slow = false;
      this->moving = false;
      this->power = 0;
    }
  }

  explicit EsrTrackMotionPowerTrack_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->movable_fast = false;
      this->movable_slow = false;
      this->moving = false;
      this->power = 0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _movable_fast_type =
    bool;
  _movable_fast_type movable_fast;
  using _movable_slow_type =
    bool;
  _movable_slow_type movable_slow;
  using _moving_type =
    bool;
  _moving_type moving;
  using _power_type =
    int8_t;
  _power_type power;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__movable_fast(
    const bool & _arg)
  {
    this->movable_fast = _arg;
    return *this;
  }
  Type & set__movable_slow(
    const bool & _arg)
  {
    this->movable_slow = _arg;
    return *this;
  }
  Type & set__moving(
    const bool & _arg)
  {
    this->moving = _arg;
    return *this;
  }
  Type & set__power(
    const int8_t & _arg)
  {
    this->power = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrTrackMotionPowerTrack
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrTrackMotionPowerTrack
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrTrackMotionPowerTrack_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->movable_fast != other.movable_fast) {
      return false;
    }
    if (this->movable_slow != other.movable_slow) {
      return false;
    }
    if (this->moving != other.moving) {
      return false;
    }
    if (this->power != other.power) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrTrackMotionPowerTrack_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrTrackMotionPowerTrack_

// alias to use template instance with default allocator
using EsrTrackMotionPowerTrack =
  delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__STRUCT_HPP_
