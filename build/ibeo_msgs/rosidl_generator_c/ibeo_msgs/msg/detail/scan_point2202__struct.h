// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/ScanPoint2202.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ScanPoint2202 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__ScanPoint2202
{
  uint8_t layer;
  uint8_t echo;
  bool transparent_point;
  bool clutter_atmospheric;
  bool ground;
  bool dirt;
  int16_t horizontal_angle;
  uint16_t radial_distance;
  uint16_t echo_pulse_width;
} ibeo_msgs__msg__ScanPoint2202;

// Struct for a sequence of ibeo_msgs__msg__ScanPoint2202.
typedef struct ibeo_msgs__msg__ScanPoint2202__Sequence
{
  ibeo_msgs__msg__ScanPoint2202 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__ScanPoint2202__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__STRUCT_H_
