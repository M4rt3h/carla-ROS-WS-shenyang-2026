// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ResetCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__STRUCT_HPP_

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
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ResetCmd __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ResetCmd __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResetCmd_
{
  using Type = ResetCmd_<ContainerAllocator>;

  explicit ResetCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->reset_type = 0;
      this->reset_user_rpt_id = false;
      this->reset_user_cmd_id_1 = false;
      this->reset_user_cmd_id_2 = false;
      this->reset_user_cmd_id_3 = false;
      this->reset_user_cmd_id_4 = false;
      this->disable_user_rpt_id = false;
      this->reenable_default_cmd_id = false;
    }
  }

  explicit ResetCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->reset_type = 0;
      this->reset_user_rpt_id = false;
      this->reset_user_cmd_id_1 = false;
      this->reset_user_cmd_id_2 = false;
      this->reset_user_cmd_id_3 = false;
      this->reset_user_cmd_id_4 = false;
      this->disable_user_rpt_id = false;
      this->reenable_default_cmd_id = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _confirm_type =
    bool;
  _confirm_type confirm;
  using _reset_type_type =
    uint8_t;
  _reset_type_type reset_type;
  using _reset_user_rpt_id_type =
    bool;
  _reset_user_rpt_id_type reset_user_rpt_id;
  using _reset_user_cmd_id_1_type =
    bool;
  _reset_user_cmd_id_1_type reset_user_cmd_id_1;
  using _reset_user_cmd_id_2_type =
    bool;
  _reset_user_cmd_id_2_type reset_user_cmd_id_2;
  using _reset_user_cmd_id_3_type =
    bool;
  _reset_user_cmd_id_3_type reset_user_cmd_id_3;
  using _reset_user_cmd_id_4_type =
    bool;
  _reset_user_cmd_id_4_type reset_user_cmd_id_4;
  using _disable_user_rpt_id_type =
    bool;
  _disable_user_rpt_id_type disable_user_rpt_id;
  using _reenable_default_cmd_id_type =
    bool;
  _reenable_default_cmd_id_type reenable_default_cmd_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__confirm(
    const bool & _arg)
  {
    this->confirm = _arg;
    return *this;
  }
  Type & set__reset_type(
    const uint8_t & _arg)
  {
    this->reset_type = _arg;
    return *this;
  }
  Type & set__reset_user_rpt_id(
    const bool & _arg)
  {
    this->reset_user_rpt_id = _arg;
    return *this;
  }
  Type & set__reset_user_cmd_id_1(
    const bool & _arg)
  {
    this->reset_user_cmd_id_1 = _arg;
    return *this;
  }
  Type & set__reset_user_cmd_id_2(
    const bool & _arg)
  {
    this->reset_user_cmd_id_2 = _arg;
    return *this;
  }
  Type & set__reset_user_cmd_id_3(
    const bool & _arg)
  {
    this->reset_user_cmd_id_3 = _arg;
    return *this;
  }
  Type & set__reset_user_cmd_id_4(
    const bool & _arg)
  {
    this->reset_user_cmd_id_4 = _arg;
    return *this;
  }
  Type & set__disable_user_rpt_id(
    const bool & _arg)
  {
    this->disable_user_rpt_id = _arg;
    return *this;
  }
  Type & set__reenable_default_cmd_id(
    const bool & _arg)
  {
    this->reenable_default_cmd_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESET_OUTPUTS =
    0u;
  static constexpr uint8_t RESET_USER_DEFINED_IDS =
    1u;
  static constexpr uint8_t RESET_REPORT_RATES =
    2u;
  static constexpr uint8_t RESET_HARDWARE_CONFIGURATIONS =
    3u;
  static constexpr uint8_t RESET_USER_CONFIGURATIONS =
    4u;
  static constexpr uint8_t RESET_EVERYTHING =
    5u;
  static constexpr uint8_t RESET_NONE =
    6u;

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ResetCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ResetCmd
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ResetCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->confirm != other.confirm) {
      return false;
    }
    if (this->reset_type != other.reset_type) {
      return false;
    }
    if (this->reset_user_rpt_id != other.reset_user_rpt_id) {
      return false;
    }
    if (this->reset_user_cmd_id_1 != other.reset_user_cmd_id_1) {
      return false;
    }
    if (this->reset_user_cmd_id_2 != other.reset_user_cmd_id_2) {
      return false;
    }
    if (this->reset_user_cmd_id_3 != other.reset_user_cmd_id_3) {
      return false;
    }
    if (this->reset_user_cmd_id_4 != other.reset_user_cmd_id_4) {
      return false;
    }
    if (this->disable_user_rpt_id != other.disable_user_rpt_id) {
      return false;
    }
    if (this->reenable_default_cmd_id != other.reenable_default_cmd_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetCmd_

// alias to use template instance with default allocator
using ResetCmd =
  kartech_linear_actuator_msgs::msg::ResetCmd_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ResetCmd_<ContainerAllocator>::RESET_OUTPUTS;
template<typename ContainerAllocator>
constexpr uint8_t ResetCmd_<ContainerAllocator>::RESET_USER_DEFINED_IDS;
template<typename ContainerAllocator>
constexpr uint8_t ResetCmd_<ContainerAllocator>::RESET_REPORT_RATES;
template<typename ContainerAllocator>
constexpr uint8_t ResetCmd_<ContainerAllocator>::RESET_HARDWARE_CONFIGURATIONS;
template<typename ContainerAllocator>
constexpr uint8_t ResetCmd_<ContainerAllocator>::RESET_USER_CONFIGURATIONS;
template<typename ContainerAllocator>
constexpr uint8_t ResetCmd_<ContainerAllocator>::RESET_EVERYTHING;
template<typename ContainerAllocator>
constexpr uint8_t ResetCmd_<ContainerAllocator>::RESET_NONE;

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__STRUCT_HPP_
