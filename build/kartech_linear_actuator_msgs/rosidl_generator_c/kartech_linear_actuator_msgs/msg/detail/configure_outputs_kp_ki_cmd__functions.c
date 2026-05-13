// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kartech_linear_actuator_msgs:msg/ConfigureOutputsKpKiCmd.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_kp_ki_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__init(kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__fini(msg);
    return false;
  }
  // confirm
  // kp
  // ki
  return true;
}

void
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__fini(kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // confirm
  // kp
  // ki
}

bool
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__are_equal(const kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * lhs, const kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * rhs)
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
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // ki
  if (lhs->ki != rhs->ki) {
    return false;
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__copy(
  const kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * input,
  kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * output)
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
  // kp
  output->kp = input->kp;
  // ki
  output->ki = input->ki;
  return true;
}

kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd *
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__create()
{
  kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * msg = (kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd *)malloc(sizeof(kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd));
  bool success = kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__destroy(kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * msg)
{
  if (msg) {
    kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__fini(msg);
  }
  free(msg);
}


bool
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence__init(kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * data = NULL;
  if (size) {
    data = (kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd *)calloc(size, sizeof(kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__fini(&data[i - 1]);
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
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence__fini(kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__fini(&array->data[i]);
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

kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence *
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence__create(size_t size)
{
  kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence * array = (kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence *)malloc(sizeof(kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence__destroy(kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence * array)
{
  if (array) {
    kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence__fini(array);
  }
  free(array);
}

bool
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence__are_equal(const kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence * lhs, const kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence__copy(
  const kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence * input,
  kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd);
    kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * data =
      (kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__fini(&data[i]);
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
    if (!kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
