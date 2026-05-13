// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrDetection.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__STRUCT_H_

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

// Struct defined in msg/MrrDetection in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrDetection
{
  std_msgs__msg__Header header;
  uint8_t detection_id;
  uint8_t confid_azimuth;
  bool super_res_target;
  bool nd_target;
  bool host_veh_clutter;
  bool valid_level;
  float azimuth;
  float range;
  float range_rate;
  int8_t amplitude;
  uint8_t index_2lsb;
} delphi_mrr_msgs__msg__MrrDetection;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrDetection.
typedef struct delphi_mrr_msgs__msg__MrrDetection__Sequence
{
  delphi_mrr_msgs__msg__MrrDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__STRUCT_H_
