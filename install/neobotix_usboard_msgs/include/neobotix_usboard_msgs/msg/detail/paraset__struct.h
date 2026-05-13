// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neobotix_usboard_msgs:msg/Paraset.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__PARASET__STRUCT_H_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__PARASET__STRUCT_H_

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

// Struct defined in msg/Paraset in the package neobotix_usboard_msgs.
typedef struct neobotix_usboard_msgs__msg__Paraset
{
  std_msgs__msg__Header header;
  uint8_t command;
  uint8_t set_num;
  uint8_t paraset_byte54;
  uint8_t paraset_byte53;
  uint8_t paraset_byte52;
  uint8_t paraset_byte51;
  uint8_t paraset_byte50;
  uint8_t paraset_byte49;
  uint8_t paraset_byte48;
  uint8_t paraset_byte47;
  uint8_t paraset_byte46;
  uint8_t paraset_byte45;
  uint8_t paraset_byte44;
  uint8_t paraset_byte43;
  uint8_t paraset_byte42;
  uint8_t paraset_byte41;
  uint8_t paraset_byte40;
  uint8_t paraset_byte39;
  uint8_t paraset_byte38;
  uint8_t paraset_byte37;
  uint8_t paraset_byte36;
  uint8_t paraset_byte35;
  uint8_t paraset_byte34;
  uint8_t paraset_byte33;
  uint8_t paraset_byte32;
  uint8_t paraset_byte31;
  uint8_t paraset_byte30;
  uint8_t paraset_byte29;
  uint8_t paraset_byte28;
  uint8_t paraset_byte27;
  uint8_t paraset_byte26;
  uint8_t paraset_byte25;
  uint8_t paraset_byte24;
  uint8_t paraset_byte23;
  uint8_t paraset_byte22;
  uint8_t paraset_byte21;
  uint8_t paraset_byte20;
  uint8_t paraset_byte19;
  uint8_t paraset_byte18;
  uint8_t paraset_byte17;
  uint8_t paraset_byte16;
  uint8_t paraset_byte15;
  uint8_t paraset_byte14;
  uint8_t paraset_byte13;
  uint8_t paraset_byte12;
  uint8_t paraset_byte11;
  uint8_t paraset_byte10;
  uint8_t paraset_byte9;
  uint8_t paraset_byte8;
  uint8_t paraset_byte7;
  uint8_t paraset_byte6;
  uint8_t paraset_byte5;
  uint8_t paraset_byte4;
  uint8_t paraset_byte3;
  uint8_t paraset_byte2;
  uint8_t paraset_byte1;
} neobotix_usboard_msgs__msg__Paraset;

// Struct for a sequence of neobotix_usboard_msgs__msg__Paraset.
typedef struct neobotix_usboard_msgs__msg__Paraset__Sequence
{
  neobotix_usboard_msgs__msg__Paraset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neobotix_usboard_msgs__msg__Paraset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__PARASET__STRUCT_H_
