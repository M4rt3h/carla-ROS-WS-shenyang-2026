// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_srr_msgs:msg/SrrStatus4.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_status4__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_srr_msgs__msg__SrrStatus4__init(delphi_srr_msgs__msg__SrrStatus4 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_srr_msgs__msg__SrrStatus4__fini(msg);
    return false;
  }
  // can_tx_sw_version_host
  // can_tx_path_id_blis_ignore
  // can_tx_path_id_blis
  // can_tx_angle_misalignment
  // can_tx_auto_align_angle
  return true;
}

void
delphi_srr_msgs__msg__SrrStatus4__fini(delphi_srr_msgs__msg__SrrStatus4 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_tx_sw_version_host
  // can_tx_path_id_blis_ignore
  // can_tx_path_id_blis
  // can_tx_angle_misalignment
  // can_tx_auto_align_angle
}

bool
delphi_srr_msgs__msg__SrrStatus4__are_equal(const delphi_srr_msgs__msg__SrrStatus4 * lhs, const delphi_srr_msgs__msg__SrrStatus4 * rhs)
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
  // can_tx_sw_version_host
  if (lhs->can_tx_sw_version_host != rhs->can_tx_sw_version_host) {
    return false;
  }
  // can_tx_path_id_blis_ignore
  if (lhs->can_tx_path_id_blis_ignore != rhs->can_tx_path_id_blis_ignore) {
    return false;
  }
  // can_tx_path_id_blis
  if (lhs->can_tx_path_id_blis != rhs->can_tx_path_id_blis) {
    return false;
  }
  // can_tx_angle_misalignment
  if (lhs->can_tx_angle_misalignment != rhs->can_tx_angle_misalignment) {
    return false;
  }
  // can_tx_auto_align_angle
  if (lhs->can_tx_auto_align_angle != rhs->can_tx_auto_align_angle) {
    return false;
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrStatus4__copy(
  const delphi_srr_msgs__msg__SrrStatus4 * input,
  delphi_srr_msgs__msg__SrrStatus4 * output)
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
  // can_tx_sw_version_host
  output->can_tx_sw_version_host = input->can_tx_sw_version_host;
  // can_tx_path_id_blis_ignore
  output->can_tx_path_id_blis_ignore = input->can_tx_path_id_blis_ignore;
  // can_tx_path_id_blis
  output->can_tx_path_id_blis = input->can_tx_path_id_blis;
  // can_tx_angle_misalignment
  output->can_tx_angle_misalignment = input->can_tx_angle_misalignment;
  // can_tx_auto_align_angle
  output->can_tx_auto_align_angle = input->can_tx_auto_align_angle;
  return true;
}

delphi_srr_msgs__msg__SrrStatus4 *
delphi_srr_msgs__msg__SrrStatus4__create()
{
  delphi_srr_msgs__msg__SrrStatus4 * msg = (delphi_srr_msgs__msg__SrrStatus4 *)malloc(sizeof(delphi_srr_msgs__msg__SrrStatus4));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_srr_msgs__msg__SrrStatus4));
  bool success = delphi_srr_msgs__msg__SrrStatus4__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_srr_msgs__msg__SrrStatus4__destroy(delphi_srr_msgs__msg__SrrStatus4 * msg)
{
  if (msg) {
    delphi_srr_msgs__msg__SrrStatus4__fini(msg);
  }
  free(msg);
}


bool
delphi_srr_msgs__msg__SrrStatus4__Sequence__init(delphi_srr_msgs__msg__SrrStatus4__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_srr_msgs__msg__SrrStatus4 * data = NULL;
  if (size) {
    data = (delphi_srr_msgs__msg__SrrStatus4 *)calloc(size, sizeof(delphi_srr_msgs__msg__SrrStatus4));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_srr_msgs__msg__SrrStatus4__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_srr_msgs__msg__SrrStatus4__fini(&data[i - 1]);
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
delphi_srr_msgs__msg__SrrStatus4__Sequence__fini(delphi_srr_msgs__msg__SrrStatus4__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_srr_msgs__msg__SrrStatus4__fini(&array->data[i]);
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

delphi_srr_msgs__msg__SrrStatus4__Sequence *
delphi_srr_msgs__msg__SrrStatus4__Sequence__create(size_t size)
{
  delphi_srr_msgs__msg__SrrStatus4__Sequence * array = (delphi_srr_msgs__msg__SrrStatus4__Sequence *)malloc(sizeof(delphi_srr_msgs__msg__SrrStatus4__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_srr_msgs__msg__SrrStatus4__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_srr_msgs__msg__SrrStatus4__Sequence__destroy(delphi_srr_msgs__msg__SrrStatus4__Sequence * array)
{
  if (array) {
    delphi_srr_msgs__msg__SrrStatus4__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_srr_msgs__msg__SrrStatus4__Sequence__are_equal(const delphi_srr_msgs__msg__SrrStatus4__Sequence * lhs, const delphi_srr_msgs__msg__SrrStatus4__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_srr_msgs__msg__SrrStatus4__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrStatus4__Sequence__copy(
  const delphi_srr_msgs__msg__SrrStatus4__Sequence * input,
  delphi_srr_msgs__msg__SrrStatus4__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_srr_msgs__msg__SrrStatus4);
    delphi_srr_msgs__msg__SrrStatus4 * data =
      (delphi_srr_msgs__msg__SrrStatus4 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_srr_msgs__msg__SrrStatus4__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_srr_msgs__msg__SrrStatus4__fini(&data[i]);
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
    if (!delphi_srr_msgs__msg__SrrStatus4__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
