// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kartech_linear_actuator_msgs:msg/ResetCmd.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/reset_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
kartech_linear_actuator_msgs__msg__ResetCmd__init(kartech_linear_actuator_msgs__msg__ResetCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kartech_linear_actuator_msgs__msg__ResetCmd__fini(msg);
    return false;
  }
  // confirm
  // reset_type
  // reset_user_rpt_id
  // reset_user_cmd_id_1
  // reset_user_cmd_id_2
  // reset_user_cmd_id_3
  // reset_user_cmd_id_4
  // disable_user_rpt_id
  // reenable_default_cmd_id
  return true;
}

void
kartech_linear_actuator_msgs__msg__ResetCmd__fini(kartech_linear_actuator_msgs__msg__ResetCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // confirm
  // reset_type
  // reset_user_rpt_id
  // reset_user_cmd_id_1
  // reset_user_cmd_id_2
  // reset_user_cmd_id_3
  // reset_user_cmd_id_4
  // disable_user_rpt_id
  // reenable_default_cmd_id
}

bool
kartech_linear_actuator_msgs__msg__ResetCmd__are_equal(const kartech_linear_actuator_msgs__msg__ResetCmd * lhs, const kartech_linear_actuator_msgs__msg__ResetCmd * rhs)
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
  // confirm
  if (lhs->confirm != rhs->confirm) {
    return false;
  }
  // reset_type
  if (lhs->reset_type != rhs->reset_type) {
    return false;
  }
  // reset_user_rpt_id
  if (lhs->reset_user_rpt_id != rhs->reset_user_rpt_id) {
    return false;
  }
  // reset_user_cmd_id_1
  if (lhs->reset_user_cmd_id_1 != rhs->reset_user_cmd_id_1) {
    return false;
  }
  // reset_user_cmd_id_2
  if (lhs->reset_user_cmd_id_2 != rhs->reset_user_cmd_id_2) {
    return false;
  }
  // reset_user_cmd_id_3
  if (lhs->reset_user_cmd_id_3 != rhs->reset_user_cmd_id_3) {
    return false;
  }
  // reset_user_cmd_id_4
  if (lhs->reset_user_cmd_id_4 != rhs->reset_user_cmd_id_4) {
    return false;
  }
  // disable_user_rpt_id
  if (lhs->disable_user_rpt_id != rhs->disable_user_rpt_id) {
    return false;
  }
  // reenable_default_cmd_id
  if (lhs->reenable_default_cmd_id != rhs->reenable_default_cmd_id) {
    return false;
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ResetCmd__copy(
  const kartech_linear_actuator_msgs__msg__ResetCmd * input,
  kartech_linear_actuator_msgs__msg__ResetCmd * output)
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
  // confirm
  output->confirm = input->confirm;
  // reset_type
  output->reset_type = input->reset_type;
  // reset_user_rpt_id
  output->reset_user_rpt_id = input->reset_user_rpt_id;
  // reset_user_cmd_id_1
  output->reset_user_cmd_id_1 = input->reset_user_cmd_id_1;
  // reset_user_cmd_id_2
  output->reset_user_cmd_id_2 = input->reset_user_cmd_id_2;
  // reset_user_cmd_id_3
  output->reset_user_cmd_id_3 = input->reset_user_cmd_id_3;
  // reset_user_cmd_id_4
  output->reset_user_cmd_id_4 = input->reset_user_cmd_id_4;
  // disable_user_rpt_id
  output->disable_user_rpt_id = input->disable_user_rpt_id;
  // reenable_default_cmd_id
  output->reenable_default_cmd_id = input->reenable_default_cmd_id;
  return true;
}

kartech_linear_actuator_msgs__msg__ResetCmd *
kartech_linear_actuator_msgs__msg__ResetCmd__create()
{
  kartech_linear_actuator_msgs__msg__ResetCmd * msg = (kartech_linear_actuator_msgs__msg__ResetCmd *)malloc(sizeof(kartech_linear_actuator_msgs__msg__ResetCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kartech_linear_actuator_msgs__msg__ResetCmd));
  bool success = kartech_linear_actuator_msgs__msg__ResetCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
kartech_linear_actuator_msgs__msg__ResetCmd__destroy(kartech_linear_actuator_msgs__msg__ResetCmd * msg)
{
  if (msg) {
    kartech_linear_actuator_msgs__msg__ResetCmd__fini(msg);
  }
  free(msg);
}


bool
kartech_linear_actuator_msgs__msg__ResetCmd__Sequence__init(kartech_linear_actuator_msgs__msg__ResetCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  kartech_linear_actuator_msgs__msg__ResetCmd * data = NULL;
  if (size) {
    data = (kartech_linear_actuator_msgs__msg__ResetCmd *)calloc(size, sizeof(kartech_linear_actuator_msgs__msg__ResetCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kartech_linear_actuator_msgs__msg__ResetCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kartech_linear_actuator_msgs__msg__ResetCmd__fini(&data[i - 1]);
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
kartech_linear_actuator_msgs__msg__ResetCmd__Sequence__fini(kartech_linear_actuator_msgs__msg__ResetCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kartech_linear_actuator_msgs__msg__ResetCmd__fini(&array->data[i]);
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

kartech_linear_actuator_msgs__msg__ResetCmd__Sequence *
kartech_linear_actuator_msgs__msg__ResetCmd__Sequence__create(size_t size)
{
  kartech_linear_actuator_msgs__msg__ResetCmd__Sequence * array = (kartech_linear_actuator_msgs__msg__ResetCmd__Sequence *)malloc(sizeof(kartech_linear_actuator_msgs__msg__ResetCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = kartech_linear_actuator_msgs__msg__ResetCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
kartech_linear_actuator_msgs__msg__ResetCmd__Sequence__destroy(kartech_linear_actuator_msgs__msg__ResetCmd__Sequence * array)
{
  if (array) {
    kartech_linear_actuator_msgs__msg__ResetCmd__Sequence__fini(array);
  }
  free(array);
}

bool
kartech_linear_actuator_msgs__msg__ResetCmd__Sequence__are_equal(const kartech_linear_actuator_msgs__msg__ResetCmd__Sequence * lhs, const kartech_linear_actuator_msgs__msg__ResetCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kartech_linear_actuator_msgs__msg__ResetCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ResetCmd__Sequence__copy(
  const kartech_linear_actuator_msgs__msg__ResetCmd__Sequence * input,
  kartech_linear_actuator_msgs__msg__ResetCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kartech_linear_actuator_msgs__msg__ResetCmd);
    kartech_linear_actuator_msgs__msg__ResetCmd * data =
      (kartech_linear_actuator_msgs__msg__ResetCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kartech_linear_actuator_msgs__msg__ResetCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          kartech_linear_actuator_msgs__msg__ResetCmd__fini(&data[i]);
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
    if (!kartech_linear_actuator_msgs__msg__ResetCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
