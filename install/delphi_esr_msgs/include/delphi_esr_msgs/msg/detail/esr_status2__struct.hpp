// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus2 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus2 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrStatus2_
{
  using Type = EsrStatus2_<ContainerAllocator>;

  explicit EsrStatus2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->maximum_tracks_ack = 0;
      this->rolling_count_2 = 0;
      this->overheat_error = false;
      this->range_perf_error = false;
      this->internal_error = false;
      this->xcvr_operational = false;
      this->raw_data_mode = false;
      this->steering_angle_ack = 0;
      this->temperature = 0;
      this->veh_spd_comp_factor = 0.0f;
      this->grouping_mode = 0;
      this->yaw_rate_bias = 0.0f;
      this->sw_version_dsp = "";
    }
  }

  explicit EsrStatus2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    canmsg(_alloc),
    sw_version_dsp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->maximum_tracks_ack = 0;
      this->rolling_count_2 = 0;
      this->overheat_error = false;
      this->range_perf_error = false;
      this->internal_error = false;
      this->xcvr_operational = false;
      this->raw_data_mode = false;
      this->steering_angle_ack = 0;
      this->temperature = 0;
      this->veh_spd_comp_factor = 0.0f;
      this->grouping_mode = 0;
      this->yaw_rate_bias = 0.0f;
      this->sw_version_dsp = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _canmsg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _canmsg_type canmsg;
  using _maximum_tracks_ack_type =
    uint8_t;
  _maximum_tracks_ack_type maximum_tracks_ack;
  using _rolling_count_2_type =
    uint8_t;
  _rolling_count_2_type rolling_count_2;
  using _overheat_error_type =
    bool;
  _overheat_error_type overheat_error;
  using _range_perf_error_type =
    bool;
  _range_perf_error_type range_perf_error;
  using _internal_error_type =
    bool;
  _internal_error_type internal_error;
  using _xcvr_operational_type =
    bool;
  _xcvr_operational_type xcvr_operational;
  using _raw_data_mode_type =
    bool;
  _raw_data_mode_type raw_data_mode;
  using _steering_angle_ack_type =
    uint16_t;
  _steering_angle_ack_type steering_angle_ack;
  using _temperature_type =
    int8_t;
  _temperature_type temperature;
  using _veh_spd_comp_factor_type =
    float;
  _veh_spd_comp_factor_type veh_spd_comp_factor;
  using _grouping_mode_type =
    uint8_t;
  _grouping_mode_type grouping_mode;
  using _yaw_rate_bias_type =
    float;
  _yaw_rate_bias_type yaw_rate_bias;
  using _sw_version_dsp_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sw_version_dsp_type sw_version_dsp;

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
  Type & set__maximum_tracks_ack(
    const uint8_t & _arg)
  {
    this->maximum_tracks_ack = _arg;
    return *this;
  }
  Type & set__rolling_count_2(
    const uint8_t & _arg)
  {
    this->rolling_count_2 = _arg;
    return *this;
  }
  Type & set__overheat_error(
    const bool & _arg)
  {
    this->overheat_error = _arg;
    return *this;
  }
  Type & set__range_perf_error(
    const bool & _arg)
  {
    this->range_perf_error = _arg;
    return *this;
  }
  Type & set__internal_error(
    const bool & _arg)
  {
    this->internal_error = _arg;
    return *this;
  }
  Type & set__xcvr_operational(
    const bool & _arg)
  {
    this->xcvr_operational = _arg;
    return *this;
  }
  Type & set__raw_data_mode(
    const bool & _arg)
  {
    this->raw_data_mode = _arg;
    return *this;
  }
  Type & set__steering_angle_ack(
    const uint16_t & _arg)
  {
    this->steering_angle_ack = _arg;
    return *this;
  }
  Type & set__temperature(
    const int8_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__veh_spd_comp_factor(
    const float & _arg)
  {
    this->veh_spd_comp_factor = _arg;
    return *this;
  }
  Type & set__grouping_mode(
    const uint8_t & _arg)
  {
    this->grouping_mode = _arg;
    return *this;
  }
  Type & set__yaw_rate_bias(
    const float & _arg)
  {
    this->yaw_rate_bias = _arg;
    return *this;
  }
  Type & set__sw_version_dsp(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sw_version_dsp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus2
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus2
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrStatus2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->canmsg != other.canmsg) {
      return false;
    }
    if (this->maximum_tracks_ack != other.maximum_tracks_ack) {
      return false;
    }
    if (this->rolling_count_2 != other.rolling_count_2) {
      return false;
    }
    if (this->overheat_error != other.overheat_error) {
      return false;
    }
    if (this->range_perf_error != other.range_perf_error) {
      return false;
    }
    if (this->internal_error != other.internal_error) {
      return false;
    }
    if (this->xcvr_operational != other.xcvr_operational) {
      return false;
    }
    if (this->raw_data_mode != other.raw_data_mode) {
      return false;
    }
    if (this->steering_angle_ack != other.steering_angle_ack) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->veh_spd_comp_factor != other.veh_spd_comp_factor) {
      return false;
    }
    if (this->grouping_mode != other.grouping_mode) {
      return false;
    }
    if (this->yaw_rate_bias != other.yaw_rate_bias) {
      return false;
    }
    if (this->sw_version_dsp != other.sw_version_dsp) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrStatus2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrStatus2_

// alias to use template instance with default allocator
using EsrStatus2 =
  delphi_esr_msgs::msg::EsrStatus2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__STRUCT_HPP_
