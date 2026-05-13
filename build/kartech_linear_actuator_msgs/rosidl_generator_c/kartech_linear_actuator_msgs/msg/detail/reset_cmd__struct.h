// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/ResetCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESET_OUTPUTS'.
enum
{
  kartech_linear_actuator_msgs__msg__ResetCmd__RESET_OUTPUTS = 0
};

/// Constant 'RESET_USER_DEFINED_IDS'.
enum
{
  kartech_linear_actuator_msgs__msg__ResetCmd__RESET_USER_DEFINED_IDS = 1
};

/// Constant 'RESET_REPORT_RATES'.
enum
{
  kartech_linear_actuator_msgs__msg__ResetCmd__RESET_REPORT_RATES = 2
};

/// Constant 'RESET_HARDWARE_CONFIGURATIONS'.
enum
{
  kartech_linear_actuator_msgs__msg__ResetCmd__RESET_HARDWARE_CONFIGURATIONS = 3
};

/// Constant 'RESET_USER_CONFIGURATIONS'.
enum
{
  kartech_linear_actuator_msgs__msg__ResetCmd__RESET_USER_CONFIGURATIONS = 4
};

/// Constant 'RESET_EVERYTHING'.
enum
{
  kartech_linear_actuator_msgs__msg__ResetCmd__RESET_EVERYTHING = 5
};

/// Constant 'RESET_NONE'.
enum
{
  kartech_linear_actuator_msgs__msg__ResetCmd__RESET_NONE = 6
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ResetCmd in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__ResetCmd
{
  std_msgs__msg__Header header;
  bool confirm;
  uint8_t reset_type;
  bool reset_user_rpt_id;
  bool reset_user_cmd_id_1;
  bool reset_user_cmd_id_2;
  bool reset_user_cmd_id_3;
  bool reset_user_cmd_id_4;
  bool disable_user_rpt_id;
  bool reenable_default_cmd_id;
} kartech_linear_actuator_msgs__msg__ResetCmd;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__ResetCmd.
typedef struct kartech_linear_actuator_msgs__msg__ResetCmd__Sequence
{
  kartech_linear_actuator_msgs__msg__ResetCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__ResetCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__STRUCT_H_
