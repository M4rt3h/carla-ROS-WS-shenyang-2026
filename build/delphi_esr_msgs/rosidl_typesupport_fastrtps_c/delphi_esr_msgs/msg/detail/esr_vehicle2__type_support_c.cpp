// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle2.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_vehicle2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle2__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle2__functions.h"
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


using _EsrVehicle2__ros_msg_type = delphi_esr_msgs__msg__EsrVehicle2;

static bool _EsrVehicle2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsrVehicle2__ros_msg_type * ros_message = static_cast<const _EsrVehicle2__ros_msg_type *>(untyped_ros_message);
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

  // Field name: scan_index_ack
  {
    cdr << ros_message->scan_index_ack;
  }

  // Field name: use_angle_misalignment
  {
    cdr << (ros_message->use_angle_misalignment ? true : false);
  }

  // Field name: clear_faults
  {
    cdr << (ros_message->clear_faults ? true : false);
  }

  // Field name: high_yaw_angle
  {
    cdr << ros_message->high_yaw_angle;
  }

  // Field name: mr_only_transmit
  {
    cdr << (ros_message->mr_only_transmit ? true : false);
  }

  // Field name: lr_only_transmit
  {
    cdr << (ros_message->lr_only_transmit ? true : false);
  }

  // Field name: angle_misalignment
  {
    cdr << ros_message->angle_misalignment;
  }

  // Field name: lateral_mounting_offset
  {
    cdr << ros_message->lateral_mounting_offset;
  }

  // Field name: radar_cmd_radiate
  {
    cdr << (ros_message->radar_cmd_radiate ? true : false);
  }

  // Field name: blockage_disable
  {
    cdr << (ros_message->blockage_disable ? true : false);
  }

  // Field name: maximum_tracks
  {
    cdr << ros_message->maximum_tracks;
  }

  // Field name: turn_signal_status
  {
    cdr << ros_message->turn_signal_status;
  }

  // Field name: vehicle_speed_validity
  {
    cdr << (ros_message->vehicle_speed_validity ? true : false);
  }

  // Field name: mmr_upside_down
  {
    cdr << (ros_message->mmr_upside_down ? true : false);
  }

  // Field name: grouping_mode
  {
    cdr << ros_message->grouping_mode;
  }

  // Field name: wiper_status
  {
    cdr << (ros_message->wiper_status ? true : false);
  }

  // Field name: raw_data_enable
  {
    cdr << (ros_message->raw_data_enable ? true : false);
  }

  return true;
}

static bool _EsrVehicle2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsrVehicle2__ros_msg_type * ros_message = static_cast<_EsrVehicle2__ros_msg_type *>(untyped_ros_message);
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

  // Field name: scan_index_ack
  {
    cdr >> ros_message->scan_index_ack;
  }

  // Field name: use_angle_misalignment
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_angle_misalignment = tmp ? true : false;
  }

  // Field name: clear_faults
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->clear_faults = tmp ? true : false;
  }

  // Field name: high_yaw_angle
  {
    cdr >> ros_message->high_yaw_angle;
  }

  // Field name: mr_only_transmit
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mr_only_transmit = tmp ? true : false;
  }

  // Field name: lr_only_transmit
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lr_only_transmit = tmp ? true : false;
  }

  // Field name: angle_misalignment
  {
    cdr >> ros_message->angle_misalignment;
  }

  // Field name: lateral_mounting_offset
  {
    cdr >> ros_message->lateral_mounting_offset;
  }

  // Field name: radar_cmd_radiate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->radar_cmd_radiate = tmp ? true : false;
  }

  // Field name: blockage_disable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->blockage_disable = tmp ? true : false;
  }

  // Field name: maximum_tracks
  {
    cdr >> ros_message->maximum_tracks;
  }

  // Field name: turn_signal_status
  {
    cdr >> ros_message->turn_signal_status;
  }

  // Field name: vehicle_speed_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vehicle_speed_validity = tmp ? true : false;
  }

  // Field name: mmr_upside_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mmr_upside_down = tmp ? true : false;
  }

  // Field name: grouping_mode
  {
    cdr >> ros_message->grouping_mode;
  }

  // Field name: wiper_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wiper_status = tmp ? true : false;
  }

  // Field name: raw_data_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->raw_data_enable = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t get_serialized_size_delphi_esr_msgs__msg__EsrVehicle2(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsrVehicle2__ros_msg_type * ros_message = static_cast<const _EsrVehicle2__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name scan_index_ack
  {
    size_t item_size = sizeof(ros_message->scan_index_ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_angle_misalignment
  {
    size_t item_size = sizeof(ros_message->use_angle_misalignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clear_faults
  {
    size_t item_size = sizeof(ros_message->clear_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name high_yaw_angle
  {
    size_t item_size = sizeof(ros_message->high_yaw_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mr_only_transmit
  {
    size_t item_size = sizeof(ros_message->mr_only_transmit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lr_only_transmit
  {
    size_t item_size = sizeof(ros_message->lr_only_transmit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_misalignment
  {
    size_t item_size = sizeof(ros_message->angle_misalignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_mounting_offset
  {
    size_t item_size = sizeof(ros_message->lateral_mounting_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_cmd_radiate
  {
    size_t item_size = sizeof(ros_message->radar_cmd_radiate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blockage_disable
  {
    size_t item_size = sizeof(ros_message->blockage_disable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maximum_tracks
  {
    size_t item_size = sizeof(ros_message->maximum_tracks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_signal_status
  {
    size_t item_size = sizeof(ros_message->turn_signal_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_speed_validity
  {
    size_t item_size = sizeof(ros_message->vehicle_speed_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mmr_upside_down
  {
    size_t item_size = sizeof(ros_message->mmr_upside_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grouping_mode
  {
    size_t item_size = sizeof(ros_message->grouping_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wiper_status
  {
    size_t item_size = sizeof(ros_message->wiper_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name raw_data_enable
  {
    size_t item_size = sizeof(ros_message->raw_data_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsrVehicle2__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_esr_msgs__msg__EsrVehicle2(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t max_serialized_size_delphi_esr_msgs__msg__EsrVehicle2(
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
  // member: scan_index_ack
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: use_angle_misalignment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: clear_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: high_yaw_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mr_only_transmit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lr_only_transmit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: angle_misalignment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lateral_mounting_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: radar_cmd_radiate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blockage_disable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: maximum_tracks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_signal_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_speed_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mmr_upside_down
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: grouping_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wiper_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: raw_data_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EsrVehicle2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_esr_msgs__msg__EsrVehicle2(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EsrVehicle2 = {
  "delphi_esr_msgs::msg",
  "EsrVehicle2",
  _EsrVehicle2__cdr_serialize,
  _EsrVehicle2__cdr_deserialize,
  _EsrVehicle2__get_serialized_size,
  _EsrVehicle2__max_serialized_size
};

static rosidl_message_type_support_t _EsrVehicle2__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsrVehicle2,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_esr_msgs, msg, EsrVehicle2)() {
  return &_EsrVehicle2__type_support;
}

#if defined(__cplusplus)
}
#endif
