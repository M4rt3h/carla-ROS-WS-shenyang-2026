// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobileye_560_660_msgs:msg/LkaReferencePoints.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__STRUCT_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__STRUCT_H_

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

// Struct defined in msg/LkaReferencePoints in the package mobileye_560_660_msgs.
typedef struct mobileye_560_660_msgs__msg__LkaReferencePoints
{
  std_msgs__msg__Header header;
  double ref_point_1_position;
  double ref_point_1_distance;
  bool ref_point_1_validity;
  double ref_point_2_position;
  double ref_point_2_distance;
  bool ref_point_2_validity;
} mobileye_560_660_msgs__msg__LkaReferencePoints;

// Struct for a sequence of mobileye_560_660_msgs__msg__LkaReferencePoints.
typedef struct mobileye_560_660_msgs__msg__LkaReferencePoints__Sequence
{
  mobileye_560_660_msgs__msg__LkaReferencePoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobileye_560_660_msgs__msg__LkaReferencePoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__STRUCT_H_
