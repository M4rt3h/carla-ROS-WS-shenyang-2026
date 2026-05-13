// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrStatus9.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status9__functions.h"

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
delphi_esr_msgs__msg__EsrStatus9__init(delphi_esr_msgs__msg__EsrStatus9 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrStatus9__fini(msg);
    return false;
  }
  // canmsg
  if (!rosidl_runtime_c__String__init(&msg->canmsg)) {
    delphi_esr_msgs__msg__EsrStatus9__fini(msg);
    return false;
  }
  // avg_pwr_cwblkg
  // sideslip_angle
  // serial_num_3rd_byte
  // water_spray_target_id
  // filtered_xohp_acc_cipv
  // path_id_acc_2
  // path_id_acc_3
  return true;
}

void
delphi_esr_msgs__msg__EsrStatus9__fini(delphi_esr_msgs__msg__EsrStatus9 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // canmsg
  rosidl_runtime_c__String__fini(&msg->canmsg);
  // avg_pwr_cwblkg
  // sideslip_angle
  // serial_num_3rd_byte
  // water_spray_target_id
  // filtered_xohp_acc_cipv
  // path_id_acc_2
  // path_id_acc_3
}

bool
delphi_esr_msgs__msg__EsrStatus9__are_equal(const delphi_esr_msgs__msg__EsrStatus9 * lhs, const delphi_esr_msgs__msg__EsrStatus9 * rhs)
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
  // avg_pwr_cwblkg
  if (lhs->avg_pwr_cwblkg != rhs->avg_pwr_cwblkg) {
    return false;
  }
  // sideslip_angle
  if (lhs->sideslip_angle != rhs->sideslip_angle) {
    return false;
  }
  // serial_num_3rd_byte
  if (lhs->serial_num_3rd_byte != rhs->serial_num_3rd_byte) {
    return false;
  }
  // water_spray_target_id
  if (lhs->water_spray_target_id != rhs->water_spray_target_id) {
    return false;
  }
  // filtered_xohp_acc_cipv
  if (lhs->filtered_xohp_acc_cipv != rhs->filtered_xohp_acc_cipv) {
    return false;
  }
  // path_id_acc_2
  if (lhs->path_id_acc_2 != rhs->path_id_acc_2) {
    return false;
  }
  // path_id_acc_3
  if (lhs->path_id_acc_3 != rhs->path_id_acc_3) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus9__copy(
  const delphi_esr_msgs__msg__EsrStatus9 * input,
  delphi_esr_msgs__msg__EsrStatus9 * output)
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
  // avg_pwr_cwblkg
  output->avg_pwr_cwblkg = input->avg_pwr_cwblkg;
  // sideslip_angle
  output->sideslip_angle = input->sideslip_angle;
  // serial_num_3rd_byte
  output->serial_num_3rd_byte = input->serial_num_3rd_byte;
  // water_spray_target_id
  output->water_spray_target_id = input->water_spray_target_id;
  // filtered_xohp_acc_cipv
  output->filtered_xohp_acc_cipv = input->filtered_xohp_acc_cipv;
  // path_id_acc_2
  output->path_id_acc_2 = input->path_id_acc_2;
  // path_id_acc_3
  output->path_id_acc_3 = input->path_id_acc_3;
  return true;
}

delphi_esr_msgs__msg__EsrStatus9 *
delphi_esr_msgs__msg__EsrStatus9__create()
{
  delphi_esr_msgs__msg__EsrStatus9 * msg = (delphi_esr_msgs__msg__EsrStatus9 *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus9));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrStatus9));
  bool success = delphi_esr_msgs__msg__EsrStatus9__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrStatus9__destroy(delphi_esr_msgs__msg__EsrStatus9 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrStatus9__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrStatus9__Sequence__init(delphi_esr_msgs__msg__EsrStatus9__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrStatus9 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrStatus9 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrStatus9));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrStatus9__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrStatus9__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrStatus9__Sequence__fini(delphi_esr_msgs__msg__EsrStatus9__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrStatus9__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrStatus9__Sequence *
delphi_esr_msgs__msg__EsrStatus9__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrStatus9__Sequence * array = (delphi_esr_msgs__msg__EsrStatus9__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus9__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrStatus9__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrStatus9__Sequence__destroy(delphi_esr_msgs__msg__EsrStatus9__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrStatus9__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrStatus9__Sequence__are_equal(const delphi_esr_msgs__msg__EsrStatus9__Sequence * lhs, const delphi_esr_msgs__msg__EsrStatus9__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrStatus9__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus9__Sequence__copy(
  const delphi_esr_msgs__msg__EsrStatus9__Sequence * input,
  delphi_esr_msgs__msg__EsrStatus9__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrStatus9);
    delphi_esr_msgs__msg__EsrStatus9 * data =
      (delphi_esr_msgs__msg__EsrStatus9 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrStatus9__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrStatus9__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrStatus9__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
