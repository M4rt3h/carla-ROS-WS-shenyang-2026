// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/EnhancedPositionRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__STRUCT_H_

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

// Struct defined in msg/EnhancedPositionRpt in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__EnhancedPositionRpt
{
  std_msgs__msg__Header header;
  double shaft_extension;
  bool motor_overload_error;
  bool clutch_overload_error;
  bool motor_open_load_error;
  bool clutch_open_load_error;
  bool position_reach_error;
  bool hardware_warning_1_error;
  bool hardware_warning_2_error;
  uint16_t motor_current;
} kartech_linear_actuator_msgs__msg__EnhancedPositionRpt;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__EnhancedPositionRpt.
typedef struct kartech_linear_actuator_msgs__msg__EnhancedPositionRpt__Sequence
{
  kartech_linear_actuator_msgs__msg__EnhancedPositionRpt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__EnhancedPositionRpt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__STRUCT_H_
