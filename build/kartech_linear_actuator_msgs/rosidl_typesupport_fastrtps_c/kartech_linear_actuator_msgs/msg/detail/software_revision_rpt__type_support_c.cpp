// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kartech_linear_actuator_msgs:msg/SoftwareRevisionRpt.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/software_revision_rpt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kartech_linear_actuator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kartech_linear_actuator_msgs/msg/detail/software_revision_rpt__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/software_revision_rpt__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kartech_linear_actuator_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kartech_linear_actuator_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kartech_linear_actuator_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SoftwareRevisionRpt__ros_msg_type = kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt;

static bool _SoftwareRevisionRpt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SoftwareRevisionRpt__ros_msg_type * ros_message = static_cast<const _SoftwareRevisionRpt__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: software_version_0
  {
    cdr << ros_message->software_version_0;
  }

  // Field name: software_version_1
  {
    cdr << ros_message->software_version_1;
  }

  // Field name: software_version_2
  {
    cdr << ros_message->software_version_2;
  }

  // Field name: software_day
  {
    cdr << ros_message->software_day;
  }

  // Field name: software_month_year
  {
    cdr << ros_message->software_month_year;
  }

  return true;
}

static bool _SoftwareRevisionRpt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SoftwareRevisionRpt__ros_msg_type * ros_message = static_cast<_SoftwareRevisionRpt__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: software_version_0
  {
    cdr >> ros_message->software_version_0;
  }

  // Field name: software_version_1
  {
    cdr >> ros_message->software_version_1;
  }

  // Field name: software_version_2
  {
    cdr >> ros_message->software_version_2;
  }

  // Field name: software_day
  {
    cdr >> ros_message->software_day;
  }

  // Field name: software_month_year
  {
    cdr >> ros_message->software_month_year;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kartech_linear_actuator_msgs
size_t get_serialized_size_kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SoftwareRevisionRpt__ros_msg_type * ros_message = static_cast<const _SoftwareRevisionRpt__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name software_version_0
  {
    size_t item_size = sizeof(ros_message->software_version_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name software_version_1
  {
    size_t item_size = sizeof(ros_message->software_version_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name software_version_2
  {
    size_t item_size = sizeof(ros_message->software_version_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name software_day
  {
    size_t item_size = sizeof(ros_message->software_day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name software_month_year
  {
    size_t item_size = sizeof(ros_message->software_month_year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SoftwareRevisionRpt__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kartech_linear_actuator_msgs
size_t max_serialized_size_kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: software_version_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: software_version_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: software_version_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: software_day
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: software_month_year
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SoftwareRevisionRpt__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SoftwareRevisionRpt = {
  "kartech_linear_actuator_msgs::msg",
  "SoftwareRevisionRpt",
  _SoftwareRevisionRpt__cdr_serialize,
  _SoftwareRevisionRpt__cdr_deserialize,
  _SoftwareRevisionRpt__get_serialized_size,
  _SoftwareRevisionRpt__max_serialized_size
};

static rosidl_message_type_support_t _SoftwareRevisionRpt__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SoftwareRevisionRpt,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kartech_linear_actuator_msgs, msg, SoftwareRevisionRpt)() {
  return &_SoftwareRevisionRpt__type_support;
}

#if defined(__cplusplus)
}
#endif
