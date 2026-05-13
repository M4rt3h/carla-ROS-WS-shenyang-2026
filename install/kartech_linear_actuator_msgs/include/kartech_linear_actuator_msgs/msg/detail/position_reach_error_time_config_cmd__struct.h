// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/PositionReachErrorTimeConfigCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_REACH_ERROR_TIME_CONFIG_CMD__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_REACH_ERROR_TIME_CONFIG_CMD__STRUCT_H_

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

// Struct defined in msg/PositionReachErrorTimeConfigCmd in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__PositionReachErrorTimeConfigCmd
{
  std_msgs__msg__Header header;
  bool confirm;
  uint16_t position_reach_error_time;
} kartech_linear_actuator_msgs__msg__PositionReachErrorTimeConfigCmd;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__PositionReachErrorTimeConfigCmd.
typedef struct kartech_linear_actuator_msgs__msg__PositionReachErrorTimeConfigCmd__Sequence
{
  kartech_linear_actuator_msgs__msg__PositionReachErrorTimeConfigCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__PositionReachErrorTimeConfigCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_REACH_ERROR_TIME_CONFIG_CMD__STRUCT_H_
