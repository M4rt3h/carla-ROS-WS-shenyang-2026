// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_esr_msgs:msg/EsrValid1.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_valid1__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_esr_msgs/msg/detail/esr_valid1__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_valid1__functions.h"
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

#include "rosidl_runtime_c/string.h"  // canmsg
#include "rosidl_runtime_c/string_functions.h"  // canmsg
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_esr_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_esr_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_esr_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _EsrValid1__ros_msg_type = delphi_esr_msgs__msg__EsrValid1;

static bool _EsrValid1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsrValid1__ros_msg_type * ros_message = static_cast<const _EsrValid1__ros_msg_type *>(untyped_ros_message);
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

  // Field name: canmsg
  {
    const rosidl_runtime_c__String * str = &ros_message->canmsg;
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

  // Field name: lr_sn
  {
    cdr << ros_message->lr_sn;
  }

  // Field name: lr_range
  {
    cdr << ros_message->lr_range;
  }

  // Field name: lr_range_rate
  {
    cdr << ros_message->lr_range_rate;
  }

  // Field name: lr_angle
  {
    cdr << ros_message->lr_angle;
  }

  // Field name: lr_power
  {
    cdr << ros_message->lr_power;
  }

  return true;
}

static bool _EsrValid1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsrValid1__ros_msg_type * ros_message = static_cast<_EsrValid1__ros_msg_type *>(untyped_ros_message);
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

  // Field name: canmsg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->canmsg.data) {
      rosidl_runtime_c__String__init(&ros_message->canmsg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->canmsg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'canmsg'\n");
      return false;
    }
  }

  // Field name: lr_sn
  {
    cdr >> ros_message->lr_sn;
  }

  // Field name: lr_range
  {
    cdr >> ros_message->lr_range;
  }

  // Field name: lr_range_rate
  {
    cdr >> ros_message->lr_range_rate;
  }

  // Field name: lr_angle
  {
    cdr >> ros_message->lr_angle;
  }

  // Field name: lr_power
  {
    cdr >> ros_message->lr_power;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t get_serialized_size_delphi_esr_msgs__msg__EsrValid1(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsrValid1__ros_msg_type * ros_message = static_cast<const _EsrValid1__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name canmsg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->canmsg.size + 1);
  // field.name lr_sn
  {
    size_t item_size = sizeof(ros_message->lr_sn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lr_range
  {
    size_t item_size = sizeof(ros_message->lr_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lr_range_rate
  {
    size_t item_size = sizeof(ros_message->lr_range_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lr_angle
  {
    size_t item_size = sizeof(ros_message->lr_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lr_power
  {
    size_t item_size = sizeof(ros_message->lr_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsrValid1__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_esr_msgs__msg__EsrValid1(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t max_serialized_size_delphi_esr_msgs__msg__EsrValid1(
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
  // member: canmsg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lr_sn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lr_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lr_range_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lr_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lr_power
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EsrValid1__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_esr_msgs__msg__EsrValid1(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EsrValid1 = {
  "delphi_esr_msgs::msg",
  "EsrValid1",
  _EsrValid1__cdr_serialize,
  _EsrValid1__cdr_deserialize,
  _EsrValid1__get_serialized_size,
  _EsrValid1__max_serialized_size
};

static rosidl_message_type_support_t _EsrValid1__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsrValid1,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_esr_msgs, msg, EsrValid1)() {
  return &_EsrValid1__type_support;
}

#if defined(__cplusplus)
}
#endif
