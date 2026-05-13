// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_esr_msgs:msg/EsrStatus2.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_esr_msgs/msg/detail/esr_status2__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_status2__functions.h"
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

#include "rosidl_runtime_c/string.h"  // canmsg, sw_version_dsp
#include "rosidl_runtime_c/string_functions.h"  // canmsg, sw_version_dsp
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


using _EsrStatus2__ros_msg_type = delphi_esr_msgs__msg__EsrStatus2;

static bool _EsrStatus2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsrStatus2__ros_msg_type * ros_message = static_cast<const _EsrStatus2__ros_msg_type *>(untyped_ros_message);
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

  // Field name: maximum_tracks_ack
  {
    cdr << ros_message->maximum_tracks_ack;
  }

  // Field name: rolling_count_2
  {
    cdr << ros_message->rolling_count_2;
  }

  // Field name: overheat_error
  {
    cdr << (ros_message->overheat_error ? true : false);
  }

  // Field name: range_perf_error
  {
    cdr << (ros_message->range_perf_error ? true : false);
  }

  // Field name: internal_error
  {
    cdr << (ros_message->internal_error ? true : false);
  }

  // Field name: xcvr_operational
  {
    cdr << (ros_message->xcvr_operational ? true : false);
  }

  // Field name: raw_data_mode
  {
    cdr << (ros_message->raw_data_mode ? true : false);
  }

  // Field name: steering_angle_ack
  {
    cdr << ros_message->steering_angle_ack;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: veh_spd_comp_factor
  {
    cdr << ros_message->veh_spd_comp_factor;
  }

  // Field name: grouping_mode
  {
    cdr << ros_message->grouping_mode;
  }

  // Field name: yaw_rate_bias
  {
    cdr << ros_message->yaw_rate_bias;
  }

  // Field name: sw_version_dsp
  {
    const rosidl_runtime_c__String * str = &ros_message->sw_version_dsp;
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

static bool _EsrStatus2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsrStatus2__ros_msg_type * ros_message = static_cast<_EsrStatus2__ros_msg_type *>(untyped_ros_message);
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

  // Field name: maximum_tracks_ack
  {
    cdr >> ros_message->maximum_tracks_ack;
  }

  // Field name: rolling_count_2
  {
    cdr >> ros_message->rolling_count_2;
  }

  // Field name: overheat_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->overheat_error = tmp ? true : false;
  }

  // Field name: range_perf_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->range_perf_error = tmp ? true : false;
  }

  // Field name: internal_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->internal_error = tmp ? true : false;
  }

  // Field name: xcvr_operational
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->xcvr_operational = tmp ? true : false;
  }

  // Field name: raw_data_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->raw_data_mode = tmp ? true : false;
  }

  // Field name: steering_angle_ack
  {
    cdr >> ros_message->steering_angle_ack;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: veh_spd_comp_factor
  {
    cdr >> ros_message->veh_spd_comp_factor;
  }

  // Field name: grouping_mode
  {
    cdr >> ros_message->grouping_mode;
  }

  // Field name: yaw_rate_bias
  {
    cdr >> ros_message->yaw_rate_bias;
  }

  // Field name: sw_version_dsp
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sw_version_dsp.data) {
      rosidl_runtime_c__String__init(&ros_message->sw_version_dsp);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sw_version_dsp,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sw_version_dsp'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t get_serialized_size_delphi_esr_msgs__msg__EsrStatus2(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsrStatus2__ros_msg_type * ros_message = static_cast<const _EsrStatus2__ros_msg_type *>(untyped_ros_message);
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
  // field.name maximum_tracks_ack
  {
    size_t item_size = sizeof(ros_message->maximum_tracks_ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rolling_count_2
  {
    size_t item_size = sizeof(ros_message->rolling_count_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overheat_error
  {
    size_t item_size = sizeof(ros_message->overheat_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range_perf_error
  {
    size_t item_size = sizeof(ros_message->range_perf_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name internal_error
  {
    size_t item_size = sizeof(ros_message->internal_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name xcvr_operational
  {
    size_t item_size = sizeof(ros_message->xcvr_operational);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name raw_data_mode
  {
    size_t item_size = sizeof(ros_message->raw_data_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle_ack
  {
    size_t item_size = sizeof(ros_message->steering_angle_ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_spd_comp_factor
  {
    size_t item_size = sizeof(ros_message->veh_spd_comp_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grouping_mode
  {
    size_t item_size = sizeof(ros_message->grouping_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate_bias
  {
    size_t item_size = sizeof(ros_message->yaw_rate_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sw_version_dsp
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sw_version_dsp.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _EsrStatus2__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_esr_msgs__msg__EsrStatus2(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t max_serialized_size_delphi_esr_msgs__msg__EsrStatus2(
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
  // member: maximum_tracks_ack
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rolling_count_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: overheat_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: range_perf_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: internal_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: xcvr_operational
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: raw_data_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steering_angle_ack
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_spd_comp_factor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: grouping_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yaw_rate_bias
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sw_version_dsp
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

static size_t _EsrStatus2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_esr_msgs__msg__EsrStatus2(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EsrStatus2 = {
  "delphi_esr_msgs::msg",
  "EsrStatus2",
  _EsrStatus2__cdr_serialize,
  _EsrStatus2__cdr_deserialize,
  _EsrStatus2__get_serialized_size,
  _EsrStatus2__max_serialized_size
};

static rosidl_message_type_support_t _EsrStatus2__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsrStatus2,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_esr_msgs, msg, EsrStatus2)() {
  return &_EsrStatus2__type_support;
}

#if defined(__cplusplus)
}
#endif
