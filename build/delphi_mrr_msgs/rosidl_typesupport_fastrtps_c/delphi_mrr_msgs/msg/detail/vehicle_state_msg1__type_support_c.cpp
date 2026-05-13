// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg1.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg1__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_mrr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg1__struct.h"
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg1__functions.h"
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


using _VehicleStateMsg1__ros_msg_type = delphi_mrr_msgs__msg__VehicleStateMsg1;

static bool _VehicleStateMsg1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleStateMsg1__ros_msg_type * ros_message = static_cast<const _VehicleStateMsg1__ros_msg_type *>(untyped_ros_message);
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

  // Field name: can_fcw_sensitivity_level
  {
    cdr << ros_message->can_fcw_sensitivity_level;
  }

  // Field name: can_vehicle_stationary
  {
    cdr << (ros_message->can_vehicle_stationary ? true : false);
  }

  // Field name: can_intf_minor_version
  {
    cdr << ros_message->can_intf_minor_version;
  }

  // Field name: can_intf_major_version
  {
    cdr << ros_message->can_intf_major_version;
  }

  // Field name: can_brake_pedal
  {
    cdr << ros_message->can_brake_pedal;
  }

  // Field name: can_high_wheel_slip
  {
    cdr << (ros_message->can_high_wheel_slip ? true : false);
  }

  // Field name: can_turn_signal_status
  {
    cdr << ros_message->can_turn_signal_status;
  }

  // Field name: can_washer_front_cmd
  {
    cdr << (ros_message->can_washer_front_cmd ? true : false);
  }

  // Field name: can_wiper_front_cmd
  {
    cdr << (ros_message->can_wiper_front_cmd ? true : false);
  }

  // Field name: can_wiper_speed_info
  {
    cdr << ros_message->can_wiper_speed_info;
  }

  // Field name: can_reverse_gear
  {
    cdr << (ros_message->can_reverse_gear ? true : false);
  }

  // Field name: can_beam_shape_actual_right
  {
    cdr << ros_message->can_beam_shape_actual_right;
  }

  // Field name: can_beam_shape_actual_left
  {
    cdr << ros_message->can_beam_shape_actual_left;
  }

  // Field name: can_main_beam_indication
  {
    cdr << (ros_message->can_main_beam_indication ? true : false);
  }

  // Field name: can_vehicle_index
  {
    cdr << ros_message->can_vehicle_index;
  }

  return true;
}

static bool _VehicleStateMsg1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleStateMsg1__ros_msg_type * ros_message = static_cast<_VehicleStateMsg1__ros_msg_type *>(untyped_ros_message);
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

  // Field name: can_fcw_sensitivity_level
  {
    cdr >> ros_message->can_fcw_sensitivity_level;
  }

  // Field name: can_vehicle_stationary
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_vehicle_stationary = tmp ? true : false;
  }

  // Field name: can_intf_minor_version
  {
    cdr >> ros_message->can_intf_minor_version;
  }

  // Field name: can_intf_major_version
  {
    cdr >> ros_message->can_intf_major_version;
  }

  // Field name: can_brake_pedal
  {
    cdr >> ros_message->can_brake_pedal;
  }

  // Field name: can_high_wheel_slip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_high_wheel_slip = tmp ? true : false;
  }

  // Field name: can_turn_signal_status
  {
    cdr >> ros_message->can_turn_signal_status;
  }

  // Field name: can_washer_front_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_washer_front_cmd = tmp ? true : false;
  }

  // Field name: can_wiper_front_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_wiper_front_cmd = tmp ? true : false;
  }

  // Field name: can_wiper_speed_info
  {
    cdr >> ros_message->can_wiper_speed_info;
  }

  // Field name: can_reverse_gear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_reverse_gear = tmp ? true : false;
  }

  // Field name: can_beam_shape_actual_right
  {
    cdr >> ros_message->can_beam_shape_actual_right;
  }

  // Field name: can_beam_shape_actual_left
  {
    cdr >> ros_message->can_beam_shape_actual_left;
  }

  // Field name: can_main_beam_indication
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_main_beam_indication = tmp ? true : false;
  }

  // Field name: can_vehicle_index
  {
    cdr >> ros_message->can_vehicle_index;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t get_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg1(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleStateMsg1__ros_msg_type * ros_message = static_cast<const _VehicleStateMsg1__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name can_fcw_sensitivity_level
  {
    size_t item_size = sizeof(ros_message->can_fcw_sensitivity_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_vehicle_stationary
  {
    size_t item_size = sizeof(ros_message->can_vehicle_stationary);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_intf_minor_version
  {
    size_t item_size = sizeof(ros_message->can_intf_minor_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_intf_major_version
  {
    size_t item_size = sizeof(ros_message->can_intf_major_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_brake_pedal
  {
    size_t item_size = sizeof(ros_message->can_brake_pedal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_high_wheel_slip
  {
    size_t item_size = sizeof(ros_message->can_high_wheel_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_turn_signal_status
  {
    size_t item_size = sizeof(ros_message->can_turn_signal_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_washer_front_cmd
  {
    size_t item_size = sizeof(ros_message->can_washer_front_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_wiper_front_cmd
  {
    size_t item_size = sizeof(ros_message->can_wiper_front_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_wiper_speed_info
  {
    size_t item_size = sizeof(ros_message->can_wiper_speed_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_reverse_gear
  {
    size_t item_size = sizeof(ros_message->can_reverse_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_beam_shape_actual_right
  {
    size_t item_size = sizeof(ros_message->can_beam_shape_actual_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_beam_shape_actual_left
  {
    size_t item_size = sizeof(ros_message->can_beam_shape_actual_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_main_beam_indication
  {
    size_t item_size = sizeof(ros_message->can_main_beam_indication);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_vehicle_index
  {
    size_t item_size = sizeof(ros_message->can_vehicle_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleStateMsg1__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg1(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t max_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg1(
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
  // member: can_fcw_sensitivity_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_vehicle_stationary
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_intf_minor_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_intf_major_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_brake_pedal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_high_wheel_slip
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_turn_signal_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_washer_front_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_wiper_front_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_wiper_speed_info
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_reverse_gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_beam_shape_actual_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_beam_shape_actual_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_main_beam_indication
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_vehicle_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleStateMsg1__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg1(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleStateMsg1 = {
  "delphi_mrr_msgs::msg",
  "VehicleStateMsg1",
  _VehicleStateMsg1__cdr_serialize,
  _VehicleStateMsg1__cdr_deserialize,
  _VehicleStateMsg1__get_serialized_size,
  _VehicleStateMsg1__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStateMsg1__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleStateMsg1,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_mrr_msgs, msg, VehicleStateMsg1)() {
  return &_VehicleStateMsg1__type_support;
}

#if defined(__cplusplus)
}
#endif
