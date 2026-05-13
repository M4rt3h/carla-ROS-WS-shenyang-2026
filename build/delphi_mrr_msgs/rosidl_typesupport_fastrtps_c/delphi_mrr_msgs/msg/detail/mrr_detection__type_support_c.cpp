// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_mrr_msgs:msg/MrrDetection.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_detection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_mrr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_mrr_msgs/msg/detail/mrr_detection__struct.h"
#include "delphi_mrr_msgs/msg/detail/mrr_detection__functions.h"
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


using _MrrDetection__ros_msg_type = delphi_mrr_msgs__msg__MrrDetection;

static bool _MrrDetection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MrrDetection__ros_msg_type * ros_message = static_cast<const _MrrDetection__ros_msg_type *>(untyped_ros_message);
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

  // Field name: detection_id
  {
    cdr << ros_message->detection_id;
  }

  // Field name: confid_azimuth
  {
    cdr << ros_message->confid_azimuth;
  }

  // Field name: super_res_target
  {
    cdr << (ros_message->super_res_target ? true : false);
  }

  // Field name: nd_target
  {
    cdr << (ros_message->nd_target ? true : false);
  }

  // Field name: host_veh_clutter
  {
    cdr << (ros_message->host_veh_clutter ? true : false);
  }

  // Field name: valid_level
  {
    cdr << (ros_message->valid_level ? true : false);
  }

  // Field name: azimuth
  {
    cdr << ros_message->azimuth;
  }

  // Field name: range
  {
    cdr << ros_message->range;
  }

  // Field name: range_rate
  {
    cdr << ros_message->range_rate;
  }

  // Field name: amplitude
  {
    cdr << ros_message->amplitude;
  }

  // Field name: index_2lsb
  {
    cdr << ros_message->index_2lsb;
  }

  return true;
}

static bool _MrrDetection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MrrDetection__ros_msg_type * ros_message = static_cast<_MrrDetection__ros_msg_type *>(untyped_ros_message);
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

  // Field name: detection_id
  {
    cdr >> ros_message->detection_id;
  }

  // Field name: confid_azimuth
  {
    cdr >> ros_message->confid_azimuth;
  }

  // Field name: super_res_target
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->super_res_target = tmp ? true : false;
  }

  // Field name: nd_target
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->nd_target = tmp ? true : false;
  }

  // Field name: host_veh_clutter
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->host_veh_clutter = tmp ? true : false;
  }

  // Field name: valid_level
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->valid_level = tmp ? true : false;
  }

  // Field name: azimuth
  {
    cdr >> ros_message->azimuth;
  }

  // Field name: range
  {
    cdr >> ros_message->range;
  }

  // Field name: range_rate
  {
    cdr >> ros_message->range_rate;
  }

  // Field name: amplitude
  {
    cdr >> ros_message->amplitude;
  }

  // Field name: index_2lsb
  {
    cdr >> ros_message->index_2lsb;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t get_serialized_size_delphi_mrr_msgs__msg__MrrDetection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MrrDetection__ros_msg_type * ros_message = static_cast<const _MrrDetection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name detection_id
  {
    size_t item_size = sizeof(ros_message->detection_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confid_azimuth
  {
    size_t item_size = sizeof(ros_message->confid_azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name super_res_target
  {
    size_t item_size = sizeof(ros_message->super_res_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nd_target
  {
    size_t item_size = sizeof(ros_message->nd_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name host_veh_clutter
  {
    size_t item_size = sizeof(ros_message->host_veh_clutter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name valid_level
  {
    size_t item_size = sizeof(ros_message->valid_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name azimuth
  {
    size_t item_size = sizeof(ros_message->azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range
  {
    size_t item_size = sizeof(ros_message->range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range_rate
  {
    size_t item_size = sizeof(ros_message->range_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name amplitude
  {
    size_t item_size = sizeof(ros_message->amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name index_2lsb
  {
    size_t item_size = sizeof(ros_message->index_2lsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MrrDetection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_mrr_msgs__msg__MrrDetection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t max_serialized_size_delphi_mrr_msgs__msg__MrrDetection(
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
  // member: detection_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: confid_azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: super_res_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nd_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: host_veh_clutter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: valid_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: range_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: amplitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: index_2lsb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MrrDetection__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_mrr_msgs__msg__MrrDetection(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MrrDetection = {
  "delphi_mrr_msgs::msg",
  "MrrDetection",
  _MrrDetection__cdr_serialize,
  _MrrDetection__cdr_deserialize,
  _MrrDetection__get_serialized_size,
  _MrrDetection__max_serialized_size
};

static rosidl_message_type_support_t _MrrDetection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MrrDetection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_mrr_msgs, msg, MrrDetection)() {
  return &_MrrDetection__type_support;
}

#if defined(__cplusplus)
}
#endif
