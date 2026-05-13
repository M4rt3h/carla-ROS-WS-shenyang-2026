// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_esr_msgs:msg/EsrEthTx.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_eth_tx__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_esr_msgs/msg/detail/esr_eth_tx__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_eth_tx__functions.h"
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


using _EsrEthTx__ros_msg_type = delphi_esr_msgs__msg__EsrEthTx;

static bool _EsrEthTx__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsrEthTx__ros_msg_type * ros_message = static_cast<const _EsrEthTx__ros_msg_type *>(untyped_ros_message);
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

  // Field name: xcp_format_version
  {
    cdr << ros_message->xcp_format_version;
  }

  // Field name: scan_index
  {
    cdr << ros_message->scan_index;
  }

  // Field name: tcp_size
  {
    cdr << ros_message->tcp_size;
  }

  // Field name: xcp_scan_type
  {
    cdr << ros_message->xcp_scan_type;
  }

  // Field name: look_index
  {
    cdr << ros_message->look_index;
  }

  // Field name: mmr_scan_index
  {
    cdr << ros_message->mmr_scan_index;
  }

  // Field name: target_report_host_speed
  {
    cdr << ros_message->target_report_host_speed;
  }

  // Field name: target_report_host_yaw_rate
  {
    cdr << ros_message->target_report_host_yaw_rate;
  }

  // Field name: xcp_timestamp
  {
    cdr << ros_message->xcp_timestamp;
  }

  // Field name: release_revision
  {
    cdr << ros_message->release_revision;
  }

  // Field name: promote_revision
  {
    cdr << ros_message->promote_revision;
  }

  // Field name: field_revision
  {
    cdr << ros_message->field_revision;
  }

  // Field name: target_report_count
  {
    cdr << ros_message->target_report_count;
  }

  // Field name: target_report_range
  {
    size_t size = 64;
    auto array_ptr = ros_message->target_report_range;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: target_report_range_rate
  {
    size_t size = 64;
    auto array_ptr = ros_message->target_report_range_rate;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: target_report_theta
  {
    size_t size = 64;
    auto array_ptr = ros_message->target_report_theta;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: target_report_amplitude
  {
    size_t size = 64;
    auto array_ptr = ros_message->target_report_amplitude;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _EsrEthTx__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsrEthTx__ros_msg_type * ros_message = static_cast<_EsrEthTx__ros_msg_type *>(untyped_ros_message);
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

  // Field name: xcp_format_version
  {
    cdr >> ros_message->xcp_format_version;
  }

  // Field name: scan_index
  {
    cdr >> ros_message->scan_index;
  }

  // Field name: tcp_size
  {
    cdr >> ros_message->tcp_size;
  }

  // Field name: xcp_scan_type
  {
    cdr >> ros_message->xcp_scan_type;
  }

  // Field name: look_index
  {
    cdr >> ros_message->look_index;
  }

  // Field name: mmr_scan_index
  {
    cdr >> ros_message->mmr_scan_index;
  }

  // Field name: target_report_host_speed
  {
    cdr >> ros_message->target_report_host_speed;
  }

  // Field name: target_report_host_yaw_rate
  {
    cdr >> ros_message->target_report_host_yaw_rate;
  }

  // Field name: xcp_timestamp
  {
    cdr >> ros_message->xcp_timestamp;
  }

  // Field name: release_revision
  {
    cdr >> ros_message->release_revision;
  }

  // Field name: promote_revision
  {
    cdr >> ros_message->promote_revision;
  }

  // Field name: field_revision
  {
    cdr >> ros_message->field_revision;
  }

  // Field name: target_report_count
  {
    cdr >> ros_message->target_report_count;
  }

  // Field name: target_report_range
  {
    size_t size = 64;
    auto array_ptr = ros_message->target_report_range;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: target_report_range_rate
  {
    size_t size = 64;
    auto array_ptr = ros_message->target_report_range_rate;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: target_report_theta
  {
    size_t size = 64;
    auto array_ptr = ros_message->target_report_theta;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: target_report_amplitude
  {
    size_t size = 64;
    auto array_ptr = ros_message->target_report_amplitude;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t get_serialized_size_delphi_esr_msgs__msg__EsrEthTx(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsrEthTx__ros_msg_type * ros_message = static_cast<const _EsrEthTx__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name xcp_format_version
  {
    size_t item_size = sizeof(ros_message->xcp_format_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan_index
  {
    size_t item_size = sizeof(ros_message->scan_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tcp_size
  {
    size_t item_size = sizeof(ros_message->tcp_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name xcp_scan_type
  {
    size_t item_size = sizeof(ros_message->xcp_scan_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name look_index
  {
    size_t item_size = sizeof(ros_message->look_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mmr_scan_index
  {
    size_t item_size = sizeof(ros_message->mmr_scan_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_report_host_speed
  {
    size_t item_size = sizeof(ros_message->target_report_host_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_report_host_yaw_rate
  {
    size_t item_size = sizeof(ros_message->target_report_host_yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name xcp_timestamp
  {
    size_t item_size = sizeof(ros_message->xcp_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name release_revision
  {
    size_t item_size = sizeof(ros_message->release_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name promote_revision
  {
    size_t item_size = sizeof(ros_message->promote_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name field_revision
  {
    size_t item_size = sizeof(ros_message->field_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_report_count
  {
    size_t item_size = sizeof(ros_message->target_report_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_report_range
  {
    size_t array_size = 64;
    auto array_ptr = ros_message->target_report_range;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_report_range_rate
  {
    size_t array_size = 64;
    auto array_ptr = ros_message->target_report_range_rate;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_report_theta
  {
    size_t array_size = 64;
    auto array_ptr = ros_message->target_report_theta;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_report_amplitude
  {
    size_t array_size = 64;
    auto array_ptr = ros_message->target_report_amplitude;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsrEthTx__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_esr_msgs__msg__EsrEthTx(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t max_serialized_size_delphi_esr_msgs__msg__EsrEthTx(
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
  // member: xcp_format_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: scan_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tcp_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: xcp_scan_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: look_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mmr_scan_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: target_report_host_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_report_host_yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: xcp_timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: release_revision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: promote_revision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: field_revision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: target_report_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: target_report_range
  {
    size_t array_size = 64;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_report_range_rate
  {
    size_t array_size = 64;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_report_theta
  {
    size_t array_size = 64;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_report_amplitude
  {
    size_t array_size = 64;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EsrEthTx__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_esr_msgs__msg__EsrEthTx(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EsrEthTx = {
  "delphi_esr_msgs::msg",
  "EsrEthTx",
  _EsrEthTx__cdr_serialize,
  _EsrEthTx__cdr_deserialize,
  _EsrEthTx__get_serialized_size,
  _EsrEthTx__max_serialized_size
};

static rosidl_message_type_support_t _EsrEthTx__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsrEthTx,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_esr_msgs, msg, EsrEthTx)() {
  return &_EsrEthTx__type_support;
}

#if defined(__cplusplus)
}
#endif
