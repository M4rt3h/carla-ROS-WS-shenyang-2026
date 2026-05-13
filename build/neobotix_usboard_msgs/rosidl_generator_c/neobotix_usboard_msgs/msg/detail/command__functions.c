// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neobotix_usboard_msgs:msg/Command.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
neobotix_usboard_msgs__msg__Command__init(neobotix_usboard_msgs__msg__Command * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    neobotix_usboard_msgs__msg__Command__fini(msg);
    return false;
  }
  // command
  // command_data
  // set_num
  // paraset_byte6
  // paraset_byte5
  // paraset_byte4
  // paraset_byte3
  // paraset_byte2
  // paraset_byte1
  // set_active_9to16
  // set_active_1to8
  return true;
}

void
neobotix_usboard_msgs__msg__Command__fini(neobotix_usboard_msgs__msg__Command * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // command
  // command_data
  // set_num
  // paraset_byte6
  // paraset_byte5
  // paraset_byte4
  // paraset_byte3
  // paraset_byte2
  // paraset_byte1
  // set_active_9to16
  // set_active_1to8
}

bool
neobotix_usboard_msgs__msg__Command__are_equal(const neobotix_usboard_msgs__msg__Command * lhs, const neobotix_usboard_msgs__msg__Command * rhs)
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
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  // command_data
  if (lhs->command_data != rhs->command_data) {
    return false;
  }
  // set_num
  if (lhs->set_num != rhs->set_num) {
    return false;
  }
  // paraset_byte6
  if (lhs->paraset_byte6 != rhs->paraset_byte6) {
    return false;
  }
  // paraset_byte5
  if (lhs->paraset_byte5 != rhs->paraset_byte5) {
    return false;
  }
  // paraset_byte4
  if (lhs->paraset_byte4 != rhs->paraset_byte4) {
    return false;
  }
  // paraset_byte3
  if (lhs->paraset_byte3 != rhs->paraset_byte3) {
    return false;
  }
  // paraset_byte2
  if (lhs->paraset_byte2 != rhs->paraset_byte2) {
    return false;
  }
  // paraset_byte1
  if (lhs->paraset_byte1 != rhs->paraset_byte1) {
    return false;
  }
  // set_active_9to16
  if (lhs->set_active_9to16 != rhs->set_active_9to16) {
    return false;
  }
  // set_active_1to8
  if (lhs->set_active_1to8 != rhs->set_active_1to8) {
    return false;
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__Command__copy(
  const neobotix_usboard_msgs__msg__Command * input,
  neobotix_usboard_msgs__msg__Command * output)
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
  // command
  output->command = input->command;
  // command_data
  output->command_data = input->command_data;
  // set_num
  output->set_num = input->set_num;
  // paraset_byte6
  output->paraset_byte6 = input->paraset_byte6;
  // paraset_byte5
  output->paraset_byte5 = input->paraset_byte5;
  // paraset_byte4
  output->paraset_byte4 = input->paraset_byte4;
  // paraset_byte3
  output->paraset_byte3 = input->paraset_byte3;
  // paraset_byte2
  output->paraset_byte2 = input->paraset_byte2;
  // paraset_byte1
  output->paraset_byte1 = input->paraset_byte1;
  // set_active_9to16
  output->set_active_9to16 = input->set_active_9to16;
  // set_active_1to8
  output->set_active_1to8 = input->set_active_1to8;
  return true;
}

neobotix_usboard_msgs__msg__Command *
neobotix_usboard_msgs__msg__Command__create()
{
  neobotix_usboard_msgs__msg__Command * msg = (neobotix_usboard_msgs__msg__Command *)malloc(sizeof(neobotix_usboard_msgs__msg__Command));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neobotix_usboard_msgs__msg__Command));
  bool success = neobotix_usboard_msgs__msg__Command__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
neobotix_usboard_msgs__msg__Command__destroy(neobotix_usboard_msgs__msg__Command * msg)
{
  if (msg) {
    neobotix_usboard_msgs__msg__Command__fini(msg);
  }
  free(msg);
}


bool
neobotix_usboard_msgs__msg__Command__Sequence__init(neobotix_usboard_msgs__msg__Command__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  neobotix_usboard_msgs__msg__Command * data = NULL;
  if (size) {
    data = (neobotix_usboard_msgs__msg__Command *)calloc(size, sizeof(neobotix_usboard_msgs__msg__Command));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neobotix_usboard_msgs__msg__Command__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neobotix_usboard_msgs__msg__Command__fini(&data[i - 1]);
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
neobotix_usboard_msgs__msg__Command__Sequence__fini(neobotix_usboard_msgs__msg__Command__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      neobotix_usboard_msgs__msg__Command__fini(&array->data[i]);
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

neobotix_usboard_msgs__msg__Command__Sequence *
neobotix_usboard_msgs__msg__Command__Sequence__create(size_t size)
{
  neobotix_usboard_msgs__msg__Command__Sequence * array = (neobotix_usboard_msgs__msg__Command__Sequence *)malloc(sizeof(neobotix_usboard_msgs__msg__Command__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = neobotix_usboard_msgs__msg__Command__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
neobotix_usboard_msgs__msg__Command__Sequence__destroy(neobotix_usboard_msgs__msg__Command__Sequence * array)
{
  if (array) {
    neobotix_usboard_msgs__msg__Command__Sequence__fini(array);
  }
  free(array);
}

bool
neobotix_usboard_msgs__msg__Command__Sequence__are_equal(const neobotix_usboard_msgs__msg__Command__Sequence * lhs, const neobotix_usboard_msgs__msg__Command__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neobotix_usboard_msgs__msg__Command__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__Command__Sequence__copy(
  const neobotix_usboard_msgs__msg__Command__Sequence * input,
  neobotix_usboard_msgs__msg__Command__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neobotix_usboard_msgs__msg__Command);
    neobotix_usboard_msgs__msg__Command * data =
      (neobotix_usboard_msgs__msg__Command *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neobotix_usboard_msgs__msg__Command__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          neobotix_usboard_msgs__msg__Command__fini(&data[i]);
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
    if (!neobotix_usboard_msgs__msg__Command__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
