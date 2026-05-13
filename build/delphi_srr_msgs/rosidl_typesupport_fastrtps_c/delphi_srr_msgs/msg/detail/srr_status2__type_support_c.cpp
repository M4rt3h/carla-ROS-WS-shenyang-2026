// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_srr_msgs:msg/SrrStatus2.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_status2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_srr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_srr_msgs/msg/detail/srr_status2__struct.h"
#include "delphi_srr_msgs/msg/detail/srr_status2__functions.h"
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_srr_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_srr_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_srr_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SrrStatus2__ros_msg_type = delphi_srr_msgs__msg__SrrStatus2;

static bool _SrrStatus2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SrrStatus2__ros_msg_type * ros_message = static_cast<const _SrrStatus2__ros_msg_type *>(untyped_ros_message);
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

  // Field name: can_tx_alignment_status
  {
    cdr << ros_message->can_tx_alignment_status;
  }

  // Field name: can_tx_comm_error
  {
    cdr << (ros_message->can_tx_comm_error ? true : false);
  }

  // Field name: can_tx_steering_angle_sign
  {
    cdr << (ros_message->can_tx_steering_angle_sign ? true : false);
  }

  // Field name: can_tx_yaw_rate_bias
  {
    cdr << ros_message->can_tx_yaw_rate_bias;
  }

  // Field name: can_tx_veh_spd_comp_factor
  {
    cdr << ros_message->can_tx_veh_spd_comp_factor;
  }

  // Field name: can_tx_sw_version_dsp
  {
    cdr << ros_message->can_tx_sw_version_dsp;
  }

  // Field name: can_tx_temperature
  {
    cdr << ros_message->can_tx_temperature;
  }

  // Field name: can_tx_range_perf_error
  {
    cdr << (ros_message->can_tx_range_perf_error ? true : false);
  }

  // Field name: can_tx_overheat_error
  {
    cdr << (ros_message->can_tx_overheat_error ? true : false);
  }

  // Field name: can_tx_internal_error
  {
    cdr << (ros_message->can_tx_internal_error ? true : false);
  }

  // Field name: can_tx_xcvr_operational
  {
    cdr << (ros_message->can_tx_xcvr_operational ? true : false);
  }

  // Field name: can_tx_steering_angle
  {
    cdr << ros_message->can_tx_steering_angle;
  }

  // Field name: can_tx_rolling_count_2
  {
    cdr << ros_message->can_tx_rolling_count_2;
  }

  return true;
}

static bool _SrrStatus2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SrrStatus2__ros_msg_type * ros_message = static_cast<_SrrStatus2__ros_msg_type *>(untyped_ros_message);
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

  // Field name: can_tx_alignment_status
  {
    cdr >> ros_message->can_tx_alignment_status;
  }

  // Field name: can_tx_comm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_tx_comm_error = tmp ? true : false;
  }

  // Field name: can_tx_steering_angle_sign
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_tx_steering_angle_sign = tmp ? true : false;
  }

  // Field name: can_tx_yaw_rate_bias
  {
    cdr >> ros_message->can_tx_yaw_rate_bias;
  }

  // Field name: can_tx_veh_spd_comp_factor
  {
    cdr >> ros_message->can_tx_veh_spd_comp_factor;
  }

  // Field name: can_tx_sw_version_dsp
  {
    cdr >> ros_message->can_tx_sw_version_dsp;
  }

  // Field name: can_tx_temperature
  {
    cdr >> ros_message->can_tx_temperature;
  }

  // Field name: can_tx_range_perf_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_tx_range_perf_error = tmp ? true : false;
  }

  // Field name: can_tx_overheat_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_tx_overheat_error = tmp ? true : false;
  }

  // Field name: can_tx_internal_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_tx_internal_error = tmp ? true : false;
  }

  // Field name: can_tx_xcvr_operational
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_tx_xcvr_operational = tmp ? true : false;
  }

  // Field name: can_tx_steering_angle
  {
    cdr >> ros_message->can_tx_steering_angle;
  }

  // Field name: can_tx_rolling_count_2
  {
    cdr >> ros_message->can_tx_rolling_count_2;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_srr_msgs
size_t get_serialized_size_delphi_srr_msgs__msg__SrrStatus2(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SrrStatus2__ros_msg_type * ros_message = static_cast<const _SrrStatus2__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name can_tx_alignment_status
  {
    size_t item_size = sizeof(ros_message->can_tx_alignment_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_comm_error
  {
    size_t item_size = sizeof(ros_message->can_tx_comm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_steering_angle_sign
  {
    size_t item_size = sizeof(ros_message->can_tx_steering_angle_sign);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_yaw_rate_bias
  {
    size_t item_size = sizeof(ros_message->can_tx_yaw_rate_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_veh_spd_comp_factor
  {
    size_t item_size = sizeof(ros_message->can_tx_veh_spd_comp_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_sw_version_dsp
  {
    size_t item_size = sizeof(ros_message->can_tx_sw_version_dsp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_temperature
  {
    size_t item_size = sizeof(ros_message->can_tx_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_range_perf_error
  {
    size_t item_size = sizeof(ros_message->can_tx_range_perf_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_overheat_error
  {
    size_t item_size = sizeof(ros_message->can_tx_overheat_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_internal_error
  {
    size_t item_size = sizeof(ros_message->can_tx_internal_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_xcvr_operational
  {
    size_t item_size = sizeof(ros_message->can_tx_xcvr_operational);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_steering_angle
  {
    size_t item_size = sizeof(ros_message->can_tx_steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_rolling_count_2
  {
    size_t item_size = sizeof(ros_message->can_tx_rolling_count_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SrrStatus2__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_srr_msgs__msg__SrrStatus2(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_srr_msgs
size_t max_serialized_size_delphi_srr_msgs__msg__SrrStatus2(
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
  // member: can_tx_alignment_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx_comm_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx_steering_angle_sign
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx_yaw_rate_bias
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: can_tx_veh_spd_comp_factor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: can_tx_sw_version_dsp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: can_tx_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: can_tx_range_perf_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx_overheat_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx_internal_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx_xcvr_operational
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx_steering_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: can_tx_rolling_count_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SrrStatus2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_srr_msgs__msg__SrrStatus2(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SrrStatus2 = {
  "delphi_srr_msgs::msg",
  "SrrStatus2",
  _SrrStatus2__cdr_serialize,
  _SrrStatus2__cdr_deserialize,
  _SrrStatus2__get_serialized_size,
  _SrrStatus2__max_serialized_size
};

static rosidl_message_type_support_t _SrrStatus2__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SrrStatus2,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_srr_msgs, msg, SrrStatus2)() {
  return &_SrrStatus2__type_support;
}

#if defined(__cplusplus)
}
#endif
