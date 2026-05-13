// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrStatus4.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status4__functions.h"

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
delphi_esr_msgs__msg__EsrStatus4__init(delphi_esr_msgs__msg__EsrStatus4 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrStatus4__fini(msg);
    return false;
  }
  // canmsg
  if (!rosidl_runtime_c__String__init(&msg->canmsg)) {
    delphi_esr_msgs__msg__EsrStatus4__fini(msg);
    return false;
  }
  // truck_target_det
  // lr_only_grating_lobe_det
  // sidelobe_blockage
  // partial_blockage
  // mr_lr_mode
  // rolling_count_3
  // path_id_acc
  // path_id_cmbb_move
  // path_id_cmbb_stat
  // path_id_fcw_move
  // path_id_fcw_stat
  // auto_align_angle
  // path_id_acc_stat
  return true;
}

void
delphi_esr_msgs__msg__EsrStatus4__fini(delphi_esr_msgs__msg__EsrStatus4 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // canmsg
  rosidl_runtime_c__String__fini(&msg->canmsg);
  // truck_target_det
  // lr_only_grating_lobe_det
  // sidelobe_blockage
  // partial_blockage
  // mr_lr_mode
  // rolling_count_3
  // path_id_acc
  // path_id_cmbb_move
  // path_id_cmbb_stat
  // path_id_fcw_move
  // path_id_fcw_stat
  // auto_align_angle
  // path_id_acc_stat
}

bool
delphi_esr_msgs__msg__EsrStatus4__are_equal(const delphi_esr_msgs__msg__EsrStatus4 * lhs, const delphi_esr_msgs__msg__EsrStatus4 * rhs)
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
  // truck_target_det
  if (lhs->truck_target_det != rhs->truck_target_det) {
    return false;
  }
  // lr_only_grating_lobe_det
  if (lhs->lr_only_grating_lobe_det != rhs->lr_only_grating_lobe_det) {
    return false;
  }
  // sidelobe_blockage
  if (lhs->sidelobe_blockage != rhs->sidelobe_blockage) {
    return false;
  }
  // partial_blockage
  if (lhs->partial_blockage != rhs->partial_blockage) {
    return false;
  }
  // mr_lr_mode
  if (lhs->mr_lr_mode != rhs->mr_lr_mode) {
    return false;
  }
  // rolling_count_3
  if (lhs->rolling_count_3 != rhs->rolling_count_3) {
    return false;
  }
  // path_id_acc
  if (lhs->path_id_acc != rhs->path_id_acc) {
    return false;
  }
  // path_id_cmbb_move
  if (lhs->path_id_cmbb_move != rhs->path_id_cmbb_move) {
    return false;
  }
  // path_id_cmbb_stat
  if (lhs->path_id_cmbb_stat != rhs->path_id_cmbb_stat) {
    return false;
  }
  // path_id_fcw_move
  if (lhs->path_id_fcw_move != rhs->path_id_fcw_move) {
    return false;
  }
  // path_id_fcw_stat
  if (lhs->path_id_fcw_stat != rhs->path_id_fcw_stat) {
    return false;
  }
  // auto_align_angle
  if (lhs->auto_align_angle != rhs->auto_align_angle) {
    return false;
  }
  // path_id_acc_stat
  if (lhs->path_id_acc_stat != rhs->path_id_acc_stat) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus4__copy(
  const delphi_esr_msgs__msg__EsrStatus4 * input,
  delphi_esr_msgs__msg__EsrStatus4 * output)
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
  // truck_target_det
  output->truck_target_det = input->truck_target_det;
  // lr_only_grating_lobe_det
  output->lr_only_grating_lobe_det = input->lr_only_grating_lobe_det;
  // sidelobe_blockage
  output->sidelobe_blockage = input->sidelobe_blockage;
  // partial_blockage
  output->partial_blockage = input->partial_blockage;
  // mr_lr_mode
  output->mr_lr_mode = input->mr_lr_mode;
  // rolling_count_3
  output->rolling_count_3 = input->rolling_count_3;
  // path_id_acc
  output->path_id_acc = input->path_id_acc;
  // path_id_cmbb_move
  output->path_id_cmbb_move = input->path_id_cmbb_move;
  // path_id_cmbb_stat
  output->path_id_cmbb_stat = input->path_id_cmbb_stat;
  // path_id_fcw_move
  output->path_id_fcw_move = input->path_id_fcw_move;
  // path_id_fcw_stat
  output->path_id_fcw_stat = input->path_id_fcw_stat;
  // auto_align_angle
  output->auto_align_angle = input->auto_align_angle;
  // path_id_acc_stat
  output->path_id_acc_stat = input->path_id_acc_stat;
  return true;
}

delphi_esr_msgs__msg__EsrStatus4 *
delphi_esr_msgs__msg__EsrStatus4__create()
{
  delphi_esr_msgs__msg__EsrStatus4 * msg = (delphi_esr_msgs__msg__EsrStatus4 *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus4));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrStatus4));
  bool success = delphi_esr_msgs__msg__EsrStatus4__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrStatus4__destroy(delphi_esr_msgs__msg__EsrStatus4 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrStatus4__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrStatus4__Sequence__init(delphi_esr_msgs__msg__EsrStatus4__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrStatus4 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrStatus4 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrStatus4));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrStatus4__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrStatus4__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrStatus4__Sequence__fini(delphi_esr_msgs__msg__EsrStatus4__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrStatus4__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrStatus4__Sequence *
delphi_esr_msgs__msg__EsrStatus4__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrStatus4__Sequence * array = (delphi_esr_msgs__msg__EsrStatus4__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus4__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrStatus4__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrStatus4__Sequence__destroy(delphi_esr_msgs__msg__EsrStatus4__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrStatus4__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrStatus4__Sequence__are_equal(const delphi_esr_msgs__msg__EsrStatus4__Sequence * lhs, const delphi_esr_msgs__msg__EsrStatus4__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrStatus4__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus4__Sequence__copy(
  const delphi_esr_msgs__msg__EsrStatus4__Sequence * input,
  delphi_esr_msgs__msg__EsrStatus4__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrStatus4);
    delphi_esr_msgs__msg__EsrStatus4 * data =
      (delphi_esr_msgs__msg__EsrStatus4 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrStatus4__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrStatus4__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrStatus4__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
