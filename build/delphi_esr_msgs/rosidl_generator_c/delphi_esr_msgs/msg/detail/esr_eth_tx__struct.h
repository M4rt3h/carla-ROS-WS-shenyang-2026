// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrEthTx.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__STRUCT_H_

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

// Struct defined in msg/EsrEthTx in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrEthTx
{
  std_msgs__msg__Header header;
  uint16_t xcp_format_version;
  uint16_t scan_index;
  uint16_t tcp_size;
  uint8_t xcp_scan_type;
  uint16_t look_index;
  uint16_t mmr_scan_index;
  float target_report_host_speed;
  float target_report_host_yaw_rate;
  uint32_t xcp_timestamp;
  uint8_t release_revision;
  uint8_t promote_revision;
  uint8_t field_revision;
  uint8_t target_report_count;
  float target_report_range[64];
  float target_report_range_rate[64];
  float target_report_theta[64];
  float target_report_amplitude[64];
} delphi_esr_msgs__msg__EsrEthTx;

// Struct for a sequence of delphi_esr_msgs__msg__EsrEthTx.
typedef struct delphi_esr_msgs__msg__EsrEthTx__Sequence
{
  delphi_esr_msgs__msg__EsrEthTx * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrEthTx__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__STRUCT_H_
