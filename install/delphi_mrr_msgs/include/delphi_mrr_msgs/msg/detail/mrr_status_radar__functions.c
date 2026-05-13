// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/MrrStatusRadar.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_status_radar__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__MrrStatusRadar__init(delphi_mrr_msgs__msg__MrrStatusRadar * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__MrrStatusRadar__fini(msg);
    return false;
  }
  // can_interference_type
  // can_recommend_unconverge
  // can_blockage_sidelobe_filter_val
  // can_radar_align_incomplete
  // can_blockage_sidelobe
  // can_blockage_mnr
  // can_radar_ext_cond_nok
  // can_radar_align_out_range
  // can_radar_align_not_start
  // can_radar_overheat_error
  // can_radar_not_op
  // can_xcvr_operational
  return true;
}

void
delphi_mrr_msgs__msg__MrrStatusRadar__fini(delphi_mrr_msgs__msg__MrrStatusRadar * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_interference_type
  // can_recommend_unconverge
  // can_blockage_sidelobe_filter_val
  // can_radar_align_incomplete
  // can_blockage_sidelobe
  // can_blockage_mnr
  // can_radar_ext_cond_nok
  // can_radar_align_out_range
  // can_radar_align_not_start
  // can_radar_overheat_error
  // can_radar_not_op
  // can_xcvr_operational
}

bool
delphi_mrr_msgs__msg__MrrStatusRadar__are_equal(const delphi_mrr_msgs__msg__MrrStatusRadar * lhs, const delphi_mrr_msgs__msg__MrrStatusRadar * rhs)
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
  // can_interference_type
  if (lhs->can_interference_type != rhs->can_interference_type) {
    return false;
  }
  // can_recommend_unconverge
  if (lhs->can_recommend_unconverge != rhs->can_recommend_unconverge) {
    return false;
  }
  // can_blockage_sidelobe_filter_val
  if (lhs->can_blockage_sidelobe_filter_val != rhs->can_blockage_sidelobe_filter_val) {
    return false;
  }
  // can_radar_align_incomplete
  if (lhs->can_radar_align_incomplete != rhs->can_radar_align_incomplete) {
    return false;
  }
  // can_blockage_sidelobe
  if (lhs->can_blockage_sidelobe != rhs->can_blockage_sidelobe) {
    return false;
  }
  // can_blockage_mnr
  if (lhs->can_blockage_mnr != rhs->can_blockage_mnr) {
    return false;
  }
  // can_radar_ext_cond_nok
  if (lhs->can_radar_ext_cond_nok != rhs->can_radar_ext_cond_nok) {
    return false;
  }
  // can_radar_align_out_range
  if (lhs->can_radar_align_out_range != rhs->can_radar_align_out_range) {
    return false;
  }
  // can_radar_align_not_start
  if (lhs->can_radar_align_not_start != rhs->can_radar_align_not_start) {
    return false;
  }
  // can_radar_overheat_error
  if (lhs->can_radar_overheat_error != rhs->can_radar_overheat_error) {
    return false;
  }
  // can_radar_not_op
  if (lhs->can_radar_not_op != rhs->can_radar_not_op) {
    return false;
  }
  // can_xcvr_operational
  if (lhs->can_xcvr_operational != rhs->can_xcvr_operational) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrStatusRadar__copy(
  const delphi_mrr_msgs__msg__MrrStatusRadar * input,
  delphi_mrr_msgs__msg__MrrStatusRadar * output)
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
  // can_interference_type
  output->can_interference_type = input->can_interference_type;
  // can_recommend_unconverge
  output->can_recommend_unconverge = input->can_recommend_unconverge;
  // can_blockage_sidelobe_filter_val
  output->can_blockage_sidelobe_filter_val = input->can_blockage_sidelobe_filter_val;
  // can_radar_align_incomplete
  output->can_radar_align_incomplete = input->can_radar_align_incomplete;
  // can_blockage_sidelobe
  output->can_blockage_sidelobe = input->can_blockage_sidelobe;
  // can_blockage_mnr
  output->can_blockage_mnr = input->can_blockage_mnr;
  // can_radar_ext_cond_nok
  output->can_radar_ext_cond_nok = input->can_radar_ext_cond_nok;
  // can_radar_align_out_range
  output->can_radar_align_out_range = input->can_radar_align_out_range;
  // can_radar_align_not_start
  output->can_radar_align_not_start = input->can_radar_align_not_start;
  // can_radar_overheat_error
  output->can_radar_overheat_error = input->can_radar_overheat_error;
  // can_radar_not_op
  output->can_radar_not_op = input->can_radar_not_op;
  // can_xcvr_operational
  output->can_xcvr_operational = input->can_xcvr_operational;
  return true;
}

delphi_mrr_msgs__msg__MrrStatusRadar *
delphi_mrr_msgs__msg__MrrStatusRadar__create()
{
  delphi_mrr_msgs__msg__MrrStatusRadar * msg = (delphi_mrr_msgs__msg__MrrStatusRadar *)malloc(sizeof(delphi_mrr_msgs__msg__MrrStatusRadar));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__MrrStatusRadar));
  bool success = delphi_mrr_msgs__msg__MrrStatusRadar__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__MrrStatusRadar__destroy(delphi_mrr_msgs__msg__MrrStatusRadar * msg)
{
  if (msg) {
    delphi_mrr_msgs__msg__MrrStatusRadar__fini(msg);
  }
  free(msg);
}


bool
delphi_mrr_msgs__msg__MrrStatusRadar__Sequence__init(delphi_mrr_msgs__msg__MrrStatusRadar__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_mrr_msgs__msg__MrrStatusRadar * data = NULL;
  if (size) {
    data = (delphi_mrr_msgs__msg__MrrStatusRadar *)calloc(size, sizeof(delphi_mrr_msgs__msg__MrrStatusRadar));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__MrrStatusRadar__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__MrrStatusRadar__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__MrrStatusRadar__Sequence__fini(delphi_mrr_msgs__msg__MrrStatusRadar__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_mrr_msgs__msg__MrrStatusRadar__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__MrrStatusRadar__Sequence *
delphi_mrr_msgs__msg__MrrStatusRadar__Sequence__create(size_t size)
{
  delphi_mrr_msgs__msg__MrrStatusRadar__Sequence * array = (delphi_mrr_msgs__msg__MrrStatusRadar__Sequence *)malloc(sizeof(delphi_mrr_msgs__msg__MrrStatusRadar__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__MrrStatusRadar__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__MrrStatusRadar__Sequence__destroy(delphi_mrr_msgs__msg__MrrStatusRadar__Sequence * array)
{
  if (array) {
    delphi_mrr_msgs__msg__MrrStatusRadar__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_mrr_msgs__msg__MrrStatusRadar__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrStatusRadar__Sequence * lhs, const delphi_mrr_msgs__msg__MrrStatusRadar__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrStatusRadar__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrStatusRadar__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrStatusRadar__Sequence * input,
  delphi_mrr_msgs__msg__MrrStatusRadar__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__MrrStatusRadar);
    delphi_mrr_msgs__msg__MrrStatusRadar * data =
      (delphi_mrr_msgs__msg__MrrStatusRadar *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__MrrStatusRadar__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__MrrStatusRadar__fini(&data[i]);
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
    if (!delphi_mrr_msgs__msg__MrrStatusRadar__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
