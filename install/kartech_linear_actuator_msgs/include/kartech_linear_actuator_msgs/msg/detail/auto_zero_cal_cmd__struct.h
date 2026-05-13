// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/AutoZeroCalCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__AUTO_ZERO_CAL_CMD__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__AUTO_ZERO_CAL_CMD__STRUCT_H_

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

// Struct defined in msg/AutoZeroCalCmd in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__AutoZeroCalCmd
{
  std_msgs__msg__Header header;
  bool confirm;
  bool auto_reply;
} kartech_linear_actuator_msgs__msg__AutoZeroCalCmd;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__AutoZeroCalCmd.
typedef struct kartech_linear_actuator_msgs__msg__AutoZeroCalCmd__Sequence
{
  kartech_linear_actuator_msgs__msg__AutoZeroCalCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__AutoZeroCalCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__AUTO_ZERO_CAL_CMD__STRUCT_H_
