// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_srr_msgs:msg/SrrTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__STRUCT_H_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAN_TX_DETECT_VALID_LEVEL_SUSPECT_DETECTION'.
enum
{
  delphi_srr_msgs__msg__SrrTrack__CAN_TX_DETECT_VALID_LEVEL_SUSPECT_DETECTION = 0
};

/// Constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_1'.
enum
{
  delphi_srr_msgs__msg__SrrTrack__CAN_TX_DETECT_VALID_LEVEL_LEVEL_1 = 1
};

/// Constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_2'.
enum
{
  delphi_srr_msgs__msg__SrrTrack__CAN_TX_DETECT_VALID_LEVEL_LEVEL_2 = 2
};

/// Constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_3'.
enum
{
  delphi_srr_msgs__msg__SrrTrack__CAN_TX_DETECT_VALID_LEVEL_LEVEL_3 = 3
};

/// Constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_4'.
enum
{
  delphi_srr_msgs__msg__SrrTrack__CAN_TX_DETECT_VALID_LEVEL_LEVEL_4 = 4
};

/// Constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_5'.
enum
{
  delphi_srr_msgs__msg__SrrTrack__CAN_TX_DETECT_VALID_LEVEL_LEVEL_5 = 5
};

/// Constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_6'.
enum
{
  delphi_srr_msgs__msg__SrrTrack__CAN_TX_DETECT_VALID_LEVEL_LEVEL_6 = 6
};

/// Constant 'CAN_TX_DETECT_VALID_LEVEL_LEVEL_7'.
enum
{
  delphi_srr_msgs__msg__SrrTrack__CAN_TX_DETECT_VALID_LEVEL_LEVEL_7 = 7
};

/// Constant 'CAN_TX_DETECT_STATUS_NO_DATA'.
static const bool delphi_srr_msgs__msg__SrrTrack__CAN_TX_DETECT_STATUS_NO_DATA = false;

/// Constant 'CAN_TX_DETECT_STATUS_VALID_DATA_PRESENT'.
static const bool delphi_srr_msgs__msg__SrrTrack__CAN_TX_DETECT_STATUS_VALID_DATA_PRESENT = true;

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/SrrTrack in the package delphi_srr_msgs.
typedef struct delphi_srr_msgs__msg__SrrTrack
{
  std_msgs__msg__Header header;
  uint8_t can_tx_detect_valid_level;
  bool can_tx_detect_status;
  float can_tx_detect_range_rate;
  float can_tx_detect_range;
  float can_tx_detect_angle;
  float can_tx_detect_amplitude;
} delphi_srr_msgs__msg__SrrTrack;

// Struct for a sequence of delphi_srr_msgs__msg__SrrTrack.
typedef struct delphi_srr_msgs__msg__SrrTrack__Sequence
{
  delphi_srr_msgs__msg__SrrTrack * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_srr_msgs__msg__SrrTrack__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__STRUCT_H_
