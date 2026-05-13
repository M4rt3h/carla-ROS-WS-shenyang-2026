// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobileye_560_660_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__STRUCT_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/Lane in the package mobileye_560_660_msgs.
typedef struct mobileye_560_660_msgs__msg__Lane
{
  std_msgs__msg__Header header;
  double lane_curvature;
  double lane_heading;
  bool construction_area;
  double pitch_angle;
  double yaw_angle;
  bool right_ldw_availability;
  bool left_ldw_availability;
} mobileye_560_660_msgs__msg__Lane;

// Struct for a sequence of mobileye_560_660_msgs__msg__Lane.
typedef struct mobileye_560_660_msgs__msg__Lane__Sequence
{
  mobileye_560_660_msgs__msg__Lane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobileye_560_660_msgs__msg__Lane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__STRUCT_H_
