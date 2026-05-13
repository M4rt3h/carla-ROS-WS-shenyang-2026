// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_srr_msgs:msg/SrrStatus2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__STRUCT_H_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAN_TX_ALIGNMENT_STATUS_UNKNOWN'.
enum
{
  delphi_srr_msgs__msg__SrrStatus2__CAN_TX_ALIGNMENT_STATUS_UNKNOWN = 0
};

/// Constant 'CAN_TX_ALIGNMENT_STATUS_CONVERGED'.
enum
{
  delphi_srr_msgs__msg__SrrStatus2__CAN_TX_ALIGNMENT_STATUS_CONVERGED = 1
};

/// Constant 'CAN_TX_ALIGNMENT_STATUS_FAILED'.
enum
{
  delphi_srr_msgs__msg__SrrStatus2__CAN_TX_ALIGNMENT_STATUS_FAILED = 2
};

/// Constant 'CAN_TX_ALIGNMENT_STATUS_RESERVED'.
enum
{
  delphi_srr_msgs__msg__SrrStatus2__CAN_TX_ALIGNMENT_STATUS_RESERVED = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/SrrStatus2 in the package delphi_srr_msgs.
typedef struct delphi_srr_msgs__msg__SrrStatus2
{
  std_msgs__msg__Header header;
  uint8_t can_tx_alignment_status;
  bool can_tx_comm_error;
  bool can_tx_steering_angle_sign;
  float can_tx_yaw_rate_bias;
  float can_tx_veh_spd_comp_factor;
  uint16_t can_tx_sw_version_dsp;
  int16_t can_tx_temperature;
  bool can_tx_range_perf_error;
  bool can_tx_overheat_error;
  bool can_tx_internal_error;
  bool can_tx_xcvr_operational;
  uint16_t can_tx_steering_angle;
  uint8_t can_tx_rolling_count_2;
} delphi_srr_msgs__msg__SrrStatus2;

// Struct for a sequence of delphi_srr_msgs__msg__SrrStatus2.
typedef struct delphi_srr_msgs__msg__SrrStatus2__Sequence
{
  delphi_srr_msgs__msg__SrrStatus2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_srr_msgs__msg__SrrStatus2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__STRUCT_H_
