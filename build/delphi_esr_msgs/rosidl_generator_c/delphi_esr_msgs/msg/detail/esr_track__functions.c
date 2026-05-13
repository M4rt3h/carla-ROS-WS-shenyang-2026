// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrTrack.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_track__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `canmsg`
#include "rosidl_runtime_c/string_functions.h"

bool
delphi_esr_msgs__msg__EsrTrack__init(delphi_esr_msgs__msg__EsrTrack * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrTrack__fini(msg);
    return false;
  }
  // canmsg
  if (!rosidl_runtime_c__String__init(&msg->canmsg)) {
    delphi_esr_msgs__msg__EsrTrack__fini(msg);
    return false;
  }
  // id
  // lat_rate
  // grouping_changed
  // oncoming
  // status
  // angle
  // range
  // bridge_object
  // rolling_count
  // width
  // range_accel
  // med_range_mode
  // range_rate
  return true;
}

void
delphi_esr_msgs__msg__EsrTrack__fini(delphi_esr_msgs__msg__EsrTrack * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // canmsg
  rosidl_runtime_c__String__fini(&msg->canmsg);
  // id
  // lat_rate
  // grouping_changed
  // oncoming
  // status
  // angle
  // range
  // bridge_object
  // rolling_count
  // width
  // range_accel
  // med_range_mode
  // range_rate
}

bool
delphi_esr_msgs__msg__EsrTrack__are_equal(const delphi_esr_msgs__msg__EsrTrack * lhs, const delphi_esr_msgs__msg__EsrTrack * rhs)
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
  // canmsg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->canmsg), &(rhs->canmsg)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // lat_rate
  if (lhs->lat_rate != rhs->lat_rate) {
    return false;
  }
  // grouping_changed
  if (lhs->grouping_changed != rhs->grouping_changed) {
    return false;
  }
  // oncoming
  if (lhs->oncoming != rhs->oncoming) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // bridge_object
  if (lhs->bridge_object != rhs->bridge_object) {
    return false;
  }
  // rolling_count
  if (lhs->rolling_count != rhs->rolling_count) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // range_accel
  if (lhs->range_accel != rhs->range_accel) {
    return false;
  }
  // med_range_mode
  if (lhs->med_range_mode != rhs->med_range_mode) {
    return false;
  }
  // range_rate
  if (lhs->range_rate != rhs->range_rate) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrTrack__copy(
  const delphi_esr_msgs__msg__EsrTrack * input,
  delphi_esr_msgs__msg__EsrTrack * output)
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
  // canmsg
  if (!rosidl_runtime_c__String__copy(
      &(input->canmsg), &(output->canmsg)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // lat_rate
  output->lat_rate = input->lat_rate;
  // grouping_changed
  output->grouping_changed = input->grouping_changed;
  // oncoming
  output->oncoming = input->oncoming;
  // status
  output->status = input->status;
  // angle
  output->angle = input->angle;
  // range
  output->range = input->range;
  // bridge_object
  output->bridge_object = input->bridge_object;
  // rolling_count
  output->rolling_count = input->rolling_count;
  // width
  output->width = input->width;
  // range_accel
  output->range_accel = input->range_accel;
  // med_range_mode
  output->med_range_mode = input->med_range_mode;
  // range_rate
  output->range_rate = input->range_rate;
  return true;
}

delphi_esr_msgs__msg__EsrTrack *
delphi_esr_msgs__msg__EsrTrack__create()
{
  delphi_esr_msgs__msg__EsrTrack * msg = (delphi_esr_msgs__msg__EsrTrack *)malloc(sizeof(delphi_esr_msgs__msg__EsrTrack));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrTrack));
  bool success = delphi_esr_msgs__msg__EsrTrack__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrTrack__destroy(delphi_esr_msgs__msg__EsrTrack * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrTrack__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrTrack__Sequence__init(delphi_esr_msgs__msg__EsrTrack__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrTrack * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrTrack *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrTrack));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrTrack__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrTrack__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrTrack__Sequence__fini(delphi_esr_msgs__msg__EsrTrack__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrTrack__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrTrack__Sequence *
delphi_esr_msgs__msg__EsrTrack__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrTrack__Sequence * array = (delphi_esr_msgs__msg__EsrTrack__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrTrack__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrTrack__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrTrack__Sequence__destroy(delphi_esr_msgs__msg__EsrTrack__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrTrack__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrTrack__Sequence__are_equal(const delphi_esr_msgs__msg__EsrTrack__Sequence * lhs, const delphi_esr_msgs__msg__EsrTrack__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrTrack__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrTrack__Sequence__copy(
  const delphi_esr_msgs__msg__EsrTrack__Sequence * input,
  delphi_esr_msgs__msg__EsrTrack__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrTrack);
    delphi_esr_msgs__msg__EsrTrack * data =
      (delphi_esr_msgs__msg__EsrTrack *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrTrack__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrTrack__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrTrack__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
