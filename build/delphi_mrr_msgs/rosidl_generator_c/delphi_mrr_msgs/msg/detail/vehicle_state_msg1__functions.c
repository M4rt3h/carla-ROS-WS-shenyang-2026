// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg1.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__VehicleStateMsg1__init(delphi_mrr_msgs__msg__VehicleStateMsg1 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__VehicleStateMsg1__fini(msg);
    return false;
  }
  // can_fcw_sensitivity_level
  // can_vehicle_stationary
  // can_intf_minor_version
  // can_intf_major_version
  // can_brake_pedal
  // can_high_wheel_slip
  // can_turn_signal_status
  // can_washer_front_cmd
  // can_wiper_front_cmd
  // can_wiper_speed_info
  // can_reverse_gear
  // can_beam_shape_actual_right
  // can_beam_shape_actual_left
  // can_main_beam_indication
  // can_vehicle_index
  return true;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg1__fini(delphi_mrr_msgs__msg__VehicleStateMsg1 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_fcw_sensitivity_level
  // can_vehicle_stationary
  // can_intf_minor_version
  // can_intf_major_version
  // can_brake_pedal
  // can_high_wheel_slip
  // can_turn_signal_status
  // can_washer_front_cmd
  // can_wiper_front_cmd
  // can_wiper_speed_info
  // can_reverse_gear
  // can_beam_shape_actual_right
  // can_beam_shape_actual_left
  // can_main_beam_indication
  // can_vehicle_index
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg1__are_equal(const delphi_mrr_msgs__msg__VehicleStateMsg1 * lhs, const delphi_mrr_msgs__msg__VehicleStateMsg1 * rhs)
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
  // can_fcw_sensitivity_level
  if (lhs->can_fcw_sensitivity_level != rhs->can_fcw_sensitivity_level) {
    return false;
  }
  // can_vehicle_stationary
  if (lhs->can_vehicle_stationary != rhs->can_vehicle_stationary) {
    return false;
  }
  // can_intf_minor_version
  if (lhs->can_intf_minor_version != rhs->can_intf_minor_version) {
    return false;
  }
  // can_intf_major_version
  if (lhs->can_intf_major_version != rhs->can_intf_major_version) {
    return false;
  }
  // can_brake_pedal
  if (lhs->can_brake_pedal != rhs->can_brake_pedal) {
    return false;
  }
  // can_high_wheel_slip
  if (lhs->can_high_wheel_slip != rhs->can_high_wheel_slip) {
    return false;
  }
  // can_turn_signal_status
  if (lhs->can_turn_signal_status != rhs->can_turn_signal_status) {
    return false;
  }
  // can_washer_front_cmd
  if (lhs->can_washer_front_cmd != rhs->can_washer_front_cmd) {
    return false;
  }
  // can_wiper_front_cmd
  if (lhs->can_wiper_front_cmd != rhs->can_wiper_front_cmd) {
    return false;
  }
  // can_wiper_speed_info
  if (lhs->can_wiper_speed_info != rhs->can_wiper_speed_info) {
    return false;
  }
  // can_reverse_gear
  if (lhs->can_reverse_gear != rhs->can_reverse_gear) {
    return false;
  }
  // can_beam_shape_actual_right
  if (lhs->can_beam_shape_actual_right != rhs->can_beam_shape_actual_right) {
    return false;
  }
  // can_beam_shape_actual_left
  if (lhs->can_beam_shape_actual_left != rhs->can_beam_shape_actual_left) {
    return false;
  }
  // can_main_beam_indication
  if (lhs->can_main_beam_indication != rhs->can_main_beam_indication) {
    return false;
  }
  // can_vehicle_index
  if (lhs->can_vehicle_index != rhs->can_vehicle_index) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg1__copy(
  const delphi_mrr_msgs__msg__VehicleStateMsg1 * input,
  delphi_mrr_msgs__msg__VehicleStateMsg1 * output)
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
  // can_fcw_sensitivity_level
  output->can_fcw_sensitivity_level = input->can_fcw_sensitivity_level;
  // can_vehicle_stationary
  output->can_vehicle_stationary = input->can_vehicle_stationary;
  // can_intf_minor_version
  output->can_intf_minor_version = input->can_intf_minor_version;
  // can_intf_major_version
  output->can_intf_major_version = input->can_intf_major_version;
  // can_brake_pedal
  output->can_brake_pedal = input->can_brake_pedal;
  // can_high_wheel_slip
  output->can_high_wheel_slip = input->can_high_wheel_slip;
  // can_turn_signal_status
  output->can_turn_signal_status = input->can_turn_signal_status;
  // can_washer_front_cmd
  output->can_washer_front_cmd = input->can_washer_front_cmd;
  // can_wiper_front_cmd
  output->can_wiper_front_cmd = input->can_wiper_front_cmd;
  // can_wiper_speed_info
  output->can_wiper_speed_info = input->can_wiper_speed_info;
  // can_reverse_gear
  output->can_reverse_gear = input->can_reverse_gear;
  // can_beam_shape_actual_right
  output->can_beam_shape_actual_right = input->can_beam_shape_actual_right;
  // can_beam_shape_actual_left
  output->can_beam_shape_actual_left = input->can_beam_shape_actual_left;
  // can_main_beam_indication
  output->can_main_beam_indication = input->can_main_beam_indication;
  // can_vehicle_index
  output->can_vehicle_index = input->can_vehicle_index;
  return true;
}

delphi_mrr_msgs__msg__VehicleStateMsg1 *
delphi_mrr_msgs__msg__VehicleStateMsg1__create()
{
  delphi_mrr_msgs__msg__VehicleStateMsg1 * msg = (delphi_mrr_msgs__msg__VehicleStateMsg1 *)malloc(sizeof(delphi_mrr_msgs__msg__VehicleStateMsg1));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__VehicleStateMsg1));
  bool success = delphi_mrr_msgs__msg__VehicleStateMsg1__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg1__destroy(delphi_mrr_msgs__msg__VehicleStateMsg1 * msg)
{
  if (msg) {
    delphi_mrr_msgs__msg__VehicleStateMsg1__fini(msg);
  }
  free(msg);
}


bool
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__init(delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_mrr_msgs__msg__VehicleStateMsg1 * data = NULL;
  if (size) {
    data = (delphi_mrr_msgs__msg__VehicleStateMsg1 *)calloc(size, sizeof(delphi_mrr_msgs__msg__VehicleStateMsg1));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__VehicleStateMsg1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__VehicleStateMsg1__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__fini(delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_mrr_msgs__msg__VehicleStateMsg1__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence *
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__create(size_t size)
{
  delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * array = (delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence *)malloc(sizeof(delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__destroy(delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * array)
{
  if (array) {
    delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__are_equal(const delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * lhs, const delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__VehicleStateMsg1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__copy(
  const delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * input,
  delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__VehicleStateMsg1);
    delphi_mrr_msgs__msg__VehicleStateMsg1 * data =
      (delphi_mrr_msgs__msg__VehicleStateMsg1 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__VehicleStateMsg1__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__VehicleStateMsg1__fini(&data[i]);
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
    if (!delphi_mrr_msgs__msg__VehicleStateMsg1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
