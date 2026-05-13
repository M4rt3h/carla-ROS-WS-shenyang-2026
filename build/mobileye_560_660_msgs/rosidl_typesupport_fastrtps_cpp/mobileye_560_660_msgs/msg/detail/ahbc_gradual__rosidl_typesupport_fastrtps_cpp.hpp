// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mobileye_560_660_msgs:msg/AhbcGradual.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mobileye_560_660_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mobileye_560_660_msgs/msg/detail/ahbc_gradual__struct.hpp"

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

namespace mobileye_560_660_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
cdr_serialize(
  const mobileye_560_660_msgs::msg::AhbcGradual & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mobileye_560_660_msgs::msg::AhbcGradual & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
get_serialized_size(
  const mobileye_560_660_msgs::msg::AhbcGradual & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
max_serialized_size_AhbcGradual(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mobileye_560_660_msgs, msg, AhbcGradual)();

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
