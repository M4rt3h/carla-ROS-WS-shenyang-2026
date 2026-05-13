// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__STRUCT_H_

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

// Struct defined in msg/VehicleStateMsg1 in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__VehicleStateMsg1
{
  std_msgs__msg__Header header;
  uint8_t can_fcw_sensitivity_level;
  bool can_vehicle_stationary;
  uint8_t can_intf_minor_version;
  uint8_t can_intf_major_version;
  uint8_t can_brake_pedal;
  bool can_high_wheel_slip;
  uint8_t can_turn_signal_status;
  bool can_washer_front_cmd;
  bool can_wiper_front_cmd;
  uint8_t can_wiper_speed_info;
  bool can_reverse_gear;
  uint8_t can_beam_shape_actual_right;
  uint8_t can_beam_shape_actual_left;
  bool can_main_beam_indication;
  uint16_t can_vehicle_index;
} delphi_mrr_msgs__msg__VehicleStateMsg1;

// Struct for a sequence of delphi_mrr_msgs__msg__VehicleStateMsg1.
typedef struct delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence
{
  delphi_mrr_msgs__msg__VehicleStateMsg1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__STRUCT_H_
