// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rviz_2d_overlay_msgs:msg/OverlayText.idl
// generated code does not contain a copyright notice
#include "rviz_2d_overlay_msgs/msg/detail/overlay_text__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `bg_color`
// Member `fg_color`
#include "std_msgs/msg/detail/color_rgba__functions.h"
// Member `font`
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

bool
rviz_2d_overlay_msgs__msg__OverlayText__init(rviz_2d_overlay_msgs__msg__OverlayText * msg)
{
  if (!msg) {
    return false;
  }
  // action
  // width
  // height
  // horizontal_distance
  // vertical_distance
  // horizontal_alignment
  // vertical_alignment
  // bg_color
  if (!std_msgs__msg__ColorRGBA__init(&msg->bg_color)) {
    rviz_2d_overlay_msgs__msg__OverlayText__fini(msg);
    return false;
  }
  // line_width
  // text_size
  // font
  if (!rosidl_runtime_c__String__init(&msg->font)) {
    rviz_2d_overlay_msgs__msg__OverlayText__fini(msg);
    return false;
  }
  // fg_color
  if (!std_msgs__msg__ColorRGBA__init(&msg->fg_color)) {
    rviz_2d_overlay_msgs__msg__OverlayText__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    rviz_2d_overlay_msgs__msg__OverlayText__fini(msg);
    return false;
  }
  return true;
}

void
rviz_2d_overlay_msgs__msg__OverlayText__fini(rviz_2d_overlay_msgs__msg__OverlayText * msg)
{
  if (!msg) {
    return;
  }
  // action
  // width
  // height
  // horizontal_distance
  // vertical_distance
  // horizontal_alignment
  // vertical_alignment
  // bg_color
  std_msgs__msg__ColorRGBA__fini(&msg->bg_color);
  // line_width
  // text_size
  // font
  rosidl_runtime_c__String__fini(&msg->font);
  // fg_color
  std_msgs__msg__ColorRGBA__fini(&msg->fg_color);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
}

bool
rviz_2d_overlay_msgs__msg__OverlayText__are_equal(const rviz_2d_overlay_msgs__msg__OverlayText * lhs, const rviz_2d_overlay_msgs__msg__OverlayText * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // horizontal_distance
  if (lhs->horizontal_distance != rhs->horizontal_distance) {
    return false;
  }
  // vertical_distance
  if (lhs->vertical_distance != rhs->vertical_distance) {
    return false;
  }
  // horizontal_alignment
  if (lhs->horizontal_alignment != rhs->horizontal_alignment) {
    return false;
  }
  // vertical_alignment
  if (lhs->vertical_alignment != rhs->vertical_alignment) {
    return false;
  }
  // bg_color
  if (!std_msgs__msg__ColorRGBA__are_equal(
      &(lhs->bg_color), &(rhs->bg_color)))
  {
    return false;
  }
  // line_width
  if (lhs->line_width != rhs->line_width) {
    return false;
  }
  // text_size
  if (lhs->text_size != rhs->text_size) {
    return false;
  }
  // font
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->font), &(rhs->font)))
  {
    return false;
  }
  // fg_color
  if (!std_msgs__msg__ColorRGBA__are_equal(
      &(lhs->fg_color), &(rhs->fg_color)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  return true;
}

bool
rviz_2d_overlay_msgs__msg__OverlayText__copy(
  const rviz_2d_overlay_msgs__msg__OverlayText * input,
  rviz_2d_overlay_msgs__msg__OverlayText * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  output->action = input->action;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // horizontal_distance
  output->horizontal_distance = input->horizontal_distance;
  // vertical_distance
  output->vertical_distance = input->vertical_distance;
  // horizontal_alignment
  output->horizontal_alignment = input->horizontal_alignment;
  // vertical_alignment
  output->vertical_alignment = input->vertical_alignment;
  // bg_color
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->bg_color), &(output->bg_color)))
  {
    return false;
  }
  // line_width
  output->line_width = input->line_width;
  // text_size
  output->text_size = input->text_size;
  // font
  if (!rosidl_runtime_c__String__copy(
      &(input->font), &(output->font)))
  {
    return false;
  }
  // fg_color
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->fg_color), &(output->fg_color)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  return true;
}

rviz_2d_overlay_msgs__msg__OverlayText *
rviz_2d_overlay_msgs__msg__OverlayText__create()
{
  rviz_2d_overlay_msgs__msg__OverlayText * msg = (rviz_2d_overlay_msgs__msg__OverlayText *)malloc(sizeof(rviz_2d_overlay_msgs__msg__OverlayText));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rviz_2d_overlay_msgs__msg__OverlayText));
  bool success = rviz_2d_overlay_msgs__msg__OverlayText__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rviz_2d_overlay_msgs__msg__OverlayText__destroy(rviz_2d_overlay_msgs__msg__OverlayText * msg)
{
  if (msg) {
    rviz_2d_overlay_msgs__msg__OverlayText__fini(msg);
  }
  free(msg);
}


bool
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__init(rviz_2d_overlay_msgs__msg__OverlayText__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rviz_2d_overlay_msgs__msg__OverlayText * data = NULL;
  if (size) {
    data = (rviz_2d_overlay_msgs__msg__OverlayText *)calloc(size, sizeof(rviz_2d_overlay_msgs__msg__OverlayText));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rviz_2d_overlay_msgs__msg__OverlayText__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rviz_2d_overlay_msgs__msg__OverlayText__fini(&data[i - 1]);
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
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__fini(rviz_2d_overlay_msgs__msg__OverlayText__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rviz_2d_overlay_msgs__msg__OverlayText__fini(&array->data[i]);
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

rviz_2d_overlay_msgs__msg__OverlayText__Sequence *
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__create(size_t size)
{
  rviz_2d_overlay_msgs__msg__OverlayText__Sequence * array = (rviz_2d_overlay_msgs__msg__OverlayText__Sequence *)malloc(sizeof(rviz_2d_overlay_msgs__msg__OverlayText__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rviz_2d_overlay_msgs__msg__OverlayText__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__destroy(rviz_2d_overlay_msgs__msg__OverlayText__Sequence * array)
{
  if (array) {
    rviz_2d_overlay_msgs__msg__OverlayText__Sequence__fini(array);
  }
  free(array);
}

bool
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__are_equal(const rviz_2d_overlay_msgs__msg__OverlayText__Sequence * lhs, const rviz_2d_overlay_msgs__msg__OverlayText__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rviz_2d_overlay_msgs__msg__OverlayText__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__copy(
  const rviz_2d_overlay_msgs__msg__OverlayText__Sequence * input,
  rviz_2d_overlay_msgs__msg__OverlayText__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rviz_2d_overlay_msgs__msg__OverlayText);
    rviz_2d_overlay_msgs__msg__OverlayText * data =
      (rviz_2d_overlay_msgs__msg__OverlayText *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rviz_2d_overlay_msgs__msg__OverlayText__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rviz_2d_overlay_msgs__msg__OverlayText__fini(&data[i]);
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
    if (!rviz_2d_overlay_msgs__msg__OverlayText__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
