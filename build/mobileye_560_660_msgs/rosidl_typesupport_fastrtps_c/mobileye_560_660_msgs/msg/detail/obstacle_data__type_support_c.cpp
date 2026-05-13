// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mobileye_560_660_msgs:msg/ObstacleData.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/obstacle_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mobileye_560_660_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mobileye_560_660_msgs/msg/detail/obstacle_data__struct.h"
#include "mobileye_560_660_msgs/msg/detail/obstacle_data__functions.h"
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mobileye_560_660_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mobileye_560_660_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mobileye_560_660_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ObstacleData__ros_msg_type = mobileye_560_660_msgs__msg__ObstacleData;

static bool _ObstacleData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObstacleData__ros_msg_type * ros_message = static_cast<const _ObstacleData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: obstacle_id
  {
    cdr << ros_message->obstacle_id;
  }

  // Field name: obstacle_pos_x
  {
    cdr << ros_message->obstacle_pos_x;
  }

  // Field name: obstacle_pos_y
  {
    cdr << ros_message->obstacle_pos_y;
  }

  // Field name: blinker_info
  {
    cdr << ros_message->blinker_info;
  }

  // Field name: cut_in_and_out
  {
    cdr << ros_message->cut_in_and_out;
  }

  // Field name: obstacle_rel_vel_x
  {
    cdr << ros_message->obstacle_rel_vel_x;
  }

  // Field name: obstacle_type
  {
    cdr << ros_message->obstacle_type;
  }

  // Field name: obstacle_status
  {
    cdr << ros_message->obstacle_status;
  }

  // Field name: obstacle_brake_lights
  {
    cdr << (ros_message->obstacle_brake_lights ? true : false);
  }

  // Field name: obstacle_valid
  {
    cdr << ros_message->obstacle_valid;
  }

  // Field name: obstacle_length
  {
    cdr << ros_message->obstacle_length;
  }

  // Field name: obstacle_width
  {
    cdr << ros_message->obstacle_width;
  }

  // Field name: obstacle_age
  {
    cdr << ros_message->obstacle_age;
  }

  // Field name: obstacle_lane
  {
    cdr << ros_message->obstacle_lane;
  }

  // Field name: cipv_flag
  {
    cdr << (ros_message->cipv_flag ? true : false);
  }

  // Field name: radar_pos_x
  {
    cdr << ros_message->radar_pos_x;
  }

  // Field name: radar_vel_x
  {
    cdr << ros_message->radar_vel_x;
  }

  // Field name: radar_match_confidence
  {
    cdr << ros_message->radar_match_confidence;
  }

  // Field name: matched_radar_id
  {
    cdr << ros_message->matched_radar_id;
  }

  // Field name: obstacle_angle_rate
  {
    cdr << ros_message->obstacle_angle_rate;
  }

  // Field name: obstacle_scale_change
  {
    cdr << ros_message->obstacle_scale_change;
  }

  // Field name: object_accel_x
  {
    cdr << ros_message->object_accel_x;
  }

  // Field name: obstacle_replaced
  {
    cdr << (ros_message->obstacle_replaced ? true : false);
  }

  // Field name: obstacle_angle
  {
    cdr << ros_message->obstacle_angle;
  }

  return true;
}

static bool _ObstacleData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObstacleData__ros_msg_type * ros_message = static_cast<_ObstacleData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: obstacle_id
  {
    cdr >> ros_message->obstacle_id;
  }

  // Field name: obstacle_pos_x
  {
    cdr >> ros_message->obstacle_pos_x;
  }

  // Field name: obstacle_pos_y
  {
    cdr >> ros_message->obstacle_pos_y;
  }

  // Field name: blinker_info
  {
    cdr >> ros_message->blinker_info;
  }

  // Field name: cut_in_and_out
  {
    cdr >> ros_message->cut_in_and_out;
  }

  // Field name: obstacle_rel_vel_x
  {
    cdr >> ros_message->obstacle_rel_vel_x;
  }

  // Field name: obstacle_type
  {
    cdr >> ros_message->obstacle_type;
  }

  // Field name: obstacle_status
  {
    cdr >> ros_message->obstacle_status;
  }

  // Field name: obstacle_brake_lights
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->obstacle_brake_lights = tmp ? true : false;
  }

  // Field name: obstacle_valid
  {
    cdr >> ros_message->obstacle_valid;
  }

  // Field name: obstacle_length
  {
    cdr >> ros_message->obstacle_length;
  }

  // Field name: obstacle_width
  {
    cdr >> ros_message->obstacle_width;
  }

  // Field name: obstacle_age
  {
    cdr >> ros_message->obstacle_age;
  }

  // Field name: obstacle_lane
  {
    cdr >> ros_message->obstacle_lane;
  }

  // Field name: cipv_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cipv_flag = tmp ? true : false;
  }

  // Field name: radar_pos_x
  {
    cdr >> ros_message->radar_pos_x;
  }

  // Field name: radar_vel_x
  {
    cdr >> ros_message->radar_vel_x;
  }

  // Field name: radar_match_confidence
  {
    cdr >> ros_message->radar_match_confidence;
  }

  // Field name: matched_radar_id
  {
    cdr >> ros_message->matched_radar_id;
  }

  // Field name: obstacle_angle_rate
  {
    cdr >> ros_message->obstacle_angle_rate;
  }

  // Field name: obstacle_scale_change
  {
    cdr >> ros_message->obstacle_scale_change;
  }

  // Field name: object_accel_x
  {
    cdr >> ros_message->object_accel_x;
  }

  // Field name: obstacle_replaced
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->obstacle_replaced = tmp ? true : false;
  }

  // Field name: obstacle_angle
  {
    cdr >> ros_message->obstacle_angle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t get_serialized_size_mobileye_560_660_msgs__msg__ObstacleData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObstacleData__ros_msg_type * ros_message = static_cast<const _ObstacleData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name obstacle_id
  {
    size_t item_size = sizeof(ros_message->obstacle_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_pos_x
  {
    size_t item_size = sizeof(ros_message->obstacle_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_pos_y
  {
    size_t item_size = sizeof(ros_message->obstacle_pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blinker_info
  {
    size_t item_size = sizeof(ros_message->blinker_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cut_in_and_out
  {
    size_t item_size = sizeof(ros_message->cut_in_and_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_rel_vel_x
  {
    size_t item_size = sizeof(ros_message->obstacle_rel_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_type
  {
    size_t item_size = sizeof(ros_message->obstacle_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_status
  {
    size_t item_size = sizeof(ros_message->obstacle_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_brake_lights
  {
    size_t item_size = sizeof(ros_message->obstacle_brake_lights);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_valid
  {
    size_t item_size = sizeof(ros_message->obstacle_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_length
  {
    size_t item_size = sizeof(ros_message->obstacle_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_width
  {
    size_t item_size = sizeof(ros_message->obstacle_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_age
  {
    size_t item_size = sizeof(ros_message->obstacle_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_lane
  {
    size_t item_size = sizeof(ros_message->obstacle_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cipv_flag
  {
    size_t item_size = sizeof(ros_message->cipv_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_pos_x
  {
    size_t item_size = sizeof(ros_message->radar_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_vel_x
  {
    size_t item_size = sizeof(ros_message->radar_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_match_confidence
  {
    size_t item_size = sizeof(ros_message->radar_match_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matched_radar_id
  {
    size_t item_size = sizeof(ros_message->matched_radar_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_angle_rate
  {
    size_t item_size = sizeof(ros_message->obstacle_angle_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_scale_change
  {
    size_t item_size = sizeof(ros_message->obstacle_scale_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_accel_x
  {
    size_t item_size = sizeof(ros_message->object_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_replaced
  {
    size_t item_size = sizeof(ros_message->obstacle_replaced);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_angle
  {
    size_t item_size = sizeof(ros_message->obstacle_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ObstacleData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mobileye_560_660_msgs__msg__ObstacleData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t max_serialized_size_mobileye_560_660_msgs__msg__ObstacleData(
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
  // member: obstacle_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: obstacle_pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: obstacle_pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: blinker_info
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cut_in_and_out
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obstacle_rel_vel_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: obstacle_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obstacle_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obstacle_brake_lights
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obstacle_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obstacle_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: obstacle_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: obstacle_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: obstacle_lane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cipv_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: radar_vel_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: radar_match_confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: matched_radar_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: obstacle_angle_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: obstacle_scale_change
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: object_accel_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: obstacle_replaced
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obstacle_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ObstacleData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mobileye_560_660_msgs__msg__ObstacleData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObstacleData = {
  "mobileye_560_660_msgs::msg",
  "ObstacleData",
  _ObstacleData__cdr_serialize,
  _ObstacleData__cdr_deserialize,
  _ObstacleData__get_serialized_size,
  _ObstacleData__max_serialized_size
};

static rosidl_message_type_support_t _ObstacleData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObstacleData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mobileye_560_660_msgs, msg, ObstacleData)() {
  return &_ObstacleData__type_support;
}

#if defined(__cplusplus)
}
#endif
