// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobileye_560_660_msgs:msg/AhbcGradual.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__STRUCT_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__STRUCT_H_

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

// Struct defined in msg/AhbcGradual in the package mobileye_560_660_msgs.
typedef struct mobileye_560_660_msgs__msg__AhbcGradual
{
  std_msgs__msg__Header header;
  float boundary_domain_bottom_non_glare_hlb;
  float boundary_domain_non_glare_left_hand_hlb;
  float boundary_domain_non_glare_right_hand_hlb;
  uint16_t object_distance_hlb;
  uint8_t status_boundary_domain_bottom_non_glare_hlb;
  uint8_t status_boundary_domain_non_glare_left_hand_hlb;
  uint8_t status_boundary_domain_non_glare_right_hand_hlb;
  uint8_t status_object_distance_hlb;
  bool left_target_change;
  bool right_target_change;
  bool too_many_cars;
  bool busy_scene;
} mobileye_560_660_msgs__msg__AhbcGradual;

// Struct for a sequence of mobileye_560_660_msgs__msg__AhbcGradual.
typedef struct mobileye_560_660_msgs__msg__AhbcGradual__Sequence
{
  mobileye_560_660_msgs__msg__AhbcGradual * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobileye_560_660_msgs__msg__AhbcGradual__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__STRUCT_H_
