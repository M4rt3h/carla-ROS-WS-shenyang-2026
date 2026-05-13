// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_srr_msgs:msg/SrrStatus5.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_status5__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_srr_msgs__msg__SrrStatus5__init(delphi_srr_msgs__msg__SrrStatus5 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_srr_msgs__msg__SrrStatus5__fini(msg);
    return false;
  }
  // disable_auto_align
  // can_tx_yaw_rate_ref_qf
  // can_tx_yaw_rate_raw_qf
  // can_tx_yaw_rate_reference
  // can_tx_yaw_rate_raw
  // can_tx_system_status
  // can_tx_outside_temperature
  // can_blockage_mnr_blocked
  // can_blockage_bb_blocked
  // can_blockage_radar_blocked
  // can_td_blocked
  // radar_tx_power_error
  // radar_lo_power_error
  // radar_data_sync_error
  // linearizer_spi_transfer_error
  // saturated_tuning_freq_error
  // rtn_spi_transfer_error
  // rrn_spi_transfer_error
  // video_port_capture_error
  // vertical_misalignment_error
  // tx_temperature_fault
  // transmitter_id_error
  // dsp_unit_cal_checksum_error
  // dsp_unit_cal_block_chcksm_error
  // dsp_tuning_sensitivity_error
  // dsp_loop_overrun_error
  // adc_spi_transfer_error
  return true;
}

void
delphi_srr_msgs__msg__SrrStatus5__fini(delphi_srr_msgs__msg__SrrStatus5 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // disable_auto_align
  // can_tx_yaw_rate_ref_qf
  // can_tx_yaw_rate_raw_qf
  // can_tx_yaw_rate_reference
  // can_tx_yaw_rate_raw
  // can_tx_system_status
  // can_tx_outside_temperature
  // can_blockage_mnr_blocked
  // can_blockage_bb_blocked
  // can_blockage_radar_blocked
  // can_td_blocked
  // radar_tx_power_error
  // radar_lo_power_error
  // radar_data_sync_error
  // linearizer_spi_transfer_error
  // saturated_tuning_freq_error
  // rtn_spi_transfer_error
  // rrn_spi_transfer_error
  // video_port_capture_error
  // vertical_misalignment_error
  // tx_temperature_fault
  // transmitter_id_error
  // dsp_unit_cal_checksum_error
  // dsp_unit_cal_block_chcksm_error
  // dsp_tuning_sensitivity_error
  // dsp_loop_overrun_error
  // adc_spi_transfer_error
}

bool
delphi_srr_msgs__msg__SrrStatus5__are_equal(const delphi_srr_msgs__msg__SrrStatus5 * lhs, const delphi_srr_msgs__msg__SrrStatus5 * rhs)
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
  // disable_auto_align
  if (lhs->disable_auto_align != rhs->disable_auto_align) {
    return false;
  }
  // can_tx_yaw_rate_ref_qf
  if (lhs->can_tx_yaw_rate_ref_qf != rhs->can_tx_yaw_rate_ref_qf) {
    return false;
  }
  // can_tx_yaw_rate_raw_qf
  if (lhs->can_tx_yaw_rate_raw_qf != rhs->can_tx_yaw_rate_raw_qf) {
    return false;
  }
  // can_tx_yaw_rate_reference
  if (lhs->can_tx_yaw_rate_reference != rhs->can_tx_yaw_rate_reference) {
    return false;
  }
  // can_tx_yaw_rate_raw
  if (lhs->can_tx_yaw_rate_raw != rhs->can_tx_yaw_rate_raw) {
    return false;
  }
  // can_tx_system_status
  if (lhs->can_tx_system_status != rhs->can_tx_system_status) {
    return false;
  }
  // can_tx_outside_temperature
  if (lhs->can_tx_outside_temperature != rhs->can_tx_outside_temperature) {
    return false;
  }
  // can_blockage_mnr_blocked
  if (lhs->can_blockage_mnr_blocked != rhs->can_blockage_mnr_blocked) {
    return false;
  }
  // can_blockage_bb_blocked
  if (lhs->can_blockage_bb_blocked != rhs->can_blockage_bb_blocked) {
    return false;
  }
  // can_blockage_radar_blocked
  if (lhs->can_blockage_radar_blocked != rhs->can_blockage_radar_blocked) {
    return false;
  }
  // can_td_blocked
  if (lhs->can_td_blocked != rhs->can_td_blocked) {
    return false;
  }
  // radar_tx_power_error
  if (lhs->radar_tx_power_error != rhs->radar_tx_power_error) {
    return false;
  }
  // radar_lo_power_error
  if (lhs->radar_lo_power_error != rhs->radar_lo_power_error) {
    return false;
  }
  // radar_data_sync_error
  if (lhs->radar_data_sync_error != rhs->radar_data_sync_error) {
    return false;
  }
  // linearizer_spi_transfer_error
  if (lhs->linearizer_spi_transfer_error != rhs->linearizer_spi_transfer_error) {
    return false;
  }
  // saturated_tuning_freq_error
  if (lhs->saturated_tuning_freq_error != rhs->saturated_tuning_freq_error) {
    return false;
  }
  // rtn_spi_transfer_error
  if (lhs->rtn_spi_transfer_error != rhs->rtn_spi_transfer_error) {
    return false;
  }
  // rrn_spi_transfer_error
  if (lhs->rrn_spi_transfer_error != rhs->rrn_spi_transfer_error) {
    return false;
  }
  // video_port_capture_error
  if (lhs->video_port_capture_error != rhs->video_port_capture_error) {
    return false;
  }
  // vertical_misalignment_error
  if (lhs->vertical_misalignment_error != rhs->vertical_misalignment_error) {
    return false;
  }
  // tx_temperature_fault
  if (lhs->tx_temperature_fault != rhs->tx_temperature_fault) {
    return false;
  }
  // transmitter_id_error
  if (lhs->transmitter_id_error != rhs->transmitter_id_error) {
    return false;
  }
  // dsp_unit_cal_checksum_error
  if (lhs->dsp_unit_cal_checksum_error != rhs->dsp_unit_cal_checksum_error) {
    return false;
  }
  // dsp_unit_cal_block_chcksm_error
  if (lhs->dsp_unit_cal_block_chcksm_error != rhs->dsp_unit_cal_block_chcksm_error) {
    return false;
  }
  // dsp_tuning_sensitivity_error
  if (lhs->dsp_tuning_sensitivity_error != rhs->dsp_tuning_sensitivity_error) {
    return false;
  }
  // dsp_loop_overrun_error
  if (lhs->dsp_loop_overrun_error != rhs->dsp_loop_overrun_error) {
    return false;
  }
  // adc_spi_transfer_error
  if (lhs->adc_spi_transfer_error != rhs->adc_spi_transfer_error) {
    return false;
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrStatus5__copy(
  const delphi_srr_msgs__msg__SrrStatus5 * input,
  delphi_srr_msgs__msg__SrrStatus5 * output)
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
  // disable_auto_align
  output->disable_auto_align = input->disable_auto_align;
  // can_tx_yaw_rate_ref_qf
  output->can_tx_yaw_rate_ref_qf = input->can_tx_yaw_rate_ref_qf;
  // can_tx_yaw_rate_raw_qf
  output->can_tx_yaw_rate_raw_qf = input->can_tx_yaw_rate_raw_qf;
  // can_tx_yaw_rate_reference
  output->can_tx_yaw_rate_reference = input->can_tx_yaw_rate_reference;
  // can_tx_yaw_rate_raw
  output->can_tx_yaw_rate_raw = input->can_tx_yaw_rate_raw;
  // can_tx_system_status
  output->can_tx_system_status = input->can_tx_system_status;
  // can_tx_outside_temperature
  output->can_tx_outside_temperature = input->can_tx_outside_temperature;
  // can_blockage_mnr_blocked
  output->can_blockage_mnr_blocked = input->can_blockage_mnr_blocked;
  // can_blockage_bb_blocked
  output->can_blockage_bb_blocked = input->can_blockage_bb_blocked;
  // can_blockage_radar_blocked
  output->can_blockage_radar_blocked = input->can_blockage_radar_blocked;
  // can_td_blocked
  output->can_td_blocked = input->can_td_blocked;
  // radar_tx_power_error
  output->radar_tx_power_error = input->radar_tx_power_error;
  // radar_lo_power_error
  output->radar_lo_power_error = input->radar_lo_power_error;
  // radar_data_sync_error
  output->radar_data_sync_error = input->radar_data_sync_error;
  // linearizer_spi_transfer_error
  output->linearizer_spi_transfer_error = input->linearizer_spi_transfer_error;
  // saturated_tuning_freq_error
  output->saturated_tuning_freq_error = input->saturated_tuning_freq_error;
  // rtn_spi_transfer_error
  output->rtn_spi_transfer_error = input->rtn_spi_transfer_error;
  // rrn_spi_transfer_error
  output->rrn_spi_transfer_error = input->rrn_spi_transfer_error;
  // video_port_capture_error
  output->video_port_capture_error = input->video_port_capture_error;
  // vertical_misalignment_error
  output->vertical_misalignment_error = input->vertical_misalignment_error;
  // tx_temperature_fault
  output->tx_temperature_fault = input->tx_temperature_fault;
  // transmitter_id_error
  output->transmitter_id_error = input->transmitter_id_error;
  // dsp_unit_cal_checksum_error
  output->dsp_unit_cal_checksum_error = input->dsp_unit_cal_checksum_error;
  // dsp_unit_cal_block_chcksm_error
  output->dsp_unit_cal_block_chcksm_error = input->dsp_unit_cal_block_chcksm_error;
  // dsp_tuning_sensitivity_error
  output->dsp_tuning_sensitivity_error = input->dsp_tuning_sensitivity_error;
  // dsp_loop_overrun_error
  output->dsp_loop_overrun_error = input->dsp_loop_overrun_error;
  // adc_spi_transfer_error
  output->adc_spi_transfer_error = input->adc_spi_transfer_error;
  return true;
}

delphi_srr_msgs__msg__SrrStatus5 *
delphi_srr_msgs__msg__SrrStatus5__create()
{
  delphi_srr_msgs__msg__SrrStatus5 * msg = (delphi_srr_msgs__msg__SrrStatus5 *)malloc(sizeof(delphi_srr_msgs__msg__SrrStatus5));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_srr_msgs__msg__SrrStatus5));
  bool success = delphi_srr_msgs__msg__SrrStatus5__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_srr_msgs__msg__SrrStatus5__destroy(delphi_srr_msgs__msg__SrrStatus5 * msg)
{
  if (msg) {
    delphi_srr_msgs__msg__SrrStatus5__fini(msg);
  }
  free(msg);
}


bool
delphi_srr_msgs__msg__SrrStatus5__Sequence__init(delphi_srr_msgs__msg__SrrStatus5__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_srr_msgs__msg__SrrStatus5 * data = NULL;
  if (size) {
    data = (delphi_srr_msgs__msg__SrrStatus5 *)calloc(size, sizeof(delphi_srr_msgs__msg__SrrStatus5));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_srr_msgs__msg__SrrStatus5__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_srr_msgs__msg__SrrStatus5__fini(&data[i - 1]);
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
delphi_srr_msgs__msg__SrrStatus5__Sequence__fini(delphi_srr_msgs__msg__SrrStatus5__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_srr_msgs__msg__SrrStatus5__fini(&array->data[i]);
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

delphi_srr_msgs__msg__SrrStatus5__Sequence *
delphi_srr_msgs__msg__SrrStatus5__Sequence__create(size_t size)
{
  delphi_srr_msgs__msg__SrrStatus5__Sequence * array = (delphi_srr_msgs__msg__SrrStatus5__Sequence *)malloc(sizeof(delphi_srr_msgs__msg__SrrStatus5__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_srr_msgs__msg__SrrStatus5__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_srr_msgs__msg__SrrStatus5__Sequence__destroy(delphi_srr_msgs__msg__SrrStatus5__Sequence * array)
{
  if (array) {
    delphi_srr_msgs__msg__SrrStatus5__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_srr_msgs__msg__SrrStatus5__Sequence__are_equal(const delphi_srr_msgs__msg__SrrStatus5__Sequence * lhs, const delphi_srr_msgs__msg__SrrStatus5__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_srr_msgs__msg__SrrStatus5__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrStatus5__Sequence__copy(
  const delphi_srr_msgs__msg__SrrStatus5__Sequence * input,
  delphi_srr_msgs__msg__SrrStatus5__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_srr_msgs__msg__SrrStatus5);
    delphi_srr_msgs__msg__SrrStatus5 * data =
      (delphi_srr_msgs__msg__SrrStatus5 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_srr_msgs__msg__SrrStatus5__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_srr_msgs__msg__SrrStatus5__fini(&data[i]);
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
    if (!delphi_srr_msgs__msg__SrrStatus5__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
