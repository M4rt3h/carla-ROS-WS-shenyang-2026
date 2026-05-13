// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrVehicle3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__STRUCT_H_

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

// Struct defined in msg/EsrVehicle3 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrVehicle3
{
  std_msgs__msg__Header header;
  bool long_accel_validity;
  bool lat_accel_validity;
  float lat_accel;
  float long_accel;
  uint8_t radar_fov_lr;
  uint8_t radar_fov_mr;
  bool auto_align_disable;
  uint8_t radar_height;
  bool serv_align_type;
  bool serv_align_enable;
  uint16_t aalign_avg_ctr_total;
  bool auto_align_converged;
  uint8_t wheel_slip;
  uint8_t serv_align_updates_need;
  int8_t angle_mounting_offset;
} delphi_esr_msgs__msg__EsrVehicle3;

// Struct for a sequence of delphi_esr_msgs__msg__EsrVehicle3.
typedef struct delphi_esr_msgs__msg__EsrVehicle3__Sequence
{
  delphi_esr_msgs__msg__EsrVehicle3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrVehicle3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__STRUCT_H_
