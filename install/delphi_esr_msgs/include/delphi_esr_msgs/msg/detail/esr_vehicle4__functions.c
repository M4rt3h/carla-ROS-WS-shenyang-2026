// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrVehicle4.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_vehicle4__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_esr_msgs__msg__EsrVehicle4__init(delphi_esr_msgs__msg__EsrVehicle4 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrVehicle4__fini(msg);
    return false;
  }
  // fac_align_cmd_1
  // fac_align_cmd_2
  // fac_align_max_nt
  // fac_align_samp_req
  // fac_tgt_mtg_offset
  // fac_tgt_mtg_space_hor
  // fac_tgt_mtg_space_ver
  // fac_tgt_range_1
  // fac_tgt_range_r2m
  // fac_tgt_range_m2t
  return true;
}

void
delphi_esr_msgs__msg__EsrVehicle4__fini(delphi_esr_msgs__msg__EsrVehicle4 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fac_align_cmd_1
  // fac_align_cmd_2
  // fac_align_max_nt
  // fac_align_samp_req
  // fac_tgt_mtg_offset
  // fac_tgt_mtg_space_hor
  // fac_tgt_mtg_space_ver
  // fac_tgt_range_1
  // fac_tgt_range_r2m
  // fac_tgt_range_m2t
}

bool
delphi_esr_msgs__msg__EsrVehicle4__are_equal(const delphi_esr_msgs__msg__EsrVehicle4 * lhs, const delphi_esr_msgs__msg__EsrVehicle4 * rhs)
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
  // fac_align_cmd_1
  if (lhs->fac_align_cmd_1 != rhs->fac_align_cmd_1) {
    return false;
  }
  // fac_align_cmd_2
  if (lhs->fac_align_cmd_2 != rhs->fac_align_cmd_2) {
    return false;
  }
  // fac_align_max_nt
  if (lhs->fac_align_max_nt != rhs->fac_align_max_nt) {
    return false;
  }
  // fac_align_samp_req
  if (lhs->fac_align_samp_req != rhs->fac_align_samp_req) {
    return false;
  }
  // fac_tgt_mtg_offset
  if (lhs->fac_tgt_mtg_offset != rhs->fac_tgt_mtg_offset) {
    return false;
  }
  // fac_tgt_mtg_space_hor
  if (lhs->fac_tgt_mtg_space_hor != rhs->fac_tgt_mtg_space_hor) {
    return false;
  }
  // fac_tgt_mtg_space_ver
  if (lhs->fac_tgt_mtg_space_ver != rhs->fac_tgt_mtg_space_ver) {
    return false;
  }
  // fac_tgt_range_1
  if (lhs->fac_tgt_range_1 != rhs->fac_tgt_range_1) {
    return false;
  }
  // fac_tgt_range_r2m
  if (lhs->fac_tgt_range_r2m != rhs->fac_tgt_range_r2m) {
    return false;
  }
  // fac_tgt_range_m2t
  if (lhs->fac_tgt_range_m2t != rhs->fac_tgt_range_m2t) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrVehicle4__copy(
  const delphi_esr_msgs__msg__EsrVehicle4 * input,
  delphi_esr_msgs__msg__EsrVehicle4 * output)
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
  // fac_align_cmd_1
  output->fac_align_cmd_1 = input->fac_align_cmd_1;
  // fac_align_cmd_2
  output->fac_align_cmd_2 = input->fac_align_cmd_2;
  // fac_align_max_nt
  output->fac_align_max_nt = input->fac_align_max_nt;
  // fac_align_samp_req
  output->fac_align_samp_req = input->fac_align_samp_req;
  // fac_tgt_mtg_offset
  output->fac_tgt_mtg_offset = input->fac_tgt_mtg_offset;
  // fac_tgt_mtg_space_hor
  output->fac_tgt_mtg_space_hor = input->fac_tgt_mtg_space_hor;
  // fac_tgt_mtg_space_ver
  output->fac_tgt_mtg_space_ver = input->fac_tgt_mtg_space_ver;
  // fac_tgt_range_1
  output->fac_tgt_range_1 = input->fac_tgt_range_1;
  // fac_tgt_range_r2m
  output->fac_tgt_range_r2m = input->fac_tgt_range_r2m;
  // fac_tgt_range_m2t
  output->fac_tgt_range_m2t = input->fac_tgt_range_m2t;
  return true;
}

delphi_esr_msgs__msg__EsrVehicle4 *
delphi_esr_msgs__msg__EsrVehicle4__create()
{
  delphi_esr_msgs__msg__EsrVehicle4 * msg = (delphi_esr_msgs__msg__EsrVehicle4 *)malloc(sizeof(delphi_esr_msgs__msg__EsrVehicle4));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrVehicle4));
  bool success = delphi_esr_msgs__msg__EsrVehicle4__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrVehicle4__destroy(delphi_esr_msgs__msg__EsrVehicle4 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrVehicle4__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrVehicle4__Sequence__init(delphi_esr_msgs__msg__EsrVehicle4__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrVehicle4 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrVehicle4 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrVehicle4));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrVehicle4__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrVehicle4__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrVehicle4__Sequence__fini(delphi_esr_msgs__msg__EsrVehicle4__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrVehicle4__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrVehicle4__Sequence *
delphi_esr_msgs__msg__EsrVehicle4__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrVehicle4__Sequence * array = (delphi_esr_msgs__msg__EsrVehicle4__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrVehicle4__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrVehicle4__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrVehicle4__Sequence__destroy(delphi_esr_msgs__msg__EsrVehicle4__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrVehicle4__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrVehicle4__Sequence__are_equal(const delphi_esr_msgs__msg__EsrVehicle4__Sequence * lhs, const delphi_esr_msgs__msg__EsrVehicle4__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrVehicle4__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrVehicle4__Sequence__copy(
  const delphi_esr_msgs__msg__EsrVehicle4__Sequence * input,
  delphi_esr_msgs__msg__EsrVehicle4__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrVehicle4);
    delphi_esr_msgs__msg__EsrVehicle4 * data =
      (delphi_esr_msgs__msg__EsrVehicle4 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrVehicle4__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrVehicle4__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrVehicle4__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
