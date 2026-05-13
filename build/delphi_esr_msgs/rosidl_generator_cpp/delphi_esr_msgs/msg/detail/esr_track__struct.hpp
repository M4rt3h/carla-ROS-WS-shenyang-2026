// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrTrack __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrTrack __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrTrack_
{
  using Type = EsrTrack_<ContainerAllocator>;

  explicit EsrTrack_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->id = 0;
      this->lat_rate = 0.0f;
      this->grouping_changed = false;
      this->oncoming = false;
      this->status = 0;
      this->angle = 0.0f;
      this->range = 0.0f;
      this->bridge_object = false;
      this->rolling_count = false;
      this->width = 0.0f;
      this->range_accel = 0.0f;
      this->med_range_mode = 0;
      this->range_rate = 0.0f;
    }
  }

  explicit EsrTrack_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    canmsg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->id = 0;
      this->lat_rate = 0.0f;
      this->grouping_changed = false;
      this->oncoming = false;
      this->status = 0;
      this->angle = 0.0f;
      this->range = 0.0f;
      this->bridge_object = false;
      this->rolling_count = false;
      this->width = 0.0f;
      this->range_accel = 0.0f;
      this->med_range_mode = 0;
      this->range_rate = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _canmsg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _canmsg_type canmsg;
  using _id_type =
    uint8_t;
  _id_type id;
  using _lat_rate_type =
    float;
  _lat_rate_type lat_rate;
  using _grouping_changed_type =
    bool;
  _grouping_changed_type grouping_changed;
  using _oncoming_type =
    bool;
  _oncoming_type oncoming;
  using _status_type =
    uint8_t;
  _status_type status;
  using _angle_type =
    float;
  _angle_type angle;
  using _range_type =
    float;
  _range_type range;
  using _bridge_object_type =
    bool;
  _bridge_object_type bridge_object;
  using _rolling_count_type =
    bool;
  _rolling_count_type rolling_count;
  using _width_type =
    float;
  _width_type width;
  using _range_accel_type =
    float;
  _range_accel_type range_accel;
  using _med_range_mode_type =
    uint8_t;
  _med_range_mode_type med_range_mode;
  using _range_rate_type =
    float;
  _range_rate_type range_rate;

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
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__lat_rate(
    const float & _arg)
  {
    this->lat_rate = _arg;
    return *this;
  }
  Type & set__grouping_changed(
    const bool & _arg)
  {
    this->grouping_changed = _arg;
    return *this;
  }
  Type & set__oncoming(
    const bool & _arg)
  {
    this->oncoming = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__bridge_object(
    const bool & _arg)
  {
    this->bridge_object = _arg;
    return *this;
  }
  Type & set__rolling_count(
    const bool & _arg)
  {
    this->rolling_count = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__range_accel(
    const float & _arg)
  {
    this->range_accel = _arg;
    return *this;
  }
  Type & set__med_range_mode(
    const uint8_t & _arg)
  {
    this->med_range_mode = _arg;
    return *this;
  }
  Type & set__range_rate(
    const float & _arg)
  {
    this->range_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrTrack
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrTrack
    std::shared_ptr<delphi_esr_msgs::msg::EsrTrack_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrTrack_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->canmsg != other.canmsg) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->lat_rate != other.lat_rate) {
      return false;
    }
    if (this->grouping_changed != other.grouping_changed) {
      return false;
    }
    if (this->oncoming != other.oncoming) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->bridge_object != other.bridge_object) {
      return false;
    }
    if (this->rolling_count != other.rolling_count) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->range_accel != other.range_accel) {
      return false;
    }
    if (this->med_range_mode != other.med_range_mode) {
      return false;
    }
    if (this->range_rate != other.range_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrTrack_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrTrack_

// alias to use template instance with default allocator
using EsrTrack =
  delphi_esr_msgs::msg::EsrTrack_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__STRUCT_HPP_
