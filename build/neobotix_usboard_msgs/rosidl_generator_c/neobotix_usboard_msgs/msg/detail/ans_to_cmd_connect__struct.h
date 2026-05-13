// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neobotix_usboard_msgs:msg/AnsToCmdConnect.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__STRUCT_H_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/AnsToCmdConnect in the package neobotix_usboard_msgs.
typedef struct neobotix_usboard_msgs__msg__AnsToCmdConnect
{
  std_msgs__msg__Header header;
  uint8_t command;
  uint8_t cmd_connect_ans_d7;
  uint8_t cmd_connect_ans_d6;
  uint8_t cmd_connect_ans_d5;
  uint8_t cmd_connect_ans_d4;
  uint8_t cmd_connect_ans_d3;
  uint8_t cmd_connect_ans_d2;
  uint8_t cmd_connect_ans_d1;
} neobotix_usboard_msgs__msg__AnsToCmdConnect;

// Struct for a sequence of neobotix_usboard_msgs__msg__AnsToCmdConnect.
typedef struct neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence
{
  neobotix_usboard_msgs__msg__AnsToCmdConnect * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__STRUCT_H_
