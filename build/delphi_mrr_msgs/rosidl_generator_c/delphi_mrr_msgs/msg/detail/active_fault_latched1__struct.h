// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ActiveFaultLatched1 in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__ActiveFaultLatched1
{
  std_msgs__msg__Header header;
  bool active_flt_latched_byte7_bit7;
  bool active_flt_latched_byte7_bit6;
  bool active_flt_latched_byte7_bit5;
  bool active_flt_latched_byte7_bit4;
  bool arm_to_dsp_chksum_fault;
  bool dsp_to_arm_chksum_fault;
  bool host_to_arm_chksum_fault;
  bool arm_to_host_chksum_fault;
  bool loop_bw_out_of_range;
  bool dsp_overrun_fault;
  bool active_flt_latched_byte6_bit5;
  bool tuning_sensitivity_fault;
  bool saturated_tuning_freq_fault;
  bool local_osc_power_fault;
  bool transmitter_power_fault;
  bool active_flt_latched_byte6_bit0;
  bool active_flt_latched_byte5_bit7;
  bool active_flt_latched_byte5_bit6;
  bool xcvr_device_spi_fault;
  bool freq_synthesizer_spi_fault;
  bool analog_converter_devic_spi_fault;
  bool side_lobe_blockage;
  bool active_flt_latched_byte5_bit1;
  bool mnr_blocked;
  bool ecu_temp_high_fault;
  bool transmitter_temp_high_fault;
  bool alignment_routine_failed_fault;
  bool unreasonable_radar_data;
  bool microprocessor_temp_high_fault;
  bool vertical_alignment_out_of_range;
  bool horizontal_alignment_out_of_range;
  bool factory_alignment_mode;
  bool battery_low_fault;
  bool battery_high_fault;
  bool v_1p25_supply_out_of_range;
  bool active_flt_latched_byte3_bit4;
  bool thermistor_out_of_range;
  bool v_3p3_dac_supply_out_of_range;
  bool v_3p3_raw_supply_out_of_range;
  bool v_5_supply_out_of_range;
  bool transmitter_id_fault;
  bool active_flt_latched_byte2_bit6;
  bool active_flt_latched_byte2_bit5;
  bool active_flt_latched_byte2_bit4;
  bool active_flt_latched_byte2_bit3;
  bool active_flt_latched_byte2_bit2;
  bool pcan_missing_msg_fault;
  bool pcan_bus_off;
  bool active_flt_latched_byte1_bit7;
  bool active_flt_latched_byte1_bit6;
  bool instruction_set_check_fault;
  bool stack_overflow_fault;
  bool watchdog_fault;
  bool pll_lock_fault;
  bool active_flt_latched_byte1_bit1;
  bool ram_memory_test_fault;
  bool usc_validation_fault;
  bool active_flt_latched_byte0_bit6;
  bool active_flt_latched_byte0_bit5;
  bool active_flt_latched_byte0_bit4;
  bool active_flt_latched_byte0_bit3;
  bool keep_alive_checksum_fault;
  bool program_calibration_flash_checksum;
  bool application_flash_checksum_fault;
} delphi_mrr_msgs__msg__ActiveFaultLatched1;

// Struct for a sequence of delphi_mrr_msgs__msg__ActiveFaultLatched1.
typedef struct delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence
{
  delphi_mrr_msgs__msg__ActiveFaultLatched1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__STRUCT_H_
