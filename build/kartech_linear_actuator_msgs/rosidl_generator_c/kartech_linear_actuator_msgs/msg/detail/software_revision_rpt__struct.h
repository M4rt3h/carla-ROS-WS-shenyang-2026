// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/SoftwareRevisionRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__STRUCT_H_

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

// Struct defined in msg/SoftwareRevisionRpt in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt
{
  std_msgs__msg__Header header;
  uint8_t software_version_0;
  uint8_t software_version_1;
  uint8_t software_version_2;
  uint8_t software_day;
  uint16_t software_month_year;
} kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt.
typedef struct kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt__Sequence
{
  kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__STRUCT_H_
