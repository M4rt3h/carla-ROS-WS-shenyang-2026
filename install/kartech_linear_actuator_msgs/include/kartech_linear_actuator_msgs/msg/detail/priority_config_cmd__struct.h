// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/PriorityConfigCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__PRIORITY_CONFIG_CMD__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__PRIORITY_CONFIG_CMD__STRUCT_H_

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

// Struct defined in msg/PriorityConfigCmd in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__PriorityConfigCmd
{
  std_msgs__msg__Header header;
  bool confirm;
  uint8_t handshake_priority;
  uint8_t auto_reply_priority;
  uint8_t scheduled_priority;
  uint8_t polled_priority;
} kartech_linear_actuator_msgs__msg__PriorityConfigCmd;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__PriorityConfigCmd.
typedef struct kartech_linear_actuator_msgs__msg__PriorityConfigCmd__Sequence
{
  kartech_linear_actuator_msgs__msg__PriorityConfigCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__PriorityConfigCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__PRIORITY_CONFIG_CMD__STRUCT_H_
