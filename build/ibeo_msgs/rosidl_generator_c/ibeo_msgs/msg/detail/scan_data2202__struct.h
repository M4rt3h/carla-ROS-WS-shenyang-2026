// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/ScanData2202.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FRONT'.
enum
{
  ibeo_msgs__msg__ScanData2202__FRONT = 0
};

/// Constant 'REAR'.
enum
{
  ibeo_msgs__msg__ScanData2202__REAR = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.h"
// Member 'scan_start_time'
// Member 'scan_end_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'scan_point_list'
#include "ibeo_msgs/msg/detail/scan_point2202__struct.h"

// Struct defined in msg/ScanData2202 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__ScanData2202
{
  std_msgs__msg__Header header;
  ibeo_msgs__msg__IbeoDataHeader ibeo_header;
  uint16_t scan_number;
  uint16_t scanner_status;
  uint16_t sync_phase_offset;
  builtin_interfaces__msg__Time scan_start_time;
  builtin_interfaces__msg__Time scan_end_time;
  uint16_t angle_ticks_per_rotation;
  int16_t start_angle_ticks;
  int16_t end_angle_ticks;
  uint16_t scan_points_count;
  int16_t mounting_yaw_angle_ticks;
  int16_t mounting_pitch_angle_ticks;
  int16_t mounting_roll_angle_ticks;
  int16_t mounting_position_x;
  int16_t mounting_position_y;
  int16_t mounting_position_z;
  bool ground_labeled;
  bool dirt_labeled;
  bool rain_labeled;
  uint8_t mirror_side;
  ibeo_msgs__msg__ScanPoint2202__Sequence scan_point_list;
} ibeo_msgs__msg__ScanData2202;

// Struct for a sequence of ibeo_msgs__msg__ScanData2202.
typedef struct ibeo_msgs__msg__ScanData2202__Sequence
{
  ibeo_msgs__msg__ScanData2202 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__ScanData2202__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__STRUCT_H_
