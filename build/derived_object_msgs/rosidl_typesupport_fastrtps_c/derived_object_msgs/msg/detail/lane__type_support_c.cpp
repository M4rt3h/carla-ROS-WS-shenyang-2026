// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from derived_object_msgs:msg/Lane.idl
// generated code does not contain a copyright notice
#include "derived_object_msgs/msg/detail/lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "derived_object_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "derived_object_msgs/msg/detail/lane__struct.h"
#include "derived_object_msgs/msg/detail/lane__functions.h"
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


using _Lane__ros_msg_type = derived_object_msgs__msg__Lane;

static bool _Lane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Lane__ros_msg_type * ros_message = static_cast<const _Lane__ros_msg_type *>(untyped_ros_message);
  // Field name: quality
  {
    cdr << ros_message->quality;
  }

  // Field name: marker_kind
  {
    cdr << ros_message->marker_kind;
  }

  // Field name: curve_model_kind
  {
    cdr << ros_message->curve_model_kind;
  }

  // Field name: marker_offset
  {
    cdr << ros_message->marker_offset;
  }

  // Field name: heading_angle
  {
    cdr << ros_message->heading_angle;
  }

  // Field name: curvature
  {
    cdr << ros_message->curvature;
  }

  // Field name: curvature_derivative
  {
    cdr << ros_message->curvature_derivative;
  }

  // Field name: marker_width
  {
    cdr << ros_message->marker_width;
  }

  // Field name: view_range
  {
    cdr << ros_message->view_range;
  }

  return true;
}

static bool _Lane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Lane__ros_msg_type * ros_message = static_cast<_Lane__ros_msg_type *>(untyped_ros_message);
  // Field name: quality
  {
    cdr >> ros_message->quality;
  }

  // Field name: marker_kind
  {
    cdr >> ros_message->marker_kind;
  }

  // Field name: curve_model_kind
  {
    cdr >> ros_message->curve_model_kind;
  }

  // Field name: marker_offset
  {
    cdr >> ros_message->marker_offset;
  }

  // Field name: heading_angle
  {
    cdr >> ros_message->heading_angle;
  }

  // Field name: curvature
  {
    cdr >> ros_message->curvature;
  }

  // Field name: curvature_derivative
  {
    cdr >> ros_message->curvature_derivative;
  }

  // Field name: marker_width
  {
    cdr >> ros_message->marker_width;
  }

  // Field name: view_range
  {
    cdr >> ros_message->view_range;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_derived_object_msgs
size_t get_serialized_size_derived_object_msgs__msg__Lane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Lane__ros_msg_type * ros_message = static_cast<const _Lane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name quality
  {
    size_t item_size = sizeof(ros_message->quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name marker_kind
  {
    size_t item_size = sizeof(ros_message->marker_kind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curve_model_kind
  {
    size_t item_size = sizeof(ros_message->curve_model_kind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name marker_offset
  {
    size_t item_size = sizeof(ros_message->marker_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_angle
  {
    size_t item_size = sizeof(ros_message->heading_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature
  {
    size_t item_size = sizeof(ros_message->curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature_derivative
  {
    size_t item_size = sizeof(ros_message->curvature_derivative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name marker_width
  {
    size_t item_size = sizeof(ros_message->marker_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name view_range
  {
    size_t item_size = sizeof(ros_message->view_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Lane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_derived_object_msgs__msg__Lane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_derived_object_msgs
size_t max_serialized_size_derived_object_msgs__msg__Lane(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: marker_kind
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: curve_model_kind
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: marker_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: curvature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: curvature_derivative
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: marker_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: view_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Lane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_derived_object_msgs__msg__Lane(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Lane = {
  "derived_object_msgs::msg",
  "Lane",
  _Lane__cdr_serialize,
  _Lane__cdr_deserialize,
  _Lane__get_serialized_size,
  _Lane__max_serialized_size
};

static rosidl_message_type_support_t _Lane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Lane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, derived_object_msgs, msg, Lane)() {
  return &_Lane__type_support;
}

#if defined(__cplusplus)
}
#endif
