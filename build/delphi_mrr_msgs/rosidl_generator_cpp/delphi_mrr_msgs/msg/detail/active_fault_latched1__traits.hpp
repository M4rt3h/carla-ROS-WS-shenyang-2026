// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__TRAITS_HPP_

#include "delphi_mrr_msgs/msg/detail/active_fault_latched1__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: active_flt_latched_byte7_bit7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte7_bit7: ";
    value_to_yaml(msg.active_flt_latched_byte7_bit7, out);
    out << "\n";
  }

  // member: active_flt_latched_byte7_bit6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte7_bit6: ";
    value_to_yaml(msg.active_flt_latched_byte7_bit6, out);
    out << "\n";
  }

  // member: active_flt_latched_byte7_bit5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte7_bit5: ";
    value_to_yaml(msg.active_flt_latched_byte7_bit5, out);
    out << "\n";
  }

  // member: active_flt_latched_byte7_bit4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte7_bit4: ";
    value_to_yaml(msg.active_flt_latched_byte7_bit4, out);
    out << "\n";
  }

  // member: arm_to_dsp_chksum_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_to_dsp_chksum_fault: ";
    value_to_yaml(msg.arm_to_dsp_chksum_fault, out);
    out << "\n";
  }

  // member: dsp_to_arm_chksum_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_to_arm_chksum_fault: ";
    value_to_yaml(msg.dsp_to_arm_chksum_fault, out);
    out << "\n";
  }

  // member: host_to_arm_chksum_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host_to_arm_chksum_fault: ";
    value_to_yaml(msg.host_to_arm_chksum_fault, out);
    out << "\n";
  }

  // member: arm_to_host_chksum_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_to_host_chksum_fault: ";
    value_to_yaml(msg.arm_to_host_chksum_fault, out);
    out << "\n";
  }

  // member: loop_bw_out_of_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_bw_out_of_range: ";
    value_to_yaml(msg.loop_bw_out_of_range, out);
    out << "\n";
  }

  // member: dsp_overrun_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_overrun_fault: ";
    value_to_yaml(msg.dsp_overrun_fault, out);
    out << "\n";
  }

  // member: active_flt_latched_byte6_bit5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte6_bit5: ";
    value_to_yaml(msg.active_flt_latched_byte6_bit5, out);
    out << "\n";
  }

  // member: tuning_sensitivity_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tuning_sensitivity_fault: ";
    value_to_yaml(msg.tuning_sensitivity_fault, out);
    out << "\n";
  }

  // member: saturated_tuning_freq_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "saturated_tuning_freq_fault: ";
    value_to_yaml(msg.saturated_tuning_freq_fault, out);
    out << "\n";
  }

  // member: local_osc_power_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_osc_power_fault: ";
    value_to_yaml(msg.local_osc_power_fault, out);
    out << "\n";
  }

  // member: transmitter_power_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmitter_power_fault: ";
    value_to_yaml(msg.transmitter_power_fault, out);
    out << "\n";
  }

  // member: active_flt_latched_byte6_bit0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte6_bit0: ";
    value_to_yaml(msg.active_flt_latched_byte6_bit0, out);
    out << "\n";
  }

  // member: active_flt_latched_byte5_bit7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte5_bit7: ";
    value_to_yaml(msg.active_flt_latched_byte5_bit7, out);
    out << "\n";
  }

  // member: active_flt_latched_byte5_bit6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte5_bit6: ";
    value_to_yaml(msg.active_flt_latched_byte5_bit6, out);
    out << "\n";
  }

  // member: xcvr_device_spi_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xcvr_device_spi_fault: ";
    value_to_yaml(msg.xcvr_device_spi_fault, out);
    out << "\n";
  }

  // member: freq_synthesizer_spi_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq_synthesizer_spi_fault: ";
    value_to_yaml(msg.freq_synthesizer_spi_fault, out);
    out << "\n";
  }

  // member: analog_converter_devic_spi_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_converter_devic_spi_fault: ";
    value_to_yaml(msg.analog_converter_devic_spi_fault, out);
    out << "\n";
  }

  // member: side_lobe_blockage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "side_lobe_blockage: ";
    value_to_yaml(msg.side_lobe_blockage, out);
    out << "\n";
  }

  // member: active_flt_latched_byte5_bit1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte5_bit1: ";
    value_to_yaml(msg.active_flt_latched_byte5_bit1, out);
    out << "\n";
  }

  // member: mnr_blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mnr_blocked: ";
    value_to_yaml(msg.mnr_blocked, out);
    out << "\n";
  }

  // member: ecu_temp_high_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecu_temp_high_fault: ";
    value_to_yaml(msg.ecu_temp_high_fault, out);
    out << "\n";
  }

  // member: transmitter_temp_high_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmitter_temp_high_fault: ";
    value_to_yaml(msg.transmitter_temp_high_fault, out);
    out << "\n";
  }

  // member: alignment_routine_failed_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alignment_routine_failed_fault: ";
    value_to_yaml(msg.alignment_routine_failed_fault, out);
    out << "\n";
  }

  // member: unreasonable_radar_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unreasonable_radar_data: ";
    value_to_yaml(msg.unreasonable_radar_data, out);
    out << "\n";
  }

  // member: microprocessor_temp_high_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "microprocessor_temp_high_fault: ";
    value_to_yaml(msg.microprocessor_temp_high_fault, out);
    out << "\n";
  }

  // member: vertical_alignment_out_of_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_alignment_out_of_range: ";
    value_to_yaml(msg.vertical_alignment_out_of_range, out);
    out << "\n";
  }

  // member: horizontal_alignment_out_of_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_alignment_out_of_range: ";
    value_to_yaml(msg.horizontal_alignment_out_of_range, out);
    out << "\n";
  }

  // member: factory_alignment_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "factory_alignment_mode: ";
    value_to_yaml(msg.factory_alignment_mode, out);
    out << "\n";
  }

  // member: battery_low_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_low_fault: ";
    value_to_yaml(msg.battery_low_fault, out);
    out << "\n";
  }

  // member: battery_high_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_high_fault: ";
    value_to_yaml(msg.battery_high_fault, out);
    out << "\n";
  }

  // member: v_1p25_supply_out_of_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_1p25_supply_out_of_range: ";
    value_to_yaml(msg.v_1p25_supply_out_of_range, out);
    out << "\n";
  }

  // member: active_flt_latched_byte3_bit4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte3_bit4: ";
    value_to_yaml(msg.active_flt_latched_byte3_bit4, out);
    out << "\n";
  }

  // member: thermistor_out_of_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thermistor_out_of_range: ";
    value_to_yaml(msg.thermistor_out_of_range, out);
    out << "\n";
  }

  // member: v_3p3_dac_supply_out_of_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_3p3_dac_supply_out_of_range: ";
    value_to_yaml(msg.v_3p3_dac_supply_out_of_range, out);
    out << "\n";
  }

  // member: v_3p3_raw_supply_out_of_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_3p3_raw_supply_out_of_range: ";
    value_to_yaml(msg.v_3p3_raw_supply_out_of_range, out);
    out << "\n";
  }

  // member: v_5_supply_out_of_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_5_supply_out_of_range: ";
    value_to_yaml(msg.v_5_supply_out_of_range, out);
    out << "\n";
  }

  // member: transmitter_id_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmitter_id_fault: ";
    value_to_yaml(msg.transmitter_id_fault, out);
    out << "\n";
  }

  // member: active_flt_latched_byte2_bit6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte2_bit6: ";
    value_to_yaml(msg.active_flt_latched_byte2_bit6, out);
    out << "\n";
  }

  // member: active_flt_latched_byte2_bit5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte2_bit5: ";
    value_to_yaml(msg.active_flt_latched_byte2_bit5, out);
    out << "\n";
  }

  // member: active_flt_latched_byte2_bit4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte2_bit4: ";
    value_to_yaml(msg.active_flt_latched_byte2_bit4, out);
    out << "\n";
  }

  // member: active_flt_latched_byte2_bit3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte2_bit3: ";
    value_to_yaml(msg.active_flt_latched_byte2_bit3, out);
    out << "\n";
  }

  // member: active_flt_latched_byte2_bit2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte2_bit2: ";
    value_to_yaml(msg.active_flt_latched_byte2_bit2, out);
    out << "\n";
  }

  // member: pcan_missing_msg_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pcan_missing_msg_fault: ";
    value_to_yaml(msg.pcan_missing_msg_fault, out);
    out << "\n";
  }

  // member: pcan_bus_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pcan_bus_off: ";
    value_to_yaml(msg.pcan_bus_off, out);
    out << "\n";
  }

  // member: active_flt_latched_byte1_bit7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte1_bit7: ";
    value_to_yaml(msg.active_flt_latched_byte1_bit7, out);
    out << "\n";
  }

  // member: active_flt_latched_byte1_bit6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte1_bit6: ";
    value_to_yaml(msg.active_flt_latched_byte1_bit6, out);
    out << "\n";
  }

  // member: instruction_set_check_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instruction_set_check_fault: ";
    value_to_yaml(msg.instruction_set_check_fault, out);
    out << "\n";
  }

  // member: stack_overflow_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stack_overflow_fault: ";
    value_to_yaml(msg.stack_overflow_fault, out);
    out << "\n";
  }

  // member: watchdog_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "watchdog_fault: ";
    value_to_yaml(msg.watchdog_fault, out);
    out << "\n";
  }

  // member: pll_lock_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pll_lock_fault: ";
    value_to_yaml(msg.pll_lock_fault, out);
    out << "\n";
  }

  // member: active_flt_latched_byte1_bit1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte1_bit1: ";
    value_to_yaml(msg.active_flt_latched_byte1_bit1, out);
    out << "\n";
  }

  // member: ram_memory_test_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram_memory_test_fault: ";
    value_to_yaml(msg.ram_memory_test_fault, out);
    out << "\n";
  }

  // member: usc_validation_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usc_validation_fault: ";
    value_to_yaml(msg.usc_validation_fault, out);
    out << "\n";
  }

  // member: active_flt_latched_byte0_bit6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte0_bit6: ";
    value_to_yaml(msg.active_flt_latched_byte0_bit6, out);
    out << "\n";
  }

  // member: active_flt_latched_byte0_bit5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte0_bit5: ";
    value_to_yaml(msg.active_flt_latched_byte0_bit5, out);
    out << "\n";
  }

  // member: active_flt_latched_byte0_bit4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte0_bit4: ";
    value_to_yaml(msg.active_flt_latched_byte0_bit4, out);
    out << "\n";
  }

  // member: active_flt_latched_byte0_bit3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_flt_latched_byte0_bit3: ";
    value_to_yaml(msg.active_flt_latched_byte0_bit3, out);
    out << "\n";
  }

  // member: keep_alive_checksum_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keep_alive_checksum_fault: ";
    value_to_yaml(msg.keep_alive_checksum_fault, out);
    out << "\n";
  }

  // member: program_calibration_flash_checksum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "program_calibration_flash_checksum: ";
    value_to_yaml(msg.program_calibration_flash_checksum, out);
    out << "\n";
  }

  // member: application_flash_checksum_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "application_flash_checksum_fault: ";
    value_to_yaml(msg.application_flash_checksum_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_mrr_msgs::msg::ActiveFaultLatched1 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::ActiveFaultLatched1>()
{
  return "delphi_mrr_msgs::msg::ActiveFaultLatched1";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::ActiveFaultLatched1>()
{
  return "delphi_mrr_msgs/msg/ActiveFaultLatched1";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::ActiveFaultLatched1>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::ActiveFaultLatched1>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::ActiveFaultLatched1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__TRAITS_HPP_
