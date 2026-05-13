// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__STRUCT_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__STRUCT_HPP_

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
# define DEPRECATED__delphi_srr_msgs__msg__SrrStatus2 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_srr_msgs__msg__SrrStatus2 __declspec(deprecated)
#endif

namespace delphi_srr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SrrStatus2_
{
  using Type = SrrStatus2_<ContainerAllocator>;

  explicit SrrStatus2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_alignment_status = 0;
      this->can_tx_comm_error = false;
      this->can_tx_steering_angle_sign = false;
      this->can_tx_yaw_rate_bias = 0.0f;
      this->can_tx_veh_spd_comp_factor = 0.0f;
      this->can_tx_sw_version_dsp = 0;
      this->can_tx_temperature = 0;
      this->can_tx_range_perf_error = false;
      this->can_tx_overheat_error = false;
      this->can_tx_internal_error = false;
      this->can_tx_xcvr_operational = false;
      this->can_tx_steering_angle = 0;
      this->can_tx_rolling_count_2 = 0;
    }
  }

  explicit SrrStatus2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_alignment_status = 0;
      this->can_tx_comm_error = false;
      this->can_tx_steering_angle_sign = false;
      this->can_tx_yaw_rate_bias = 0.0f;
      this->can_tx_veh_spd_comp_factor = 0.0f;
      this->can_tx_sw_version_dsp = 0;
      this->can_tx_temperature = 0;
      this->can_tx_range_perf_error = false;
      this->can_tx_overheat_error = false;
      this->can_tx_internal_error = false;
      this->can_tx_xcvr_operational = false;
      this->can_tx_steering_angle = 0;
      this->can_tx_rolling_count_2 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_tx_alignment_status_type =
    uint8_t;
  _can_tx_alignment_status_type can_tx_alignment_status;
  using _can_tx_comm_error_type =
    bool;
  _can_tx_comm_error_type can_tx_comm_error;
  using _can_tx_steering_angle_sign_type =
    bool;
  _can_tx_steering_angle_sign_type can_tx_steering_angle_sign;
  using _can_tx_yaw_rate_bias_type =
    float;
  _can_tx_yaw_rate_bias_type can_tx_yaw_rate_bias;
  using _can_tx_veh_spd_comp_factor_type =
    float;
  _can_tx_veh_spd_comp_factor_type can_tx_veh_spd_comp_factor;
  using _can_tx_sw_version_dsp_type =
    uint16_t;
  _can_tx_sw_version_dsp_type can_tx_sw_version_dsp;
  using _can_tx_temperature_type =
    int16_t;
  _can_tx_temperature_type can_tx_temperature;
  using _can_tx_range_perf_error_type =
    bool;
  _can_tx_range_perf_error_type can_tx_range_perf_error;
  using _can_tx_overheat_error_type =
    bool;
  _can_tx_overheat_error_type can_tx_overheat_error;
  using _can_tx_internal_error_type =
    bool;
  _can_tx_internal_error_type can_tx_internal_error;
  using _can_tx_xcvr_operational_type =
    bool;
  _can_tx_xcvr_operational_type can_tx_xcvr_operational;
  using _can_tx_steering_angle_type =
    uint16_t;
  _can_tx_steering_angle_type can_tx_steering_angle;
  using _can_tx_rolling_count_2_type =
    uint8_t;
  _can_tx_rolling_count_2_type can_tx_rolling_count_2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_tx_alignment_status(
    const uint8_t & _arg)
  {
    this->can_tx_alignment_status = _arg;
    return *this;
  }
  Type & set__can_tx_comm_error(
    const bool & _arg)
  {
    this->can_tx_comm_error = _arg;
    return *this;
  }
  Type & set__can_tx_steering_angle_sign(
    const bool & _arg)
  {
    this->can_tx_steering_angle_sign = _arg;
    return *this;
  }
  Type & set__can_tx_yaw_rate_bias(
    const float & _arg)
  {
    this->can_tx_yaw_rate_bias = _arg;
    return *this;
  }
  Type & set__can_tx_veh_spd_comp_factor(
    const float & _arg)
  {
    this->can_tx_veh_spd_comp_factor = _arg;
    return *this;
  }
  Type & set__can_tx_sw_version_dsp(
    const uint16_t & _arg)
  {
    this->can_tx_sw_version_dsp = _arg;
    return *this;
  }
  Type & set__can_tx_temperature(
    const int16_t & _arg)
  {
    this->can_tx_temperature = _arg;
    return *this;
  }
  Type & set__can_tx_range_perf_error(
    const bool & _arg)
  {
    this->can_tx_range_perf_error = _arg;
    return *this;
  }
  Type & set__can_tx_overheat_error(
    const bool & _arg)
  {
    this->can_tx_overheat_error = _arg;
    return *this;
  }
  Type & set__can_tx_internal_error(
    const bool & _arg)
  {
    this->can_tx_internal_error = _arg;
    return *this;
  }
  Type & set__can_tx_xcvr_operational(
    const bool & _arg)
  {
    this->can_tx_xcvr_operational = _arg;
    return *this;
  }
  Type & set__can_tx_steering_angle(
    const uint16_t & _arg)
  {
    this->can_tx_steering_angle = _arg;
    return *this;
  }
  Type & set__can_tx_rolling_count_2(
    const uint8_t & _arg)
  {
    this->can_tx_rolling_count_2 = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CAN_TX_ALIGNMENT_STATUS_UNKNOWN =
    0u;
  static constexpr uint8_t CAN_TX_ALIGNMENT_STATUS_CONVERGED =
    1u;
  static constexpr uint8_t CAN_TX_ALIGNMENT_STATUS_FAILED =
    2u;
  static constexpr uint8_t CAN_TX_ALIGNMENT_STATUS_RESERVED =
    3u;

  // pointer types
  using RawPtr =
    delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrStatus2
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrStatus2
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrrStatus2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_tx_alignment_status != other.can_tx_alignment_status) {
      return false;
    }
    if (this->can_tx_comm_error != other.can_tx_comm_error) {
      return false;
    }
    if (this->can_tx_steering_angle_sign != other.can_tx_steering_angle_sign) {
      return false;
    }
    if (this->can_tx_yaw_rate_bias != other.can_tx_yaw_rate_bias) {
      return false;
    }
    if (this->can_tx_veh_spd_comp_factor != other.can_tx_veh_spd_comp_factor) {
      return false;
    }
    if (this->can_tx_sw_version_dsp != other.can_tx_sw_version_dsp) {
      return false;
    }
    if (this->can_tx_temperature != other.can_tx_temperature) {
      return false;
    }
    if (this->can_tx_range_perf_error != other.can_tx_range_perf_error) {
      return false;
    }
    if (this->can_tx_overheat_error != other.can_tx_overheat_error) {
      return false;
    }
    if (this->can_tx_internal_error != other.can_tx_internal_error) {
      return false;
    }
    if (this->can_tx_xcvr_operational != other.can_tx_xcvr_operational) {
      return false;
    }
    if (this->can_tx_steering_angle != other.can_tx_steering_angle) {
      return false;
    }
    if (this->can_tx_rolling_count_2 != other.can_tx_rolling_count_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrrStatus2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrrStatus2_

// alias to use template instance with default allocator
using SrrStatus2 =
  delphi_srr_msgs::msg::SrrStatus2_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus2_<ContainerAllocator>::CAN_TX_ALIGNMENT_STATUS_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus2_<ContainerAllocator>::CAN_TX_ALIGNMENT_STATUS_CONVERGED;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus2_<ContainerAllocator>::CAN_TX_ALIGNMENT_STATUS_FAILED;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus2_<ContainerAllocator>::CAN_TX_ALIGNMENT_STATUS_RESERVED;

}  // namespace msg

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__STRUCT_HPP_
