// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__STRUCT_H_

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

// Struct defined in msg/VehicleStateMsg2 in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__VehicleStateMsg2
{
  std_msgs__msg__Header header;
  bool fsm_yaw_rate_valid;
  float fsm_yaw_rate;
  uint16_t can_vehicle_index_4fa;
  float fsm_vehicle_velocity;
  bool can_steering_whl_angle_qf;
  bool fsm_vehicle_velocity_valid;
  float can_steering_whl_angle;
} delphi_mrr_msgs__msg__VehicleStateMsg2;

// Struct for a sequence of delphi_mrr_msgs__msg__VehicleStateMsg2.
typedef struct delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence
{
  delphi_mrr_msgs__msg__VehicleStateMsg2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__STRUCT_H_
