// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neobotix_usboard_msgs:msg/Paraset.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/paraset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
neobotix_usboard_msgs__msg__Paraset__init(neobotix_usboard_msgs__msg__Paraset * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    neobotix_usboard_msgs__msg__Paraset__fini(msg);
    return false;
  }
  // command
  // set_num
  // paraset_byte54
  // paraset_byte53
  // paraset_byte52
  // paraset_byte51
  // paraset_byte50
  // paraset_byte49
  // paraset_byte48
  // paraset_byte47
  // paraset_byte46
  // paraset_byte45
  // paraset_byte44
  // paraset_byte43
  // paraset_byte42
  // paraset_byte41
  // paraset_byte40
  // paraset_byte39
  // paraset_byte38
  // paraset_byte37
  // paraset_byte36
  // paraset_byte35
  // paraset_byte34
  // paraset_byte33
  // paraset_byte32
  // paraset_byte31
  // paraset_byte30
  // paraset_byte29
  // paraset_byte28
  // paraset_byte27
  // paraset_byte26
  // paraset_byte25
  // paraset_byte24
  // paraset_byte23
  // paraset_byte22
  // paraset_byte21
  // paraset_byte20
  // paraset_byte19
  // paraset_byte18
  // paraset_byte17
  // paraset_byte16
  // paraset_byte15
  // paraset_byte14
  // paraset_byte13
  // paraset_byte12
  // paraset_byte11
  // paraset_byte10
  // paraset_byte9
  // paraset_byte8
  // paraset_byte7
  // paraset_byte6
  // paraset_byte5
  // paraset_byte4
  // paraset_byte3
  // paraset_byte2
  // paraset_byte1
  return true;
}

void
neobotix_usboard_msgs__msg__Paraset__fini(neobotix_usboard_msgs__msg__Paraset * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // command
  // set_num
  // paraset_byte54
  // paraset_byte53
  // paraset_byte52
  // paraset_byte51
  // paraset_byte50
  // paraset_byte49
  // paraset_byte48
  // paraset_byte47
  // paraset_byte46
  // paraset_byte45
  // paraset_byte44
  // paraset_byte43
  // paraset_byte42
  // paraset_byte41
  // paraset_byte40
  // paraset_byte39
  // paraset_byte38
  // paraset_byte37
  // paraset_byte36
  // paraset_byte35
  // paraset_byte34
  // paraset_byte33
  // paraset_byte32
  // paraset_byte31
  // paraset_byte30
  // paraset_byte29
  // paraset_byte28
  // paraset_byte27
  // paraset_byte26
  // paraset_byte25
  // paraset_byte24
  // paraset_byte23
  // paraset_byte22
  // paraset_byte21
  // paraset_byte20
  // paraset_byte19
  // paraset_byte18
  // paraset_byte17
  // paraset_byte16
  // paraset_byte15
  // paraset_byte14
  // paraset_byte13
  // paraset_byte12
  // paraset_byte11
  // paraset_byte10
  // paraset_byte9
  // paraset_byte8
  // paraset_byte7
  // paraset_byte6
  // paraset_byte5
  // paraset_byte4
  // paraset_byte3
  // paraset_byte2
  // paraset_byte1
}

bool
neobotix_usboard_msgs__msg__Paraset__are_equal(const neobotix_usboard_msgs__msg__Paraset * lhs, const neobotix_usboard_msgs__msg__Paraset * rhs)
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
  // set_num
  if (lhs->set_num != rhs->set_num) {
    return false;
  }
  // paraset_byte54
  if (lhs->paraset_byte54 != rhs->paraset_byte54) {
    return false;
  }
  // paraset_byte53
  if (lhs->paraset_byte53 != rhs->paraset_byte53) {
    return false;
  }
  // paraset_byte52
  if (lhs->paraset_byte52 != rhs->paraset_byte52) {
    return false;
  }
  // paraset_byte51
  if (lhs->paraset_byte51 != rhs->paraset_byte51) {
    return false;
  }
  // paraset_byte50
  if (lhs->paraset_byte50 != rhs->paraset_byte50) {
    return false;
  }
  // paraset_byte49
  if (lhs->paraset_byte49 != rhs->paraset_byte49) {
    return false;
  }
  // paraset_byte48
  if (lhs->paraset_byte48 != rhs->paraset_byte48) {
    return false;
  }
  // paraset_byte47
  if (lhs->paraset_byte47 != rhs->paraset_byte47) {
    return false;
  }
  // paraset_byte46
  if (lhs->paraset_byte46 != rhs->paraset_byte46) {
    return false;
  }
  // paraset_byte45
  if (lhs->paraset_byte45 != rhs->paraset_byte45) {
    return false;
  }
  // paraset_byte44
  if (lhs->paraset_byte44 != rhs->paraset_byte44) {
    return false;
  }
  // paraset_byte43
  if (lhs->paraset_byte43 != rhs->paraset_byte43) {
    return false;
  }
  // paraset_byte42
  if (lhs->paraset_byte42 != rhs->paraset_byte42) {
    return false;
  }
  // paraset_byte41
  if (lhs->paraset_byte41 != rhs->paraset_byte41) {
    return false;
  }
  // paraset_byte40
  if (lhs->paraset_byte40 != rhs->paraset_byte40) {
    return false;
  }
  // paraset_byte39
  if (lhs->paraset_byte39 != rhs->paraset_byte39) {
    return false;
  }
  // paraset_byte38
  if (lhs->paraset_byte38 != rhs->paraset_byte38) {
    return false;
  }
  // paraset_byte37
  if (lhs->paraset_byte37 != rhs->paraset_byte37) {
    return false;
  }
  // paraset_byte36
  if (lhs->paraset_byte36 != rhs->paraset_byte36) {
    return false;
  }
  // paraset_byte35
  if (lhs->paraset_byte35 != rhs->paraset_byte35) {
    return false;
  }
  // paraset_byte34
  if (lhs->paraset_byte34 != rhs->paraset_byte34) {
    return false;
  }
  // paraset_byte33
  if (lhs->paraset_byte33 != rhs->paraset_byte33) {
    return false;
  }
  // paraset_byte32
  if (lhs->paraset_byte32 != rhs->paraset_byte32) {
    return false;
  }
  // paraset_byte31
  if (lhs->paraset_byte31 != rhs->paraset_byte31) {
    return false;
  }
  // paraset_byte30
  if (lhs->paraset_byte30 != rhs->paraset_byte30) {
    return false;
  }
  // paraset_byte29
  if (lhs->paraset_byte29 != rhs->paraset_byte29) {
    return false;
  }
  // paraset_byte28
  if (lhs->paraset_byte28 != rhs->paraset_byte28) {
    return false;
  }
  // paraset_byte27
  if (lhs->paraset_byte27 != rhs->paraset_byte27) {
    return false;
  }
  // paraset_byte26
  if (lhs->paraset_byte26 != rhs->paraset_byte26) {
    return false;
  }
  // paraset_byte25
  if (lhs->paraset_byte25 != rhs->paraset_byte25) {
    return false;
  }
  // paraset_byte24
  if (lhs->paraset_byte24 != rhs->paraset_byte24) {
    return false;
  }
  // paraset_byte23
  if (lhs->paraset_byte23 != rhs->paraset_byte23) {
    return false;
  }
  // paraset_byte22
  if (lhs->paraset_byte22 != rhs->paraset_byte22) {
    return false;
  }
  // paraset_byte21
  if (lhs->paraset_byte21 != rhs->paraset_byte21) {
    return false;
  }
  // paraset_byte20
  if (lhs->paraset_byte20 != rhs->paraset_byte20) {
    return false;
  }
  // paraset_byte19
  if (lhs->paraset_byte19 != rhs->paraset_byte19) {
    return false;
  }
  // paraset_byte18
  if (lhs->paraset_byte18 != rhs->paraset_byte18) {
    return false;
  }
  // paraset_byte17
  if (lhs->paraset_byte17 != rhs->paraset_byte17) {
    return false;
  }
  // paraset_byte16
  if (lhs->paraset_byte16 != rhs->paraset_byte16) {
    return false;
  }
  // paraset_byte15
  if (lhs->paraset_byte15 != rhs->paraset_byte15) {
    return false;
  }
  // paraset_byte14
  if (lhs->paraset_byte14 != rhs->paraset_byte14) {
    return false;
  }
  // paraset_byte13
  if (lhs->paraset_byte13 != rhs->paraset_byte13) {
    return false;
  }
  // paraset_byte12
  if (lhs->paraset_byte12 != rhs->paraset_byte12) {
    return false;
  }
  // paraset_byte11
  if (lhs->paraset_byte11 != rhs->paraset_byte11) {
    return false;
  }
  // paraset_byte10
  if (lhs->paraset_byte10 != rhs->paraset_byte10) {
    return false;
  }
  // paraset_byte9
  if (lhs->paraset_byte9 != rhs->paraset_byte9) {
    return false;
  }
  // paraset_byte8
  if (lhs->paraset_byte8 != rhs->paraset_byte8) {
    return false;
  }
  // paraset_byte7
  if (lhs->paraset_byte7 != rhs->paraset_byte7) {
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
  return true;
}

bool
neobotix_usboard_msgs__msg__Paraset__copy(
  const neobotix_usboard_msgs__msg__Paraset * input,
  neobotix_usboard_msgs__msg__Paraset * output)
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
  // set_num
  output->set_num = input->set_num;
  // paraset_byte54
  output->paraset_byte54 = input->paraset_byte54;
  // paraset_byte53
  output->paraset_byte53 = input->paraset_byte53;
  // paraset_byte52
  output->paraset_byte52 = input->paraset_byte52;
  // paraset_byte51
  output->paraset_byte51 = input->paraset_byte51;
  // paraset_byte50
  output->paraset_byte50 = input->paraset_byte50;
  // paraset_byte49
  output->paraset_byte49 = input->paraset_byte49;
  // paraset_byte48
  output->paraset_byte48 = input->paraset_byte48;
  // paraset_byte47
  output->paraset_byte47 = input->paraset_byte47;
  // paraset_byte46
  output->paraset_byte46 = input->paraset_byte46;
  // paraset_byte45
  output->paraset_byte45 = input->paraset_byte45;
  // paraset_byte44
  output->paraset_byte44 = input->paraset_byte44;
  // paraset_byte43
  output->paraset_byte43 = input->paraset_byte43;
  // paraset_byte42
  output->paraset_byte42 = input->paraset_byte42;
  // paraset_byte41
  output->paraset_byte41 = input->paraset_byte41;
  // paraset_byte40
  output->paraset_byte40 = input->paraset_byte40;
  // paraset_byte39
  output->paraset_byte39 = input->paraset_byte39;
  // paraset_byte38
  output->paraset_byte38 = input->paraset_byte38;
  // paraset_byte37
  output->paraset_byte37 = input->paraset_byte37;
  // paraset_byte36
  output->paraset_byte36 = input->paraset_byte36;
  // paraset_byte35
  output->paraset_byte35 = input->paraset_byte35;
  // paraset_byte34
  output->paraset_byte34 = input->paraset_byte34;
  // paraset_byte33
  output->paraset_byte33 = input->paraset_byte33;
  // paraset_byte32
  output->paraset_byte32 = input->paraset_byte32;
  // paraset_byte31
  output->paraset_byte31 = input->paraset_byte31;
  // paraset_byte30
  output->paraset_byte30 = input->paraset_byte30;
  // paraset_byte29
  output->paraset_byte29 = input->paraset_byte29;
  // paraset_byte28
  output->paraset_byte28 = input->paraset_byte28;
  // paraset_byte27
  output->paraset_byte27 = input->paraset_byte27;
  // paraset_byte26
  output->paraset_byte26 = input->paraset_byte26;
  // paraset_byte25
  output->paraset_byte25 = input->paraset_byte25;
  // paraset_byte24
  output->paraset_byte24 = input->paraset_byte24;
  // paraset_byte23
  output->paraset_byte23 = input->paraset_byte23;
  // paraset_byte22
  output->paraset_byte22 = input->paraset_byte22;
  // paraset_byte21
  output->paraset_byte21 = input->paraset_byte21;
  // paraset_byte20
  output->paraset_byte20 = input->paraset_byte20;
  // paraset_byte19
  output->paraset_byte19 = input->paraset_byte19;
  // paraset_byte18
  output->paraset_byte18 = input->paraset_byte18;
  // paraset_byte17
  output->paraset_byte17 = input->paraset_byte17;
  // paraset_byte16
  output->paraset_byte16 = input->paraset_byte16;
  // paraset_byte15
  output->paraset_byte15 = input->paraset_byte15;
  // paraset_byte14
  output->paraset_byte14 = input->paraset_byte14;
  // paraset_byte13
  output->paraset_byte13 = input->paraset_byte13;
  // paraset_byte12
  output->paraset_byte12 = input->paraset_byte12;
  // paraset_byte11
  output->paraset_byte11 = input->paraset_byte11;
  // paraset_byte10
  output->paraset_byte10 = input->paraset_byte10;
  // paraset_byte9
  output->paraset_byte9 = input->paraset_byte9;
  // paraset_byte8
  output->paraset_byte8 = input->paraset_byte8;
  // paraset_byte7
  output->paraset_byte7 = input->paraset_byte7;
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
  return true;
}

neobotix_usboard_msgs__msg__Paraset *
neobotix_usboard_msgs__msg__Paraset__create()
{
  neobotix_usboard_msgs__msg__Paraset * msg = (neobotix_usboard_msgs__msg__Paraset *)malloc(sizeof(neobotix_usboard_msgs__msg__Paraset));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neobotix_usboard_msgs__msg__Paraset));
  bool success = neobotix_usboard_msgs__msg__Paraset__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
neobotix_usboard_msgs__msg__Paraset__destroy(neobotix_usboard_msgs__msg__Paraset * msg)
{
  if (msg) {
    neobotix_usboard_msgs__msg__Paraset__fini(msg);
  }
  free(msg);
}


bool
neobotix_usboard_msgs__msg__Paraset__Sequence__init(neobotix_usboard_msgs__msg__Paraset__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  neobotix_usboard_msgs__msg__Paraset * data = NULL;
  if (size) {
    data = (neobotix_usboard_msgs__msg__Paraset *)calloc(size, sizeof(neobotix_usboard_msgs__msg__Paraset));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neobotix_usboard_msgs__msg__Paraset__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neobotix_usboard_msgs__msg__Paraset__fini(&data[i - 1]);
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
neobotix_usboard_msgs__msg__Paraset__Sequence__fini(neobotix_usboard_msgs__msg__Paraset__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      neobotix_usboard_msgs__msg__Paraset__fini(&array->data[i]);
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

neobotix_usboard_msgs__msg__Paraset__Sequence *
neobotix_usboard_msgs__msg__Paraset__Sequence__create(size_t size)
{
  neobotix_usboard_msgs__msg__Paraset__Sequence * array = (neobotix_usboard_msgs__msg__Paraset__Sequence *)malloc(sizeof(neobotix_usboard_msgs__msg__Paraset__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = neobotix_usboard_msgs__msg__Paraset__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
neobotix_usboard_msgs__msg__Paraset__Sequence__destroy(neobotix_usboard_msgs__msg__Paraset__Sequence * array)
{
  if (array) {
    neobotix_usboard_msgs__msg__Paraset__Sequence__fini(array);
  }
  free(array);
}

bool
neobotix_usboard_msgs__msg__Paraset__Sequence__are_equal(const neobotix_usboard_msgs__msg__Paraset__Sequence * lhs, const neobotix_usboard_msgs__msg__Paraset__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neobotix_usboard_msgs__msg__Paraset__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__Paraset__Sequence__copy(
  const neobotix_usboard_msgs__msg__Paraset__Sequence * input,
  neobotix_usboard_msgs__msg__Paraset__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neobotix_usboard_msgs__msg__Paraset);
    neobotix_usboard_msgs__msg__Paraset * data =
      (neobotix_usboard_msgs__msg__Paraset *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neobotix_usboard_msgs__msg__Paraset__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          neobotix_usboard_msgs__msg__Paraset__fini(&data[i]);
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
    if (!neobotix_usboard_msgs__msg__Paraset__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
