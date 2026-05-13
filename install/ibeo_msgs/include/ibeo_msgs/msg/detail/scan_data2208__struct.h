// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/ScanData2208.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_DATA2208__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__SCAN_DATA2208__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SCALA_B2'.
enum
{
  ibeo_msgs__msg__ScanData2208__SCALA_B2 = 11520
};

/// Constant 'CLOCKWISE'.
enum
{
  ibeo_msgs__msg__ScanData2208__CLOCKWISE = 0
};

/// Constant 'COUNTER_CLOCKWISE'.
enum
{
  ibeo_msgs__msg__ScanData2208__COUNTER_CLOCKWISE = 1
};

/// Constant 'FRONT_MIRROR'.
enum
{
  ibeo_msgs__msg__ScanData2208__FRONT_MIRROR = 0
};

/// Constant 'REAR_MIRROR'.
enum
{
  ibeo_msgs__msg__ScanData2208__REAR_MIRROR = 1
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
#include "ibeo_msgs/msg/detail/scan_point2208__struct.h"

// Struct defined in msg/ScanData2208 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__ScanData2208
{
  std_msgs__msg__Header header;
  ibeo_msgs__msg__IbeoDataHeader ibeo_header;
  uint16_t scan_number;
  uint16_t scanner_type;
  bool motor_on;
  bool laser_on;
  bool frequency_locked;
  uint8_t motor_rotating_direction;
  uint16_t angle_ticks_per_rotation;
  uint32_t scan_flags;
  int16_t mounting_yaw_angle_ticks;
  int16_t mounting_pitch_angle_ticks;
  int16_t mounting_roll_angle_ticks;
  int16_t mounting_position_x;
  int16_t mounting_position_y;
  int16_t mounting_position_z;
  uint8_t device_id;
  builtin_interfaces__msg__Time scan_start_time;
  builtin_interfaces__msg__Time scan_end_time;
  int16_t start_angle_ticks;
  int16_t end_angle_ticks;
  uint8_t mirror_side;
  int16_t mirror_tilt;
  ibeo_msgs__msg__ScanPoint2208__Sequence scan_point_list;
} ibeo_msgs__msg__ScanData2208;

// Struct for a sequence of ibeo_msgs__msg__ScanData2208.
typedef struct ibeo_msgs__msg__ScanData2208__Sequence
{
  ibeo_msgs__msg__ScanData2208 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__ScanData2208__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_DATA2208__STRUCT_H_
