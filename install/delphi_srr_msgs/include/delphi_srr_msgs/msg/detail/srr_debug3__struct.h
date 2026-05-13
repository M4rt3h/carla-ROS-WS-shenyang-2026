// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_srr_msgs:msg/SrrDebug3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG3__STRUCT_H_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG3__STRUCT_H_

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

// Struct defined in msg/SrrDebug3 in the package delphi_srr_msgs.
typedef struct delphi_srr_msgs__msg__SrrDebug3
{
  std_msgs__msg__Header header;
  bool timer_create_error;
  bool thread_create_error;
  bool arm_calibration_error;
  bool spi_fee_error;
  bool spi_comm_error;
  bool socket_write_error;
  bool dsp_cal_obsolete_62_error;
  bool socket_read_error;
  bool socket_init_error;
  bool signal_wait_error;
  bool signal_send_error;
  bool signal_create_error;
  bool shared_mem_write_error;
  bool shared_mem_read_error;
  bool shared_mem_config_error;
  bool share_mem_init_error;
  bool ram_test_error;
  bool num_errors;
  bool mmap_memory_error;
  bool isr_attach_error;
  bool ipc_drv_write_error;
  bool ipc_drv_trigger_error;
  bool ipc_drv_sync_error;
  bool ipc_drv_read_error;
  bool ipc_drv_init_error;
  bool interrupt_enable_error;
  bool hil_format_error;
  bool flash_filesystem_error;
  bool error_none;
  bool dsp_load_read_error;
  bool dsp_load_open_error;
  bool dsp_load_address_error;
  bool dsp_isp_write_error;
  bool dsp_ipc_read_error;
  bool dsp_ipc_init;
  bool dsp_init_error;
  bool dsp_drv_start_error;
  bool dsp_drv_load_error;
  bool dsp_drv_init_error;
  bool dsp_drv_init2_error;
  bool dsp_drv_init1_error;
  bool dsp_calibration_error;
  bool can_xmt_error;
  bool can_rcv_error;
  bool can_hardware_error;
  bool always_true;
} delphi_srr_msgs__msg__SrrDebug3;

// Struct for a sequence of delphi_srr_msgs__msg__SrrDebug3.
typedef struct delphi_srr_msgs__msg__SrrDebug3__Sequence
{
  delphi_srr_msgs__msg__SrrDebug3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_srr_msgs__msg__SrrDebug3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG3__STRUCT_H_
