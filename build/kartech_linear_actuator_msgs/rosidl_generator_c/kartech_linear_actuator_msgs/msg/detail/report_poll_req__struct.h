// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/ReportPollReq.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_POLL_REQ__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_POLL_REQ__STRUCT_H_

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
// Member 'report_indices'
#include "kartech_linear_actuator_msgs/msg/detail/report_index__struct.h"

// Struct defined in msg/ReportPollReq in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__ReportPollReq
{
  std_msgs__msg__Header header;
  bool confirm;
  kartech_linear_actuator_msgs__msg__ReportIndex__Sequence report_indices;
} kartech_linear_actuator_msgs__msg__ReportPollReq;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__ReportPollReq.
typedef struct kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence
{
  kartech_linear_actuator_msgs__msg__ReportPollReq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_POLL_REQ__STRUCT_H_
