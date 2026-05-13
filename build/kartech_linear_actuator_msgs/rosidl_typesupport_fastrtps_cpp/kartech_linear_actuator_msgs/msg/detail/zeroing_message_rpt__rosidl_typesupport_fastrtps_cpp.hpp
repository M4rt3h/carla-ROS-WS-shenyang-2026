// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ZeroingMessageRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "kartech_linear_actuator_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "kartech_linear_actuator_msgs/msg/detail/zeroing_message_rpt__struct.hpp"

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

namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kartech_linear_actuator_msgs
cdr_serialize(
  const kartech_linear_actuator_msgs::msg::ZeroingMessageRpt & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kartech_linear_actuator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kartech_linear_actuator_msgs::msg::ZeroingMessageRpt & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kartech_linear_actuator_msgs
get_serialized_size(
  const kartech_linear_actuator_msgs::msg::ZeroingMessageRpt & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kartech_linear_actuator_msgs
max_serialized_size_ZeroingMessageRpt(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kartech_linear_actuator_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kartech_linear_actuator_msgs, msg, ZeroingMessageRpt)();

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
