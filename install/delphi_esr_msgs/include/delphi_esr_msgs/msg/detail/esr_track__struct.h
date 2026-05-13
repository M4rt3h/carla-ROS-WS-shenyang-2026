// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__STRUCT_H_

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
// Member 'canmsg'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/EsrTrack in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrTrack
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String canmsg;
  uint8_t id;
  float lat_rate;
  bool grouping_changed;
  bool oncoming;
  uint8_t status;
  float angle;
  float range;
  bool bridge_object;
  bool rolling_count;
  float width;
  float range_accel;
  uint8_t med_range_mode;
  float range_rate;
} delphi_esr_msgs__msg__EsrTrack;

// Struct for a sequence of delphi_esr_msgs__msg__EsrTrack.
typedef struct delphi_esr_msgs__msg__EsrTrack__Sequence
{
  delphi_esr_msgs__msg__EsrTrack * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrTrack__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__STRUCT_H_
