// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_srr_msgs:msg/SrrTrack.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_track__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_srr_msgs__msg__SrrTrack__init(delphi_srr_msgs__msg__SrrTrack * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_srr_msgs__msg__SrrTrack__fini(msg);
    return false;
  }
  // can_tx_detect_valid_level
  // can_tx_detect_status
  // can_tx_detect_range_rate
  // can_tx_detect_range
  // can_tx_detect_angle
  // can_tx_detect_amplitude
  return true;
}

void
delphi_srr_msgs__msg__SrrTrack__fini(delphi_srr_msgs__msg__SrrTrack * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_tx_detect_valid_level
  // can_tx_detect_status
  // can_tx_detect_range_rate
  // can_tx_detect_range
  // can_tx_detect_angle
  // can_tx_detect_amplitude
}

bool
delphi_srr_msgs__msg__SrrTrack__are_equal(const delphi_srr_msgs__msg__SrrTrack * lhs, const delphi_srr_msgs__msg__SrrTrack * rhs)
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
  // can_tx_detect_valid_level
  if (lhs->can_tx_detect_valid_level != rhs->can_tx_detect_valid_level) {
    return false;
  }
  // can_tx_detect_status
  if (lhs->can_tx_detect_status != rhs->can_tx_detect_status) {
    return false;
  }
  // can_tx_detect_range_rate
  if (lhs->can_tx_detect_range_rate != rhs->can_tx_detect_range_rate) {
    return false;
  }
  // can_tx_detect_range
  if (lhs->can_tx_detect_range != rhs->can_tx_detect_range) {
    return false;
  }
  // can_tx_detect_angle
  if (lhs->can_tx_detect_angle != rhs->can_tx_detect_angle) {
    return false;
  }
  // can_tx_detect_amplitude
  if (lhs->can_tx_detect_amplitude != rhs->can_tx_detect_amplitude) {
    return false;
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrTrack__copy(
  const delphi_srr_msgs__msg__SrrTrack * input,
  delphi_srr_msgs__msg__SrrTrack * output)
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
  // can_tx_detect_valid_level
  output->can_tx_detect_valid_level = input->can_tx_detect_valid_level;
  // can_tx_detect_status
  output->can_tx_detect_status = input->can_tx_detect_status;
  // can_tx_detect_range_rate
  output->can_tx_detect_range_rate = input->can_tx_detect_range_rate;
  // can_tx_detect_range
  output->can_tx_detect_range = input->can_tx_detect_range;
  // can_tx_detect_angle
  output->can_tx_detect_angle = input->can_tx_detect_angle;
  // can_tx_detect_amplitude
  output->can_tx_detect_amplitude = input->can_tx_detect_amplitude;
  return true;
}

delphi_srr_msgs__msg__SrrTrack *
delphi_srr_msgs__msg__SrrTrack__create()
{
  delphi_srr_msgs__msg__SrrTrack * msg = (delphi_srr_msgs__msg__SrrTrack *)malloc(sizeof(delphi_srr_msgs__msg__SrrTrack));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_srr_msgs__msg__SrrTrack));
  bool success = delphi_srr_msgs__msg__SrrTrack__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_srr_msgs__msg__SrrTrack__destroy(delphi_srr_msgs__msg__SrrTrack * msg)
{
  if (msg) {
    delphi_srr_msgs__msg__SrrTrack__fini(msg);
  }
  free(msg);
}


bool
delphi_srr_msgs__msg__SrrTrack__Sequence__init(delphi_srr_msgs__msg__SrrTrack__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_srr_msgs__msg__SrrTrack * data = NULL;
  if (size) {
    data = (delphi_srr_msgs__msg__SrrTrack *)calloc(size, sizeof(delphi_srr_msgs__msg__SrrTrack));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_srr_msgs__msg__SrrTrack__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_srr_msgs__msg__SrrTrack__fini(&data[i - 1]);
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
delphi_srr_msgs__msg__SrrTrack__Sequence__fini(delphi_srr_msgs__msg__SrrTrack__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_srr_msgs__msg__SrrTrack__fini(&array->data[i]);
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

delphi_srr_msgs__msg__SrrTrack__Sequence *
delphi_srr_msgs__msg__SrrTrack__Sequence__create(size_t size)
{
  delphi_srr_msgs__msg__SrrTrack__Sequence * array = (delphi_srr_msgs__msg__SrrTrack__Sequence *)malloc(sizeof(delphi_srr_msgs__msg__SrrTrack__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_srr_msgs__msg__SrrTrack__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_srr_msgs__msg__SrrTrack__Sequence__destroy(delphi_srr_msgs__msg__SrrTrack__Sequence * array)
{
  if (array) {
    delphi_srr_msgs__msg__SrrTrack__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_srr_msgs__msg__SrrTrack__Sequence__are_equal(const delphi_srr_msgs__msg__SrrTrack__Sequence * lhs, const delphi_srr_msgs__msg__SrrTrack__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_srr_msgs__msg__SrrTrack__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrTrack__Sequence__copy(
  const delphi_srr_msgs__msg__SrrTrack__Sequence * input,
  delphi_srr_msgs__msg__SrrTrack__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_srr_msgs__msg__SrrTrack);
    delphi_srr_msgs__msg__SrrTrack * data =
      (delphi_srr_msgs__msg__SrrTrack *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_srr_msgs__msg__SrrTrack__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_srr_msgs__msg__SrrTrack__fini(&data[i]);
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
    if (!delphi_srr_msgs__msg__SrrTrack__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
