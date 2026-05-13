// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/active_fault_latched1__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_ActiveFaultLatched1_application_flash_checksum_fault
{
public:
  explicit Init_ActiveFaultLatched1_application_flash_checksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 application_flash_checksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_application_flash_checksum_fault_type arg)
  {
    msg_.application_flash_checksum_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_program_calibration_flash_checksum
{
public:
  explicit Init_ActiveFaultLatched1_program_calibration_flash_checksum(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_application_flash_checksum_fault program_calibration_flash_checksum(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_program_calibration_flash_checksum_type arg)
  {
    msg_.program_calibration_flash_checksum = std::move(arg);
    return Init_ActiveFaultLatched1_application_flash_checksum_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_keep_alive_checksum_fault
{
public:
  explicit Init_ActiveFaultLatched1_keep_alive_checksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_program_calibration_flash_checksum keep_alive_checksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_keep_alive_checksum_fault_type arg)
  {
    msg_.keep_alive_checksum_fault = std::move(arg);
    return Init_ActiveFaultLatched1_program_calibration_flash_checksum(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte0_bit3
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte0_bit3(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_keep_alive_checksum_fault active_flt_latched_byte0_bit3(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte0_bit3_type arg)
  {
    msg_.active_flt_latched_byte0_bit3 = std::move(arg);
    return Init_ActiveFaultLatched1_keep_alive_checksum_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte0_bit4
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte0_bit4(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte0_bit3 active_flt_latched_byte0_bit4(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte0_bit4_type arg)
  {
    msg_.active_flt_latched_byte0_bit4 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte0_bit3(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte0_bit5
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte0_bit5(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte0_bit4 active_flt_latched_byte0_bit5(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte0_bit5_type arg)
  {
    msg_.active_flt_latched_byte0_bit5 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte0_bit4(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte0_bit6
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte0_bit6(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte0_bit5 active_flt_latched_byte0_bit6(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte0_bit6_type arg)
  {
    msg_.active_flt_latched_byte0_bit6 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte0_bit5(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_usc_validation_fault
{
public:
  explicit Init_ActiveFaultLatched1_usc_validation_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte0_bit6 usc_validation_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_usc_validation_fault_type arg)
  {
    msg_.usc_validation_fault = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte0_bit6(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_ram_memory_test_fault
{
public:
  explicit Init_ActiveFaultLatched1_ram_memory_test_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_usc_validation_fault ram_memory_test_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_ram_memory_test_fault_type arg)
  {
    msg_.ram_memory_test_fault = std::move(arg);
    return Init_ActiveFaultLatched1_usc_validation_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte1_bit1
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte1_bit1(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_ram_memory_test_fault active_flt_latched_byte1_bit1(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte1_bit1_type arg)
  {
    msg_.active_flt_latched_byte1_bit1 = std::move(arg);
    return Init_ActiveFaultLatched1_ram_memory_test_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_pll_lock_fault
{
public:
  explicit Init_ActiveFaultLatched1_pll_lock_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte1_bit1 pll_lock_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_pll_lock_fault_type arg)
  {
    msg_.pll_lock_fault = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte1_bit1(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_watchdog_fault
{
public:
  explicit Init_ActiveFaultLatched1_watchdog_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_pll_lock_fault watchdog_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_watchdog_fault_type arg)
  {
    msg_.watchdog_fault = std::move(arg);
    return Init_ActiveFaultLatched1_pll_lock_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_stack_overflow_fault
{
public:
  explicit Init_ActiveFaultLatched1_stack_overflow_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_watchdog_fault stack_overflow_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_stack_overflow_fault_type arg)
  {
    msg_.stack_overflow_fault = std::move(arg);
    return Init_ActiveFaultLatched1_watchdog_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_instruction_set_check_fault
{
public:
  explicit Init_ActiveFaultLatched1_instruction_set_check_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_stack_overflow_fault instruction_set_check_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_instruction_set_check_fault_type arg)
  {
    msg_.instruction_set_check_fault = std::move(arg);
    return Init_ActiveFaultLatched1_stack_overflow_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte1_bit6
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte1_bit6(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_instruction_set_check_fault active_flt_latched_byte1_bit6(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte1_bit6_type arg)
  {
    msg_.active_flt_latched_byte1_bit6 = std::move(arg);
    return Init_ActiveFaultLatched1_instruction_set_check_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte1_bit7
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte1_bit7(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte1_bit6 active_flt_latched_byte1_bit7(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte1_bit7_type arg)
  {
    msg_.active_flt_latched_byte1_bit7 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte1_bit6(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_pcan_bus_off
{
public:
  explicit Init_ActiveFaultLatched1_pcan_bus_off(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte1_bit7 pcan_bus_off(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_pcan_bus_off_type arg)
  {
    msg_.pcan_bus_off = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte1_bit7(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_pcan_missing_msg_fault
{
public:
  explicit Init_ActiveFaultLatched1_pcan_missing_msg_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_pcan_bus_off pcan_missing_msg_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_pcan_missing_msg_fault_type arg)
  {
    msg_.pcan_missing_msg_fault = std::move(arg);
    return Init_ActiveFaultLatched1_pcan_bus_off(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte2_bit2
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte2_bit2(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_pcan_missing_msg_fault active_flt_latched_byte2_bit2(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte2_bit2_type arg)
  {
    msg_.active_flt_latched_byte2_bit2 = std::move(arg);
    return Init_ActiveFaultLatched1_pcan_missing_msg_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte2_bit3
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte2_bit3(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte2_bit2 active_flt_latched_byte2_bit3(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte2_bit3_type arg)
  {
    msg_.active_flt_latched_byte2_bit3 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte2_bit2(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte2_bit4
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte2_bit4(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte2_bit3 active_flt_latched_byte2_bit4(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte2_bit4_type arg)
  {
    msg_.active_flt_latched_byte2_bit4 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte2_bit3(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte2_bit5
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte2_bit5(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte2_bit4 active_flt_latched_byte2_bit5(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte2_bit5_type arg)
  {
    msg_.active_flt_latched_byte2_bit5 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte2_bit4(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte2_bit6
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte2_bit6(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte2_bit5 active_flt_latched_byte2_bit6(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte2_bit6_type arg)
  {
    msg_.active_flt_latched_byte2_bit6 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte2_bit5(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_transmitter_id_fault
{
public:
  explicit Init_ActiveFaultLatched1_transmitter_id_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte2_bit6 transmitter_id_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_transmitter_id_fault_type arg)
  {
    msg_.transmitter_id_fault = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte2_bit6(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_v_5_supply_out_of_range
{
public:
  explicit Init_ActiveFaultLatched1_v_5_supply_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_transmitter_id_fault v_5_supply_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_v_5_supply_out_of_range_type arg)
  {
    msg_.v_5_supply_out_of_range = std::move(arg);
    return Init_ActiveFaultLatched1_transmitter_id_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_v_3p3_raw_supply_out_of_range
{
public:
  explicit Init_ActiveFaultLatched1_v_3p3_raw_supply_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_v_5_supply_out_of_range v_3p3_raw_supply_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_v_3p3_raw_supply_out_of_range_type arg)
  {
    msg_.v_3p3_raw_supply_out_of_range = std::move(arg);
    return Init_ActiveFaultLatched1_v_5_supply_out_of_range(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_v_3p3_dac_supply_out_of_range
{
public:
  explicit Init_ActiveFaultLatched1_v_3p3_dac_supply_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_v_3p3_raw_supply_out_of_range v_3p3_dac_supply_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_v_3p3_dac_supply_out_of_range_type arg)
  {
    msg_.v_3p3_dac_supply_out_of_range = std::move(arg);
    return Init_ActiveFaultLatched1_v_3p3_raw_supply_out_of_range(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_thermistor_out_of_range
{
public:
  explicit Init_ActiveFaultLatched1_thermistor_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_v_3p3_dac_supply_out_of_range thermistor_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_thermistor_out_of_range_type arg)
  {
    msg_.thermistor_out_of_range = std::move(arg);
    return Init_ActiveFaultLatched1_v_3p3_dac_supply_out_of_range(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte3_bit4
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte3_bit4(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_thermistor_out_of_range active_flt_latched_byte3_bit4(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte3_bit4_type arg)
  {
    msg_.active_flt_latched_byte3_bit4 = std::move(arg);
    return Init_ActiveFaultLatched1_thermistor_out_of_range(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_v_1p25_supply_out_of_range
{
public:
  explicit Init_ActiveFaultLatched1_v_1p25_supply_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte3_bit4 v_1p25_supply_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_v_1p25_supply_out_of_range_type arg)
  {
    msg_.v_1p25_supply_out_of_range = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte3_bit4(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_battery_high_fault
{
public:
  explicit Init_ActiveFaultLatched1_battery_high_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_v_1p25_supply_out_of_range battery_high_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_battery_high_fault_type arg)
  {
    msg_.battery_high_fault = std::move(arg);
    return Init_ActiveFaultLatched1_v_1p25_supply_out_of_range(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_battery_low_fault
{
public:
  explicit Init_ActiveFaultLatched1_battery_low_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_battery_high_fault battery_low_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_battery_low_fault_type arg)
  {
    msg_.battery_low_fault = std::move(arg);
    return Init_ActiveFaultLatched1_battery_high_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_factory_alignment_mode
{
public:
  explicit Init_ActiveFaultLatched1_factory_alignment_mode(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_battery_low_fault factory_alignment_mode(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_factory_alignment_mode_type arg)
  {
    msg_.factory_alignment_mode = std::move(arg);
    return Init_ActiveFaultLatched1_battery_low_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_horizontal_alignment_out_of_range
{
public:
  explicit Init_ActiveFaultLatched1_horizontal_alignment_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_factory_alignment_mode horizontal_alignment_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_horizontal_alignment_out_of_range_type arg)
  {
    msg_.horizontal_alignment_out_of_range = std::move(arg);
    return Init_ActiveFaultLatched1_factory_alignment_mode(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_vertical_alignment_out_of_range
{
public:
  explicit Init_ActiveFaultLatched1_vertical_alignment_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_horizontal_alignment_out_of_range vertical_alignment_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_vertical_alignment_out_of_range_type arg)
  {
    msg_.vertical_alignment_out_of_range = std::move(arg);
    return Init_ActiveFaultLatched1_horizontal_alignment_out_of_range(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_microprocessor_temp_high_fault
{
public:
  explicit Init_ActiveFaultLatched1_microprocessor_temp_high_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_vertical_alignment_out_of_range microprocessor_temp_high_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_microprocessor_temp_high_fault_type arg)
  {
    msg_.microprocessor_temp_high_fault = std::move(arg);
    return Init_ActiveFaultLatched1_vertical_alignment_out_of_range(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_unreasonable_radar_data
{
public:
  explicit Init_ActiveFaultLatched1_unreasonable_radar_data(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_microprocessor_temp_high_fault unreasonable_radar_data(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_unreasonable_radar_data_type arg)
  {
    msg_.unreasonable_radar_data = std::move(arg);
    return Init_ActiveFaultLatched1_microprocessor_temp_high_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_alignment_routine_failed_fault
{
public:
  explicit Init_ActiveFaultLatched1_alignment_routine_failed_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_unreasonable_radar_data alignment_routine_failed_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_alignment_routine_failed_fault_type arg)
  {
    msg_.alignment_routine_failed_fault = std::move(arg);
    return Init_ActiveFaultLatched1_unreasonable_radar_data(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_transmitter_temp_high_fault
{
public:
  explicit Init_ActiveFaultLatched1_transmitter_temp_high_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_alignment_routine_failed_fault transmitter_temp_high_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_transmitter_temp_high_fault_type arg)
  {
    msg_.transmitter_temp_high_fault = std::move(arg);
    return Init_ActiveFaultLatched1_alignment_routine_failed_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_ecu_temp_high_fault
{
public:
  explicit Init_ActiveFaultLatched1_ecu_temp_high_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_transmitter_temp_high_fault ecu_temp_high_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_ecu_temp_high_fault_type arg)
  {
    msg_.ecu_temp_high_fault = std::move(arg);
    return Init_ActiveFaultLatched1_transmitter_temp_high_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_mnr_blocked
{
public:
  explicit Init_ActiveFaultLatched1_mnr_blocked(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_ecu_temp_high_fault mnr_blocked(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_mnr_blocked_type arg)
  {
    msg_.mnr_blocked = std::move(arg);
    return Init_ActiveFaultLatched1_ecu_temp_high_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte5_bit1
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte5_bit1(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_mnr_blocked active_flt_latched_byte5_bit1(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte5_bit1_type arg)
  {
    msg_.active_flt_latched_byte5_bit1 = std::move(arg);
    return Init_ActiveFaultLatched1_mnr_blocked(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_side_lobe_blockage
{
public:
  explicit Init_ActiveFaultLatched1_side_lobe_blockage(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte5_bit1 side_lobe_blockage(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_side_lobe_blockage_type arg)
  {
    msg_.side_lobe_blockage = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte5_bit1(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_analog_converter_devic_spi_fault
{
public:
  explicit Init_ActiveFaultLatched1_analog_converter_devic_spi_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_side_lobe_blockage analog_converter_devic_spi_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_analog_converter_devic_spi_fault_type arg)
  {
    msg_.analog_converter_devic_spi_fault = std::move(arg);
    return Init_ActiveFaultLatched1_side_lobe_blockage(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_freq_synthesizer_spi_fault
{
public:
  explicit Init_ActiveFaultLatched1_freq_synthesizer_spi_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_analog_converter_devic_spi_fault freq_synthesizer_spi_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_freq_synthesizer_spi_fault_type arg)
  {
    msg_.freq_synthesizer_spi_fault = std::move(arg);
    return Init_ActiveFaultLatched1_analog_converter_devic_spi_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_xcvr_device_spi_fault
{
public:
  explicit Init_ActiveFaultLatched1_xcvr_device_spi_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_freq_synthesizer_spi_fault xcvr_device_spi_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_xcvr_device_spi_fault_type arg)
  {
    msg_.xcvr_device_spi_fault = std::move(arg);
    return Init_ActiveFaultLatched1_freq_synthesizer_spi_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte5_bit6
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte5_bit6(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_xcvr_device_spi_fault active_flt_latched_byte5_bit6(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte5_bit6_type arg)
  {
    msg_.active_flt_latched_byte5_bit6 = std::move(arg);
    return Init_ActiveFaultLatched1_xcvr_device_spi_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte5_bit7
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte5_bit7(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte5_bit6 active_flt_latched_byte5_bit7(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte5_bit7_type arg)
  {
    msg_.active_flt_latched_byte5_bit7 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte5_bit6(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte6_bit0
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte6_bit0(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte5_bit7 active_flt_latched_byte6_bit0(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte6_bit0_type arg)
  {
    msg_.active_flt_latched_byte6_bit0 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte5_bit7(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_transmitter_power_fault
{
public:
  explicit Init_ActiveFaultLatched1_transmitter_power_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte6_bit0 transmitter_power_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_transmitter_power_fault_type arg)
  {
    msg_.transmitter_power_fault = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte6_bit0(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_local_osc_power_fault
{
public:
  explicit Init_ActiveFaultLatched1_local_osc_power_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_transmitter_power_fault local_osc_power_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_local_osc_power_fault_type arg)
  {
    msg_.local_osc_power_fault = std::move(arg);
    return Init_ActiveFaultLatched1_transmitter_power_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_saturated_tuning_freq_fault
{
public:
  explicit Init_ActiveFaultLatched1_saturated_tuning_freq_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_local_osc_power_fault saturated_tuning_freq_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_saturated_tuning_freq_fault_type arg)
  {
    msg_.saturated_tuning_freq_fault = std::move(arg);
    return Init_ActiveFaultLatched1_local_osc_power_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_tuning_sensitivity_fault
{
public:
  explicit Init_ActiveFaultLatched1_tuning_sensitivity_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_saturated_tuning_freq_fault tuning_sensitivity_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_tuning_sensitivity_fault_type arg)
  {
    msg_.tuning_sensitivity_fault = std::move(arg);
    return Init_ActiveFaultLatched1_saturated_tuning_freq_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte6_bit5
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte6_bit5(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_tuning_sensitivity_fault active_flt_latched_byte6_bit5(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte6_bit5_type arg)
  {
    msg_.active_flt_latched_byte6_bit5 = std::move(arg);
    return Init_ActiveFaultLatched1_tuning_sensitivity_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_dsp_overrun_fault
{
public:
  explicit Init_ActiveFaultLatched1_dsp_overrun_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte6_bit5 dsp_overrun_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_dsp_overrun_fault_type arg)
  {
    msg_.dsp_overrun_fault = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte6_bit5(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_loop_bw_out_of_range
{
public:
  explicit Init_ActiveFaultLatched1_loop_bw_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_dsp_overrun_fault loop_bw_out_of_range(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_loop_bw_out_of_range_type arg)
  {
    msg_.loop_bw_out_of_range = std::move(arg);
    return Init_ActiveFaultLatched1_dsp_overrun_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_arm_to_host_chksum_fault
{
public:
  explicit Init_ActiveFaultLatched1_arm_to_host_chksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_loop_bw_out_of_range arm_to_host_chksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_arm_to_host_chksum_fault_type arg)
  {
    msg_.arm_to_host_chksum_fault = std::move(arg);
    return Init_ActiveFaultLatched1_loop_bw_out_of_range(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_host_to_arm_chksum_fault
{
public:
  explicit Init_ActiveFaultLatched1_host_to_arm_chksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_arm_to_host_chksum_fault host_to_arm_chksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_host_to_arm_chksum_fault_type arg)
  {
    msg_.host_to_arm_chksum_fault = std::move(arg);
    return Init_ActiveFaultLatched1_arm_to_host_chksum_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_dsp_to_arm_chksum_fault
{
public:
  explicit Init_ActiveFaultLatched1_dsp_to_arm_chksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_host_to_arm_chksum_fault dsp_to_arm_chksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_dsp_to_arm_chksum_fault_type arg)
  {
    msg_.dsp_to_arm_chksum_fault = std::move(arg);
    return Init_ActiveFaultLatched1_host_to_arm_chksum_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_arm_to_dsp_chksum_fault
{
public:
  explicit Init_ActiveFaultLatched1_arm_to_dsp_chksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_dsp_to_arm_chksum_fault arm_to_dsp_chksum_fault(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_arm_to_dsp_chksum_fault_type arg)
  {
    msg_.arm_to_dsp_chksum_fault = std::move(arg);
    return Init_ActiveFaultLatched1_dsp_to_arm_chksum_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte7_bit4
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte7_bit4(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_arm_to_dsp_chksum_fault active_flt_latched_byte7_bit4(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte7_bit4_type arg)
  {
    msg_.active_flt_latched_byte7_bit4 = std::move(arg);
    return Init_ActiveFaultLatched1_arm_to_dsp_chksum_fault(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte7_bit5
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte7_bit5(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte7_bit4 active_flt_latched_byte7_bit5(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte7_bit5_type arg)
  {
    msg_.active_flt_latched_byte7_bit5 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte7_bit4(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte7_bit6
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte7_bit6(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte7_bit5 active_flt_latched_byte7_bit6(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte7_bit6_type arg)
  {
    msg_.active_flt_latched_byte7_bit6 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte7_bit5(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_active_flt_latched_byte7_bit7
{
public:
  explicit Init_ActiveFaultLatched1_active_flt_latched_byte7_bit7(::delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte7_bit6 active_flt_latched_byte7_bit7(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_active_flt_latched_byte7_bit7_type arg)
  {
    msg_.active_flt_latched_byte7_bit7 = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte7_bit6(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

class Init_ActiveFaultLatched1_header
{
public:
  Init_ActiveFaultLatched1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActiveFaultLatched1_active_flt_latched_byte7_bit7 header(::delphi_mrr_msgs::msg::ActiveFaultLatched1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActiveFaultLatched1_active_flt_latched_byte7_bit7(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::ActiveFaultLatched1>()
{
  return delphi_mrr_msgs::msg::builder::Init_ActiveFaultLatched1_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__BUILDER_HPP_
