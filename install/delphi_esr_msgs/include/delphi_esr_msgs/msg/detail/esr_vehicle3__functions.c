// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrVehicle3.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_vehicle3__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_esr_msgs__msg__EsrVehicle3__init(delphi_esr_msgs__msg__EsrVehicle3 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrVehicle3__fini(msg);
    return false;
  }
  // long_accel_validity
  // lat_accel_validity
  // lat_accel
  // long_accel
  // radar_fov_lr
  // radar_fov_mr
  // auto_align_disable
  // radar_height
  // serv_align_type
  // serv_align_enable
  // aalign_avg_ctr_total
  // auto_align_converged
  // wheel_slip
  // serv_align_updates_need
  // angle_mounting_offset
  return true;
}

void
delphi_esr_msgs__msg__EsrVehicle3__fini(delphi_esr_msgs__msg__EsrVehicle3 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // long_accel_validity
  // lat_accel_validity
  // lat_accel
  // long_accel
  // radar_fov_lr
  // radar_fov_mr
  // auto_align_disable
  // radar_height
  // serv_align_type
  // serv_align_enable
  // aalign_avg_ctr_total
  // auto_align_converged
  // wheel_slip
  // serv_align_updates_need
  // angle_mounting_offset
}

bool
delphi_esr_msgs__msg__EsrVehicle3__are_equal(const delphi_esr_msgs__msg__EsrVehicle3 * lhs, const delphi_esr_msgs__msg__EsrVehicle3 * rhs)
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
  // long_accel_validity
  if (lhs->long_accel_validity != rhs->long_accel_validity) {
    return false;
  }
  // lat_accel_validity
  if (lhs->lat_accel_validity != rhs->lat_accel_validity) {
    return false;
  }
  // lat_accel
  if (lhs->lat_accel != rhs->lat_accel) {
    return false;
  }
  // long_accel
  if (lhs->long_accel != rhs->long_accel) {
    return false;
  }
  // radar_fov_lr
  if (lhs->radar_fov_lr != rhs->radar_fov_lr) {
    return false;
  }
  // radar_fov_mr
  if (lhs->radar_fov_mr != rhs->radar_fov_mr) {
    return false;
  }
  // auto_align_disable
  if (lhs->auto_align_disable != rhs->auto_align_disable) {
    return false;
  }
  // radar_height
  if (lhs->radar_height != rhs->radar_height) {
    return false;
  }
  // serv_align_type
  if (lhs->serv_align_type != rhs->serv_align_type) {
    return false;
  }
  // serv_align_enable
  if (lhs->serv_align_enable != rhs->serv_align_enable) {
    return false;
  }
  // aalign_avg_ctr_total
  if (lhs->aalign_avg_ctr_total != rhs->aalign_avg_ctr_total) {
    return false;
  }
  // auto_align_converged
  if (lhs->auto_align_converged != rhs->auto_align_converged) {
    return false;
  }
  // wheel_slip
  if (lhs->wheel_slip != rhs->wheel_slip) {
    return false;
  }
  // serv_align_updates_need
  if (lhs->serv_align_updates_need != rhs->serv_align_updates_need) {
    return false;
  }
  // angle_mounting_offset
  if (lhs->angle_mounting_offset != rhs->angle_mounting_offset) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrVehicle3__copy(
  const delphi_esr_msgs__msg__EsrVehicle3 * input,
  delphi_esr_msgs__msg__EsrVehicle3 * output)
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
  // long_accel_validity
  output->long_accel_validity = input->long_accel_validity;
  // lat_accel_validity
  output->lat_accel_validity = input->lat_accel_validity;
  // lat_accel
  output->lat_accel = input->lat_accel;
  // long_accel
  output->long_accel = input->long_accel;
  // radar_fov_lr
  output->radar_fov_lr = input->radar_fov_lr;
  // radar_fov_mr
  output->radar_fov_mr = input->radar_fov_mr;
  // auto_align_disable
  output->auto_align_disable = input->auto_align_disable;
  // radar_height
  output->radar_height = input->radar_height;
  // serv_align_type
  output->serv_align_type = input->serv_align_type;
  // serv_align_enable
  output->serv_align_enable = input->serv_align_enable;
  // aalign_avg_ctr_total
  output->aalign_avg_ctr_total = input->aalign_avg_ctr_total;
  // auto_align_converged
  output->auto_align_converged = input->auto_align_converged;
  // wheel_slip
  output->wheel_slip = input->wheel_slip;
  // serv_align_updates_need
  output->serv_align_updates_need = input->serv_align_updates_need;
  // angle_mounting_offset
  output->angle_mounting_offset = input->angle_mounting_offset;
  return true;
}

delphi_esr_msgs__msg__EsrVehicle3 *
delphi_esr_msgs__msg__EsrVehicle3__create()
{
  delphi_esr_msgs__msg__EsrVehicle3 * msg = (delphi_esr_msgs__msg__EsrVehicle3 *)malloc(sizeof(delphi_esr_msgs__msg__EsrVehicle3));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrVehicle3));
  bool success = delphi_esr_msgs__msg__EsrVehicle3__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrVehicle3__destroy(delphi_esr_msgs__msg__EsrVehicle3 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrVehicle3__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrVehicle3__Sequence__init(delphi_esr_msgs__msg__EsrVehicle3__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrVehicle3 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrVehicle3 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrVehicle3));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrVehicle3__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrVehicle3__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrVehicle3__Sequence__fini(delphi_esr_msgs__msg__EsrVehicle3__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrVehicle3__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrVehicle3__Sequence *
delphi_esr_msgs__msg__EsrVehicle3__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrVehicle3__Sequence * array = (delphi_esr_msgs__msg__EsrVehicle3__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrVehicle3__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrVehicle3__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrVehicle3__Sequence__destroy(delphi_esr_msgs__msg__EsrVehicle3__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrVehicle3__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrVehicle3__Sequence__are_equal(const delphi_esr_msgs__msg__EsrVehicle3__Sequence * lhs, const delphi_esr_msgs__msg__EsrVehicle3__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrVehicle3__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrVehicle3__Sequence__copy(
  const delphi_esr_msgs__msg__EsrVehicle3__Sequence * input,
  delphi_esr_msgs__msg__EsrVehicle3__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrVehicle3);
    delphi_esr_msgs__msg__EsrVehicle3 * data =
      (delphi_esr_msgs__msg__EsrVehicle3 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrVehicle3__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrVehicle3__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrVehicle3__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
