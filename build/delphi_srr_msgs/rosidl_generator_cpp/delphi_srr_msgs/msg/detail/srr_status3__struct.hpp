// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__STRUCT_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__STRUCT_HPP_

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
# define DEPRECATED__delphi_srr_msgs__msg__SrrStatus3 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_srr_msgs__msg__SrrStatus3 __declspec(deprecated)
#endif

namespace delphi_srr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SrrStatus3_
{
  using Type = SrrStatus3_<ContainerAllocator>;

  explicit SrrStatus3_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_alignment_state = 0;
      this->can_tx_interface_ver_minor = 0;
      this->can_tx_sw_version_arm = 0ul;
      this->can_tx_hw_version = 0;
      this->can_tx_interface_version = 0;
      this->can_tx_serial_num = 0ul;
    }
  }

  explicit SrrStatus3_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_alignment_state = 0;
      this->can_tx_interface_ver_minor = 0;
      this->can_tx_sw_version_arm = 0ul;
      this->can_tx_hw_version = 0;
      this->can_tx_interface_version = 0;
      this->can_tx_serial_num = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_tx_alignment_state_type =
    uint8_t;
  _can_tx_alignment_state_type can_tx_alignment_state;
  using _can_tx_interface_ver_minor_type =
    uint8_t;
  _can_tx_interface_ver_minor_type can_tx_interface_ver_minor;
  using _can_tx_sw_version_arm_type =
    uint32_t;
  _can_tx_sw_version_arm_type can_tx_sw_version_arm;
  using _can_tx_hw_version_type =
    uint8_t;
  _can_tx_hw_version_type can_tx_hw_version;
  using _can_tx_interface_version_type =
    uint8_t;
  _can_tx_interface_version_type can_tx_interface_version;
  using _can_tx_serial_num_type =
    uint32_t;
  _can_tx_serial_num_type can_tx_serial_num;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_tx_alignment_state(
    const uint8_t & _arg)
  {
    this->can_tx_alignment_state = _arg;
    return *this;
  }
  Type & set__can_tx_interface_ver_minor(
    const uint8_t & _arg)
  {
    this->can_tx_interface_ver_minor = _arg;
    return *this;
  }
  Type & set__can_tx_sw_version_arm(
    const uint32_t & _arg)
  {
    this->can_tx_sw_version_arm = _arg;
    return *this;
  }
  Type & set__can_tx_hw_version(
    const uint8_t & _arg)
  {
    this->can_tx_hw_version = _arg;
    return *this;
  }
  Type & set__can_tx_interface_version(
    const uint8_t & _arg)
  {
    this->can_tx_interface_version = _arg;
    return *this;
  }
  Type & set__can_tx_serial_num(
    const uint32_t & _arg)
  {
    this->can_tx_serial_num = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CAN_TX_ALIGNMENT_STATE_OFF =
    0u;
  static constexpr uint8_t CAN_TX_ALIGNMENT_STATE_INIT =
    1u;
  static constexpr uint8_t CAN_TX_ALIGNMENT_STATE_AUTOMATIC_ALIGNMENT =
    2u;
  static constexpr uint8_t CAN_TX_ALIGNMENT_STATE_FACTORY_ALIGNMENT =
    3u;
  static constexpr uint8_t CAN_TX_ALIGNMENT_STATE_SERVICE_ALIGNMENT =
    4u;

  // pointer types
  using RawPtr =
    delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrStatus3
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrStatus3
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus3_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrrStatus3_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_tx_alignment_state != other.can_tx_alignment_state) {
      return false;
    }
    if (this->can_tx_interface_ver_minor != other.can_tx_interface_ver_minor) {
      return false;
    }
    if (this->can_tx_sw_version_arm != other.can_tx_sw_version_arm) {
      return false;
    }
    if (this->can_tx_hw_version != other.can_tx_hw_version) {
      return false;
    }
    if (this->can_tx_interface_version != other.can_tx_interface_version) {
      return false;
    }
    if (this->can_tx_serial_num != other.can_tx_serial_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrrStatus3_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrrStatus3_

// alias to use template instance with default allocator
using SrrStatus3 =
  delphi_srr_msgs::msg::SrrStatus3_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus3_<ContainerAllocator>::CAN_TX_ALIGNMENT_STATE_OFF;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus3_<ContainerAllocator>::CAN_TX_ALIGNMENT_STATE_INIT;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus3_<ContainerAllocator>::CAN_TX_ALIGNMENT_STATE_AUTOMATIC_ALIGNMENT;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus3_<ContainerAllocator>::CAN_TX_ALIGNMENT_STATE_FACTORY_ALIGNMENT;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus3_<ContainerAllocator>::CAN_TX_ALIGNMENT_STATE_SERVICE_ALIGNMENT;

}  // namespace msg

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__STRUCT_HPP_
