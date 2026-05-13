// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rviz_2d_overlay_msgs:msg/OverlayText.idl
// generated code does not contain a copyright notice
#include "rviz_2d_overlay_msgs/msg/detail/overlay_text__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rviz_2d_overlay_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rviz_2d_overlay_msgs/msg/detail/overlay_text__struct.h"
#include "rviz_2d_overlay_msgs/msg/detail/overlay_text__functions.h"
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

#include "rosidl_runtime_c/string.h"  // font, text
#include "rosidl_runtime_c/string_functions.h"  // font, text
#include "std_msgs/msg/detail/color_rgba__functions.h"  // bg_color, fg_color

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rviz_2d_overlay_msgs
size_t get_serialized_size_std_msgs__msg__ColorRGBA(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rviz_2d_overlay_msgs
size_t max_serialized_size_std_msgs__msg__ColorRGBA(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rviz_2d_overlay_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA)();


using _OverlayText__ros_msg_type = rviz_2d_overlay_msgs__msg__OverlayText;

static bool _OverlayText__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OverlayText__ros_msg_type * ros_message = static_cast<const _OverlayText__ros_msg_type *>(untyped_ros_message);
  // Field name: action
  {
    cdr << ros_message->action;
  }

  // Field name: width
  {
    cdr << ros_message->width;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: horizontal_distance
  {
    cdr << ros_message->horizontal_distance;
  }

  // Field name: vertical_distance
  {
    cdr << ros_message->vertical_distance;
  }

  // Field name: horizontal_alignment
  {
    cdr << ros_message->horizontal_alignment;
  }

  // Field name: vertical_alignment
  {
    cdr << ros_message->vertical_alignment;
  }

  // Field name: bg_color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bg_color, cdr))
    {
      return false;
    }
  }

  // Field name: line_width
  {
    cdr << ros_message->line_width;
  }

  // Field name: text_size
  {
    cdr << ros_message->text_size;
  }

  // Field name: font
  {
    const rosidl_runtime_c__String * str = &ros_message->font;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: fg_color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fg_color, cdr))
    {
      return false;
    }
  }

  // Field name: text
  {
    const rosidl_runtime_c__String * str = &ros_message->text;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _OverlayText__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OverlayText__ros_msg_type * ros_message = static_cast<_OverlayText__ros_msg_type *>(untyped_ros_message);
  // Field name: action
  {
    cdr >> ros_message->action;
  }

  // Field name: width
  {
    cdr >> ros_message->width;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: horizontal_distance
  {
    cdr >> ros_message->horizontal_distance;
  }

  // Field name: vertical_distance
  {
    cdr >> ros_message->vertical_distance;
  }

  // Field name: horizontal_alignment
  {
    cdr >> ros_message->horizontal_alignment;
  }

  // Field name: vertical_alignment
  {
    cdr >> ros_message->vertical_alignment;
  }

  // Field name: bg_color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bg_color))
    {
      return false;
    }
  }

  // Field name: line_width
  {
    cdr >> ros_message->line_width;
  }

  // Field name: text_size
  {
    cdr >> ros_message->text_size;
  }

  // Field name: font
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->font.data) {
      rosidl_runtime_c__String__init(&ros_message->font);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->font,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'font'\n");
      return false;
    }
  }

  // Field name: fg_color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fg_color))
    {
      return false;
    }
  }

  // Field name: text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->text.data) {
      rosidl_runtime_c__String__init(&ros_message->text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'text'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rviz_2d_overlay_msgs
size_t get_serialized_size_rviz_2d_overlay_msgs__msg__OverlayText(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OverlayText__ros_msg_type * ros_message = static_cast<const _OverlayText__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name action
  {
    size_t item_size = sizeof(ros_message->action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horizontal_distance
  {
    size_t item_size = sizeof(ros_message->horizontal_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_distance
  {
    size_t item_size = sizeof(ros_message->vertical_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horizontal_alignment
  {
    size_t item_size = sizeof(ros_message->horizontal_alignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_alignment
  {
    size_t item_size = sizeof(ros_message->vertical_alignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bg_color

  current_alignment += get_serialized_size_std_msgs__msg__ColorRGBA(
    &(ros_message->bg_color), current_alignment);
  // field.name line_width
  {
    size_t item_size = sizeof(ros_message->line_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name text_size
  {
    size_t item_size = sizeof(ros_message->text_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name font
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->font.size + 1);
  // field.name fg_color

  current_alignment += get_serialized_size_std_msgs__msg__ColorRGBA(
    &(ros_message->fg_color), current_alignment);
  // field.name text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _OverlayText__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rviz_2d_overlay_msgs__msg__OverlayText(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rviz_2d_overlay_msgs
size_t max_serialized_size_rviz_2d_overlay_msgs__msg__OverlayText(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: action
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: horizontal_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vertical_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: horizontal_alignment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vertical_alignment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bg_color
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__ColorRGBA(
        full_bounded, current_alignment);
    }
  }
  // member: line_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: text_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: font
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: fg_color
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__ColorRGBA(
        full_bounded, current_alignment);
    }
  }
  // member: text
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OverlayText__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rviz_2d_overlay_msgs__msg__OverlayText(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OverlayText = {
  "rviz_2d_overlay_msgs::msg",
  "OverlayText",
  _OverlayText__cdr_serialize,
  _OverlayText__cdr_deserialize,
  _OverlayText__get_serialized_size,
  _OverlayText__max_serialized_size
};

static rosidl_message_type_support_t _OverlayText__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OverlayText,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rviz_2d_overlay_msgs, msg, OverlayText)() {
  return &_OverlayText__type_support;
}

#if defined(__cplusplus)
}
#endif
