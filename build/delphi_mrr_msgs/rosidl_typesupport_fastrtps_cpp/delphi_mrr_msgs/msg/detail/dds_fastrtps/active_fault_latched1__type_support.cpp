// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched1.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/active_fault_latched1__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_mrr_msgs/msg/detail/active_fault_latched1__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace delphi_mrr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
cdr_serialize(
  const delphi_mrr_msgs::msg::ActiveFaultLatched1 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: active_flt_latched_byte7_bit7
  cdr << (ros_message.active_flt_latched_byte7_bit7 ? true : false);
  // Member: active_flt_latched_byte7_bit6
  cdr << (ros_message.active_flt_latched_byte7_bit6 ? true : false);
  // Member: active_flt_latched_byte7_bit5
  cdr << (ros_message.active_flt_latched_byte7_bit5 ? true : false);
  // Member: active_flt_latched_byte7_bit4
  cdr << (ros_message.active_flt_latched_byte7_bit4 ? true : false);
  // Member: arm_to_dsp_chksum_fault
  cdr << (ros_message.arm_to_dsp_chksum_fault ? true : false);
  // Member: dsp_to_arm_chksum_fault
  cdr << (ros_message.dsp_to_arm_chksum_fault ? true : false);
  // Member: host_to_arm_chksum_fault
  cdr << (ros_message.host_to_arm_chksum_fault ? true : false);
  // Member: arm_to_host_chksum_fault
  cdr << (ros_message.arm_to_host_chksum_fault ? true : false);
  // Member: loop_bw_out_of_range
  cdr << (ros_message.loop_bw_out_of_range ? true : false);
  // Member: dsp_overrun_fault
  cdr << (ros_message.dsp_overrun_fault ? true : false);
  // Member: active_flt_latched_byte6_bit5
  cdr << (ros_message.active_flt_latched_byte6_bit5 ? true : false);
  // Member: tuning_sensitivity_fault
  cdr << (ros_message.tuning_sensitivity_fault ? true : false);
  // Member: saturated_tuning_freq_fault
  cdr << (ros_message.saturated_tuning_freq_fault ? true : false);
  // Member: local_osc_power_fault
  cdr << (ros_message.local_osc_power_fault ? true : false);
  // Member: transmitter_power_fault
  cdr << (ros_message.transmitter_power_fault ? true : false);
  // Member: active_flt_latched_byte6_bit0
  cdr << (ros_message.active_flt_latched_byte6_bit0 ? true : false);
  // Member: active_flt_latched_byte5_bit7
  cdr << (ros_message.active_flt_latched_byte5_bit7 ? true : false);
  // Member: active_flt_latched_byte5_bit6
  cdr << (ros_message.active_flt_latched_byte5_bit6 ? true : false);
  // Member: xcvr_device_spi_fault
  cdr << (ros_message.xcvr_device_spi_fault ? true : false);
  // Member: freq_synthesizer_spi_fault
  cdr << (ros_message.freq_synthesizer_spi_fault ? true : false);
  // Member: analog_converter_devic_spi_fault
  cdr << (ros_message.analog_converter_devic_spi_fault ? true : false);
  // Member: side_lobe_blockage
  cdr << (ros_message.side_lobe_blockage ? true : false);
  // Member: active_flt_latched_byte5_bit1
  cdr << (ros_message.active_flt_latched_byte5_bit1 ? true : false);
  // Member: mnr_blocked
  cdr << (ros_message.mnr_blocked ? true : false);
  // Member: ecu_temp_high_fault
  cdr << (ros_message.ecu_temp_high_fault ? true : false);
  // Member: transmitter_temp_high_fault
  cdr << (ros_message.transmitter_temp_high_fault ? true : false);
  // Member: alignment_routine_failed_fault
  cdr << (ros_message.alignment_routine_failed_fault ? true : false);
  // Member: unreasonable_radar_data
  cdr << (ros_message.unreasonable_radar_data ? true : false);
  // Member: microprocessor_temp_high_fault
  cdr << (ros_message.microprocessor_temp_high_fault ? true : false);
  // Member: vertical_alignment_out_of_range
  cdr << (ros_message.vertical_alignment_out_of_range ? true : false);
  // Member: horizontal_alignment_out_of_range
  cdr << (ros_message.horizontal_alignment_out_of_range ? true : false);
  // Member: factory_alignment_mode
  cdr << (ros_message.factory_alignment_mode ? true : false);
  // Member: battery_low_fault
  cdr << (ros_message.battery_low_fault ? true : false);
  // Member: battery_high_fault
  cdr << (ros_message.battery_high_fault ? true : false);
  // Member: v_1p25_supply_out_of_range
  cdr << (ros_message.v_1p25_supply_out_of_range ? true : false);
  // Member: active_flt_latched_byte3_bit4
  cdr << (ros_message.active_flt_latched_byte3_bit4 ? true : false);
  // Member: thermistor_out_of_range
  cdr << (ros_message.thermistor_out_of_range ? true : false);
  // Member: v_3p3_dac_supply_out_of_range
  cdr << (ros_message.v_3p3_dac_supply_out_of_range ? true : false);
  // Member: v_3p3_raw_supply_out_of_range
  cdr << (ros_message.v_3p3_raw_supply_out_of_range ? true : false);
  // Member: v_5_supply_out_of_range
  cdr << (ros_message.v_5_supply_out_of_range ? true : false);
  // Member: transmitter_id_fault
  cdr << (ros_message.transmitter_id_fault ? true : false);
  // Member: active_flt_latched_byte2_bit6
  cdr << (ros_message.active_flt_latched_byte2_bit6 ? true : false);
  // Member: active_flt_latched_byte2_bit5
  cdr << (ros_message.active_flt_latched_byte2_bit5 ? true : false);
  // Member: active_flt_latched_byte2_bit4
  cdr << (ros_message.active_flt_latched_byte2_bit4 ? true : false);
  // Member: active_flt_latched_byte2_bit3
  cdr << (ros_message.active_flt_latched_byte2_bit3 ? true : false);
  // Member: active_flt_latched_byte2_bit2
  cdr << (ros_message.active_flt_latched_byte2_bit2 ? true : false);
  // Member: pcan_missing_msg_fault
  cdr << (ros_message.pcan_missing_msg_fault ? true : false);
  // Member: pcan_bus_off
  cdr << (ros_message.pcan_bus_off ? true : false);
  // Member: active_flt_latched_byte1_bit7
  cdr << (ros_message.active_flt_latched_byte1_bit7 ? true : false);
  // Member: active_flt_latched_byte1_bit6
  cdr << (ros_message.active_flt_latched_byte1_bit6 ? true : false);
  // Member: instruction_set_check_fault
  cdr << (ros_message.instruction_set_check_fault ? true : false);
  // Member: stack_overflow_fault
  cdr << (ros_message.stack_overflow_fault ? true : false);
  // Member: watchdog_fault
  cdr << (ros_message.watchdog_fault ? true : false);
  // Member: pll_lock_fault
  cdr << (ros_message.pll_lock_fault ? true : false);
  // Member: active_flt_latched_byte1_bit1
  cdr << (ros_message.active_flt_latched_byte1_bit1 ? true : false);
  // Member: ram_memory_test_fault
  cdr << (ros_message.ram_memory_test_fault ? true : false);
  // Member: usc_validation_fault
  cdr << (ros_message.usc_validation_fault ? true : false);
  // Member: active_flt_latched_byte0_bit6
  cdr << (ros_message.active_flt_latched_byte0_bit6 ? true : false);
  // Member: active_flt_latched_byte0_bit5
  cdr << (ros_message.active_flt_latched_byte0_bit5 ? true : false);
  // Member: active_flt_latched_byte0_bit4
  cdr << (ros_message.active_flt_latched_byte0_bit4 ? true : false);
  // Member: active_flt_latched_byte0_bit3
  cdr << (ros_message.active_flt_latched_byte0_bit3 ? true : false);
  // Member: keep_alive_checksum_fault
  cdr << (ros_message.keep_alive_checksum_fault ? true : false);
  // Member: program_calibration_flash_checksum
  cdr << (ros_message.program_calibration_flash_checksum ? true : false);
  // Member: application_flash_checksum_fault
  cdr << (ros_message.application_flash_checksum_fault ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_mrr_msgs::msg::ActiveFaultLatched1 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: active_flt_latched_byte7_bit7
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte7_bit7 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte7_bit6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte7_bit6 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte7_bit5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte7_bit5 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte7_bit4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte7_bit4 = tmp ? true : false;
  }

  // Member: arm_to_dsp_chksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arm_to_dsp_chksum_fault = tmp ? true : false;
  }

  // Member: dsp_to_arm_chksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_to_arm_chksum_fault = tmp ? true : false;
  }

  // Member: host_to_arm_chksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.host_to_arm_chksum_fault = tmp ? true : false;
  }

  // Member: arm_to_host_chksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arm_to_host_chksum_fault = tmp ? true : false;
  }

  // Member: loop_bw_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.loop_bw_out_of_range = tmp ? true : false;
  }

  // Member: dsp_overrun_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_overrun_fault = tmp ? true : false;
  }

  // Member: active_flt_latched_byte6_bit5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte6_bit5 = tmp ? true : false;
  }

  // Member: tuning_sensitivity_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tuning_sensitivity_fault = tmp ? true : false;
  }

  // Member: saturated_tuning_freq_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.saturated_tuning_freq_fault = tmp ? true : false;
  }

  // Member: local_osc_power_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_osc_power_fault = tmp ? true : false;
  }

  // Member: transmitter_power_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.transmitter_power_fault = tmp ? true : false;
  }

  // Member: active_flt_latched_byte6_bit0
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte6_bit0 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte5_bit7
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte5_bit7 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte5_bit6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte5_bit6 = tmp ? true : false;
  }

  // Member: xcvr_device_spi_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.xcvr_device_spi_fault = tmp ? true : false;
  }

  // Member: freq_synthesizer_spi_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.freq_synthesizer_spi_fault = tmp ? true : false;
  }

  // Member: analog_converter_devic_spi_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.analog_converter_devic_spi_fault = tmp ? true : false;
  }

  // Member: side_lobe_blockage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.side_lobe_blockage = tmp ? true : false;
  }

  // Member: active_flt_latched_byte5_bit1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte5_bit1 = tmp ? true : false;
  }

  // Member: mnr_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mnr_blocked = tmp ? true : false;
  }

  // Member: ecu_temp_high_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ecu_temp_high_fault = tmp ? true : false;
  }

  // Member: transmitter_temp_high_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.transmitter_temp_high_fault = tmp ? true : false;
  }

  // Member: alignment_routine_failed_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.alignment_routine_failed_fault = tmp ? true : false;
  }

  // Member: unreasonable_radar_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.unreasonable_radar_data = tmp ? true : false;
  }

  // Member: microprocessor_temp_high_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.microprocessor_temp_high_fault = tmp ? true : false;
  }

  // Member: vertical_alignment_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vertical_alignment_out_of_range = tmp ? true : false;
  }

  // Member: horizontal_alignment_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.horizontal_alignment_out_of_range = tmp ? true : false;
  }

  // Member: factory_alignment_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.factory_alignment_mode = tmp ? true : false;
  }

  // Member: battery_low_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.battery_low_fault = tmp ? true : false;
  }

  // Member: battery_high_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.battery_high_fault = tmp ? true : false;
  }

  // Member: v_1p25_supply_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.v_1p25_supply_out_of_range = tmp ? true : false;
  }

  // Member: active_flt_latched_byte3_bit4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte3_bit4 = tmp ? true : false;
  }

  // Member: thermistor_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.thermistor_out_of_range = tmp ? true : false;
  }

  // Member: v_3p3_dac_supply_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.v_3p3_dac_supply_out_of_range = tmp ? true : false;
  }

  // Member: v_3p3_raw_supply_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.v_3p3_raw_supply_out_of_range = tmp ? true : false;
  }

  // Member: v_5_supply_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.v_5_supply_out_of_range = tmp ? true : false;
  }

  // Member: transmitter_id_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.transmitter_id_fault = tmp ? true : false;
  }

  // Member: active_flt_latched_byte2_bit6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte2_bit6 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte2_bit5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte2_bit5 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte2_bit4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte2_bit4 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte2_bit3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte2_bit3 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte2_bit2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte2_bit2 = tmp ? true : false;
  }

  // Member: pcan_missing_msg_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pcan_missing_msg_fault = tmp ? true : false;
  }

  // Member: pcan_bus_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pcan_bus_off = tmp ? true : false;
  }

  // Member: active_flt_latched_byte1_bit7
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte1_bit7 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte1_bit6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte1_bit6 = tmp ? true : false;
  }

  // Member: instruction_set_check_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.instruction_set_check_fault = tmp ? true : false;
  }

  // Member: stack_overflow_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stack_overflow_fault = tmp ? true : false;
  }

  // Member: watchdog_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.watchdog_fault = tmp ? true : false;
  }

  // Member: pll_lock_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pll_lock_fault = tmp ? true : false;
  }

  // Member: active_flt_latched_byte1_bit1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte1_bit1 = tmp ? true : false;
  }

  // Member: ram_memory_test_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ram_memory_test_fault = tmp ? true : false;
  }

  // Member: usc_validation_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.usc_validation_fault = tmp ? true : false;
  }

  // Member: active_flt_latched_byte0_bit6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte0_bit6 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte0_bit5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte0_bit5 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte0_bit4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte0_bit4 = tmp ? true : false;
  }

  // Member: active_flt_latched_byte0_bit3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active_flt_latched_byte0_bit3 = tmp ? true : false;
  }

  // Member: keep_alive_checksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.keep_alive_checksum_fault = tmp ? true : false;
  }

  // Member: program_calibration_flash_checksum
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.program_calibration_flash_checksum = tmp ? true : false;
  }

  // Member: application_flash_checksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.application_flash_checksum_fault = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
get_serialized_size(
  const delphi_mrr_msgs::msg::ActiveFaultLatched1 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: active_flt_latched_byte7_bit7
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte7_bit7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte7_bit6
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte7_bit6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte7_bit5
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte7_bit5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte7_bit4
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte7_bit4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arm_to_dsp_chksum_fault
  {
    size_t item_size = sizeof(ros_message.arm_to_dsp_chksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_to_arm_chksum_fault
  {
    size_t item_size = sizeof(ros_message.dsp_to_arm_chksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: host_to_arm_chksum_fault
  {
    size_t item_size = sizeof(ros_message.host_to_arm_chksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arm_to_host_chksum_fault
  {
    size_t item_size = sizeof(ros_message.arm_to_host_chksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loop_bw_out_of_range
  {
    size_t item_size = sizeof(ros_message.loop_bw_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_overrun_fault
  {
    size_t item_size = sizeof(ros_message.dsp_overrun_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte6_bit5
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte6_bit5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tuning_sensitivity_fault
  {
    size_t item_size = sizeof(ros_message.tuning_sensitivity_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: saturated_tuning_freq_fault
  {
    size_t item_size = sizeof(ros_message.saturated_tuning_freq_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_osc_power_fault
  {
    size_t item_size = sizeof(ros_message.local_osc_power_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transmitter_power_fault
  {
    size_t item_size = sizeof(ros_message.transmitter_power_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte6_bit0
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte6_bit0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte5_bit7
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte5_bit7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte5_bit6
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte5_bit6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: xcvr_device_spi_fault
  {
    size_t item_size = sizeof(ros_message.xcvr_device_spi_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: freq_synthesizer_spi_fault
  {
    size_t item_size = sizeof(ros_message.freq_synthesizer_spi_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_converter_devic_spi_fault
  {
    size_t item_size = sizeof(ros_message.analog_converter_devic_spi_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: side_lobe_blockage
  {
    size_t item_size = sizeof(ros_message.side_lobe_blockage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte5_bit1
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte5_bit1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mnr_blocked
  {
    size_t item_size = sizeof(ros_message.mnr_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecu_temp_high_fault
  {
    size_t item_size = sizeof(ros_message.ecu_temp_high_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transmitter_temp_high_fault
  {
    size_t item_size = sizeof(ros_message.transmitter_temp_high_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alignment_routine_failed_fault
  {
    size_t item_size = sizeof(ros_message.alignment_routine_failed_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: unreasonable_radar_data
  {
    size_t item_size = sizeof(ros_message.unreasonable_radar_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: microprocessor_temp_high_fault
  {
    size_t item_size = sizeof(ros_message.microprocessor_temp_high_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vertical_alignment_out_of_range
  {
    size_t item_size = sizeof(ros_message.vertical_alignment_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: horizontal_alignment_out_of_range
  {
    size_t item_size = sizeof(ros_message.horizontal_alignment_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: factory_alignment_mode
  {
    size_t item_size = sizeof(ros_message.factory_alignment_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_low_fault
  {
    size_t item_size = sizeof(ros_message.battery_low_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_high_fault
  {
    size_t item_size = sizeof(ros_message.battery_high_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v_1p25_supply_out_of_range
  {
    size_t item_size = sizeof(ros_message.v_1p25_supply_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte3_bit4
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte3_bit4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thermistor_out_of_range
  {
    size_t item_size = sizeof(ros_message.thermistor_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v_3p3_dac_supply_out_of_range
  {
    size_t item_size = sizeof(ros_message.v_3p3_dac_supply_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v_3p3_raw_supply_out_of_range
  {
    size_t item_size = sizeof(ros_message.v_3p3_raw_supply_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v_5_supply_out_of_range
  {
    size_t item_size = sizeof(ros_message.v_5_supply_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transmitter_id_fault
  {
    size_t item_size = sizeof(ros_message.transmitter_id_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte2_bit6
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte2_bit6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte2_bit5
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte2_bit5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte2_bit4
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte2_bit4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte2_bit3
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte2_bit3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte2_bit2
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte2_bit2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pcan_missing_msg_fault
  {
    size_t item_size = sizeof(ros_message.pcan_missing_msg_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pcan_bus_off
  {
    size_t item_size = sizeof(ros_message.pcan_bus_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte1_bit7
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte1_bit7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte1_bit6
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte1_bit6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: instruction_set_check_fault
  {
    size_t item_size = sizeof(ros_message.instruction_set_check_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stack_overflow_fault
  {
    size_t item_size = sizeof(ros_message.stack_overflow_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: watchdog_fault
  {
    size_t item_size = sizeof(ros_message.watchdog_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pll_lock_fault
  {
    size_t item_size = sizeof(ros_message.pll_lock_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte1_bit1
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte1_bit1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ram_memory_test_fault
  {
    size_t item_size = sizeof(ros_message.ram_memory_test_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: usc_validation_fault
  {
    size_t item_size = sizeof(ros_message.usc_validation_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte0_bit6
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte0_bit6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte0_bit5
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte0_bit5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte0_bit4
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte0_bit4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_flt_latched_byte0_bit3
  {
    size_t item_size = sizeof(ros_message.active_flt_latched_byte0_bit3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: keep_alive_checksum_fault
  {
    size_t item_size = sizeof(ros_message.keep_alive_checksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: program_calibration_flash_checksum
  {
    size_t item_size = sizeof(ros_message.program_calibration_flash_checksum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: application_flash_checksum_fault
  {
    size_t item_size = sizeof(ros_message.application_flash_checksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
max_serialized_size_ActiveFaultLatched1(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: active_flt_latched_byte7_bit7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte7_bit6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte7_bit5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte7_bit4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arm_to_dsp_chksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_to_arm_chksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: host_to_arm_chksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arm_to_host_chksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: loop_bw_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_overrun_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte6_bit5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tuning_sensitivity_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: saturated_tuning_freq_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_osc_power_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: transmitter_power_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte6_bit0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte5_bit7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte5_bit6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: xcvr_device_spi_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: freq_synthesizer_spi_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_converter_devic_spi_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: side_lobe_blockage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte5_bit1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mnr_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ecu_temp_high_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: transmitter_temp_high_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: alignment_routine_failed_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: unreasonable_radar_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: microprocessor_temp_high_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vertical_alignment_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: horizontal_alignment_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: factory_alignment_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_low_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_high_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: v_1p25_supply_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte3_bit4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: thermistor_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: v_3p3_dac_supply_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: v_3p3_raw_supply_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: v_5_supply_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: transmitter_id_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte2_bit6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte2_bit5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte2_bit4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte2_bit3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte2_bit2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pcan_missing_msg_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pcan_bus_off
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte1_bit7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte1_bit6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: instruction_set_check_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stack_overflow_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: watchdog_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pll_lock_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte1_bit1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ram_memory_test_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: usc_validation_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte0_bit6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte0_bit5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte0_bit4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_flt_latched_byte0_bit3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: keep_alive_checksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: program_calibration_flash_checksum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: application_flash_checksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ActiveFaultLatched1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_mrr_msgs::msg::ActiveFaultLatched1 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ActiveFaultLatched1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_mrr_msgs::msg::ActiveFaultLatched1 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ActiveFaultLatched1__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_mrr_msgs::msg::ActiveFaultLatched1 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ActiveFaultLatched1__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ActiveFaultLatched1(full_bounded, 0);
}

static message_type_support_callbacks_t _ActiveFaultLatched1__callbacks = {
  "delphi_mrr_msgs::msg",
  "ActiveFaultLatched1",
  _ActiveFaultLatched1__cdr_serialize,
  _ActiveFaultLatched1__cdr_deserialize,
  _ActiveFaultLatched1__get_serialized_size,
  _ActiveFaultLatched1__max_serialized_size
};

static rosidl_message_type_support_t _ActiveFaultLatched1__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ActiveFaultLatched1__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace delphi_mrr_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_delphi_mrr_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<delphi_mrr_msgs::msg::ActiveFaultLatched1>()
{
  return &delphi_mrr_msgs::msg::typesupport_fastrtps_cpp::_ActiveFaultLatched1__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_mrr_msgs, msg, ActiveFaultLatched1)() {
  return &delphi_mrr_msgs::msg::typesupport_fastrtps_cpp::_ActiveFaultLatched1__handle;
}

#ifdef __cplusplus
}
#endif
