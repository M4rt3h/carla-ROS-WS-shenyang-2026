// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/MrrDetection.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__MrrDetection__init(delphi_mrr_msgs__msg__MrrDetection * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__MrrDetection__fini(msg);
    return false;
  }
  // detection_id
  // confid_azimuth
  // super_res_target
  // nd_target
  // host_veh_clutter
  // valid_level
  // azimuth
  // range
  // range_rate
  // amplitude
  // index_2lsb
  return true;
}

void
delphi_mrr_msgs__msg__MrrDetection__fini(delphi_mrr_msgs__msg__MrrDetection * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detection_id
  // confid_azimuth
  // super_res_target
  // nd_target
  // host_veh_clutter
  // valid_level
  // azimuth
  // range
  // range_rate
  // amplitude
  // index_2lsb
}

bool
delphi_mrr_msgs__msg__MrrDetection__are_equal(const delphi_mrr_msgs__msg__MrrDetection * lhs, const delphi_mrr_msgs__msg__MrrDetection * rhs)
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
  // detection_id
  if (lhs->detection_id != rhs->detection_id) {
    return false;
  }
  // confid_azimuth
  if (lhs->confid_azimuth != rhs->confid_azimuth) {
    return false;
  }
  // super_res_target
  if (lhs->super_res_target != rhs->super_res_target) {
    return false;
  }
  // nd_target
  if (lhs->nd_target != rhs->nd_target) {
    return false;
  }
  // host_veh_clutter
  if (lhs->host_veh_clutter != rhs->host_veh_clutter) {
    return false;
  }
  // valid_level
  if (lhs->valid_level != rhs->valid_level) {
    return false;
  }
  // azimuth
  if (lhs->azimuth != rhs->azimuth) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // range_rate
  if (lhs->range_rate != rhs->range_rate) {
    return false;
  }
  // amplitude
  if (lhs->amplitude != rhs->amplitude) {
    return false;
  }
  // index_2lsb
  if (lhs->index_2lsb != rhs->index_2lsb) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrDetection__copy(
  const delphi_mrr_msgs__msg__MrrDetection * input,
  delphi_mrr_msgs__msg__MrrDetection * output)
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
  // detection_id
  output->detection_id = input->detection_id;
  // confid_azimuth
  output->confid_azimuth = input->confid_azimuth;
  // super_res_target
  output->super_res_target = input->super_res_target;
  // nd_target
  output->nd_target = input->nd_target;
  // host_veh_clutter
  output->host_veh_clutter = input->host_veh_clutter;
  // valid_level
  output->valid_level = input->valid_level;
  // azimuth
  output->azimuth = input->azimuth;
  // range
  output->range = input->range;
  // range_rate
  output->range_rate = input->range_rate;
  // amplitude
  output->amplitude = input->amplitude;
  // index_2lsb
  output->index_2lsb = input->index_2lsb;
  return true;
}

delphi_mrr_msgs__msg__MrrDetection *
delphi_mrr_msgs__msg__MrrDetection__create()
{
  delphi_mrr_msgs__msg__MrrDetection * msg = (delphi_mrr_msgs__msg__MrrDetection *)malloc(sizeof(delphi_mrr_msgs__msg__MrrDetection));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__MrrDetection));
  bool success = delphi_mrr_msgs__msg__MrrDetection__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__MrrDetection__destroy(delphi_mrr_msgs__msg__MrrDetection * msg)
{
  if (msg) {
    delphi_mrr_msgs__msg__MrrDetection__fini(msg);
  }
  free(msg);
}


bool
delphi_mrr_msgs__msg__MrrDetection__Sequence__init(delphi_mrr_msgs__msg__MrrDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_mrr_msgs__msg__MrrDetection * data = NULL;
  if (size) {
    data = (delphi_mrr_msgs__msg__MrrDetection *)calloc(size, sizeof(delphi_mrr_msgs__msg__MrrDetection));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__MrrDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__MrrDetection__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__MrrDetection__Sequence__fini(delphi_mrr_msgs__msg__MrrDetection__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_mrr_msgs__msg__MrrDetection__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__MrrDetection__Sequence *
delphi_mrr_msgs__msg__MrrDetection__Sequence__create(size_t size)
{
  delphi_mrr_msgs__msg__MrrDetection__Sequence * array = (delphi_mrr_msgs__msg__MrrDetection__Sequence *)malloc(sizeof(delphi_mrr_msgs__msg__MrrDetection__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__MrrDetection__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__MrrDetection__Sequence__destroy(delphi_mrr_msgs__msg__MrrDetection__Sequence * array)
{
  if (array) {
    delphi_mrr_msgs__msg__MrrDetection__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_mrr_msgs__msg__MrrDetection__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrDetection__Sequence * lhs, const delphi_mrr_msgs__msg__MrrDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrDetection__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrDetection__Sequence * input,
  delphi_mrr_msgs__msg__MrrDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__MrrDetection);
    delphi_mrr_msgs__msg__MrrDetection * data =
      (delphi_mrr_msgs__msg__MrrDetection *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__MrrDetection__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__MrrDetection__fini(&data[i]);
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
    if (!delphi_mrr_msgs__msg__MrrDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
