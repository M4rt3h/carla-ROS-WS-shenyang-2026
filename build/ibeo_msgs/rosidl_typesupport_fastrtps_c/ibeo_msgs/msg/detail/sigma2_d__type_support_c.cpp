// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/Sigma2D.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/sigma2_d__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/sigma2_d__struct.h"
#include "ibeo_msgs/msg/detail/sigma2_d__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Sigma2D__ros_msg_type = ibeo_msgs__msg__Sigma2D;

static bool _Sigma2D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Sigma2D__ros_msg_type * ros_message = static_cast<const _Sigma2D__ros_msg_type *>(untyped_ros_message);
  // Field name: sigma_x
  {
    cdr << ros_message->sigma_x;
  }

  // Field name: sigma_y
  {
    cdr << ros_message->sigma_y;
  }

  return true;
}

static bool _Sigma2D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Sigma2D__ros_msg_type * ros_message = static_cast<_Sigma2D__ros_msg_type *>(untyped_ros_message);
  // Field name: sigma_x
  {
    cdr >> ros_message->sigma_x;
  }

  // Field name: sigma_y
  {
    cdr >> ros_message->sigma_y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t get_serialized_size_ibeo_msgs__msg__Sigma2D(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Sigma2D__ros_msg_type * ros_message = static_cast<const _Sigma2D__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sigma_x
  {
    size_t item_size = sizeof(ros_message->sigma_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sigma_y
  {
    size_t item_size = sizeof(ros_message->sigma_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Sigma2D__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__Sigma2D(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__Sigma2D(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sigma_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sigma_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Sigma2D__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__Sigma2D(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Sigma2D = {
  "ibeo_msgs::msg",
  "Sigma2D",
  _Sigma2D__cdr_serialize,
  _Sigma2D__cdr_deserialize,
  _Sigma2D__get_serialized_size,
  _Sigma2D__max_serialized_size
};

static rosidl_message_type_support_t _Sigma2D__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Sigma2D,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Sigma2D)() {
  return &_Sigma2D__type_support;
}

#if defined(__cplusplus)
}
#endif
