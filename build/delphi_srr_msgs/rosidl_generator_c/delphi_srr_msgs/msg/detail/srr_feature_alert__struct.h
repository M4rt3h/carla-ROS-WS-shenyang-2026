// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_srr_msgs:msg/SrrFeatureAlert.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__STRUCT_H_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__STRUCT_H_

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

// Struct defined in msg/SrrFeatureAlert in the package delphi_srr_msgs.
typedef struct delphi_srr_msgs__msg__SrrFeatureAlert
{
  std_msgs__msg__Header header;
  uint8_t lcma_blis_ignored_track_id;
  uint8_t lcma_blis_track_id;
  float lcma_cvw_ttc;
  bool cta_ttc_alert;
  float cta_selected_track_ttc;
  uint16_t cta_selected_track;
  uint8_t cta_alert;
  bool cta_active;
  uint8_t lcma_cvw_cipv;
  uint8_t lcma_cvw_alert_state;
  uint8_t lcma_blis_alert_state;
  bool lcma_active;
} delphi_srr_msgs__msg__SrrFeatureAlert;

// Struct for a sequence of delphi_srr_msgs__msg__SrrFeatureAlert.
typedef struct delphi_srr_msgs__msg__SrrFeatureAlert__Sequence
{
  delphi_srr_msgs__msg__SrrFeatureAlert * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_srr_msgs__msg__SrrFeatureAlert__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__STRUCT_H_
