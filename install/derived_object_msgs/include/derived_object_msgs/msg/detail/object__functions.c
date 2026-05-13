// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from derived_object_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#include "derived_object_msgs/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `accel`
#include "geometry_msgs/msg/detail/accel__functions.h"
// Member `polygon`
#include "geometry_msgs/msg/detail/polygon__functions.h"
// Member `shape`
#include "shape_msgs/msg/detail/solid_primitive__functions.h"

bool
derived_object_msgs__msg__Object__init(derived_object_msgs__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    derived_object_msgs__msg__Object__fini(msg);
    return false;
  }
  // id
  // detection_level
  // object_classified
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    derived_object_msgs__msg__Object__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    derived_object_msgs__msg__Object__fini(msg);
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Accel__init(&msg->accel)) {
    derived_object_msgs__msg__Object__fini(msg);
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Polygon__init(&msg->polygon)) {
    derived_object_msgs__msg__Object__fini(msg);
    return false;
  }
  // shape
  if (!shape_msgs__msg__SolidPrimitive__init(&msg->shape)) {
    derived_object_msgs__msg__Object__fini(msg);
    return false;
  }
  // classification
  // classification_certainty
  // classification_age
  return true;
}

void
derived_object_msgs__msg__Object__fini(derived_object_msgs__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // detection_level
  // object_classified
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // accel
  geometry_msgs__msg__Accel__fini(&msg->accel);
  // polygon
  geometry_msgs__msg__Polygon__fini(&msg->polygon);
  // shape
  shape_msgs__msg__SolidPrimitive__fini(&msg->shape);
  // classification
  // classification_certainty
  // classification_age
}

bool
derived_object_msgs__msg__Object__are_equal(const derived_object_msgs__msg__Object * lhs, const derived_object_msgs__msg__Object * rhs)
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
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // detection_level
  if (lhs->detection_level != rhs->detection_level) {
    return false;
  }
  // object_classified
  if (lhs->object_classified != rhs->object_classified) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->accel), &(rhs->accel)))
  {
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Polygon__are_equal(
      &(lhs->polygon), &(rhs->polygon)))
  {
    return false;
  }
  // shape
  if (!shape_msgs__msg__SolidPrimitive__are_equal(
      &(lhs->shape), &(rhs->shape)))
  {
    return false;
  }
  // classification
  if (lhs->classification != rhs->classification) {
    return false;
  }
  // classification_certainty
  if (lhs->classification_certainty != rhs->classification_certainty) {
    return false;
  }
  // classification_age
  if (lhs->classification_age != rhs->classification_age) {
    return false;
  }
  return true;
}

bool
derived_object_msgs__msg__Object__copy(
  const derived_object_msgs__msg__Object * input,
  derived_object_msgs__msg__Object * output)
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
  // id
  output->id = input->id;
  // detection_level
  output->detection_level = input->detection_level;
  // object_classified
  output->object_classified = input->object_classified;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Accel__copy(
      &(input->accel), &(output->accel)))
  {
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Polygon__copy(
      &(input->polygon), &(output->polygon)))
  {
    return false;
  }
  // shape
  if (!shape_msgs__msg__SolidPrimitive__copy(
      &(input->shape), &(output->shape)))
  {
    return false;
  }
  // classification
  output->classification = input->classification;
  // classification_certainty
  output->classification_certainty = input->classification_certainty;
  // classification_age
  output->classification_age = input->classification_age;
  return true;
}

derived_object_msgs__msg__Object *
derived_object_msgs__msg__Object__create()
{
  derived_object_msgs__msg__Object * msg = (derived_object_msgs__msg__Object *)malloc(sizeof(derived_object_msgs__msg__Object));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(derived_object_msgs__msg__Object));
  bool success = derived_object_msgs__msg__Object__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
derived_object_msgs__msg__Object__destroy(derived_object_msgs__msg__Object * msg)
{
  if (msg) {
    derived_object_msgs__msg__Object__fini(msg);
  }
  free(msg);
}


bool
derived_object_msgs__msg__Object__Sequence__init(derived_object_msgs__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  derived_object_msgs__msg__Object * data = NULL;
  if (size) {
    data = (derived_object_msgs__msg__Object *)calloc(size, sizeof(derived_object_msgs__msg__Object));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = derived_object_msgs__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        derived_object_msgs__msg__Object__fini(&data[i - 1]);
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
derived_object_msgs__msg__Object__Sequence__fini(derived_object_msgs__msg__Object__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      derived_object_msgs__msg__Object__fini(&array->data[i]);
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

derived_object_msgs__msg__Object__Sequence *
derived_object_msgs__msg__Object__Sequence__create(size_t size)
{
  derived_object_msgs__msg__Object__Sequence * array = (derived_object_msgs__msg__Object__Sequence *)malloc(sizeof(derived_object_msgs__msg__Object__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = derived_object_msgs__msg__Object__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
derived_object_msgs__msg__Object__Sequence__destroy(derived_object_msgs__msg__Object__Sequence * array)
{
  if (array) {
    derived_object_msgs__msg__Object__Sequence__fini(array);
  }
  free(array);
}

bool
derived_object_msgs__msg__Object__Sequence__are_equal(const derived_object_msgs__msg__Object__Sequence * lhs, const derived_object_msgs__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!derived_object_msgs__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
derived_object_msgs__msg__Object__Sequence__copy(
  const derived_object_msgs__msg__Object__Sequence * input,
  derived_object_msgs__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(derived_object_msgs__msg__Object);
    derived_object_msgs__msg__Object * data =
      (derived_object_msgs__msg__Object *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!derived_object_msgs__msg__Object__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          derived_object_msgs__msg__Object__fini(&data[i]);
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
    if (!derived_object_msgs__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
