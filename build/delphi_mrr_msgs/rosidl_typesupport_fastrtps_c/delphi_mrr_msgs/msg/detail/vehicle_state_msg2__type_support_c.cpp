// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg2.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_mrr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg2__struct.h"
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg2__functions.h"
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


using _VehicleStateMsg2__ros_msg_type = delphi_mrr_msgs__msg__VehicleStateMsg2;

static bool _VehicleStateMsg2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleStateMsg2__ros_msg_type * ros_message = static_cast<const _VehicleStateMsg2__ros_msg_type *>(untyped_ros_message);
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

  // Field name: fsm_yaw_rate_valid
  {
    cdr << (ros_message->fsm_yaw_rate_valid ? true : false);
  }

  // Field name: fsm_yaw_rate
  {
    cdr << ros_message->fsm_yaw_rate;
  }

  // Field name: can_vehicle_index_4fa
  {
    cdr << ros_message->can_vehicle_index_4fa;
  }

  // Field name: fsm_vehicle_velocity
  {
    cdr << ros_message->fsm_vehicle_velocity;
  }

  // Field name: can_steering_whl_angle_qf
  {
    cdr << (ros_message->can_steering_whl_angle_qf ? true : false);
  }

  // Field name: fsm_vehicle_velocity_valid
  {
    cdr << (ros_message->fsm_vehicle_velocity_valid ? true : false);
  }

  // Field name: can_steering_whl_angle
  {
    cdr << ros_message->can_steering_whl_angle;
  }

  return true;
}

static bool _VehicleStateMsg2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleStateMsg2__ros_msg_type * ros_message = static_cast<_VehicleStateMsg2__ros_msg_type *>(untyped_ros_message);
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

  // Field name: fsm_yaw_rate_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fsm_yaw_rate_valid = tmp ? true : false;
  }

  // Field name: fsm_yaw_rate
  {
    cdr >> ros_message->fsm_yaw_rate;
  }

  // Field name: can_vehicle_index_4fa
  {
    cdr >> ros_message->can_vehicle_index_4fa;
  }

  // Field name: fsm_vehicle_velocity
  {
    cdr >> ros_message->fsm_vehicle_velocity;
  }

  // Field name: can_steering_whl_angle_qf
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_steering_whl_angle_qf = tmp ? true : false;
  }

  // Field name: fsm_vehicle_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fsm_vehicle_velocity_valid = tmp ? true : false;
  }

  // Field name: can_steering_whl_angle
  {
    cdr >> ros_message->can_steering_whl_angle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t get_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg2(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleStateMsg2__ros_msg_type * ros_message = static_cast<const _VehicleStateMsg2__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name fsm_yaw_rate_valid
  {
    size_t item_size = sizeof(ros_message->fsm_yaw_rate_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fsm_yaw_rate
  {
    size_t item_size = sizeof(ros_message->fsm_yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_vehicle_index_4fa
  {
    size_t item_size = sizeof(ros_message->can_vehicle_index_4fa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fsm_vehicle_velocity
  {
    size_t item_size = sizeof(ros_message->fsm_vehicle_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_steering_whl_angle_qf
  {
    size_t item_size = sizeof(ros_message->can_steering_whl_angle_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fsm_vehicle_velocity_valid
  {
    size_t item_size = sizeof(ros_message->fsm_vehicle_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_steering_whl_angle
  {
    size_t item_size = sizeof(ros_message->can_steering_whl_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleStateMsg2__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg2(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t max_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg2(
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
  // member: fsm_yaw_rate_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fsm_yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: can_vehicle_index_4fa
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: fsm_vehicle_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: can_steering_whl_angle_qf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fsm_vehicle_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_steering_whl_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleStateMsg2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg2(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleStateMsg2 = {
  "delphi_mrr_msgs::msg",
  "VehicleStateMsg2",
  _VehicleStateMsg2__cdr_serialize,
  _VehicleStateMsg2__cdr_deserialize,
  _VehicleStateMsg2__get_serialized_size,
  _VehicleStateMsg2__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStateMsg2__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleStateMsg2,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_mrr_msgs, msg, VehicleStateMsg2)() {
  return &_VehicleStateMsg2__type_support;
}

#if defined(__cplusplus)
}
#endif
