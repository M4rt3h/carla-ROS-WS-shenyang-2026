// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neobotix_usboard_msgs:msg/AnsParasetToEEPROM.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/ans_paraset_to_eeprom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__init(neobotix_usboard_msgs__msg__AnsParasetToEEPROM * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    neobotix_usboard_msgs__msg__AnsParasetToEEPROM__fini(msg);
    return false;
  }
  // command
  // paraset_cksum_low_byte
  // paraset_cksum_high_byte
  return true;
}

void
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__fini(neobotix_usboard_msgs__msg__AnsParasetToEEPROM * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // command
  // paraset_cksum_low_byte
  // paraset_cksum_high_byte
}

bool
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__are_equal(const neobotix_usboard_msgs__msg__AnsParasetToEEPROM * lhs, const neobotix_usboard_msgs__msg__AnsParasetToEEPROM * rhs)
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
  // paraset_cksum_low_byte
  if (lhs->paraset_cksum_low_byte != rhs->paraset_cksum_low_byte) {
    return false;
  }
  // paraset_cksum_high_byte
  if (lhs->paraset_cksum_high_byte != rhs->paraset_cksum_high_byte) {
    return false;
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__copy(
  const neobotix_usboard_msgs__msg__AnsParasetToEEPROM * input,
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM * output)
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
  // paraset_cksum_low_byte
  output->paraset_cksum_low_byte = input->paraset_cksum_low_byte;
  // paraset_cksum_high_byte
  output->paraset_cksum_high_byte = input->paraset_cksum_high_byte;
  return true;
}

neobotix_usboard_msgs__msg__AnsParasetToEEPROM *
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__create()
{
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM * msg = (neobotix_usboard_msgs__msg__AnsParasetToEEPROM *)malloc(sizeof(neobotix_usboard_msgs__msg__AnsParasetToEEPROM));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neobotix_usboard_msgs__msg__AnsParasetToEEPROM));
  bool success = neobotix_usboard_msgs__msg__AnsParasetToEEPROM__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__destroy(neobotix_usboard_msgs__msg__AnsParasetToEEPROM * msg)
{
  if (msg) {
    neobotix_usboard_msgs__msg__AnsParasetToEEPROM__fini(msg);
  }
  free(msg);
}


bool
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence__init(neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM * data = NULL;
  if (size) {
    data = (neobotix_usboard_msgs__msg__AnsParasetToEEPROM *)calloc(size, sizeof(neobotix_usboard_msgs__msg__AnsParasetToEEPROM));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neobotix_usboard_msgs__msg__AnsParasetToEEPROM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neobotix_usboard_msgs__msg__AnsParasetToEEPROM__fini(&data[i - 1]);
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
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence__fini(neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      neobotix_usboard_msgs__msg__AnsParasetToEEPROM__fini(&array->data[i]);
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

neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence *
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence__create(size_t size)
{
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence * array = (neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence *)malloc(sizeof(neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence__destroy(neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence * array)
{
  if (array) {
    neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence__fini(array);
  }
  free(array);
}

bool
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence__are_equal(const neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence * lhs, const neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neobotix_usboard_msgs__msg__AnsParasetToEEPROM__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence__copy(
  const neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence * input,
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neobotix_usboard_msgs__msg__AnsParasetToEEPROM);
    neobotix_usboard_msgs__msg__AnsParasetToEEPROM * data =
      (neobotix_usboard_msgs__msg__AnsParasetToEEPROM *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neobotix_usboard_msgs__msg__AnsParasetToEEPROM__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          neobotix_usboard_msgs__msg__AnsParasetToEEPROM__fini(&data[i]);
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
    if (!neobotix_usboard_msgs__msg__AnsParasetToEEPROM__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
