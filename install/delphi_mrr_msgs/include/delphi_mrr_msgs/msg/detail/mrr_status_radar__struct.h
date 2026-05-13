// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrStatusRadar.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__STRUCT_H_

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

// Struct defined in msg/MrrStatusRadar in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrStatusRadar
{
  std_msgs__msg__Header header;
  uint8_t can_interference_type;
  bool can_recommend_unconverge;
  uint8_t can_blockage_sidelobe_filter_val;
  bool can_radar_align_incomplete;
  bool can_blockage_sidelobe;
  bool can_blockage_mnr;
  bool can_radar_ext_cond_nok;
  bool can_radar_align_out_range;
  bool can_radar_align_not_start;
  bool can_radar_overheat_error;
  bool can_radar_not_op;
  bool can_xcvr_operational;
} delphi_mrr_msgs__msg__MrrStatusRadar;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrStatusRadar.
typedef struct delphi_mrr_msgs__msg__MrrStatusRadar__Sequence
{
  delphi_mrr_msgs__msg__MrrStatusRadar * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrStatusRadar__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__STRUCT_H_
