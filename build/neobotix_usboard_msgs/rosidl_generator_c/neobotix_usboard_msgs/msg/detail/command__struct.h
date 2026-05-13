// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neobotix_usboard_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_

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

// Struct defined in msg/Command in the package neobotix_usboard_msgs.
typedef struct neobotix_usboard_msgs__msg__Command
{
  std_msgs__msg__Header header;
  uint8_t command;
  uint64_t command_data;
  uint8_t set_num;
  uint8_t paraset_byte6;
  uint8_t paraset_byte5;
  uint8_t paraset_byte4;
  uint8_t paraset_byte3;
  uint8_t paraset_byte2;
  uint8_t paraset_byte1;
  uint8_t set_active_9to16;
  uint8_t set_active_1to8;
} neobotix_usboard_msgs__msg__Command;

// Struct for a sequence of neobotix_usboard_msgs__msg__Command.
typedef struct neobotix_usboard_msgs__msg__Command__Sequence
{
  neobotix_usboard_msgs__msg__Command * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neobotix_usboard_msgs__msg__Command__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_
