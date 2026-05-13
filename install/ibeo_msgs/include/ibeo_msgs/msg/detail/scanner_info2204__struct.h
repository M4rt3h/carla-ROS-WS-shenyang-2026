// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/ScannerInfo2204.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__STRUCT_H_

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
  ibeo_msgs__msg__ScannerInfo2204__ALASCA_XT = 3
};

/// Constant 'LUX_ECU'.
enum
{
  ibeo_msgs__msg__ScannerInfo2204__LUX_ECU = 4
};

/// Constant 'LUX_PROTOTYPE'.
enum
{
  ibeo_msgs__msg__ScannerInfo2204__LUX_PROTOTYPE = 5
};

/// Constant 'LUX'.
enum
{
  ibeo_msgs__msg__ScannerInfo2204__LUX = 6
};

/// Constant 'SCALA_B1'.
enum
{
  ibeo_msgs__msg__ScannerInfo2204__SCALA_B1 = 96
};

// Struct defined in msg/ScannerInfo2204 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__ScannerInfo2204
{
  uint8_t device_id;
  uint8_t scanner_type;
  uint16_t scan_number;
  float start_angle;
  float end_angle;
  float yaw_angle;
  float pitch_angle;
  float roll_angle;
  float offset_x;
  float offset_y;
  float offset_z;
} ibeo_msgs__msg__ScannerInfo2204;

// Struct for a sequence of ibeo_msgs__msg__ScannerInfo2204.
typedef struct ibeo_msgs__msg__ScannerInfo2204__Sequence
{
  ibeo_msgs__msg__ScannerInfo2204 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__ScannerInfo2204__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__STRUCT_H_
