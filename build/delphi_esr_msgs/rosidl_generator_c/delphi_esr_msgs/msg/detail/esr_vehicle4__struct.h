// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrVehicle4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__STRUCT_H_

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

// Struct defined in msg/EsrVehicle4 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrVehicle4
{
  std_msgs__msg__Header header;
  bool fac_align_cmd_1;
  bool fac_align_cmd_2;
  uint8_t fac_align_max_nt;
  uint8_t fac_align_samp_req;
  int8_t fac_tgt_mtg_offset;
  int8_t fac_tgt_mtg_space_hor;
  int8_t fac_tgt_mtg_space_ver;
  float fac_tgt_range_1;
  float fac_tgt_range_r2m;
  float fac_tgt_range_m2t;
} delphi_esr_msgs__msg__EsrVehicle4;

// Struct for a sequence of delphi_esr_msgs__msg__EsrVehicle4.
typedef struct delphi_esr_msgs__msg__EsrVehicle4__Sequence
{
  delphi_esr_msgs__msg__EsrVehicle4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrVehicle4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__STRUCT_H_
