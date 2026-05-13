// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched1.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/active_fault_latched1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__ActiveFaultLatched1__init(delphi_mrr_msgs__msg__ActiveFaultLatched1 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__ActiveFaultLatched1__fini(msg);
    return false;
  }
  // active_flt_latched_byte7_bit7
  // active_flt_latched_byte7_bit6
  // active_flt_latched_byte7_bit5
  // active_flt_latched_byte7_bit4
  // arm_to_dsp_chksum_fault
  // dsp_to_arm_chksum_fault
  // host_to_arm_chksum_fault
  // arm_to_host_chksum_fault
  // loop_bw_out_of_range
  // dsp_overrun_fault
  // active_flt_latched_byte6_bit5
  // tuning_sensitivity_fault
  // saturated_tuning_freq_fault
  // local_osc_power_fault
  // transmitter_power_fault
  // active_flt_latched_byte6_bit0
  // active_flt_latched_byte5_bit7
  // active_flt_latched_byte5_bit6
  // xcvr_device_spi_fault
  // freq_synthesizer_spi_fault
  // analog_converter_devic_spi_fault
  // side_lobe_blockage
  // active_flt_latched_byte5_bit1
  // mnr_blocked
  // ecu_temp_high_fault
  // transmitter_temp_high_fault
  // alignment_routine_failed_fault
  // unreasonable_radar_data
  // microprocessor_temp_high_fault
  // vertical_alignment_out_of_range
  // horizontal_alignment_out_of_range
  // factory_alignment_mode
  // battery_low_fault
  // battery_high_fault
  // v_1p25_supply_out_of_range
  // active_flt_latched_byte3_bit4
  // thermistor_out_of_range
  // v_3p3_dac_supply_out_of_range
  // v_3p3_raw_supply_out_of_range
  // v_5_supply_out_of_range
  // transmitter_id_fault
  // active_flt_latched_byte2_bit6
  // active_flt_latched_byte2_bit5
  // active_flt_latched_byte2_bit4
  // active_flt_latched_byte2_bit3
  // active_flt_latched_byte2_bit2
  // pcan_missing_msg_fault
  // pcan_bus_off
  // active_flt_latched_byte1_bit7
  // active_flt_latched_byte1_bit6
  // instruction_set_check_fault
  // stack_overflow_fault
  // watchdog_fault
  // pll_lock_fault
  // active_flt_latched_byte1_bit1
  // ram_memory_test_fault
  // usc_validation_fault
  // active_flt_latched_byte0_bit6
  // active_flt_latched_byte0_bit5
  // active_flt_latched_byte0_bit4
  // active_flt_latched_byte0_bit3
  // keep_alive_checksum_fault
  // program_calibration_flash_checksum
  // application_flash_checksum_fault
  return true;
}

void
delphi_mrr_msgs__msg__ActiveFaultLatched1__fini(delphi_mrr_msgs__msg__ActiveFaultLatched1 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // active_flt_latched_byte7_bit7
  // active_flt_latched_byte7_bit6
  // active_flt_latched_byte7_bit5
  // active_flt_latched_byte7_bit4
  // arm_to_dsp_chksum_fault
  // dsp_to_arm_chksum_fault
  // host_to_arm_chksum_fault
  // arm_to_host_chksum_fault
  // loop_bw_out_of_range
  // dsp_overrun_fault
  // active_flt_latched_byte6_bit5
  // tuning_sensitivity_fault
  // saturated_tuning_freq_fault
  // local_osc_power_fault
  // transmitter_power_fault
  // active_flt_latched_byte6_bit0
  // active_flt_latched_byte5_bit7
  // active_flt_latched_byte5_bit6
  // xcvr_device_spi_fault
  // freq_synthesizer_spi_fault
  // analog_converter_devic_spi_fault
  // side_lobe_blockage
  // active_flt_latched_byte5_bit1
  // mnr_blocked
  // ecu_temp_high_fault
  // transmitter_temp_high_fault
  // alignment_routine_failed_fault
  // unreasonable_radar_data
  // microprocessor_temp_high_fault
  // vertical_alignment_out_of_range
  // horizontal_alignment_out_of_range
  // factory_alignment_mode
  // battery_low_fault
  // battery_high_fault
  // v_1p25_supply_out_of_range
  // active_flt_latched_byte3_bit4
  // thermistor_out_of_range
  // v_3p3_dac_supply_out_of_range
  // v_3p3_raw_supply_out_of_range
  // v_5_supply_out_of_range
  // transmitter_id_fault
  // active_flt_latched_byte2_bit6
  // active_flt_latched_byte2_bit5
  // active_flt_latched_byte2_bit4
  // active_flt_latched_byte2_bit3
  // active_flt_latched_byte2_bit2
  // pcan_missing_msg_fault
  // pcan_bus_off
  // active_flt_latched_byte1_bit7
  // active_flt_latched_byte1_bit6
  // instruction_set_check_fault
  // stack_overflow_fault
  // watchdog_fault
  // pll_lock_fault
  // active_flt_latched_byte1_bit1
  // ram_memory_test_fault
  // usc_validation_fault
  // active_flt_latched_byte0_bit6
  // active_flt_latched_byte0_bit5
  // active_flt_latched_byte0_bit4
  // active_flt_latched_byte0_bit3
  // keep_alive_checksum_fault
  // program_calibration_flash_checksum
  // application_flash_checksum_fault
}

bool
delphi_mrr_msgs__msg__ActiveFaultLatched1__are_equal(const delphi_mrr_msgs__msg__ActiveFaultLatched1 * lhs, const delphi_mrr_msgs__msg__ActiveFaultLatched1 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // active_flt_latched_byte7_bit7
  if (lhs->active_flt_latched_byte7_bit7 != rhs->active_flt_latched_byte7_bit7) {
    return false;
  }
  // active_flt_latched_byte7_bit6
  if (lhs->active_flt_latched_byte7_bit6 != rhs->active_flt_latched_byte7_bit6) {
    return false;
  }
  // active_flt_latched_byte7_bit5
  if (lhs->active_flt_latched_byte7_bit5 != rhs->active_flt_latched_byte7_bit5) {
    return false;
  }
  // active_flt_latched_byte7_bit4
  if (lhs->active_flt_latched_byte7_bit4 != rhs->active_flt_latched_byte7_bit4) {
    return false;
  }
  // arm_to_dsp_chksum_fault
  if (lhs->arm_to_dsp_chksum_fault != rhs->arm_to_dsp_chksum_fault) {
    return false;
  }
  // dsp_to_arm_chksum_fault
  if (lhs->dsp_to_arm_chksum_fault != rhs->dsp_to_arm_chksum_fault) {
    return false;
  }
  // host_to_arm_chksum_fault
  if (lhs->host_to_arm_chksum_fault != rhs->host_to_arm_chksum_fault) {
    return false;
  }
  // arm_to_host_chksum_fault
  if (lhs->arm_to_host_chksum_fault != rhs->arm_to_host_chksum_fault) {
    return false;
  }
  // loop_bw_out_of_range
  if (lhs->loop_bw_out_of_range != rhs->loop_bw_out_of_range) {
    return false;
  }
  // dsp_overrun_fault
  if (lhs->dsp_overrun_fault != rhs->dsp_overrun_fault) {
    return false;
  }
  // active_flt_latched_byte6_bit5
  if (lhs->active_flt_latched_byte6_bit5 != rhs->active_flt_latched_byte6_bit5) {
    return false;
  }
  // tuning_sensitivity_fault
  if (lhs->tuning_sensitivity_fault != rhs->tuning_sensitivity_fault) {
    return false;
  }
  // saturated_tuning_freq_fault
  if (lhs->saturated_tuning_freq_fault != rhs->saturated_tuning_freq_fault) {
    return false;
  }
  // local_osc_power_fault
  if (lhs->local_osc_power_fault != rhs->local_osc_power_fault) {
    return false;
  }
  // transmitter_power_fault
  if (lhs->transmitter_power_fault != rhs->transmitter_power_fault) {
    return false;
  }
  // active_flt_latched_byte6_bit0
  if (lhs->active_flt_latched_byte6_bit0 != rhs->active_flt_latched_byte6_bit0) {
    return false;
  }
  // active_flt_latched_byte5_bit7
  if (lhs->active_flt_latched_byte5_bit7 != rhs->active_flt_latched_byte5_bit7) {
    return false;
  }
  // active_flt_latched_byte5_bit6
  if (lhs->active_flt_latched_byte5_bit6 != rhs->active_flt_latched_byte5_bit6) {
    return false;
  }
  // xcvr_device_spi_fault
  if (lhs->xcvr_device_spi_fault != rhs->xcvr_device_spi_fault) {
    return false;
  }
  // freq_synthesizer_spi_fault
  if (lhs->freq_synthesizer_spi_fault != rhs->freq_synthesizer_spi_fault) {
    return false;
  }
  // analog_converter_devic_spi_fault
  if (lhs->analog_converter_devic_spi_fault != rhs->analog_converter_devic_spi_fault) {
    return false;
  }
  // side_lobe_blockage
  if (lhs->side_lobe_blockage != rhs->side_lobe_blockage) {
    return false;
  }
  // active_flt_latched_byte5_bit1
  if (lhs->active_flt_latched_byte5_bit1 != rhs->active_flt_latched_byte5_bit1) {
    return false;
  }
  // mnr_blocked
  if (lhs->mnr_blocked != rhs->mnr_blocked) {
    return false;
  }
  // ecu_temp_high_fault
  if (lhs->ecu_temp_high_fault != rhs->ecu_temp_high_fault) {
    return false;
  }
  // transmitter_temp_high_fault
  if (lhs->transmitter_temp_high_fault != rhs->transmitter_temp_high_fault) {
    return false;
  }
  // alignment_routine_failed_fault
  if (lhs->alignment_routine_failed_fault != rhs->alignment_routine_failed_fault) {
    return false;
  }
  // unreasonable_radar_data
  if (lhs->unreasonable_radar_data != rhs->unreasonable_radar_data) {
    return false;
  }
  // microprocessor_temp_high_fault
  if (lhs->microprocessor_temp_high_fault != rhs->microprocessor_temp_high_fault) {
    return false;
  }
  // vertical_alignment_out_of_range
  if (lhs->vertical_alignment_out_of_range != rhs->vertical_alignment_out_of_range) {
    return false;
  }
  // horizontal_alignment_out_of_range
  if (lhs->horizontal_alignment_out_of_range != rhs->horizontal_alignment_out_of_range) {
    return false;
  }
  // factory_alignment_mode
  if (lhs->factory_alignment_mode != rhs->factory_alignment_mode) {
    return false;
  }
  // battery_low_fault
  if (lhs->battery_low_fault != rhs->battery_low_fault) {
    return false;
  }
  // battery_high_fault
  if (lhs->battery_high_fault != rhs->battery_high_fault) {
    return false;
  }
  // v_1p25_supply_out_of_range
  if (lhs->v_1p25_supply_out_of_range != rhs->v_1p25_supply_out_of_range) {
    return false;
  }
  // active_flt_latched_byte3_bit4
  if (lhs->active_flt_latched_byte3_bit4 != rhs->active_flt_latched_byte3_bit4) {
    return false;
  }
  // thermistor_out_of_range
  if (lhs->thermistor_out_of_range != rhs->thermistor_out_of_range) {
    return false;
  }
  // v_3p3_dac_supply_out_of_range
  if (lhs->v_3p3_dac_supply_out_of_range != rhs->v_3p3_dac_supply_out_of_range) {
    return false;
  }
  // v_3p3_raw_supply_out_of_range
  if (lhs->v_3p3_raw_supply_out_of_range != rhs->v_3p3_raw_supply_out_of_range) {
    return false;
  }
  // v_5_supply_out_of_range
  if (lhs->v_5_supply_out_of_range != rhs->v_5_supply_out_of_range) {
    return false;
  }
  // transmitter_id_fault
  if (lhs->transmitter_id_fault != rhs->transmitter_id_fault) {
    return false;
  }
  // active_flt_latched_byte2_bit6
  if (lhs->active_flt_latched_byte2_bit6 != rhs->active_flt_latched_byte2_bit6) {
    return false;
  }
  // active_flt_latched_byte2_bit5
  if (lhs->active_flt_latched_byte2_bit5 != rhs->active_flt_latched_byte2_bit5) {
    return false;
  }
  // active_flt_latched_byte2_bit4
  if (lhs->active_flt_latched_byte2_bit4 != rhs->active_flt_latched_byte2_bit4) {
    return false;
  }
  // active_flt_latched_byte2_bit3
  if (lhs->active_flt_latched_byte2_bit3 != rhs->active_flt_latched_byte2_bit3) {
    return false;
  }
  // active_flt_latched_byte2_bit2
  if (lhs->active_flt_latched_byte2_bit2 != rhs->active_flt_latched_byte2_bit2) {
    return false;
  }
  // pcan_missing_msg_fault
  if (lhs->pcan_missing_msg_fault != rhs->pcan_missing_msg_fault) {
    return false;
  }
  // pcan_bus_off
  if (lhs->pcan_bus_off != rhs->pcan_bus_off) {
    return false;
  }
  // active_flt_latched_byte1_bit7
  if (lhs->active_flt_latched_byte1_bit7 != rhs->active_flt_latched_byte1_bit7) {
    return false;
  }
  // active_flt_latched_byte1_bit6
  if (lhs->active_flt_latched_byte1_bit6 != rhs->active_flt_latched_byte1_bit6) {
    return false;
  }
  // instruction_set_check_fault
  if (lhs->instruction_set_check_fault != rhs->instruction_set_check_fault) {
    return false;
  }
  // stack_overflow_fault
  if (lhs->stack_overflow_fault != rhs->stack_overflow_fault) {
    return false;
  }
  // watchdog_fault
  if (lhs->watchdog_fault != rhs->watchdog_fault) {
    return false;
  }
  // pll_lock_fault
  if (lhs->pll_lock_fault != rhs->pll_lock_fault) {
    return false;
  }
  // active_flt_latched_byte1_bit1
  if (lhs->active_flt_latched_byte1_bit1 != rhs->active_flt_latched_byte1_bit1) {
    return false;
  }
  // ram_memory_test_fault
  if (lhs->ram_memory_test_fault != rhs->ram_memory_test_fault) {
    return false;
  }
  // usc_validation_fault
  if (lhs->usc_validation_fault != rhs->usc_validation_fault) {
    return false;
  }
  // active_flt_latched_byte0_bit6
  if (lhs->active_flt_latched_byte0_bit6 != rhs->active_flt_latched_byte0_bit6) {
    return false;
  }
  // active_flt_latched_byte0_bit5
  if (lhs->active_flt_latched_byte0_bit5 != rhs->active_flt_latched_byte0_bit5) {
    return false;
  }
  // active_flt_latched_byte0_bit4
  if (lhs->active_flt_latched_byte0_bit4 != rhs->active_flt_latched_byte0_bit4) {
    return false;
  }
  // active_flt_latched_byte0_bit3
  if (lhs->active_flt_latched_byte0_bit3 != rhs->active_flt_latched_byte0_bit3) {
    return false;
  }
  // keep_alive_checksum_fault
  if (lhs->keep_alive_checksum_fault != rhs->keep_alive_checksum_fault) {
    return false;
  }
  // program_calibration_flash_checksum
  if (lhs->program_calibration_flash_checksum != rhs->program_calibration_flash_checksum) {
    return false;
  }
  // application_flash_checksum_fault
  if (lhs->application_flash_checksum_fault != rhs->application_flash_checksum_fault) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__ActiveFaultLatched1__copy(
  const delphi_mrr_msgs__msg__ActiveFaultLatched1 * input,
  delphi_mrr_msgs__msg__ActiveFaultLatched1 * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // active_flt_latched_byte7_bit7
  output->active_flt_latched_byte7_bit7 = input->active_flt_latched_byte7_bit7;
  // active_flt_latched_byte7_bit6
  output->active_flt_latched_byte7_bit6 = input->active_flt_latched_byte7_bit6;
  // active_flt_latched_byte7_bit5
  output->active_flt_latched_byte7_bit5 = input->active_flt_latched_byte7_bit5;
  // active_flt_latched_byte7_bit4
  output->active_flt_latched_byte7_bit4 = input->active_flt_latched_byte7_bit4;
  // arm_to_dsp_chksum_fault
  output->arm_to_dsp_chksum_fault = input->arm_to_dsp_chksum_fault;
  // dsp_to_arm_chksum_fault
  output->dsp_to_arm_chksum_fault = input->dsp_to_arm_chksum_fault;
  // host_to_arm_chksum_fault
  output->host_to_arm_chksum_fault = input->host_to_arm_chksum_fault;
  // arm_to_host_chksum_fault
  output->arm_to_host_chksum_fault = input->arm_to_host_chksum_fault;
  // loop_bw_out_of_range
  output->loop_bw_out_of_range = input->loop_bw_out_of_range;
  // dsp_overrun_fault
  output->dsp_overrun_fault = input->dsp_overrun_fault;
  // active_flt_latched_byte6_bit5
  output->active_flt_latched_byte6_bit5 = input->active_flt_latched_byte6_bit5;
  // tuning_sensitivity_fault
  output->tuning_sensitivity_fault = input->tuning_sensitivity_fault;
  // saturated_tuning_freq_fault
  output->saturated_tuning_freq_fault = input->saturated_tuning_freq_fault;
  // local_osc_power_fault
  output->local_osc_power_fault = input->local_osc_power_fault;
  // transmitter_power_fault
  output->transmitter_power_fault = input->transmitter_power_fault;
  // active_flt_latched_byte6_bit0
  output->active_flt_latched_byte6_bit0 = input->active_flt_latched_byte6_bit0;
  // active_flt_latched_byte5_bit7
  output->active_flt_latched_byte5_bit7 = input->active_flt_latched_byte5_bit7;
  // active_flt_latched_byte5_bit6
  output->active_flt_latched_byte5_bit6 = input->active_flt_latched_byte5_bit6;
  // xcvr_device_spi_fault
  output->xcvr_device_spi_fault = input->xcvr_device_spi_fault;
  // freq_synthesizer_spi_fault
  output->freq_synthesizer_spi_fault = input->freq_synthesizer_spi_fault;
  // analog_converter_devic_spi_fault
  output->analog_converter_devic_spi_fault = input->analog_converter_devic_spi_fault;
  // side_lobe_blockage
  output->side_lobe_blockage = input->side_lobe_blockage;
  // active_flt_latched_byte5_bit1
  output->active_flt_latched_byte5_bit1 = input->active_flt_latched_byte5_bit1;
  // mnr_blocked
  output->mnr_blocked = input->mnr_blocked;
  // ecu_temp_high_fault
  output->ecu_temp_high_fault = input->ecu_temp_high_fault;
  // transmitter_temp_high_fault
  output->transmitter_temp_high_fault = input->transmitter_temp_high_fault;
  // alignment_routine_failed_fault
  output->alignment_routine_failed_fault = input->alignment_routine_failed_fault;
  // unreasonable_radar_data
  output->unreasonable_radar_data = input->unreasonable_radar_data;
  // microprocessor_temp_high_fault
  output->microprocessor_temp_high_fault = input->microprocessor_temp_high_fault;
  // vertical_alignment_out_of_range
  output->vertical_alignment_out_of_range = input->vertical_alignment_out_of_range;
  // horizontal_alignment_out_of_range
  output->horizontal_alignment_out_of_range = input->horizontal_alignment_out_of_range;
  // factory_alignment_mode
  output->factory_alignment_mode = input->factory_alignment_mode;
  // battery_low_fault
  output->battery_low_fault = input->battery_low_fault;
  // battery_high_fault
  output->battery_high_fault = input->battery_high_fault;
  // v_1p25_supply_out_of_range
  output->v_1p25_supply_out_of_range = input->v_1p25_supply_out_of_range;
  // active_flt_latched_byte3_bit4
  output->active_flt_latched_byte3_bit4 = input->active_flt_latched_byte3_bit4;
  // thermistor_out_of_range
  output->thermistor_out_of_range = input->thermistor_out_of_range;
  // v_3p3_dac_supply_out_of_range
  output->v_3p3_dac_supply_out_of_range = input->v_3p3_dac_supply_out_of_range;
  // v_3p3_raw_supply_out_of_range
  output->v_3p3_raw_supply_out_of_range = input->v_3p3_raw_supply_out_of_range;
  // v_5_supply_out_of_range
  output->v_5_supply_out_of_range = input->v_5_supply_out_of_range;
  // transmitter_id_fault
  output->transmitter_id_fault = input->transmitter_id_fault;
  // active_flt_latched_byte2_bit6
  output->active_flt_latched_byte2_bit6 = input->active_flt_latched_byte2_bit6;
  // active_flt_latched_byte2_bit5
  output->active_flt_latched_byte2_bit5 = input->active_flt_latched_byte2_bit5;
  // active_flt_latched_byte2_bit4
  output->active_flt_latched_byte2_bit4 = input->active_flt_latched_byte2_bit4;
  // active_flt_latched_byte2_bit3
  output->active_flt_latched_byte2_bit3 = input->active_flt_latched_byte2_bit3;
  // active_flt_latched_byte2_bit2
  output->active_flt_latched_byte2_bit2 = input->active_flt_latched_byte2_bit2;
  // pcan_missing_msg_fault
  output->pcan_missing_msg_fault = input->pcan_missing_msg_fault;
  // pcan_bus_off
  output->pcan_bus_off = input->pcan_bus_off;
  // active_flt_latched_byte1_bit7
  output->active_flt_latched_byte1_bit7 = input->active_flt_latched_byte1_bit7;
  // active_flt_latched_byte1_bit6
  output->active_flt_latched_byte1_bit6 = input->active_flt_latched_byte1_bit6;
  // instruction_set_check_fault
  output->instruction_set_check_fault = input->instruction_set_check_fault;
  // stack_overflow_fault
  output->stack_overflow_fault = input->stack_overflow_fault;
  // watchdog_fault
  output->watchdog_fault = input->watchdog_fault;
  // pll_lock_fault
  output->pll_lock_fault = input->pll_lock_fault;
  // active_flt_latched_byte1_bit1
  output->active_flt_latched_byte1_bit1 = input->active_flt_latched_byte1_bit1;
  // ram_memory_test_fault
  output->ram_memory_test_fault = input->ram_memory_test_fault;
  // usc_validation_fault
  output->usc_validation_fault = input->usc_validation_fault;
  // active_flt_latched_byte0_bit6
  output->active_flt_latched_byte0_bit6 = input->active_flt_latched_byte0_bit6;
  // active_flt_latched_byte0_bit5
  output->active_flt_latched_byte0_bit5 = input->active_flt_latched_byte0_bit5;
  // active_flt_latched_byte0_bit4
  output->active_flt_latched_byte0_bit4 = input->active_flt_latched_byte0_bit4;
  // active_flt_latched_byte0_bit3
  output->active_flt_latched_byte0_bit3 = input->active_flt_latched_byte0_bit3;
  // keep_alive_checksum_fault
  output->keep_alive_checksum_fault = input->keep_alive_checksum_fault;
  // program_calibration_flash_checksum
  output->program_calibration_flash_checksum = input->program_calibration_flash_checksum;
  // application_flash_checksum_fault
  output->application_flash_checksum_fault = input->application_flash_checksum_fault;
  return true;
}

delphi_mrr_msgs__msg__ActiveFaultLatched1 *
delphi_mrr_msgs__msg__ActiveFaultLatched1__create()
{
  delphi_mrr_msgs__msg__ActiveFaultLatched1 * msg = (delphi_mrr_msgs__msg__ActiveFaultLatched1 *)malloc(sizeof(delphi_mrr_msgs__msg__ActiveFaultLatched1));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__ActiveFaultLatched1));
  bool success = delphi_mrr_msgs__msg__ActiveFaultLatched1__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__ActiveFaultLatched1__destroy(delphi_mrr_msgs__msg__ActiveFaultLatched1 * msg)
{
  if (msg) {
    delphi_mrr_msgs__msg__ActiveFaultLatched1__fini(msg);
  }
  free(msg);
}


bool
delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence__init(delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_mrr_msgs__msg__ActiveFaultLatched1 * data = NULL;
  if (size) {
    data = (delphi_mrr_msgs__msg__ActiveFaultLatched1 *)calloc(size, sizeof(delphi_mrr_msgs__msg__ActiveFaultLatched1));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__ActiveFaultLatched1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__ActiveFaultLatched1__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence__fini(delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_mrr_msgs__msg__ActiveFaultLatched1__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence *
delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence__create(size_t size)
{
  delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence * array = (delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence *)malloc(sizeof(delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence__destroy(delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence * array)
{
  if (array) {
    delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence__are_equal(const delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence * lhs, const delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__ActiveFaultLatched1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence__copy(
  const delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence * input,
  delphi_mrr_msgs__msg__ActiveFaultLatched1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__ActiveFaultLatched1);
    delphi_mrr_msgs__msg__ActiveFaultLatched1 * data =
      (delphi_mrr_msgs__msg__ActiveFaultLatched1 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__ActiveFaultLatched1__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__ActiveFaultLatched1__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_mrr_msgs__msg__ActiveFaultLatched1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
