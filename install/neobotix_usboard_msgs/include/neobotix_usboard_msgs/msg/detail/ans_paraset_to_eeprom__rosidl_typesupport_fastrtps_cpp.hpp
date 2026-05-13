// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from neobotix_usboard_msgs:msg/AnsParasetToEEPROM.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "neobotix_usboard_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "neobotix_usboard_msgs/msg/detail/ans_paraset_to_eeprom__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace neobotix_usboard_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
cdr_serialize(
  const neobotix_usboard_msgs::msg::AnsParasetToEEPROM & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  neobotix_usboard_msgs::msg::AnsParasetToEEPROM & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
get_serialized_size(
  const neobotix_usboard_msgs::msg::AnsParasetToEEPROM & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
max_serialized_size_AnsParasetToEEPROM(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace neobotix_usboard_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, neobotix_usboard_msgs, msg, AnsParasetToEEPROM)();

#ifdef __cplusplus
}
#endif

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
