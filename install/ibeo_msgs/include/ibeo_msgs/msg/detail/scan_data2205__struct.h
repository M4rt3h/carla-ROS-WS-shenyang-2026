// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/ScanData2205.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_DATA2205__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__SCAN_DATA2205__STRUCT_H_

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
  ibeo_msgs__msg__ScanData2205__FRONT = 0
};

/// Constant 'REAR'.
enum
{
  ibeo_msgs__msg__ScanData2205__REAR = 1
};

/// Constant 'SCANNER'.
enum
{
  ibeo_msgs__msg__ScanData2205__SCANNER = 0
};

/// Constant 'VEHICLE'.
enum
{
  ibeo_msgs__msg__ScanData2205__VEHICLE = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.h"
// Member 'scan_start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'scanner_info_list'
#include "ibeo_msgs/msg/detail/scanner_info2205__struct.h"
// Member 'scan_point_list'
#include "ibeo_msgs/msg/detail/scan_point2205__struct.h"

// Struct defined in msg/ScanData2205 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__ScanData2205
{
  std_msgs__msg__Header header;
  ibeo_msgs__msg__IbeoDataHeader ibeo_header;
  builtin_interfaces__msg__Time scan_start_time;
  uint8_t scan_end_time_offset;
  bool fused_scan;
  uint8_t mirror_side;
  uint8_t coordinate_system;
  uint16_t scan_number;
  uint16_t scan_points;
  uint8_t number_of_scanner_infos;
  ibeo_msgs__msg__ScannerInfo2205__Sequence scanner_info_list;
  ibeo_msgs__msg__ScanPoint2205__Sequence scan_point_list;
} ibeo_msgs__msg__ScanData2205;

// Struct for a sequence of ibeo_msgs__msg__ScanData2205.
typedef struct ibeo_msgs__msg__ScanData2205__Sequence
{
  ibeo_msgs__msg__ScanData2205 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__ScanData2205__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_DATA2205__STRUCT_H_
