// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_srr_msgs:msg/SrrStatus3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__STRUCT_H_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAN_TX_ALIGNMENT_STATE_OFF'.
enum
{
  delphi_srr_msgs__msg__SrrStatus3__CAN_TX_ALIGNMENT_STATE_OFF = 0
};

/// Constant 'CAN_TX_ALIGNMENT_STATE_INIT'.
enum
{
  delphi_srr_msgs__msg__SrrStatus3__CAN_TX_ALIGNMENT_STATE_INIT = 1
};

/// Constant 'CAN_TX_ALIGNMENT_STATE_AUTOMATIC_ALIGNMENT'.
enum
{
  delphi_srr_msgs__msg__SrrStatus3__CAN_TX_ALIGNMENT_STATE_AUTOMATIC_ALIGNMENT = 2
};

/// Constant 'CAN_TX_ALIGNMENT_STATE_FACTORY_ALIGNMENT'.
enum
{
  delphi_srr_msgs__msg__SrrStatus3__CAN_TX_ALIGNMENT_STATE_FACTORY_ALIGNMENT = 3
};

/// Constant 'CAN_TX_ALIGNMENT_STATE_SERVICE_ALIGNMENT'.
enum
{
  delphi_srr_msgs__msg__SrrStatus3__CAN_TX_ALIGNMENT_STATE_SERVICE_ALIGNMENT = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/SrrStatus3 in the package delphi_srr_msgs.
typedef struct delphi_srr_msgs__msg__SrrStatus3
{
  std_msgs__msg__Header header;
  uint8_t can_tx_alignment_state;
  uint8_t can_tx_interface_ver_minor;
  uint32_t can_tx_sw_version_arm;
  uint8_t can_tx_hw_version;
  uint8_t can_tx_interface_version;
  uint32_t can_tx_serial_num;
} delphi_srr_msgs__msg__SrrStatus3;

// Struct for a sequence of delphi_srr_msgs__msg__SrrStatus3.
typedef struct delphi_srr_msgs__msg__SrrStatus3__Sequence
{
  delphi_srr_msgs__msg__SrrStatus3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_srr_msgs__msg__SrrStatus3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__STRUCT_H_
