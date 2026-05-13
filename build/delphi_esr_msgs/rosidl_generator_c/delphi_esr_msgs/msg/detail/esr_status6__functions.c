// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrStatus6.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status6__functions.h"

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
delphi_esr_msgs__msg__EsrStatus6__init(delphi_esr_msgs__msg__EsrStatus6 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrStatus6__fini(msg);
    return false;
  }
  // canmsg
  if (!rosidl_runtime_c__String__init(&msg->canmsg)) {
    delphi_esr_msgs__msg__EsrStatus6__fini(msg);
    return false;
  }
  // supply_1p8v_a2d
  // supply_n5v_a2d
  // wave_diff_a2d
  // sw_version_dsp_3rd_byte
  // vertical_align_updated
  // system_power_mode
  // found_target
  // recommend_unconverge
  // factory_align_status_1
  // factory_align_status_2
  // factory_misalignment
  // serv_align_updates_done
  // vertical_misalignment
  return true;
}

void
delphi_esr_msgs__msg__EsrStatus6__fini(delphi_esr_msgs__msg__EsrStatus6 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // canmsg
  rosidl_runtime_c__String__fini(&msg->canmsg);
  // supply_1p8v_a2d
  // supply_n5v_a2d
  // wave_diff_a2d
  // sw_version_dsp_3rd_byte
  // vertical_align_updated
  // system_power_mode
  // found_target
  // recommend_unconverge
  // factory_align_status_1
  // factory_align_status_2
  // factory_misalignment
  // serv_align_updates_done
  // vertical_misalignment
}

bool
delphi_esr_msgs__msg__EsrStatus6__are_equal(const delphi_esr_msgs__msg__EsrStatus6 * lhs, const delphi_esr_msgs__msg__EsrStatus6 * rhs)
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
  // supply_1p8v_a2d
  if (lhs->supply_1p8v_a2d != rhs->supply_1p8v_a2d) {
    return false;
  }
  // supply_n5v_a2d
  if (lhs->supply_n5v_a2d != rhs->supply_n5v_a2d) {
    return false;
  }
  // wave_diff_a2d
  if (lhs->wave_diff_a2d != rhs->wave_diff_a2d) {
    return false;
  }
  // sw_version_dsp_3rd_byte
  if (lhs->sw_version_dsp_3rd_byte != rhs->sw_version_dsp_3rd_byte) {
    return false;
  }
  // vertical_align_updated
  if (lhs->vertical_align_updated != rhs->vertical_align_updated) {
    return false;
  }
  // system_power_mode
  if (lhs->system_power_mode != rhs->system_power_mode) {
    return false;
  }
  // found_target
  if (lhs->found_target != rhs->found_target) {
    return false;
  }
  // recommend_unconverge
  if (lhs->recommend_unconverge != rhs->recommend_unconverge) {
    return false;
  }
  // factory_align_status_1
  if (lhs->factory_align_status_1 != rhs->factory_align_status_1) {
    return false;
  }
  // factory_align_status_2
  if (lhs->factory_align_status_2 != rhs->factory_align_status_2) {
    return false;
  }
  // factory_misalignment
  if (lhs->factory_misalignment != rhs->factory_misalignment) {
    return false;
  }
  // serv_align_updates_done
  if (lhs->serv_align_updates_done != rhs->serv_align_updates_done) {
    return false;
  }
  // vertical_misalignment
  if (lhs->vertical_misalignment != rhs->vertical_misalignment) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus6__copy(
  const delphi_esr_msgs__msg__EsrStatus6 * input,
  delphi_esr_msgs__msg__EsrStatus6 * output)
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
  // supply_1p8v_a2d
  output->supply_1p8v_a2d = input->supply_1p8v_a2d;
  // supply_n5v_a2d
  output->supply_n5v_a2d = input->supply_n5v_a2d;
  // wave_diff_a2d
  output->wave_diff_a2d = input->wave_diff_a2d;
  // sw_version_dsp_3rd_byte
  output->sw_version_dsp_3rd_byte = input->sw_version_dsp_3rd_byte;
  // vertical_align_updated
  output->vertical_align_updated = input->vertical_align_updated;
  // system_power_mode
  output->system_power_mode = input->system_power_mode;
  // found_target
  output->found_target = input->found_target;
  // recommend_unconverge
  output->recommend_unconverge = input->recommend_unconverge;
  // factory_align_status_1
  output->factory_align_status_1 = input->factory_align_status_1;
  // factory_align_status_2
  output->factory_align_status_2 = input->factory_align_status_2;
  // factory_misalignment
  output->factory_misalignment = input->factory_misalignment;
  // serv_align_updates_done
  output->serv_align_updates_done = input->serv_align_updates_done;
  // vertical_misalignment
  output->vertical_misalignment = input->vertical_misalignment;
  return true;
}

delphi_esr_msgs__msg__EsrStatus6 *
delphi_esr_msgs__msg__EsrStatus6__create()
{
  delphi_esr_msgs__msg__EsrStatus6 * msg = (delphi_esr_msgs__msg__EsrStatus6 *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus6));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrStatus6));
  bool success = delphi_esr_msgs__msg__EsrStatus6__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrStatus6__destroy(delphi_esr_msgs__msg__EsrStatus6 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrStatus6__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrStatus6__Sequence__init(delphi_esr_msgs__msg__EsrStatus6__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrStatus6 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrStatus6 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrStatus6));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrStatus6__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrStatus6__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrStatus6__Sequence__fini(delphi_esr_msgs__msg__EsrStatus6__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrStatus6__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrStatus6__Sequence *
delphi_esr_msgs__msg__EsrStatus6__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrStatus6__Sequence * array = (delphi_esr_msgs__msg__EsrStatus6__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus6__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrStatus6__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrStatus6__Sequence__destroy(delphi_esr_msgs__msg__EsrStatus6__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrStatus6__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrStatus6__Sequence__are_equal(const delphi_esr_msgs__msg__EsrStatus6__Sequence * lhs, const delphi_esr_msgs__msg__EsrStatus6__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrStatus6__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus6__Sequence__copy(
  const delphi_esr_msgs__msg__EsrStatus6__Sequence * input,
  delphi_esr_msgs__msg__EsrStatus6__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrStatus6);
    delphi_esr_msgs__msg__EsrStatus6 * data =
      (delphi_esr_msgs__msg__EsrStatus6 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrStatus6__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrStatus6__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrStatus6__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
