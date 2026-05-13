// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerGroup.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__STRUCT_HPP_

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
// Member 'tracks'
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delphi_esr_msgs__msg__EsrTrackMotionPowerGroup __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrTrackMotionPowerGroup __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrTrackMotionPowerGroup_
{
  using Type = EsrTrackMotionPowerGroup_<ContainerAllocator>;

  explicit EsrTrackMotionPowerGroup_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->rolling_count_2 = 0;
      this->can_id_group = 0;
    }
  }

  explicit EsrTrackMotionPowerGroup_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    canmsg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->rolling_count_2 = 0;
      this->can_id_group = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _canmsg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _canmsg_type canmsg;
  using _rolling_count_2_type =
    uint8_t;
  _rolling_count_2_type rolling_count_2;
  using _can_id_group_type =
    uint8_t;
  _can_id_group_type can_id_group;
  using _tracks_type =
    std::vector<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator>>>;
  _tracks_type tracks;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__canmsg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->canmsg = _arg;
    return *this;
  }
  Type & set__rolling_count_2(
    const uint8_t & _arg)
  {
    this->rolling_count_2 = _arg;
    return *this;
  }
  Type & set__can_id_group(
    const uint8_t & _arg)
  {
    this->can_id_group = _arg;
    return *this;
  }
  Type & set__tracks(
    const std::vector<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack_<ContainerAllocator>>> & _arg)
  {
    this->tracks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrTrackMotionPowerGroup
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrTrackMotionPowerGroup
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrTrackMotionPowerGroup_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->canmsg != other.canmsg) {
      return false;
    }
    if (this->rolling_count_2 != other.rolling_count_2) {
      return false;
    }
    if (this->can_id_group != other.can_id_group) {
      return false;
    }
    if (this->tracks != other.tracks) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrTrackMotionPowerGroup_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrTrackMotionPowerGroup_

// alias to use template instance with default allocator
using EsrTrackMotionPowerGroup =
  delphi_esr_msgs::msg::EsrTrackMotionPowerGroup_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__STRUCT_HPP_
