// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobileye_560_660_msgs:msg/FixedFoe.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__FIXED_FOE__STRUCT_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__FIXED_FOE__STRUCT_H_

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

// Struct defined in msg/FixedFoe in the package mobileye_560_660_msgs.
typedef struct mobileye_560_660_msgs__msg__FixedFoe
{
  std_msgs__msg__Header header;
  double fixed_yaw;
  double fixed_horizon;
} mobileye_560_660_msgs__msg__FixedFoe;

// Struct for a sequence of mobileye_560_660_msgs__msg__FixedFoe.
typedef struct mobileye_560_660_msgs__msg__FixedFoe__Sequence
{
  mobileye_560_660_msgs__msg__FixedFoe * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobileye_560_660_msgs__msg__FixedFoe__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__FIXED_FOE__STRUCT_H_
