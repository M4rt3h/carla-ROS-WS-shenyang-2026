// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrVehicle2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__STRUCT_H_

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

// Struct defined in msg/EsrVehicle2 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrVehicle2
{
  std_msgs__msg__Header header;
  uint16_t scan_index_ack;
  bool use_angle_misalignment;
  bool clear_faults;
  int8_t high_yaw_angle;
  bool mr_only_transmit;
  bool lr_only_transmit;
  float angle_misalignment;
  float lateral_mounting_offset;
  bool radar_cmd_radiate;
  bool blockage_disable;
  uint8_t maximum_tracks;
  uint8_t turn_signal_status;
  bool vehicle_speed_validity;
  bool mmr_upside_down;
  uint8_t grouping_mode;
  bool wiper_status;
  bool raw_data_enable;
} delphi_esr_msgs__msg__EsrVehicle2;

// Struct for a sequence of delphi_esr_msgs__msg__EsrVehicle2.
typedef struct delphi_esr_msgs__msg__EsrVehicle2__Sequence
{
  delphi_esr_msgs__msg__EsrVehicle2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrVehicle2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__STRUCT_H_
