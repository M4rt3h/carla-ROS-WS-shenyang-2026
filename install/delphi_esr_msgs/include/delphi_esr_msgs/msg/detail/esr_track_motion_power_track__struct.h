// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/EsrTrackMotionPowerTrack in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrTrackMotionPowerTrack
{
  uint8_t id;
  bool movable_fast;
  bool movable_slow;
  bool moving;
  int8_t power;
} delphi_esr_msgs__msg__EsrTrackMotionPowerTrack;

// Struct for a sequence of delphi_esr_msgs__msg__EsrTrackMotionPowerTrack.
typedef struct delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence
{
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__STRUCT_H_
