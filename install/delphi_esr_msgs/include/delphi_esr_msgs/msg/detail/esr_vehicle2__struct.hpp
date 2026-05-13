// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrVehicle2 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrVehicle2 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrVehicle2_
{
  using Type = EsrVehicle2_<ContainerAllocator>;

  explicit EsrVehicle2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_index_ack = 0;
      this->use_angle_misalignment = false;
      this->clear_faults = false;
      this->high_yaw_angle = 0;
      this->mr_only_transmit = false;
      this->lr_only_transmit = false;
      this->angle_misalignment = 0.0f;
      this->lateral_mounting_offset = 0.0f;
      this->radar_cmd_radiate = false;
      this->blockage_disable = false;
      this->maximum_tracks = 0;
      this->turn_signal_status = 0;
      this->vehicle_speed_validity = false;
      this->mmr_upside_down = false;
      this->grouping_mode = 0;
      this->wiper_status = false;
      this->raw_data_enable = false;
    }
  }

  explicit EsrVehicle2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_index_ack = 0;
      this->use_angle_misalignment = false;
      this->clear_faults = false;
      this->high_yaw_angle = 0;
      this->mr_only_transmit = false;
      this->lr_only_transmit = false;
      this->angle_misalignment = 0.0f;
      this->lateral_mounting_offset = 0.0f;
      this->radar_cmd_radiate = false;
      this->blockage_disable = false;
      this->maximum_tracks = 0;
      this->turn_signal_status = 0;
      this->vehicle_speed_validity = false;
      this->mmr_upside_down = false;
      this->grouping_mode = 0;
      this->wiper_status = false;
      this->raw_data_enable = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _scan_index_ack_type =
    uint16_t;
  _scan_index_ack_type scan_index_ack;
  using _use_angle_misalignment_type =
    bool;
  _use_angle_misalignment_type use_angle_misalignment;
  using _clear_faults_type =
    bool;
  _clear_faults_type clear_faults;
  using _high_yaw_angle_type =
    int8_t;
  _high_yaw_angle_type high_yaw_angle;
  using _mr_only_transmit_type =
    bool;
  _mr_only_transmit_type mr_only_transmit;
  using _lr_only_transmit_type =
    bool;
  _lr_only_transmit_type lr_only_transmit;
  using _angle_misalignment_type =
    float;
  _angle_misalignment_type angle_misalignment;
  using _lateral_mounting_offset_type =
    float;
  _lateral_mounting_offset_type lateral_mounting_offset;
  using _radar_cmd_radiate_type =
    bool;
  _radar_cmd_radiate_type radar_cmd_radiate;
  using _blockage_disable_type =
    bool;
  _blockage_disable_type blockage_disable;
  using _maximum_tracks_type =
    uint8_t;
  _maximum_tracks_type maximum_tracks;
  using _turn_signal_status_type =
    uint8_t;
  _turn_signal_status_type turn_signal_status;
  using _vehicle_speed_validity_type =
    bool;
  _vehicle_speed_validity_type vehicle_speed_validity;
  using _mmr_upside_down_type =
    bool;
  _mmr_upside_down_type mmr_upside_down;
  using _grouping_mode_type =
    uint8_t;
  _grouping_mode_type grouping_mode;
  using _wiper_status_type =
    bool;
  _wiper_status_type wiper_status;
  using _raw_data_enable_type =
    bool;
  _raw_data_enable_type raw_data_enable;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__scan_index_ack(
    const uint16_t & _arg)
  {
    this->scan_index_ack = _arg;
    return *this;
  }
  Type & set__use_angle_misalignment(
    const bool & _arg)
  {
    this->use_angle_misalignment = _arg;
    return *this;
  }
  Type & set__clear_faults(
    const bool & _arg)
  {
    this->clear_faults = _arg;
    return *this;
  }
  Type & set__high_yaw_angle(
    const int8_t & _arg)
  {
    this->high_yaw_angle = _arg;
    return *this;
  }
  Type & set__mr_only_transmit(
    const bool & _arg)
  {
    this->mr_only_transmit = _arg;
    return *this;
  }
  Type & set__lr_only_transmit(
    const bool & _arg)
  {
    this->lr_only_transmit = _arg;
    return *this;
  }
  Type & set__angle_misalignment(
    const float & _arg)
  {
    this->angle_misalignment = _arg;
    return *this;
  }
  Type & set__lateral_mounting_offset(
    const float & _arg)
  {
    this->lateral_mounting_offset = _arg;
    return *this;
  }
  Type & set__radar_cmd_radiate(
    const bool & _arg)
  {
    this->radar_cmd_radiate = _arg;
    return *this;
  }
  Type & set__blockage_disable(
    const bool & _arg)
  {
    this->blockage_disable = _arg;
    return *this;
  }
  Type & set__maximum_tracks(
    const uint8_t & _arg)
  {
    this->maximum_tracks = _arg;
    return *this;
  }
  Type & set__turn_signal_status(
    const uint8_t & _arg)
  {
    this->turn_signal_status = _arg;
    return *this;
  }
  Type & set__vehicle_speed_validity(
    const bool & _arg)
  {
    this->vehicle_speed_validity = _arg;
    return *this;
  }
  Type & set__mmr_upside_down(
    const bool & _arg)
  {
    this->mmr_upside_down = _arg;
    return *this;
  }
  Type & set__grouping_mode(
    const uint8_t & _arg)
  {
    this->grouping_mode = _arg;
    return *this;
  }
  Type & set__wiper_status(
    const bool & _arg)
  {
    this->wiper_status = _arg;
    return *this;
  }
  Type & set__raw_data_enable(
    const bool & _arg)
  {
    this->raw_data_enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrVehicle2
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrVehicle2
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrVehicle2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->scan_index_ack != other.scan_index_ack) {
      return false;
    }
    if (this->use_angle_misalignment != other.use_angle_misalignment) {
      return false;
    }
    if (this->clear_faults != other.clear_faults) {
      return false;
    }
    if (this->high_yaw_angle != other.high_yaw_angle) {
      return false;
    }
    if (this->mr_only_transmit != other.mr_only_transmit) {
      return false;
    }
    if (this->lr_only_transmit != other.lr_only_transmit) {
      return false;
    }
    if (this->angle_misalignment != other.angle_misalignment) {
      return false;
    }
    if (this->lateral_mounting_offset != other.lateral_mounting_offset) {
      return false;
    }
    if (this->radar_cmd_radiate != other.radar_cmd_radiate) {
      return false;
    }
    if (this->blockage_disable != other.blockage_disable) {
      return false;
    }
    if (this->maximum_tracks != other.maximum_tracks) {
      return false;
    }
    if (this->turn_signal_status != other.turn_signal_status) {
      return false;
    }
    if (this->vehicle_speed_validity != other.vehicle_speed_validity) {
      return false;
    }
    if (this->mmr_upside_down != other.mmr_upside_down) {
      return false;
    }
    if (this->grouping_mode != other.grouping_mode) {
      return false;
    }
    if (this->wiper_status != other.wiper_status) {
      return false;
    }
    if (this->raw_data_enable != other.raw_data_enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrVehicle2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrVehicle2_

// alias to use template instance with default allocator
using EsrVehicle2 =
  delphi_esr_msgs::msg::EsrVehicle2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__STRUCT_HPP_
