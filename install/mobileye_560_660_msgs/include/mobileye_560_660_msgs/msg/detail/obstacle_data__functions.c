// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobileye_560_660_msgs:msg/ObstacleData.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/obstacle_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mobileye_560_660_msgs__msg__ObstacleData__init(mobileye_560_660_msgs__msg__ObstacleData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobileye_560_660_msgs__msg__ObstacleData__fini(msg);
    return false;
  }
  // obstacle_id
  // obstacle_pos_x
  // obstacle_pos_y
  // blinker_info
  // cut_in_and_out
  // obstacle_rel_vel_x
  // obstacle_type
  // obstacle_status
  // obstacle_brake_lights
  // obstacle_valid
  // obstacle_length
  // obstacle_width
  // obstacle_age
  // obstacle_lane
  // cipv_flag
  // radar_pos_x
  // radar_vel_x
  // radar_match_confidence
  // matched_radar_id
  // obstacle_angle_rate
  // obstacle_scale_change
  // object_accel_x
  // obstacle_replaced
  // obstacle_angle
  return true;
}

void
mobileye_560_660_msgs__msg__ObstacleData__fini(mobileye_560_660_msgs__msg__ObstacleData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // obstacle_id
  // obstacle_pos_x
  // obstacle_pos_y
  // blinker_info
  // cut_in_and_out
  // obstacle_rel_vel_x
  // obstacle_type
  // obstacle_status
  // obstacle_brake_lights
  // obstacle_valid
  // obstacle_length
  // obstacle_width
  // obstacle_age
  // obstacle_lane
  // cipv_flag
  // radar_pos_x
  // radar_vel_x
  // radar_match_confidence
  // matched_radar_id
  // obstacle_angle_rate
  // obstacle_scale_change
  // object_accel_x
  // obstacle_replaced
  // obstacle_angle
}

bool
mobileye_560_660_msgs__msg__ObstacleData__are_equal(const mobileye_560_660_msgs__msg__ObstacleData * lhs, const mobileye_560_660_msgs__msg__ObstacleData * rhs)
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
  // obstacle_id
  if (lhs->obstacle_id != rhs->obstacle_id) {
    return false;
  }
  // obstacle_pos_x
  if (lhs->obstacle_pos_x != rhs->obstacle_pos_x) {
    return false;
  }
  // obstacle_pos_y
  if (lhs->obstacle_pos_y != rhs->obstacle_pos_y) {
    return false;
  }
  // blinker_info
  if (lhs->blinker_info != rhs->blinker_info) {
    return false;
  }
  // cut_in_and_out
  if (lhs->cut_in_and_out != rhs->cut_in_and_out) {
    return false;
  }
  // obstacle_rel_vel_x
  if (lhs->obstacle_rel_vel_x != rhs->obstacle_rel_vel_x) {
    return false;
  }
  // obstacle_type
  if (lhs->obstacle_type != rhs->obstacle_type) {
    return false;
  }
  // obstacle_status
  if (lhs->obstacle_status != rhs->obstacle_status) {
    return false;
  }
  // obstacle_brake_lights
  if (lhs->obstacle_brake_lights != rhs->obstacle_brake_lights) {
    return false;
  }
  // obstacle_valid
  if (lhs->obstacle_valid != rhs->obstacle_valid) {
    return false;
  }
  // obstacle_length
  if (lhs->obstacle_length != rhs->obstacle_length) {
    return false;
  }
  // obstacle_width
  if (lhs->obstacle_width != rhs->obstacle_width) {
    return false;
  }
  // obstacle_age
  if (lhs->obstacle_age != rhs->obstacle_age) {
    return false;
  }
  // obstacle_lane
  if (lhs->obstacle_lane != rhs->obstacle_lane) {
    return false;
  }
  // cipv_flag
  if (lhs->cipv_flag != rhs->cipv_flag) {
    return false;
  }
  // radar_pos_x
  if (lhs->radar_pos_x != rhs->radar_pos_x) {
    return false;
  }
  // radar_vel_x
  if (lhs->radar_vel_x != rhs->radar_vel_x) {
    return false;
  }
  // radar_match_confidence
  if (lhs->radar_match_confidence != rhs->radar_match_confidence) {
    return false;
  }
  // matched_radar_id
  if (lhs->matched_radar_id != rhs->matched_radar_id) {
    return false;
  }
  // obstacle_angle_rate
  if (lhs->obstacle_angle_rate != rhs->obstacle_angle_rate) {
    return false;
  }
  // obstacle_scale_change
  if (lhs->obstacle_scale_change != rhs->obstacle_scale_change) {
    return false;
  }
  // object_accel_x
  if (lhs->object_accel_x != rhs->object_accel_x) {
    return false;
  }
  // obstacle_replaced
  if (lhs->obstacle_replaced != rhs->obstacle_replaced) {
    return false;
  }
  // obstacle_angle
  if (lhs->obstacle_angle != rhs->obstacle_angle) {
    return false;
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__ObstacleData__copy(
  const mobileye_560_660_msgs__msg__ObstacleData * input,
  mobileye_560_660_msgs__msg__ObstacleData * output)
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
  // obstacle_id
  output->obstacle_id = input->obstacle_id;
  // obstacle_pos_x
  output->obstacle_pos_x = input->obstacle_pos_x;
  // obstacle_pos_y
  output->obstacle_pos_y = input->obstacle_pos_y;
  // blinker_info
  output->blinker_info = input->blinker_info;
  // cut_in_and_out
  output->cut_in_and_out = input->cut_in_and_out;
  // obstacle_rel_vel_x
  output->obstacle_rel_vel_x = input->obstacle_rel_vel_x;
  // obstacle_type
  output->obstacle_type = input->obstacle_type;
  // obstacle_status
  output->obstacle_status = input->obstacle_status;
  // obstacle_brake_lights
  output->obstacle_brake_lights = input->obstacle_brake_lights;
  // obstacle_valid
  output->obstacle_valid = input->obstacle_valid;
  // obstacle_length
  output->obstacle_length = input->obstacle_length;
  // obstacle_width
  output->obstacle_width = input->obstacle_width;
  // obstacle_age
  output->obstacle_age = input->obstacle_age;
  // obstacle_lane
  output->obstacle_lane = input->obstacle_lane;
  // cipv_flag
  output->cipv_flag = input->cipv_flag;
  // radar_pos_x
  output->radar_pos_x = input->radar_pos_x;
  // radar_vel_x
  output->radar_vel_x = input->radar_vel_x;
  // radar_match_confidence
  output->radar_match_confidence = input->radar_match_confidence;
  // matched_radar_id
  output->matched_radar_id = input->matched_radar_id;
  // obstacle_angle_rate
  output->obstacle_angle_rate = input->obstacle_angle_rate;
  // obstacle_scale_change
  output->obstacle_scale_change = input->obstacle_scale_change;
  // object_accel_x
  output->object_accel_x = input->object_accel_x;
  // obstacle_replaced
  output->obstacle_replaced = input->obstacle_replaced;
  // obstacle_angle
  output->obstacle_angle = input->obstacle_angle;
  return true;
}

mobileye_560_660_msgs__msg__ObstacleData *
mobileye_560_660_msgs__msg__ObstacleData__create()
{
  mobileye_560_660_msgs__msg__ObstacleData * msg = (mobileye_560_660_msgs__msg__ObstacleData *)malloc(sizeof(mobileye_560_660_msgs__msg__ObstacleData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobileye_560_660_msgs__msg__ObstacleData));
  bool success = mobileye_560_660_msgs__msg__ObstacleData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mobileye_560_660_msgs__msg__ObstacleData__destroy(mobileye_560_660_msgs__msg__ObstacleData * msg)
{
  if (msg) {
    mobileye_560_660_msgs__msg__ObstacleData__fini(msg);
  }
  free(msg);
}


bool
mobileye_560_660_msgs__msg__ObstacleData__Sequence__init(mobileye_560_660_msgs__msg__ObstacleData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mobileye_560_660_msgs__msg__ObstacleData * data = NULL;
  if (size) {
    data = (mobileye_560_660_msgs__msg__ObstacleData *)calloc(size, sizeof(mobileye_560_660_msgs__msg__ObstacleData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobileye_560_660_msgs__msg__ObstacleData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobileye_560_660_msgs__msg__ObstacleData__fini(&data[i - 1]);
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
mobileye_560_660_msgs__msg__ObstacleData__Sequence__fini(mobileye_560_660_msgs__msg__ObstacleData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mobileye_560_660_msgs__msg__ObstacleData__fini(&array->data[i]);
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

mobileye_560_660_msgs__msg__ObstacleData__Sequence *
mobileye_560_660_msgs__msg__ObstacleData__Sequence__create(size_t size)
{
  mobileye_560_660_msgs__msg__ObstacleData__Sequence * array = (mobileye_560_660_msgs__msg__ObstacleData__Sequence *)malloc(sizeof(mobileye_560_660_msgs__msg__ObstacleData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mobileye_560_660_msgs__msg__ObstacleData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mobileye_560_660_msgs__msg__ObstacleData__Sequence__destroy(mobileye_560_660_msgs__msg__ObstacleData__Sequence * array)
{
  if (array) {
    mobileye_560_660_msgs__msg__ObstacleData__Sequence__fini(array);
  }
  free(array);
}

bool
mobileye_560_660_msgs__msg__ObstacleData__Sequence__are_equal(const mobileye_560_660_msgs__msg__ObstacleData__Sequence * lhs, const mobileye_560_660_msgs__msg__ObstacleData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobileye_560_660_msgs__msg__ObstacleData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__ObstacleData__Sequence__copy(
  const mobileye_560_660_msgs__msg__ObstacleData__Sequence * input,
  mobileye_560_660_msgs__msg__ObstacleData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobileye_560_660_msgs__msg__ObstacleData);
    mobileye_560_660_msgs__msg__ObstacleData * data =
      (mobileye_560_660_msgs__msg__ObstacleData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobileye_560_660_msgs__msg__ObstacleData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mobileye_560_660_msgs__msg__ObstacleData__fini(&data[i]);
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
    if (!mobileye_560_660_msgs__msg__ObstacleData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
