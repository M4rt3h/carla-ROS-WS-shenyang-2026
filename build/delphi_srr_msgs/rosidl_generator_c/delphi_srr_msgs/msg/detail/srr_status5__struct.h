// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_srr_msgs:msg/SrrStatus5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__STRUCT_H_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAN_TX_YAW_RATE_REF_QF_UNDEFINED'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_YAW_RATE_REF_QF_UNDEFINED = 0
};

/// Constant 'CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED = 1
};

/// Constant 'CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE = 2
};

/// Constant 'CAN_TX_YAW_RATE_REF_QF_ACCURATE'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_YAW_RATE_REF_QF_ACCURATE = 3
};

/// Constant 'CAN_TX_YAW_RATE_RAW_QF_UNDEFINED'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_YAW_RATE_RAW_QF_UNDEFINED = 0
};

/// Constant 'CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED = 1
};

/// Constant 'CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE = 2
};

/// Constant 'CAN_TX_YAW_RATE_RAW_QF_ACCURATE'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_YAW_RATE_RAW_QF_ACCURATE = 3
};

/// Constant 'CAN_TX_SYSTEM_STATUS_CONFIGURATION'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_SYSTEM_STATUS_CONFIGURATION = 0
};

/// Constant 'CAN_TX_SYSTEM_STATUS_STARTUP'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_SYSTEM_STATUS_STARTUP = 1
};

/// Constant 'CAN_TX_SYSTEM_STATUS_RUNNING'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_SYSTEM_STATUS_RUNNING = 2
};

/// Constant 'CAN_TX_SYSTEM_STATUS_BLOCKED'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_SYSTEM_STATUS_BLOCKED = 3
};

/// Constant 'CAN_TX_SYSTEM_STATUS_FAULTY'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_SYSTEM_STATUS_FAULTY = 4
};

/// Constant 'CAN_TX_SYSTEM_STATUS_SHUTDOWN'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_SYSTEM_STATUS_SHUTDOWN = 5
};

/// Constant 'CAN_TX_SYSTEM_STATUS_HOT'.
enum
{
  delphi_srr_msgs__msg__SrrStatus5__CAN_TX_SYSTEM_STATUS_HOT = 6
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/SrrStatus5 in the package delphi_srr_msgs.
typedef struct delphi_srr_msgs__msg__SrrStatus5
{
  std_msgs__msg__Header header;
  bool disable_auto_align;
  uint8_t can_tx_yaw_rate_ref_qf;
  uint8_t can_tx_yaw_rate_raw_qf;
  float can_tx_yaw_rate_reference;
  float can_tx_yaw_rate_raw;
  uint8_t can_tx_system_status;
  int16_t can_tx_outside_temperature;
  bool can_blockage_mnr_blocked;
  bool can_blockage_bb_blocked;
  bool can_blockage_radar_blocked;
  bool can_td_blocked;
  bool radar_tx_power_error;
  bool radar_lo_power_error;
  bool radar_data_sync_error;
  bool linearizer_spi_transfer_error;
  bool saturated_tuning_freq_error;
  bool rtn_spi_transfer_error;
  bool rrn_spi_transfer_error;
  bool video_port_capture_error;
  bool vertical_misalignment_error;
  bool tx_temperature_fault;
  bool transmitter_id_error;
  bool dsp_unit_cal_checksum_error;
  bool dsp_unit_cal_block_chcksm_error;
  bool dsp_tuning_sensitivity_error;
  bool dsp_loop_overrun_error;
  bool adc_spi_transfer_error;
} delphi_srr_msgs__msg__SrrStatus5;

// Struct for a sequence of delphi_srr_msgs__msg__SrrStatus5.
typedef struct delphi_srr_msgs__msg__SrrStatus5__Sequence
{
  delphi_srr_msgs__msg__SrrStatus5 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_srr_msgs__msg__SrrStatus5__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__STRUCT_H_
