// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/ScanPoint2205.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ScanPoint2205 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__ScanPoint2205
{
  float x_position;
  float y_position;
  float z_position;
  float echo_width;
  uint8_t device_id;
  uint8_t layer;
  uint8_t echo;
  uint32_t time_offset;
  bool ground;
  bool dirt;
  bool precipitation;
  bool transparent;
} ibeo_msgs__msg__ScanPoint2205;

// Struct for a sequence of ibeo_msgs__msg__ScanPoint2205.
typedef struct ibeo_msgs__msg__ScanPoint2205__Sequence
{
  ibeo_msgs__msg__ScanPoint2205 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__ScanPoint2205__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__STRUCT_H_
