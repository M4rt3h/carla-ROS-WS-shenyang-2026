// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__STRUCT_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__STRUCT_HPP_

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
# define DEPRECATED__delphi_srr_msgs__msg__SrrStatus5 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_srr_msgs__msg__SrrStatus5 __declspec(deprecated)
#endif

namespace delphi_srr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SrrStatus5_
{
  using Type = SrrStatus5_<ContainerAllocator>;

  explicit SrrStatus5_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disable_auto_align = false;
      this->can_tx_yaw_rate_ref_qf = 0;
      this->can_tx_yaw_rate_raw_qf = 0;
      this->can_tx_yaw_rate_reference = 0.0f;
      this->can_tx_yaw_rate_raw = 0.0f;
      this->can_tx_system_status = 0;
      this->can_tx_outside_temperature = 0;
      this->can_blockage_mnr_blocked = false;
      this->can_blockage_bb_blocked = false;
      this->can_blockage_radar_blocked = false;
      this->can_td_blocked = false;
      this->radar_tx_power_error = false;
      this->radar_lo_power_error = false;
      this->radar_data_sync_error = false;
      this->linearizer_spi_transfer_error = false;
      this->saturated_tuning_freq_error = false;
      this->rtn_spi_transfer_error = false;
      this->rrn_spi_transfer_error = false;
      this->video_port_capture_error = false;
      this->vertical_misalignment_error = false;
      this->tx_temperature_fault = false;
      this->transmitter_id_error = false;
      this->dsp_unit_cal_checksum_error = false;
      this->dsp_unit_cal_block_chcksm_error = false;
      this->dsp_tuning_sensitivity_error = false;
      this->dsp_loop_overrun_error = false;
      this->adc_spi_transfer_error = false;
    }
  }

  explicit SrrStatus5_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disable_auto_align = false;
      this->can_tx_yaw_rate_ref_qf = 0;
      this->can_tx_yaw_rate_raw_qf = 0;
      this->can_tx_yaw_rate_reference = 0.0f;
      this->can_tx_yaw_rate_raw = 0.0f;
      this->can_tx_system_status = 0;
      this->can_tx_outside_temperature = 0;
      this->can_blockage_mnr_blocked = false;
      this->can_blockage_bb_blocked = false;
      this->can_blockage_radar_blocked = false;
      this->can_td_blocked = false;
      this->radar_tx_power_error = false;
      this->radar_lo_power_error = false;
      this->radar_data_sync_error = false;
      this->linearizer_spi_transfer_error = false;
      this->saturated_tuning_freq_error = false;
      this->rtn_spi_transfer_error = false;
      this->rrn_spi_transfer_error = false;
      this->video_port_capture_error = false;
      this->vertical_misalignment_error = false;
      this->tx_temperature_fault = false;
      this->transmitter_id_error = false;
      this->dsp_unit_cal_checksum_error = false;
      this->dsp_unit_cal_block_chcksm_error = false;
      this->dsp_tuning_sensitivity_error = false;
      this->dsp_loop_overrun_error = false;
      this->adc_spi_transfer_error = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _disable_auto_align_type =
    bool;
  _disable_auto_align_type disable_auto_align;
  using _can_tx_yaw_rate_ref_qf_type =
    uint8_t;
  _can_tx_yaw_rate_ref_qf_type can_tx_yaw_rate_ref_qf;
  using _can_tx_yaw_rate_raw_qf_type =
    uint8_t;
  _can_tx_yaw_rate_raw_qf_type can_tx_yaw_rate_raw_qf;
  using _can_tx_yaw_rate_reference_type =
    float;
  _can_tx_yaw_rate_reference_type can_tx_yaw_rate_reference;
  using _can_tx_yaw_rate_raw_type =
    float;
  _can_tx_yaw_rate_raw_type can_tx_yaw_rate_raw;
  using _can_tx_system_status_type =
    uint8_t;
  _can_tx_system_status_type can_tx_system_status;
  using _can_tx_outside_temperature_type =
    int16_t;
  _can_tx_outside_temperature_type can_tx_outside_temperature;
  using _can_blockage_mnr_blocked_type =
    bool;
  _can_blockage_mnr_blocked_type can_blockage_mnr_blocked;
  using _can_blockage_bb_blocked_type =
    bool;
  _can_blockage_bb_blocked_type can_blockage_bb_blocked;
  using _can_blockage_radar_blocked_type =
    bool;
  _can_blockage_radar_blocked_type can_blockage_radar_blocked;
  using _can_td_blocked_type =
    bool;
  _can_td_blocked_type can_td_blocked;
  using _radar_tx_power_error_type =
    bool;
  _radar_tx_power_error_type radar_tx_power_error;
  using _radar_lo_power_error_type =
    bool;
  _radar_lo_power_error_type radar_lo_power_error;
  using _radar_data_sync_error_type =
    bool;
  _radar_data_sync_error_type radar_data_sync_error;
  using _linearizer_spi_transfer_error_type =
    bool;
  _linearizer_spi_transfer_error_type linearizer_spi_transfer_error;
  using _saturated_tuning_freq_error_type =
    bool;
  _saturated_tuning_freq_error_type saturated_tuning_freq_error;
  using _rtn_spi_transfer_error_type =
    bool;
  _rtn_spi_transfer_error_type rtn_spi_transfer_error;
  using _rrn_spi_transfer_error_type =
    bool;
  _rrn_spi_transfer_error_type rrn_spi_transfer_error;
  using _video_port_capture_error_type =
    bool;
  _video_port_capture_error_type video_port_capture_error;
  using _vertical_misalignment_error_type =
    bool;
  _vertical_misalignment_error_type vertical_misalignment_error;
  using _tx_temperature_fault_type =
    bool;
  _tx_temperature_fault_type tx_temperature_fault;
  using _transmitter_id_error_type =
    bool;
  _transmitter_id_error_type transmitter_id_error;
  using _dsp_unit_cal_checksum_error_type =
    bool;
  _dsp_unit_cal_checksum_error_type dsp_unit_cal_checksum_error;
  using _dsp_unit_cal_block_chcksm_error_type =
    bool;
  _dsp_unit_cal_block_chcksm_error_type dsp_unit_cal_block_chcksm_error;
  using _dsp_tuning_sensitivity_error_type =
    bool;
  _dsp_tuning_sensitivity_error_type dsp_tuning_sensitivity_error;
  using _dsp_loop_overrun_error_type =
    bool;
  _dsp_loop_overrun_error_type dsp_loop_overrun_error;
  using _adc_spi_transfer_error_type =
    bool;
  _adc_spi_transfer_error_type adc_spi_transfer_error;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__disable_auto_align(
    const bool & _arg)
  {
    this->disable_auto_align = _arg;
    return *this;
  }
  Type & set__can_tx_yaw_rate_ref_qf(
    const uint8_t & _arg)
  {
    this->can_tx_yaw_rate_ref_qf = _arg;
    return *this;
  }
  Type & set__can_tx_yaw_rate_raw_qf(
    const uint8_t & _arg)
  {
    this->can_tx_yaw_rate_raw_qf = _arg;
    return *this;
  }
  Type & set__can_tx_yaw_rate_reference(
    const float & _arg)
  {
    this->can_tx_yaw_rate_reference = _arg;
    return *this;
  }
  Type & set__can_tx_yaw_rate_raw(
    const float & _arg)
  {
    this->can_tx_yaw_rate_raw = _arg;
    return *this;
  }
  Type & set__can_tx_system_status(
    const uint8_t & _arg)
  {
    this->can_tx_system_status = _arg;
    return *this;
  }
  Type & set__can_tx_outside_temperature(
    const int16_t & _arg)
  {
    this->can_tx_outside_temperature = _arg;
    return *this;
  }
  Type & set__can_blockage_mnr_blocked(
    const bool & _arg)
  {
    this->can_blockage_mnr_blocked = _arg;
    return *this;
  }
  Type & set__can_blockage_bb_blocked(
    const bool & _arg)
  {
    this->can_blockage_bb_blocked = _arg;
    return *this;
  }
  Type & set__can_blockage_radar_blocked(
    const bool & _arg)
  {
    this->can_blockage_radar_blocked = _arg;
    return *this;
  }
  Type & set__can_td_blocked(
    const bool & _arg)
  {
    this->can_td_blocked = _arg;
    return *this;
  }
  Type & set__radar_tx_power_error(
    const bool & _arg)
  {
    this->radar_tx_power_error = _arg;
    return *this;
  }
  Type & set__radar_lo_power_error(
    const bool & _arg)
  {
    this->radar_lo_power_error = _arg;
    return *this;
  }
  Type & set__radar_data_sync_error(
    const bool & _arg)
  {
    this->radar_data_sync_error = _arg;
    return *this;
  }
  Type & set__linearizer_spi_transfer_error(
    const bool & _arg)
  {
    this->linearizer_spi_transfer_error = _arg;
    return *this;
  }
  Type & set__saturated_tuning_freq_error(
    const bool & _arg)
  {
    this->saturated_tuning_freq_error = _arg;
    return *this;
  }
  Type & set__rtn_spi_transfer_error(
    const bool & _arg)
  {
    this->rtn_spi_transfer_error = _arg;
    return *this;
  }
  Type & set__rrn_spi_transfer_error(
    const bool & _arg)
  {
    this->rrn_spi_transfer_error = _arg;
    return *this;
  }
  Type & set__video_port_capture_error(
    const bool & _arg)
  {
    this->video_port_capture_error = _arg;
    return *this;
  }
  Type & set__vertical_misalignment_error(
    const bool & _arg)
  {
    this->vertical_misalignment_error = _arg;
    return *this;
  }
  Type & set__tx_temperature_fault(
    const bool & _arg)
  {
    this->tx_temperature_fault = _arg;
    return *this;
  }
  Type & set__transmitter_id_error(
    const bool & _arg)
  {
    this->transmitter_id_error = _arg;
    return *this;
  }
  Type & set__dsp_unit_cal_checksum_error(
    const bool & _arg)
  {
    this->dsp_unit_cal_checksum_error = _arg;
    return *this;
  }
  Type & set__dsp_unit_cal_block_chcksm_error(
    const bool & _arg)
  {
    this->dsp_unit_cal_block_chcksm_error = _arg;
    return *this;
  }
  Type & set__dsp_tuning_sensitivity_error(
    const bool & _arg)
  {
    this->dsp_tuning_sensitivity_error = _arg;
    return *this;
  }
  Type & set__dsp_loop_overrun_error(
    const bool & _arg)
  {
    this->dsp_loop_overrun_error = _arg;
    return *this;
  }
  Type & set__adc_spi_transfer_error(
    const bool & _arg)
  {
    this->adc_spi_transfer_error = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CAN_TX_YAW_RATE_REF_QF_UNDEFINED =
    0u;
  static constexpr uint8_t CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED =
    1u;
  static constexpr uint8_t CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE =
    2u;
  static constexpr uint8_t CAN_TX_YAW_RATE_REF_QF_ACCURATE =
    3u;
  static constexpr uint8_t CAN_TX_YAW_RATE_RAW_QF_UNDEFINED =
    0u;
  static constexpr uint8_t CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED =
    1u;
  static constexpr uint8_t CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE =
    2u;
  static constexpr uint8_t CAN_TX_YAW_RATE_RAW_QF_ACCURATE =
    3u;
  static constexpr uint8_t CAN_TX_SYSTEM_STATUS_CONFIGURATION =
    0u;
  static constexpr uint8_t CAN_TX_SYSTEM_STATUS_STARTUP =
    1u;
  static constexpr uint8_t CAN_TX_SYSTEM_STATUS_RUNNING =
    2u;
  static constexpr uint8_t CAN_TX_SYSTEM_STATUS_BLOCKED =
    3u;
  static constexpr uint8_t CAN_TX_SYSTEM_STATUS_FAULTY =
    4u;
  static constexpr uint8_t CAN_TX_SYSTEM_STATUS_SHUTDOWN =
    5u;
  static constexpr uint8_t CAN_TX_SYSTEM_STATUS_HOT =
    6u;

  // pointer types
  using RawPtr =
    delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrStatus5
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrStatus5
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus5_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrrStatus5_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->disable_auto_align != other.disable_auto_align) {
      return false;
    }
    if (this->can_tx_yaw_rate_ref_qf != other.can_tx_yaw_rate_ref_qf) {
      return false;
    }
    if (this->can_tx_yaw_rate_raw_qf != other.can_tx_yaw_rate_raw_qf) {
      return false;
    }
    if (this->can_tx_yaw_rate_reference != other.can_tx_yaw_rate_reference) {
      return false;
    }
    if (this->can_tx_yaw_rate_raw != other.can_tx_yaw_rate_raw) {
      return false;
    }
    if (this->can_tx_system_status != other.can_tx_system_status) {
      return false;
    }
    if (this->can_tx_outside_temperature != other.can_tx_outside_temperature) {
      return false;
    }
    if (this->can_blockage_mnr_blocked != other.can_blockage_mnr_blocked) {
      return false;
    }
    if (this->can_blockage_bb_blocked != other.can_blockage_bb_blocked) {
      return false;
    }
    if (this->can_blockage_radar_blocked != other.can_blockage_radar_blocked) {
      return false;
    }
    if (this->can_td_blocked != other.can_td_blocked) {
      return false;
    }
    if (this->radar_tx_power_error != other.radar_tx_power_error) {
      return false;
    }
    if (this->radar_lo_power_error != other.radar_lo_power_error) {
      return false;
    }
    if (this->radar_data_sync_error != other.radar_data_sync_error) {
      return false;
    }
    if (this->linearizer_spi_transfer_error != other.linearizer_spi_transfer_error) {
      return false;
    }
    if (this->saturated_tuning_freq_error != other.saturated_tuning_freq_error) {
      return false;
    }
    if (this->rtn_spi_transfer_error != other.rtn_spi_transfer_error) {
      return false;
    }
    if (this->rrn_spi_transfer_error != other.rrn_spi_transfer_error) {
      return false;
    }
    if (this->video_port_capture_error != other.video_port_capture_error) {
      return false;
    }
    if (this->vertical_misalignment_error != other.vertical_misalignment_error) {
      return false;
    }
    if (this->tx_temperature_fault != other.tx_temperature_fault) {
      return false;
    }
    if (this->transmitter_id_error != other.transmitter_id_error) {
      return false;
    }
    if (this->dsp_unit_cal_checksum_error != other.dsp_unit_cal_checksum_error) {
      return false;
    }
    if (this->dsp_unit_cal_block_chcksm_error != other.dsp_unit_cal_block_chcksm_error) {
      return false;
    }
    if (this->dsp_tuning_sensitivity_error != other.dsp_tuning_sensitivity_error) {
      return false;
    }
    if (this->dsp_loop_overrun_error != other.dsp_loop_overrun_error) {
      return false;
    }
    if (this->adc_spi_transfer_error != other.adc_spi_transfer_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrrStatus5_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrrStatus5_

// alias to use template instance with default allocator
using SrrStatus5 =
  delphi_srr_msgs::msg::SrrStatus5_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_YAW_RATE_REF_QF_UNDEFINED;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_YAW_RATE_REF_QF_ACCURATE;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_YAW_RATE_RAW_QF_UNDEFINED;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_YAW_RATE_RAW_QF_ACCURATE;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_SYSTEM_STATUS_CONFIGURATION;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_SYSTEM_STATUS_STARTUP;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_SYSTEM_STATUS_RUNNING;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_SYSTEM_STATUS_BLOCKED;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_SYSTEM_STATUS_FAULTY;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_SYSTEM_STATUS_SHUTDOWN;
template<typename ContainerAllocator>
constexpr uint8_t SrrStatus5_<ContainerAllocator>::CAN_TX_SYSTEM_STATUS_HOT;

}  // namespace msg

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__STRUCT_HPP_
