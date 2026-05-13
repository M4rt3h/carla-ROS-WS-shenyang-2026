// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerGroup.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__STRUCT_H_

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
// Member 'tracks'
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__struct.h"

// Struct defined in msg/EsrTrackMotionPowerGroup in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrTrackMotionPowerGroup
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String canmsg;
  uint8_t rolling_count_2;
  uint8_t can_id_group;
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence tracks;
} delphi_esr_msgs__msg__EsrTrackMotionPowerGroup;

// Struct for a sequence of delphi_esr_msgs__msg__EsrTrackMotionPowerGroup.
typedef struct delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__Sequence
{
  delphi_esr_msgs__msg__EsrTrackMotionPowerGroup * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__STRUCT_H_
