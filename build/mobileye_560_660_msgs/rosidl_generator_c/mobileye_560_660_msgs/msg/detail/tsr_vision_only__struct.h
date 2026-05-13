// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobileye_560_660_msgs:msg/TsrVisionOnly.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR_VISION_ONLY__STRUCT_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR_VISION_ONLY__STRUCT_H_

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

// Struct defined in msg/TsrVisionOnly in the package mobileye_560_660_msgs.
typedef struct mobileye_560_660_msgs__msg__TsrVisionOnly
{
  std_msgs__msg__Header header;
  uint8_t vision_only_sign_type_display1;
  uint8_t vision_only_supplementary_sign_type_display1;
  uint8_t vision_only_sign_type_display2;
  uint8_t vision_only_supplementary_sign_type_display2;
  uint8_t vision_only_sign_type_display3;
  uint8_t vision_only_supplementary_sign_type_display3;
  uint8_t vision_only_sign_type_display4;
  uint8_t vision_only_supplementary_sign_type_display4;
} mobileye_560_660_msgs__msg__TsrVisionOnly;

// Struct for a sequence of mobileye_560_660_msgs__msg__TsrVisionOnly.
typedef struct mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence
{
  mobileye_560_660_msgs__msg__TsrVisionOnly * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR_VISION_ONLY__STRUCT_H_
