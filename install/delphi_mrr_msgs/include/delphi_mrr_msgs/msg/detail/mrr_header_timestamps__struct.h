// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrHeaderTimestamps.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_TIMESTAMPS__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_TIMESTAMPS__STRUCT_H_

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

// Struct defined in msg/MrrHeaderTimestamps in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrHeaderTimestamps
{
  std_msgs__msg__Header header;
  float can_det_time_since_meas;
  float can_sensor_time_stamp;
} delphi_mrr_msgs__msg__MrrHeaderTimestamps;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrHeaderTimestamps.
typedef struct delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence
{
  delphi_mrr_msgs__msg__MrrHeaderTimestamps * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_TIMESTAMPS__STRUCT_H_
