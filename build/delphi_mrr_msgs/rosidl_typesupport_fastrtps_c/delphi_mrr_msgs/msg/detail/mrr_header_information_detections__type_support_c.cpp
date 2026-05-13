// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderInformationDetections.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_header_information_detections__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_mrr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_mrr_msgs/msg/detail/mrr_header_information_detections__struct.h"
#include "delphi_mrr_msgs/msg/detail/mrr_header_information_detections__functions.h"
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_mrr_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_mrr_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_mrr_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _MrrHeaderInformationDetections__ros_msg_type = delphi_mrr_msgs__msg__MrrHeaderInformationDetections;

static bool _MrrHeaderInformationDetections__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MrrHeaderInformationDetections__ros_msg_type * ros_message = static_cast<const _MrrHeaderInformationDetections__ros_msg_type *>(untyped_ros_message);
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

  // Field name: can_align_updates_done
  {
    cdr << ros_message->can_align_updates_done;
  }

  // Field name: can_scan_index
  {
    cdr << ros_message->can_scan_index;
  }

  // Field name: can_number_of_det
  {
    cdr << ros_message->can_number_of_det;
  }

  // Field name: can_look_id
  {
    cdr << ros_message->can_look_id;
  }

  // Field name: can_look_index
  {
    cdr << ros_message->can_look_index;
  }

  return true;
}

static bool _MrrHeaderInformationDetections__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MrrHeaderInformationDetections__ros_msg_type * ros_message = static_cast<_MrrHeaderInformationDetections__ros_msg_type *>(untyped_ros_message);
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

  // Field name: can_align_updates_done
  {
    cdr >> ros_message->can_align_updates_done;
  }

  // Field name: can_scan_index
  {
    cdr >> ros_message->can_scan_index;
  }

  // Field name: can_number_of_det
  {
    cdr >> ros_message->can_number_of_det;
  }

  // Field name: can_look_id
  {
    cdr >> ros_message->can_look_id;
  }

  // Field name: can_look_index
  {
    cdr >> ros_message->can_look_index;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t get_serialized_size_delphi_mrr_msgs__msg__MrrHeaderInformationDetections(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MrrHeaderInformationDetections__ros_msg_type * ros_message = static_cast<const _MrrHeaderInformationDetections__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name can_align_updates_done
  {
    size_t item_size = sizeof(ros_message->can_align_updates_done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_scan_index
  {
    size_t item_size = sizeof(ros_message->can_scan_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_number_of_det
  {
    size_t item_size = sizeof(ros_message->can_number_of_det);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_look_id
  {
    size_t item_size = sizeof(ros_message->can_look_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_look_index
  {
    size_t item_size = sizeof(ros_message->can_look_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MrrHeaderInformationDetections__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_mrr_msgs__msg__MrrHeaderInformationDetections(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t max_serialized_size_delphi_mrr_msgs__msg__MrrHeaderInformationDetections(
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
  // member: can_align_updates_done
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: can_scan_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: can_number_of_det
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_look_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_look_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MrrHeaderInformationDetections__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_mrr_msgs__msg__MrrHeaderInformationDetections(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MrrHeaderInformationDetections = {
  "delphi_mrr_msgs::msg",
  "MrrHeaderInformationDetections",
  _MrrHeaderInformationDetections__cdr_serialize,
  _MrrHeaderInformationDetections__cdr_deserialize,
  _MrrHeaderInformationDetections__get_serialized_size,
  _MrrHeaderInformationDetections__max_serialized_size
};

static rosidl_message_type_support_t _MrrHeaderInformationDetections__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MrrHeaderInformationDetections,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_mrr_msgs, msg, MrrHeaderInformationDetections)() {
  return &_MrrHeaderInformationDetections__type_support;
}

#if defined(__cplusplus)
}
#endif
