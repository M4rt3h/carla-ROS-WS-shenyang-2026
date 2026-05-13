// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neobotix_usboard_msgs:msg/AnalogIn.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANALOG_IN__STRUCT_H_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANALOG_IN__STRUCT_H_

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

// Struct defined in msg/AnalogIn in the package neobotix_usboard_msgs.
typedef struct neobotix_usboard_msgs__msg__AnalogIn
{
  std_msgs__msg__Header header;
  uint8_t command;
  uint8_t analog_data_ch4_low_byte;
  uint8_t analog_data_ch4_high_bits;
  uint8_t analog_data_ch3_low_byte;
  uint8_t analog_data_ch3_high_bits;
  uint8_t analog_data_ch2_low_byte;
  uint8_t analog_data_ch2_high_bits;
  uint8_t analog_data_ch1_low_byte;
  uint8_t analog_data_ch1_high_bits;
} neobotix_usboard_msgs__msg__AnalogIn;

// Struct for a sequence of neobotix_usboard_msgs__msg__AnalogIn.
typedef struct neobotix_usboard_msgs__msg__AnalogIn__Sequence
{
  neobotix_usboard_msgs__msg__AnalogIn * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neobotix_usboard_msgs__msg__AnalogIn__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANALOG_IN__STRUCT_H_
