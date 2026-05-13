// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rviz_2d_overlay_msgs:msg/OverlayText.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rviz_2d_overlay_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rviz_2d_overlay_msgs/msg/detail/overlay_text__struct.hpp"

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

namespace rviz_2d_overlay_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_2d_overlay_msgs
cdr_serialize(
  const rviz_2d_overlay_msgs::msg::OverlayText & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_2d_overlay_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rviz_2d_overlay_msgs::msg::OverlayText & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_2d_overlay_msgs
get_serialized_size(
  const rviz_2d_overlay_msgs::msg::OverlayText & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_2d_overlay_msgs
max_serialized_size_OverlayText(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rviz_2d_overlay_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_2d_overlay_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rviz_2d_overlay_msgs, msg, OverlayText)();

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
