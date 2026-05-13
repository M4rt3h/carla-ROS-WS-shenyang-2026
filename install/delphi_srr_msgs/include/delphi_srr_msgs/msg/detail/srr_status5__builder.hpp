// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__BUILDER_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__BUILDER_HPP_

#include "delphi_srr_msgs/msg/detail/srr_status5__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_srr_msgs
{

namespace msg
{

namespace builder
{

class Init_SrrStatus5_adc_spi_transfer_error
{
public:
  explicit Init_SrrStatus5_adc_spi_transfer_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  ::delphi_srr_msgs::msg::SrrStatus5 adc_spi_transfer_error(::delphi_srr_msgs::msg::SrrStatus5::_adc_spi_transfer_error_type arg)
  {
    msg_.adc_spi_transfer_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_dsp_loop_overrun_error
{
public:
  explicit Init_SrrStatus5_dsp_loop_overrun_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_adc_spi_transfer_error dsp_loop_overrun_error(::delphi_srr_msgs::msg::SrrStatus5::_dsp_loop_overrun_error_type arg)
  {
    msg_.dsp_loop_overrun_error = std::move(arg);
    return Init_SrrStatus5_adc_spi_transfer_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_dsp_tuning_sensitivity_error
{
public:
  explicit Init_SrrStatus5_dsp_tuning_sensitivity_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_dsp_loop_overrun_error dsp_tuning_sensitivity_error(::delphi_srr_msgs::msg::SrrStatus5::_dsp_tuning_sensitivity_error_type arg)
  {
    msg_.dsp_tuning_sensitivity_error = std::move(arg);
    return Init_SrrStatus5_dsp_loop_overrun_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_dsp_unit_cal_block_chcksm_error
{
public:
  explicit Init_SrrStatus5_dsp_unit_cal_block_chcksm_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_dsp_tuning_sensitivity_error dsp_unit_cal_block_chcksm_error(::delphi_srr_msgs::msg::SrrStatus5::_dsp_unit_cal_block_chcksm_error_type arg)
  {
    msg_.dsp_unit_cal_block_chcksm_error = std::move(arg);
    return Init_SrrStatus5_dsp_tuning_sensitivity_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_dsp_unit_cal_checksum_error
{
public:
  explicit Init_SrrStatus5_dsp_unit_cal_checksum_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_dsp_unit_cal_block_chcksm_error dsp_unit_cal_checksum_error(::delphi_srr_msgs::msg::SrrStatus5::_dsp_unit_cal_checksum_error_type arg)
  {
    msg_.dsp_unit_cal_checksum_error = std::move(arg);
    return Init_SrrStatus5_dsp_unit_cal_block_chcksm_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_transmitter_id_error
{
public:
  explicit Init_SrrStatus5_transmitter_id_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_dsp_unit_cal_checksum_error transmitter_id_error(::delphi_srr_msgs::msg::SrrStatus5::_transmitter_id_error_type arg)
  {
    msg_.transmitter_id_error = std::move(arg);
    return Init_SrrStatus5_dsp_unit_cal_checksum_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_tx_temperature_fault
{
public:
  explicit Init_SrrStatus5_tx_temperature_fault(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_transmitter_id_error tx_temperature_fault(::delphi_srr_msgs::msg::SrrStatus5::_tx_temperature_fault_type arg)
  {
    msg_.tx_temperature_fault = std::move(arg);
    return Init_SrrStatus5_transmitter_id_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_vertical_misalignment_error
{
public:
  explicit Init_SrrStatus5_vertical_misalignment_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_tx_temperature_fault vertical_misalignment_error(::delphi_srr_msgs::msg::SrrStatus5::_vertical_misalignment_error_type arg)
  {
    msg_.vertical_misalignment_error = std::move(arg);
    return Init_SrrStatus5_tx_temperature_fault(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_video_port_capture_error
{
public:
  explicit Init_SrrStatus5_video_port_capture_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_vertical_misalignment_error video_port_capture_error(::delphi_srr_msgs::msg::SrrStatus5::_video_port_capture_error_type arg)
  {
    msg_.video_port_capture_error = std::move(arg);
    return Init_SrrStatus5_vertical_misalignment_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_rrn_spi_transfer_error
{
public:
  explicit Init_SrrStatus5_rrn_spi_transfer_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_video_port_capture_error rrn_spi_transfer_error(::delphi_srr_msgs::msg::SrrStatus5::_rrn_spi_transfer_error_type arg)
  {
    msg_.rrn_spi_transfer_error = std::move(arg);
    return Init_SrrStatus5_video_port_capture_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_rtn_spi_transfer_error
{
public:
  explicit Init_SrrStatus5_rtn_spi_transfer_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_rrn_spi_transfer_error rtn_spi_transfer_error(::delphi_srr_msgs::msg::SrrStatus5::_rtn_spi_transfer_error_type arg)
  {
    msg_.rtn_spi_transfer_error = std::move(arg);
    return Init_SrrStatus5_rrn_spi_transfer_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_saturated_tuning_freq_error
{
public:
  explicit Init_SrrStatus5_saturated_tuning_freq_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_rtn_spi_transfer_error saturated_tuning_freq_error(::delphi_srr_msgs::msg::SrrStatus5::_saturated_tuning_freq_error_type arg)
  {
    msg_.saturated_tuning_freq_error = std::move(arg);
    return Init_SrrStatus5_rtn_spi_transfer_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_linearizer_spi_transfer_error
{
public:
  explicit Init_SrrStatus5_linearizer_spi_transfer_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_saturated_tuning_freq_error linearizer_spi_transfer_error(::delphi_srr_msgs::msg::SrrStatus5::_linearizer_spi_transfer_error_type arg)
  {
    msg_.linearizer_spi_transfer_error = std::move(arg);
    return Init_SrrStatus5_saturated_tuning_freq_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_radar_data_sync_error
{
public:
  explicit Init_SrrStatus5_radar_data_sync_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_linearizer_spi_transfer_error radar_data_sync_error(::delphi_srr_msgs::msg::SrrStatus5::_radar_data_sync_error_type arg)
  {
    msg_.radar_data_sync_error = std::move(arg);
    return Init_SrrStatus5_linearizer_spi_transfer_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_radar_lo_power_error
{
public:
  explicit Init_SrrStatus5_radar_lo_power_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_radar_data_sync_error radar_lo_power_error(::delphi_srr_msgs::msg::SrrStatus5::_radar_lo_power_error_type arg)
  {
    msg_.radar_lo_power_error = std::move(arg);
    return Init_SrrStatus5_radar_data_sync_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_radar_tx_power_error
{
public:
  explicit Init_SrrStatus5_radar_tx_power_error(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_radar_lo_power_error radar_tx_power_error(::delphi_srr_msgs::msg::SrrStatus5::_radar_tx_power_error_type arg)
  {
    msg_.radar_tx_power_error = std::move(arg);
    return Init_SrrStatus5_radar_lo_power_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_can_td_blocked
{
public:
  explicit Init_SrrStatus5_can_td_blocked(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_radar_tx_power_error can_td_blocked(::delphi_srr_msgs::msg::SrrStatus5::_can_td_blocked_type arg)
  {
    msg_.can_td_blocked = std::move(arg);
    return Init_SrrStatus5_radar_tx_power_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_can_blockage_radar_blocked
{
public:
  explicit Init_SrrStatus5_can_blockage_radar_blocked(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_can_td_blocked can_blockage_radar_blocked(::delphi_srr_msgs::msg::SrrStatus5::_can_blockage_radar_blocked_type arg)
  {
    msg_.can_blockage_radar_blocked = std::move(arg);
    return Init_SrrStatus5_can_td_blocked(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_can_blockage_bb_blocked
{
public:
  explicit Init_SrrStatus5_can_blockage_bb_blocked(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_can_blockage_radar_blocked can_blockage_bb_blocked(::delphi_srr_msgs::msg::SrrStatus5::_can_blockage_bb_blocked_type arg)
  {
    msg_.can_blockage_bb_blocked = std::move(arg);
    return Init_SrrStatus5_can_blockage_radar_blocked(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_can_blockage_mnr_blocked
{
public:
  explicit Init_SrrStatus5_can_blockage_mnr_blocked(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_can_blockage_bb_blocked can_blockage_mnr_blocked(::delphi_srr_msgs::msg::SrrStatus5::_can_blockage_mnr_blocked_type arg)
  {
    msg_.can_blockage_mnr_blocked = std::move(arg);
    return Init_SrrStatus5_can_blockage_bb_blocked(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_can_tx_outside_temperature
{
public:
  explicit Init_SrrStatus5_can_tx_outside_temperature(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_can_blockage_mnr_blocked can_tx_outside_temperature(::delphi_srr_msgs::msg::SrrStatus5::_can_tx_outside_temperature_type arg)
  {
    msg_.can_tx_outside_temperature = std::move(arg);
    return Init_SrrStatus5_can_blockage_mnr_blocked(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_can_tx_system_status
{
public:
  explicit Init_SrrStatus5_can_tx_system_status(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_can_tx_outside_temperature can_tx_system_status(::delphi_srr_msgs::msg::SrrStatus5::_can_tx_system_status_type arg)
  {
    msg_.can_tx_system_status = std::move(arg);
    return Init_SrrStatus5_can_tx_outside_temperature(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_can_tx_yaw_rate_raw
{
public:
  explicit Init_SrrStatus5_can_tx_yaw_rate_raw(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_can_tx_system_status can_tx_yaw_rate_raw(::delphi_srr_msgs::msg::SrrStatus5::_can_tx_yaw_rate_raw_type arg)
  {
    msg_.can_tx_yaw_rate_raw = std::move(arg);
    return Init_SrrStatus5_can_tx_system_status(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_can_tx_yaw_rate_reference
{
public:
  explicit Init_SrrStatus5_can_tx_yaw_rate_reference(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_can_tx_yaw_rate_raw can_tx_yaw_rate_reference(::delphi_srr_msgs::msg::SrrStatus5::_can_tx_yaw_rate_reference_type arg)
  {
    msg_.can_tx_yaw_rate_reference = std::move(arg);
    return Init_SrrStatus5_can_tx_yaw_rate_raw(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_can_tx_yaw_rate_raw_qf
{
public:
  explicit Init_SrrStatus5_can_tx_yaw_rate_raw_qf(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_can_tx_yaw_rate_reference can_tx_yaw_rate_raw_qf(::delphi_srr_msgs::msg::SrrStatus5::_can_tx_yaw_rate_raw_qf_type arg)
  {
    msg_.can_tx_yaw_rate_raw_qf = std::move(arg);
    return Init_SrrStatus5_can_tx_yaw_rate_reference(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_can_tx_yaw_rate_ref_qf
{
public:
  explicit Init_SrrStatus5_can_tx_yaw_rate_ref_qf(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_can_tx_yaw_rate_raw_qf can_tx_yaw_rate_ref_qf(::delphi_srr_msgs::msg::SrrStatus5::_can_tx_yaw_rate_ref_qf_type arg)
  {
    msg_.can_tx_yaw_rate_ref_qf = std::move(arg);
    return Init_SrrStatus5_can_tx_yaw_rate_raw_qf(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_disable_auto_align
{
public:
  explicit Init_SrrStatus5_disable_auto_align(::delphi_srr_msgs::msg::SrrStatus5 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus5_can_tx_yaw_rate_ref_qf disable_auto_align(::delphi_srr_msgs::msg::SrrStatus5::_disable_auto_align_type arg)
  {
    msg_.disable_auto_align = std::move(arg);
    return Init_SrrStatus5_can_tx_yaw_rate_ref_qf(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

class Init_SrrStatus5_header
{
public:
  Init_SrrStatus5_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrrStatus5_disable_auto_align header(::delphi_srr_msgs::msg::SrrStatus5::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SrrStatus5_disable_auto_align(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus5 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_srr_msgs::msg::SrrStatus5>()
{
  return delphi_srr_msgs::msg::builder::Init_SrrStatus5_header();
}

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__BUILDER_HPP_
