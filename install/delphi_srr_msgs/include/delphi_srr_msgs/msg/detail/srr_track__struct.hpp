// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_srr_msgs:msg/SrrTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__STRUCT_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__STRUCT_HPP_

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
# define DEPRECATED__delphi_srr_msgs__msg__SrrTrack __attribute__((deprecated))
#else
# define DEPRECATED__delphi_srr_msgs__msg__SrrTrack __declspec(deprecated)
#endif

namespace delphi_srr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SrrTrack_
{
  using Type = SrrTrack_<ContainerAllocator>;

  explicit SrrTrack_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_detect_valid_level = 0;
      this->can_tx_detect_status = false;
      this->can_tx_detect_range_rate = 0.0f;
      this->can_tx_detect_range = 0.0f;
      this->can_tx_detect_angle = 0.0f;
      this->can_tx_detect_amplitude = 0.0f;
    }
  }

  explicit SrrTrack_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_detect_valid_level = 0;
      this->can_tx_detect_status = false;
      this->can_tx_detect_range_rate = 0.0f;
      this->can_tx_detect_range = 0.0f;
      this->can_tx_detect_angle = 0.0f;
      this->can_tx_detect_amplitude = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_tx_detect_valid_level_type =
    uint8_t;
  _can_tx_detect_valid_level_type can_tx_detect_valid_level;
  using _can_tx_detect_status_type =
    bool;
  _can_tx_detect_status_type can_tx_detect_status;
  using _can_tx_detect_range_rate_type =
    float;
  _can_tx_detect_range_rate_type can_tx_detect_range_rate;
  using _can_tx_detect_range_type =
    float;
  _can_tx_detect_range_type can_tx_detect_range;
  using _can_tx_detect_angle_type =
    float;
  _can_tx_detect_angle_type can_tx_detect_angle;
  using _can_tx_detect_amplitude_type =
    float;
  _can_tx_detect_amplitude_type can_tx_detect_amplitude;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_tx_detect_valid_level(
    const uint8_t & _arg)
  {
    this->can_tx_detect_valid_level = _arg;
    return *this;
  }
  Type & set__can_tx_detect_status(
    const bool & _arg)
  {
    this->can_tx_detect_status = _arg;
    return *this;
  }
  Type & set__can_tx_detect_range_rate(
    const float & _arg)
  {
    this->can_tx_detect_range_rate = _arg;
    return *this;
  }
  Type & set__can_tx_detect_range(
    const float & _arg)
  {
    this->can_tx_detect_range = _arg;
    return *this;
  }
  Type & set__can_tx_detect_angle(
    const float & _arg)
  {
    this->can_tx_detect_angle = _arg;
    return *this;
  }
  Type & set__can_tx_detect_amplitude(
    const float & _arg)
  {
    this->can_tx_detect_amplitude = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CAN_TX_DETECT_VALID_LEVEL_SUSPECT_DETECTION =
    0u;
  static constexpr uint8_t CAN_TX_DETECT_VALID_LEVEL_LEVEL_1 =
    1u;
  static constexpr uint8_t CAN_TX_DETECT_VALID_LEVEL_LEVEL_2 =
    2u;
  static constexpr uint8_t CAN_TX_DETECT_VALID_LEVEL_LEVEL_3 =
    3u;
  static constexpr uint8_t CAN_TX_DETECT_VALID_LEVEL_LEVEL_4 =
    4u;
  static constexpr uint8_t CAN_TX_DETECT_VALID_LEVEL_LEVEL_5 =
    5u;
  static constexpr uint8_t CAN_TX_DETECT_VALID_LEVEL_LEVEL_6 =
    6u;
  static constexpr uint8_t CAN_TX_DETECT_VALID_LEVEL_LEVEL_7 =
    7u;
  static constexpr bool CAN_TX_DETECT_STATUS_NO_DATA =
    0;
  static constexpr bool CAN_TX_DETECT_STATUS_VALID_DATA_PRESENT =
    1;

  // pointer types
  using RawPtr =
    delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrTrack
    std::shared_ptr<delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrTrack
    std::shared_ptr<delphi_srr_msgs::msg::SrrTrack_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrrTrack_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_tx_detect_valid_level != other.can_tx_detect_valid_level) {
      return false;
    }
    if (this->can_tx_detect_status != other.can_tx_detect_status) {
      return false;
    }
    if (this->can_tx_detect_range_rate != other.can_tx_detect_range_rate) {
      return false;
    }
    if (this->can_tx_detect_range != other.can_tx_detect_range) {
      return false;
    }
    if (this->can_tx_detect_angle != other.can_tx_detect_angle) {
      return false;
    }
    if (this->can_tx_detect_amplitude != other.can_tx_detect_amplitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrrTrack_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrrTrack_

// alias to use template instance with default allocator
using SrrTrack =
  delphi_srr_msgs::msg::SrrTrack_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SrrTrack_<ContainerAllocator>::CAN_TX_DETECT_VALID_LEVEL_SUSPECT_DETECTION;
template<typename ContainerAllocator>
constexpr uint8_t SrrTrack_<ContainerAllocator>::CAN_TX_DETECT_VALID_LEVEL_LEVEL_1;
template<typename ContainerAllocator>
constexpr uint8_t SrrTrack_<ContainerAllocator>::CAN_TX_DETECT_VALID_LEVEL_LEVEL_2;
template<typename ContainerAllocator>
constexpr uint8_t SrrTrack_<ContainerAllocator>::CAN_TX_DETECT_VALID_LEVEL_LEVEL_3;
template<typename ContainerAllocator>
constexpr uint8_t SrrTrack_<ContainerAllocator>::CAN_TX_DETECT_VALID_LEVEL_LEVEL_4;
template<typename ContainerAllocator>
constexpr uint8_t SrrTrack_<ContainerAllocator>::CAN_TX_DETECT_VALID_LEVEL_LEVEL_5;
template<typename ContainerAllocator>
constexpr uint8_t SrrTrack_<ContainerAllocator>::CAN_TX_DETECT_VALID_LEVEL_LEVEL_6;
template<typename ContainerAllocator>
constexpr uint8_t SrrTrack_<ContainerAllocator>::CAN_TX_DETECT_VALID_LEVEL_LEVEL_7;
template<typename ContainerAllocator>
constexpr bool SrrTrack_<ContainerAllocator>::CAN_TX_DETECT_STATUS_NO_DATA;
template<typename ContainerAllocator>
constexpr bool SrrTrack_<ContainerAllocator>::CAN_TX_DETECT_STATUS_VALID_DATA_PRESENT;

}  // namespace msg

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__STRUCT_HPP_
