// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/ReportIndex.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POSITION_REPORT_INDEX'.
enum
{
  kartech_linear_actuator_msgs__msg__ReportIndex__POSITION_REPORT_INDEX = 128
};

/// Constant 'MOTOR_CURRENT_REPORT_INDEX'.
enum
{
  kartech_linear_actuator_msgs__msg__ReportIndex__MOTOR_CURRENT_REPORT_INDEX = 129
};

/// Constant 'ENHANCED_POSITION_REPORT_INDEX'.
enum
{
  kartech_linear_actuator_msgs__msg__ReportIndex__ENHANCED_POSITION_REPORT_INDEX = 152
};

/// Constant 'UNIQUE_DEVICE_ID_REPORTS_INDEX'.
enum
{
  kartech_linear_actuator_msgs__msg__ReportIndex__UNIQUE_DEVICE_ID_REPORTS_INDEX = 167
};

/// Constant 'SOFTWARE_REVISION_REPORT_INDEX'.
enum
{
  kartech_linear_actuator_msgs__msg__ReportIndex__SOFTWARE_REVISION_REPORT_INDEX = 229
};

/// Constant 'ZEROING_MESSAGE_REPORT_INDEX'.
enum
{
  kartech_linear_actuator_msgs__msg__ReportIndex__ZEROING_MESSAGE_REPORT_INDEX = 238
};

// Struct defined in msg/ReportIndex in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__ReportIndex
{
  uint8_t report_index;
} kartech_linear_actuator_msgs__msg__ReportIndex;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__ReportIndex.
typedef struct kartech_linear_actuator_msgs__msg__ReportIndex__Sequence
{
  kartech_linear_actuator_msgs__msg__ReportIndex * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__ReportIndex__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__STRUCT_H_
