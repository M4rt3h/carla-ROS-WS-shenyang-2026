// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/ScanPoint2204.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2204__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2204__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ScanPoint2204 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__ScanPoint2204
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
} ibeo_msgs__msg__ScanPoint2204;

// Struct for a sequence of ibeo_msgs__msg__ScanPoint2204.
typedef struct ibeo_msgs__msg__ScanPoint2204__Sequence
{
  ibeo_msgs__msg__ScanPoint2204 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__ScanPoint2204__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2204__STRUCT_H_
