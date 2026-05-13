// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_esr_msgs:msg/EsrStatus5.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status5__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_esr_msgs/msg/detail/esr_status5__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_status5__functions.h"
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


using _EsrStatus5__ros_msg_type = delphi_esr_msgs__msg__EsrStatus5;

static bool _EsrStatus5__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsrStatus5__ros_msg_type * ros_message = static_cast<const _EsrStatus5__ros_msg_type *>(untyped_ros_message);
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

  // Field name: swbatt_a2d
  {
    cdr << ros_message->swbatt_a2d;
  }

  // Field name: ignp_a2d
  {
    cdr << ros_message->ignp_a2d;
  }

  // Field name: temp1_a2d
  {
    cdr << ros_message->temp1_a2d;
  }

  // Field name: temp2_a2d
  {
    cdr << ros_message->temp2_a2d;
  }

  // Field name: supply_5va_a2d
  {
    cdr << ros_message->supply_5va_a2d;
  }

  // Field name: supply_5vdx_a2d
  {
    cdr << ros_message->supply_5vdx_a2d;
  }

  // Field name: supply_3p3v_a2d
  {
    cdr << ros_message->supply_3p3v_a2d;
  }

  // Field name: supply_10v_a2d
  {
    cdr << ros_message->supply_10v_a2d;
  }

  return true;
}

static bool _EsrStatus5__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsrStatus5__ros_msg_type * ros_message = static_cast<_EsrStatus5__ros_msg_type *>(untyped_ros_message);
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

  // Field name: swbatt_a2d
  {
    cdr >> ros_message->swbatt_a2d;
  }

  // Field name: ignp_a2d
  {
    cdr >> ros_message->ignp_a2d;
  }

  // Field name: temp1_a2d
  {
    cdr >> ros_message->temp1_a2d;
  }

  // Field name: temp2_a2d
  {
    cdr >> ros_message->temp2_a2d;
  }

  // Field name: supply_5va_a2d
  {
    cdr >> ros_message->supply_5va_a2d;
  }

  // Field name: supply_5vdx_a2d
  {
    cdr >> ros_message->supply_5vdx_a2d;
  }

  // Field name: supply_3p3v_a2d
  {
    cdr >> ros_message->supply_3p3v_a2d;
  }

  // Field name: supply_10v_a2d
  {
    cdr >> ros_message->supply_10v_a2d;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t get_serialized_size_delphi_esr_msgs__msg__EsrStatus5(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsrStatus5__ros_msg_type * ros_message = static_cast<const _EsrStatus5__ros_msg_type *>(untyped_ros_message);
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
  // field.name swbatt_a2d
  {
    size_t item_size = sizeof(ros_message->swbatt_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ignp_a2d
  {
    size_t item_size = sizeof(ros_message->ignp_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp1_a2d
  {
    size_t item_size = sizeof(ros_message->temp1_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp2_a2d
  {
    size_t item_size = sizeof(ros_message->temp2_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supply_5va_a2d
  {
    size_t item_size = sizeof(ros_message->supply_5va_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supply_5vdx_a2d
  {
    size_t item_size = sizeof(ros_message->supply_5vdx_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supply_3p3v_a2d
  {
    size_t item_size = sizeof(ros_message->supply_3p3v_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supply_10v_a2d
  {
    size_t item_size = sizeof(ros_message->supply_10v_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsrStatus5__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_esr_msgs__msg__EsrStatus5(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t max_serialized_size_delphi_esr_msgs__msg__EsrStatus5(
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
  // member: swbatt_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ignp_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temp1_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temp2_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: supply_5va_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: supply_5vdx_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: supply_3p3v_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: supply_10v_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EsrStatus5__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_esr_msgs__msg__EsrStatus5(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EsrStatus5 = {
  "delphi_esr_msgs::msg",
  "EsrStatus5",
  _EsrStatus5__cdr_serialize,
  _EsrStatus5__cdr_deserialize,
  _EsrStatus5__get_serialized_size,
  _EsrStatus5__max_serialized_size
};

static rosidl_message_type_support_t _EsrStatus5__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsrStatus5,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_esr_msgs, msg, EsrStatus5)() {
  return &_EsrStatus5__type_support;
}

#if defined(__cplusplus)
}
#endif
