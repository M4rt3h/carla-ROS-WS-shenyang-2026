// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrHeaderSensorCoverage.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__STRUCT_H_

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

// Struct defined in msg/MrrHeaderSensorCoverage in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrHeaderSensorCoverage
{
  std_msgs__msg__Header header;
  uint8_t can_sensor_fov_hor;
  int8_t can_doppler_coverage;
  uint8_t can_range_coverage;
} delphi_mrr_msgs__msg__MrrHeaderSensorCoverage;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrHeaderSensorCoverage.
typedef struct delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence
{
  delphi_mrr_msgs__msg__MrrHeaderSensorCoverage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__STRUCT_H_
