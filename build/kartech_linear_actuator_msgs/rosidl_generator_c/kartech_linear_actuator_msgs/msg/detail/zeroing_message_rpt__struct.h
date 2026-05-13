// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/ZeroingMessageRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__STRUCT_H_

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

// Struct defined in msg/ZeroingMessageRpt in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__ZeroingMessageRpt
{
  std_msgs__msg__Header header;
  uint16_t chip_1_voltage;
  uint16_t chip_2_voltage;
  uint8_t chip_error_1;
  uint8_t chip_error_2;
} kartech_linear_actuator_msgs__msg__ZeroingMessageRpt;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__ZeroingMessageRpt.
typedef struct kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence
{
  kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__STRUCT_H_
