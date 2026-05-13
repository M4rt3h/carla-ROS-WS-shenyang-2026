// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrVehicle2.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_vehicle2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_esr_msgs__msg__EsrVehicle2__init(delphi_esr_msgs__msg__EsrVehicle2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrVehicle2__fini(msg);
    return false;
  }
  // scan_index_ack
  // use_angle_misalignment
  // clear_faults
  // high_yaw_angle
  // mr_only_transmit
  // lr_only_transmit
  // angle_misalignment
  // lateral_mounting_offset
  // radar_cmd_radiate
  // blockage_disable
  // maximum_tracks
  // turn_signal_status
  // vehicle_speed_validity
  // mmr_upside_down
  // grouping_mode
  // wiper_status
  // raw_data_enable
  return true;
}

void
delphi_esr_msgs__msg__EsrVehicle2__fini(delphi_esr_msgs__msg__EsrVehicle2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // scan_index_ack
  // use_angle_misalignment
  // clear_faults
  // high_yaw_angle
  // mr_only_transmit
  // lr_only_transmit
  // angle_misalignment
  // lateral_mounting_offset
  // radar_cmd_radiate
  // blockage_disable
  // maximum_tracks
  // turn_signal_status
  // vehicle_speed_validity
  // mmr_upside_down
  // grouping_mode
  // wiper_status
  // raw_data_enable
}

bool
delphi_esr_msgs__msg__EsrVehicle2__are_equal(const delphi_esr_msgs__msg__EsrVehicle2 * lhs, const delphi_esr_msgs__msg__EsrVehicle2 * rhs)
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
  // scan_index_ack
  if (lhs->scan_index_ack != rhs->scan_index_ack) {
    return false;
  }
  // use_angle_misalignment
  if (lhs->use_angle_misalignment != rhs->use_angle_misalignment) {
    return false;
  }
  // clear_faults
  if (lhs->clear_faults != rhs->clear_faults) {
    return false;
  }
  // high_yaw_angle
  if (lhs->high_yaw_angle != rhs->high_yaw_angle) {
    return false;
  }
  // mr_only_transmit
  if (lhs->mr_only_transmit != rhs->mr_only_transmit) {
    return false;
  }
  // lr_only_transmit
  if (lhs->lr_only_transmit != rhs->lr_only_transmit) {
    return false;
  }
  // angle_misalignment
  if (lhs->angle_misalignment != rhs->angle_misalignment) {
    return false;
  }
  // lateral_mounting_offset
  if (lhs->lateral_mounting_offset != rhs->lateral_mounting_offset) {
    return false;
  }
  // radar_cmd_radiate
  if (lhs->radar_cmd_radiate != rhs->radar_cmd_radiate) {
    return false;
  }
  // blockage_disable
  if (lhs->blockage_disable != rhs->blockage_disable) {
    return false;
  }
  // maximum_tracks
  if (lhs->maximum_tracks != rhs->maximum_tracks) {
    return false;
  }
  // turn_signal_status
  if (lhs->turn_signal_status != rhs->turn_signal_status) {
    return false;
  }
  // vehicle_speed_validity
  if (lhs->vehicle_speed_validity != rhs->vehicle_speed_validity) {
    return false;
  }
  // mmr_upside_down
  if (lhs->mmr_upside_down != rhs->mmr_upside_down) {
    return false;
  }
  // grouping_mode
  if (lhs->grouping_mode != rhs->grouping_mode) {
    return false;
  }
  // wiper_status
  if (lhs->wiper_status != rhs->wiper_status) {
    return false;
  }
  // raw_data_enable
  if (lhs->raw_data_enable != rhs->raw_data_enable) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrVehicle2__copy(
  const delphi_esr_msgs__msg__EsrVehicle2 * input,
  delphi_esr_msgs__msg__EsrVehicle2 * output)
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
  // scan_index_ack
  output->scan_index_ack = input->scan_index_ack;
  // use_angle_misalignment
  output->use_angle_misalignment = input->use_angle_misalignment;
  // clear_faults
  output->clear_faults = input->clear_faults;
  // high_yaw_angle
  output->high_yaw_angle = input->high_yaw_angle;
  // mr_only_transmit
  output->mr_only_transmit = input->mr_only_transmit;
  // lr_only_transmit
  output->lr_only_transmit = input->lr_only_transmit;
  // angle_misalignment
  output->angle_misalignment = input->angle_misalignment;
  // lateral_mounting_offset
  output->lateral_mounting_offset = input->lateral_mounting_offset;
  // radar_cmd_radiate
  output->radar_cmd_radiate = input->radar_cmd_radiate;
  // blockage_disable
  output->blockage_disable = input->blockage_disable;
  // maximum_tracks
  output->maximum_tracks = input->maximum_tracks;
  // turn_signal_status
  output->turn_signal_status = input->turn_signal_status;
  // vehicle_speed_validity
  output->vehicle_speed_validity = input->vehicle_speed_validity;
  // mmr_upside_down
  output->mmr_upside_down = input->mmr_upside_down;
  // grouping_mode
  output->grouping_mode = input->grouping_mode;
  // wiper_status
  output->wiper_status = input->wiper_status;
  // raw_data_enable
  output->raw_data_enable = input->raw_data_enable;
  return true;
}

delphi_esr_msgs__msg__EsrVehicle2 *
delphi_esr_msgs__msg__EsrVehicle2__create()
{
  delphi_esr_msgs__msg__EsrVehicle2 * msg = (delphi_esr_msgs__msg__EsrVehicle2 *)malloc(sizeof(delphi_esr_msgs__msg__EsrVehicle2));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrVehicle2));
  bool success = delphi_esr_msgs__msg__EsrVehicle2__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrVehicle2__destroy(delphi_esr_msgs__msg__EsrVehicle2 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrVehicle2__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrVehicle2__Sequence__init(delphi_esr_msgs__msg__EsrVehicle2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrVehicle2 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrVehicle2 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrVehicle2));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrVehicle2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrVehicle2__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrVehicle2__Sequence__fini(delphi_esr_msgs__msg__EsrVehicle2__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrVehicle2__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrVehicle2__Sequence *
delphi_esr_msgs__msg__EsrVehicle2__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrVehicle2__Sequence * array = (delphi_esr_msgs__msg__EsrVehicle2__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrVehicle2__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrVehicle2__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrVehicle2__Sequence__destroy(delphi_esr_msgs__msg__EsrVehicle2__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrVehicle2__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrVehicle2__Sequence__are_equal(const delphi_esr_msgs__msg__EsrVehicle2__Sequence * lhs, const delphi_esr_msgs__msg__EsrVehicle2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrVehicle2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrVehicle2__Sequence__copy(
  const delphi_esr_msgs__msg__EsrVehicle2__Sequence * input,
  delphi_esr_msgs__msg__EsrVehicle2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrVehicle2);
    delphi_esr_msgs__msg__EsrVehicle2 * data =
      (delphi_esr_msgs__msg__EsrVehicle2 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrVehicle2__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrVehicle2__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrVehicle2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
