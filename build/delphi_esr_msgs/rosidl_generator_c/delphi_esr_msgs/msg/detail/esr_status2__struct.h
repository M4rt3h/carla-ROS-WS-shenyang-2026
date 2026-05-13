// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrStatus2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__STRUCT_H_

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
// Member 'sw_version_dsp'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/EsrStatus2 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrStatus2
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String canmsg;
  uint8_t maximum_tracks_ack;
  uint8_t rolling_count_2;
  bool overheat_error;
  bool range_perf_error;
  bool internal_error;
  bool xcvr_operational;
  bool raw_data_mode;
  uint16_t steering_angle_ack;
  int8_t temperature;
  float veh_spd_comp_factor;
  uint8_t grouping_mode;
  float yaw_rate_bias;
  rosidl_runtime_c__String sw_version_dsp;
} delphi_esr_msgs__msg__EsrStatus2;

// Struct for a sequence of delphi_esr_msgs__msg__EsrStatus2.
typedef struct delphi_esr_msgs__msg__EsrStatus2__Sequence
{
  delphi_esr_msgs__msg__EsrStatus2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrStatus2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__STRUCT_H_
