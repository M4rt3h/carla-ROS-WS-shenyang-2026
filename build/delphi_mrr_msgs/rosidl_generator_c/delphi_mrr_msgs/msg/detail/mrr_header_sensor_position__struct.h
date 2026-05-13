// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrHeaderSensorPosition.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_POSITION__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_POSITION__STRUCT_H_

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

// Struct defined in msg/MrrHeaderSensorPosition in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrHeaderSensorPosition
{
  std_msgs__msg__Header header;
  bool can_sensor_polarity;
  float can_sensor_lat_offset;
  float can_sensor_long_offset;
  float can_sensor_hangle_offset;
} delphi_mrr_msgs__msg__MrrHeaderSensorPosition;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrHeaderSensorPosition.
typedef struct delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence
{
  delphi_mrr_msgs__msg__MrrHeaderSensorPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_POSITION__STRUCT_H_
