// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/ScannerInfo2205.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALASCA_XT'.
enum
{
  ibeo_msgs__msg__ScannerInfo2205__ALASCA_XT = 3
};

/// Constant 'LUX_ECU'.
enum
{
  ibeo_msgs__msg__ScannerInfo2205__LUX_ECU = 4
};

/// Constant 'LUX_PROTOTYPE'.
enum
{
  ibeo_msgs__msg__ScannerInfo2205__LUX_PROTOTYPE = 5
};

/// Constant 'LUX'.
enum
{
  ibeo_msgs__msg__ScannerInfo2205__LUX = 6
};

/// Constant 'SCALA_B1'.
enum
{
  ibeo_msgs__msg__ScannerInfo2205__SCALA_B1 = 96
};

// Include directives for member types
// Member 'scan_start_time'
// Member 'scan_end_time'
// Member 'scan_start_time_from_device'
// Member 'scan_end_time_from_device'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'mounting_position'
#include "ibeo_msgs/msg/detail/mounting_position_f__struct.h"
// Member 'resolutions'
#include "ibeo_msgs/msg/detail/resolution_info__struct.h"

// Struct defined in msg/ScannerInfo2205 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__ScannerInfo2205
{
  uint8_t device_id;
  uint8_t scanner_type;
  uint16_t scan_number;
  float start_angle;
  float end_angle;
  builtin_interfaces__msg__Time scan_start_time;
  builtin_interfaces__msg__Time scan_end_time;
  builtin_interfaces__msg__Time scan_start_time_from_device;
  builtin_interfaces__msg__Time scan_end_time_from_device;
  float scan_frequency;
  float beam_tilt;
  uint32_t scan_flags;
  ibeo_msgs__msg__MountingPositionF mounting_position;
  ibeo_msgs__msg__ResolutionInfo resolutions[8];
} ibeo_msgs__msg__ScannerInfo2205;

// Struct for a sequence of ibeo_msgs__msg__ScannerInfo2205.
typedef struct ibeo_msgs__msg__ScannerInfo2205__Sequence
{
  ibeo_msgs__msg__ScannerInfo2205 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__ScannerInfo2205__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__STRUCT_H_
