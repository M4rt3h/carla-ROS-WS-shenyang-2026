// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neobotix_usboard_msgs:msg/AnsParasetToEEPROM.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__STRUCT_H_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__STRUCT_H_

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

// Struct defined in msg/AnsParasetToEEPROM in the package neobotix_usboard_msgs.
typedef struct neobotix_usboard_msgs__msg__AnsParasetToEEPROM
{
  std_msgs__msg__Header header;
  uint8_t command;
  uint8_t paraset_cksum_low_byte;
  uint8_t paraset_cksum_high_byte;
} neobotix_usboard_msgs__msg__AnsParasetToEEPROM;

// Struct for a sequence of neobotix_usboard_msgs__msg__AnsParasetToEEPROM.
typedef struct neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence
{
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neobotix_usboard_msgs__msg__AnsParasetToEEPROM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__STRUCT_H_
