// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched1.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/active_fault_latched1__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_mrr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_mrr_msgs/msg/detail/active_fault_latched1__struct.h"
#include "delphi_mrr_msgs/msg/detail/active_fault_latched1__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_mrr_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_mrr_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_mrr_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ActiveFaultLatched1__ros_msg_type = delphi_mrr_msgs__msg__ActiveFaultLatched1;

static bool _ActiveFaultLatched1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActiveFaultLatched1__ros_msg_type * ros_message = static_cast<const _ActiveFaultLatched1__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: active_flt_latched_byte7_bit7
  {
    cdr << (ros_message->active_flt_latched_byte7_bit7 ? true : false);
  }

  // Field name: active_flt_latched_byte7_bit6
  {
    cdr << (ros_message->active_flt_latched_byte7_bit6 ? true : false);
  }

  // Field name: active_flt_latched_byte7_bit5
  {
    cdr << (ros_message->active_flt_latched_byte7_bit5 ? true : false);
  }

  // Field name: active_flt_latched_byte7_bit4
  {
    cdr << (ros_message->active_flt_latched_byte7_bit4 ? true : false);
  }

  // Field name: arm_to_dsp_chksum_fault
  {
    cdr << (ros_message->arm_to_dsp_chksum_fault ? true : false);
  }

  // Field name: dsp_to_arm_chksum_fault
  {
    cdr << (ros_message->dsp_to_arm_chksum_fault ? true : false);
  }

  // Field name: host_to_arm_chksum_fault
  {
    cdr << (ros_message->host_to_arm_chksum_fault ? true : false);
  }

  // Field name: arm_to_host_chksum_fault
  {
    cdr << (ros_message->arm_to_host_chksum_fault ? true : false);
  }

  // Field name: loop_bw_out_of_range
  {
    cdr << (ros_message->loop_bw_out_of_range ? true : false);
  }

  // Field name: dsp_overrun_fault
  {
    cdr << (ros_message->dsp_overrun_fault ? true : false);
  }

  // Field name: active_flt_latched_byte6_bit5
  {
    cdr << (ros_message->active_flt_latched_byte6_bit5 ? true : false);
  }

  // Field name: tuning_sensitivity_fault
  {
    cdr << (ros_message->tuning_sensitivity_fault ? true : false);
  }

  // Field name: saturated_tuning_freq_fault
  {
    cdr << (ros_message->saturated_tuning_freq_fault ? true : false);
  }

  // Field name: local_osc_power_fault
  {
    cdr << (ros_message->local_osc_power_fault ? true : false);
  }

  // Field name: transmitter_power_fault
  {
    cdr << (ros_message->transmitter_power_fault ? true : false);
  }

  // Field name: active_flt_latched_byte6_bit0
  {
    cdr << (ros_message->active_flt_latched_byte6_bit0 ? true : false);
  }

  // Field name: active_flt_latched_byte5_bit7
  {
    cdr << (ros_message->active_flt_latched_byte5_bit7 ? true : false);
  }

  // Field name: active_flt_latched_byte5_bit6
  {
    cdr << (ros_message->active_flt_latched_byte5_bit6 ? true : false);
  }

  // Field name: xcvr_device_spi_fault
  {
    cdr << (ros_message->xcvr_device_spi_fault ? true : false);
  }

  // Field name: freq_synthesizer_spi_fault
  {
    cdr << (ros_message->freq_synthesizer_spi_fault ? true : false);
  }

  // Field name: analog_converter_devic_spi_fault
  {
    cdr << (ros_message->analog_converter_devic_spi_fault ? true : false);
  }

  // Field name: side_lobe_blockage
  {
    cdr << (ros_message->side_lobe_blockage ? true : false);
  }

  // Field name: active_flt_latched_byte5_bit1
  {
    cdr << (ros_message->active_flt_latched_byte5_bit1 ? true : false);
  }

  // Field name: mnr_blocked
  {
    cdr << (ros_message->mnr_blocked ? true : false);
  }

  // Field name: ecu_temp_high_fault
  {
    cdr << (ros_message->ecu_temp_high_fault ? true : false);
  }

  // Field name: transmitter_temp_high_fault
  {
    cdr << (ros_message->transmitter_temp_high_fault ? true : false);
  }

  // Field name: alignment_routine_failed_fault
  {
    cdr << (ros_message->alignment_routine_failed_fault ? true : false);
  }

  // Field name: unreasonable_radar_data
  {
    cdr << (ros_message->unreasonable_radar_data ? true : false);
  }

  // Field name: microprocessor_temp_high_fault
  {
    cdr << (ros_message->microprocessor_temp_high_fault ? true : false);
  }

  // Field name: vertical_alignment_out_of_range
  {
    cdr << (ros_message->vertical_alignment_out_of_range ? true : false);
  }

  // Field name: horizontal_alignment_out_of_range
  {
    cdr << (ros_message->horizontal_alignment_out_of_range ? true : false);
  }

  // Field name: factory_alignment_mode
  {
    cdr << (ros_message->factory_alignment_mode ? true : false);
  }

  // Field name: battery_low_fault
  {
    cdr << (ros_message->battery_low_fault ? true : false);
  }

  // Field name: battery_high_fault
  {
    cdr << (ros_message->battery_high_fault ? true : false);
  }

  // Field name: v_1p25_supply_out_of_range
  {
    cdr << (ros_message->v_1p25_supply_out_of_range ? true : false);
  }

  // Field name: active_flt_latched_byte3_bit4
  {
    cdr << (ros_message->active_flt_latched_byte3_bit4 ? true : false);
  }

  // Field name: thermistor_out_of_range
  {
    cdr << (ros_message->thermistor_out_of_range ? true : false);
  }

  // Field name: v_3p3_dac_supply_out_of_range
  {
    cdr << (ros_message->v_3p3_dac_supply_out_of_range ? true : false);
  }

  // Field name: v_3p3_raw_supply_out_of_range
  {
    cdr << (ros_message->v_3p3_raw_supply_out_of_range ? true : false);
  }

  // Field name: v_5_supply_out_of_range
  {
    cdr << (ros_message->v_5_supply_out_of_range ? true : false);
  }

  // Field name: transmitter_id_fault
  {
    cdr << (ros_message->transmitter_id_fault ? true : false);
  }

  // Field name: active_flt_latched_byte2_bit6
  {
    cdr << (ros_message->active_flt_latched_byte2_bit6 ? true : false);
  }

  // Field name: active_flt_latched_byte2_bit5
  {
    cdr << (ros_message->active_flt_latched_byte2_bit5 ? true : false);
  }

  // Field name: active_flt_latched_byte2_bit4
  {
    cdr << (ros_message->active_flt_latched_byte2_bit4 ? true : false);
  }

  // Field name: active_flt_latched_byte2_bit3
  {
    cdr << (ros_message->active_flt_latched_byte2_bit3 ? true : false);
  }

  // Field name: active_flt_latched_byte2_bit2
  {
    cdr << (ros_message->active_flt_latched_byte2_bit2 ? true : false);
  }

  // Field name: pcan_missing_msg_fault
  {
    cdr << (ros_message->pcan_missing_msg_fault ? true : false);
  }

  // Field name: pcan_bus_off
  {
    cdr << (ros_message->pcan_bus_off ? true : false);
  }

  // Field name: active_flt_latched_byte1_bit7
  {
    cdr << (ros_message->active_flt_latched_byte1_bit7 ? true : false);
  }

  // Field name: active_flt_latched_byte1_bit6
  {
    cdr << (ros_message->active_flt_latched_byte1_bit6 ? true : false);
  }

  // Field name: instruction_set_check_fault
  {
    cdr << (ros_message->instruction_set_check_fault ? true : false);
  }

  // Field name: stack_overflow_fault
  {
    cdr << (ros_message->stack_overflow_fault ? true : false);
  }

  // Field name: watchdog_fault
  {
    cdr << (ros_message->watchdog_fault ? true : false);
  }

  // Field name: pll_lock_fault
  {
    cdr << (ros_message->pll_lock_fault ? true : false);
  }

  // Field name: active_flt_latched_byte1_bit1
  {
    cdr << (ros_message->active_flt_latched_byte1_bit1 ? true : false);
  }

  // Field name: ram_memory_test_fault
  {
    cdr << (ros_message->ram_memory_test_fault ? true : false);
  }

  // Field name: usc_validation_fault
  {
    cdr << (ros_message->usc_validation_fault ? true : false);
  }

  // Field name: active_flt_latched_byte0_bit6
  {
    cdr << (ros_message->active_flt_latched_byte0_bit6 ? true : false);
  }

  // Field name: active_flt_latched_byte0_bit5
  {
    cdr << (ros_message->active_flt_latched_byte0_bit5 ? true : false);
  }

  // Field name: active_flt_latched_byte0_bit4
  {
    cdr << (ros_message->active_flt_latched_byte0_bit4 ? true : false);
  }

  // Field name: active_flt_latched_byte0_bit3
  {
    cdr << (ros_message->active_flt_latched_byte0_bit3 ? true : false);
  }

  // Field name: keep_alive_checksum_fault
  {
    cdr << (ros_message->keep_alive_checksum_fault ? true : false);
  }

  // Field name: program_calibration_flash_checksum
  {
    cdr << (ros_message->program_calibration_flash_checksum ? true : false);
  }

  // Field name: application_flash_checksum_fault
  {
    cdr << (ros_message->application_flash_checksum_fault ? true : false);
  }

  return true;
}

static bool _ActiveFaultLatched1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActiveFaultLatched1__ros_msg_type * ros_message = static_cast<_ActiveFaultLatched1__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: active_flt_latched_byte7_bit7
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte7_bit7 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte7_bit6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte7_bit6 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte7_bit5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte7_bit5 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte7_bit4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte7_bit4 = tmp ? true : false;
  }

  // Field name: arm_to_dsp_chksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arm_to_dsp_chksum_fault = tmp ? true : false;
  }

  // Field name: dsp_to_arm_chksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_to_arm_chksum_fault = tmp ? true : false;
  }

  // Field name: host_to_arm_chksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->host_to_arm_chksum_fault = tmp ? true : false;
  }

  // Field name: arm_to_host_chksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arm_to_host_chksum_fault = tmp ? true : false;
  }

  // Field name: loop_bw_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->loop_bw_out_of_range = tmp ? true : false;
  }

  // Field name: dsp_overrun_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_overrun_fault = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte6_bit5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte6_bit5 = tmp ? true : false;
  }

  // Field name: tuning_sensitivity_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tuning_sensitivity_fault = tmp ? true : false;
  }

  // Field name: saturated_tuning_freq_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->saturated_tuning_freq_fault = tmp ? true : false;
  }

  // Field name: local_osc_power_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_osc_power_fault = tmp ? true : false;
  }

  // Field name: transmitter_power_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->transmitter_power_fault = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte6_bit0
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte6_bit0 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte5_bit7
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte5_bit7 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte5_bit6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte5_bit6 = tmp ? true : false;
  }

  // Field name: xcvr_device_spi_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->xcvr_device_spi_fault = tmp ? true : false;
  }

  // Field name: freq_synthesizer_spi_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->freq_synthesizer_spi_fault = tmp ? true : false;
  }

  // Field name: analog_converter_devic_spi_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->analog_converter_devic_spi_fault = tmp ? true : false;
  }

  // Field name: side_lobe_blockage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->side_lobe_blockage = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte5_bit1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte5_bit1 = tmp ? true : false;
  }

  // Field name: mnr_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mnr_blocked = tmp ? true : false;
  }

  // Field name: ecu_temp_high_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ecu_temp_high_fault = tmp ? true : false;
  }

  // Field name: transmitter_temp_high_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->transmitter_temp_high_fault = tmp ? true : false;
  }

  // Field name: alignment_routine_failed_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alignment_routine_failed_fault = tmp ? true : false;
  }

  // Field name: unreasonable_radar_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->unreasonable_radar_data = tmp ? true : false;
  }

  // Field name: microprocessor_temp_high_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->microprocessor_temp_high_fault = tmp ? true : false;
  }

  // Field name: vertical_alignment_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vertical_alignment_out_of_range = tmp ? true : false;
  }

  // Field name: horizontal_alignment_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->horizontal_alignment_out_of_range = tmp ? true : false;
  }

  // Field name: factory_alignment_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->factory_alignment_mode = tmp ? true : false;
  }

  // Field name: battery_low_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->battery_low_fault = tmp ? true : false;
  }

  // Field name: battery_high_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->battery_high_fault = tmp ? true : false;
  }

  // Field name: v_1p25_supply_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->v_1p25_supply_out_of_range = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte3_bit4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte3_bit4 = tmp ? true : false;
  }

  // Field name: thermistor_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->thermistor_out_of_range = tmp ? true : false;
  }

  // Field name: v_3p3_dac_supply_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->v_3p3_dac_supply_out_of_range = tmp ? true : false;
  }

  // Field name: v_3p3_raw_supply_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->v_3p3_raw_supply_out_of_range = tmp ? true : false;
  }

  // Field name: v_5_supply_out_of_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->v_5_supply_out_of_range = tmp ? true : false;
  }

  // Field name: transmitter_id_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->transmitter_id_fault = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte2_bit6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte2_bit6 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte2_bit5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte2_bit5 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte2_bit4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte2_bit4 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte2_bit3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte2_bit3 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte2_bit2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte2_bit2 = tmp ? true : false;
  }

  // Field name: pcan_missing_msg_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pcan_missing_msg_fault = tmp ? true : false;
  }

  // Field name: pcan_bus_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pcan_bus_off = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte1_bit7
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte1_bit7 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte1_bit6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte1_bit6 = tmp ? true : false;
  }

  // Field name: instruction_set_check_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->instruction_set_check_fault = tmp ? true : false;
  }

  // Field name: stack_overflow_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stack_overflow_fault = tmp ? true : false;
  }

  // Field name: watchdog_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->watchdog_fault = tmp ? true : false;
  }

  // Field name: pll_lock_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pll_lock_fault = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte1_bit1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte1_bit1 = tmp ? true : false;
  }

  // Field name: ram_memory_test_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ram_memory_test_fault = tmp ? true : false;
  }

  // Field name: usc_validation_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->usc_validation_fault = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte0_bit6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte0_bit6 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte0_bit5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte0_bit5 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte0_bit4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte0_bit4 = tmp ? true : false;
  }

  // Field name: active_flt_latched_byte0_bit3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active_flt_latched_byte0_bit3 = tmp ? true : false;
  }

  // Field name: keep_alive_checksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->keep_alive_checksum_fault = tmp ? true : false;
  }

  // Field name: program_calibration_flash_checksum
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->program_calibration_flash_checksum = tmp ? true : false;
  }

  // Field name: application_flash_checksum_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->application_flash_checksum_fault = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t get_serialized_size_delphi_mrr_msgs__msg__ActiveFaultLatched1(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActiveFaultLatched1__ros_msg_type * ros_message = static_cast<const _ActiveFaultLatched1__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name active_flt_latched_byte7_bit7
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte7_bit7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte7_bit6
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte7_bit6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte7_bit5
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte7_bit5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte7_bit4
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte7_bit4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arm_to_dsp_chksum_fault
  {
    size_t item_size = sizeof(ros_message->arm_to_dsp_chksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_to_arm_chksum_fault
  {
    size_t item_size = sizeof(ros_message->dsp_to_arm_chksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name host_to_arm_chksum_fault
  {
    size_t item_size = sizeof(ros_message->host_to_arm_chksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arm_to_host_chksum_fault
  {
    size_t item_size = sizeof(ros_message->arm_to_host_chksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loop_bw_out_of_range
  {
    size_t item_size = sizeof(ros_message->loop_bw_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_overrun_fault
  {
    size_t item_size = sizeof(ros_message->dsp_overrun_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte6_bit5
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte6_bit5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tuning_sensitivity_fault
  {
    size_t item_size = sizeof(ros_message->tuning_sensitivity_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name saturated_tuning_freq_fault
  {
    size_t item_size = sizeof(ros_message->saturated_tuning_freq_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_osc_power_fault
  {
    size_t item_size = sizeof(ros_message->local_osc_power_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transmitter_power_fault
  {
    size_t item_size = sizeof(ros_message->transmitter_power_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte6_bit0
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte6_bit0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte5_bit7
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte5_bit7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte5_bit6
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte5_bit6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name xcvr_device_spi_fault
  {
    size_t item_size = sizeof(ros_message->xcvr_device_spi_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name freq_synthesizer_spi_fault
  {
    size_t item_size = sizeof(ros_message->freq_synthesizer_spi_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name analog_converter_devic_spi_fault
  {
    size_t item_size = sizeof(ros_message->analog_converter_devic_spi_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name side_lobe_blockage
  {
    size_t item_size = sizeof(ros_message->side_lobe_blockage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte5_bit1
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte5_bit1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mnr_blocked
  {
    size_t item_size = sizeof(ros_message->mnr_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecu_temp_high_fault
  {
    size_t item_size = sizeof(ros_message->ecu_temp_high_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transmitter_temp_high_fault
  {
    size_t item_size = sizeof(ros_message->transmitter_temp_high_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alignment_routine_failed_fault
  {
    size_t item_size = sizeof(ros_message->alignment_routine_failed_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name unreasonable_radar_data
  {
    size_t item_size = sizeof(ros_message->unreasonable_radar_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name microprocessor_temp_high_fault
  {
    size_t item_size = sizeof(ros_message->microprocessor_temp_high_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_alignment_out_of_range
  {
    size_t item_size = sizeof(ros_message->vertical_alignment_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horizontal_alignment_out_of_range
  {
    size_t item_size = sizeof(ros_message->horizontal_alignment_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name factory_alignment_mode
  {
    size_t item_size = sizeof(ros_message->factory_alignment_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_low_fault
  {
    size_t item_size = sizeof(ros_message->battery_low_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_high_fault
  {
    size_t item_size = sizeof(ros_message->battery_high_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_1p25_supply_out_of_range
  {
    size_t item_size = sizeof(ros_message->v_1p25_supply_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte3_bit4
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte3_bit4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thermistor_out_of_range
  {
    size_t item_size = sizeof(ros_message->thermistor_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_3p3_dac_supply_out_of_range
  {
    size_t item_size = sizeof(ros_message->v_3p3_dac_supply_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_3p3_raw_supply_out_of_range
  {
    size_t item_size = sizeof(ros_message->v_3p3_raw_supply_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_5_supply_out_of_range
  {
    size_t item_size = sizeof(ros_message->v_5_supply_out_of_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transmitter_id_fault
  {
    size_t item_size = sizeof(ros_message->transmitter_id_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte2_bit6
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte2_bit6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte2_bit5
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte2_bit5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte2_bit4
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte2_bit4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte2_bit3
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte2_bit3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte2_bit2
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte2_bit2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pcan_missing_msg_fault
  {
    size_t item_size = sizeof(ros_message->pcan_missing_msg_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pcan_bus_off
  {
    size_t item_size = sizeof(ros_message->pcan_bus_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte1_bit7
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte1_bit7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte1_bit6
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte1_bit6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name instruction_set_check_fault
  {
    size_t item_size = sizeof(ros_message->instruction_set_check_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stack_overflow_fault
  {
    size_t item_size = sizeof(ros_message->stack_overflow_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name watchdog_fault
  {
    size_t item_size = sizeof(ros_message->watchdog_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pll_lock_fault
  {
    size_t item_size = sizeof(ros_message->pll_lock_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte1_bit1
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte1_bit1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ram_memory_test_fault
  {
    size_t item_size = sizeof(ros_message->ram_memory_test_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name usc_validation_fault
  {
    size_t item_size = sizeof(ros_message->usc_validation_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte0_bit6
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte0_bit6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte0_bit5
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte0_bit5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte0_bit4
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte0_bit4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_flt_latched_byte0_bit3
  {
    size_t item_size = sizeof(ros_message->active_flt_latched_byte0_bit3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name keep_alive_checksum_fault
  {
    size_t item_size = sizeof(ros_message->keep_alive_checksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name program_calibration_flash_checksum
  {
    size_t item_size = sizeof(ros_message->program_calibration_flash_checksum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name application_flash_checksum_fault
  {
    size_t item_size = sizeof(ros_message->application_flash_checksum_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ActiveFaultLatched1__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_mrr_msgs__msg__ActiveFaultLatched1(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t max_serialized_size_delphi_mrr_msgs__msg__ActiveFaultLatched1(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: active_flt_latched_byte7_bit7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte7_bit6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte7_bit5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte7_bit4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arm_to_dsp_chksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_to_arm_chksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: host_to_arm_chksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arm_to_host_chksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: loop_bw_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_overrun_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte6_bit5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tuning_sensitivity_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: saturated_tuning_freq_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_osc_power_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: transmitter_power_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte6_bit0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte5_bit7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte5_bit6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: xcvr_device_spi_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: freq_synthesizer_spi_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: analog_converter_devic_spi_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: side_lobe_blockage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte5_bit1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mnr_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ecu_temp_high_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: transmitter_temp_high_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alignment_routine_failed_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: unreasonable_radar_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: microprocessor_temp_high_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vertical_alignment_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: horizontal_alignment_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: factory_alignment_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_low_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_high_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: v_1p25_supply_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte3_bit4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: thermistor_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: v_3p3_dac_supply_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: v_3p3_raw_supply_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: v_5_supply_out_of_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: transmitter_id_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte2_bit6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte2_bit5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte2_bit4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte2_bit3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte2_bit2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pcan_missing_msg_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pcan_bus_off
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte1_bit7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte1_bit6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: instruction_set_check_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stack_overflow_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: watchdog_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pll_lock_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte1_bit1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ram_memory_test_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: usc_validation_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte0_bit6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte0_bit5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte0_bit4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_flt_latched_byte0_bit3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: keep_alive_checksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: program_calibration_flash_checksum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: application_flash_checksum_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ActiveFaultLatched1__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_mrr_msgs__msg__ActiveFaultLatched1(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActiveFaultLatched1 = {
  "delphi_mrr_msgs::msg",
  "ActiveFaultLatched1",
  _ActiveFaultLatched1__cdr_serialize,
  _ActiveFaultLatched1__cdr_deserialize,
  _ActiveFaultLatched1__get_serialized_size,
  _ActiveFaultLatched1__max_serialized_size
};

static rosidl_message_type_support_t _ActiveFaultLatched1__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActiveFaultLatched1,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_mrr_msgs, msg, ActiveFaultLatched1)() {
  return &_ActiveFaultLatched1__type_support;
}

#if defined(__cplusplus)
}
#endif
