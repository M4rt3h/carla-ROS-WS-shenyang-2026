// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mobileye_560_660_msgs:msg/ObstacleData.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/obstacle_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mobileye_560_660_msgs/msg/detail/obstacle_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
cdr_serialize(
  const mobileye_560_660_msgs::msg::ObstacleData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: obstacle_id
  cdr << ros_message.obstacle_id;
  // Member: obstacle_pos_x
  cdr << ros_message.obstacle_pos_x;
  // Member: obstacle_pos_y
  cdr << ros_message.obstacle_pos_y;
  // Member: blinker_info
  cdr << ros_message.blinker_info;
  // Member: cut_in_and_out
  cdr << ros_message.cut_in_and_out;
  // Member: obstacle_rel_vel_x
  cdr << ros_message.obstacle_rel_vel_x;
  // Member: obstacle_type
  cdr << ros_message.obstacle_type;
  // Member: obstacle_status
  cdr << ros_message.obstacle_status;
  // Member: obstacle_brake_lights
  cdr << (ros_message.obstacle_brake_lights ? true : false);
  // Member: obstacle_valid
  cdr << ros_message.obstacle_valid;
  // Member: obstacle_length
  cdr << ros_message.obstacle_length;
  // Member: obstacle_width
  cdr << ros_message.obstacle_width;
  // Member: obstacle_age
  cdr << ros_message.obstacle_age;
  // Member: obstacle_lane
  cdr << ros_message.obstacle_lane;
  // Member: cipv_flag
  cdr << (ros_message.cipv_flag ? true : false);
  // Member: radar_pos_x
  cdr << ros_message.radar_pos_x;
  // Member: radar_vel_x
  cdr << ros_message.radar_vel_x;
  // Member: radar_match_confidence
  cdr << ros_message.radar_match_confidence;
  // Member: matched_radar_id
  cdr << ros_message.matched_radar_id;
  // Member: obstacle_angle_rate
  cdr << ros_message.obstacle_angle_rate;
  // Member: obstacle_scale_change
  cdr << ros_message.obstacle_scale_change;
  // Member: object_accel_x
  cdr << ros_message.object_accel_x;
  // Member: obstacle_replaced
  cdr << (ros_message.obstacle_replaced ? true : false);
  // Member: obstacle_angle
  cdr << ros_message.obstacle_angle;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mobileye_560_660_msgs::msg::ObstacleData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: obstacle_id
  cdr >> ros_message.obstacle_id;

  // Member: obstacle_pos_x
  cdr >> ros_message.obstacle_pos_x;

  // Member: obstacle_pos_y
  cdr >> ros_message.obstacle_pos_y;

  // Member: blinker_info
  cdr >> ros_message.blinker_info;

  // Member: cut_in_and_out
  cdr >> ros_message.cut_in_and_out;

  // Member: obstacle_rel_vel_x
  cdr >> ros_message.obstacle_rel_vel_x;

  // Member: obstacle_type
  cdr >> ros_message.obstacle_type;

  // Member: obstacle_status
  cdr >> ros_message.obstacle_status;

  // Member: obstacle_brake_lights
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.obstacle_brake_lights = tmp ? true : false;
  }

  // Member: obstacle_valid
  cdr >> ros_message.obstacle_valid;

  // Member: obstacle_length
  cdr >> ros_message.obstacle_length;

  // Member: obstacle_width
  cdr >> ros_message.obstacle_width;

  // Member: obstacle_age
  cdr >> ros_message.obstacle_age;

  // Member: obstacle_lane
  cdr >> ros_message.obstacle_lane;

  // Member: cipv_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cipv_flag = tmp ? true : false;
  }

  // Member: radar_pos_x
  cdr >> ros_message.radar_pos_x;

  // Member: radar_vel_x
  cdr >> ros_message.radar_vel_x;

  // Member: radar_match_confidence
  cdr >> ros_message.radar_match_confidence;

  // Member: matched_radar_id
  cdr >> ros_message.matched_radar_id;

  // Member: obstacle_angle_rate
  cdr >> ros_message.obstacle_angle_rate;

  // Member: obstacle_scale_change
  cdr >> ros_message.obstacle_scale_change;

  // Member: object_accel_x
  cdr >> ros_message.object_accel_x;

  // Member: obstacle_replaced
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.obstacle_replaced = tmp ? true : false;
  }

  // Member: obstacle_angle
  cdr >> ros_message.obstacle_angle;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
get_serialized_size(
  const mobileye_560_660_msgs::msg::ObstacleData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: obstacle_id
  {
    size_t item_size = sizeof(ros_message.obstacle_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_pos_x
  {
    size_t item_size = sizeof(ros_message.obstacle_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_pos_y
  {
    size_t item_size = sizeof(ros_message.obstacle_pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blinker_info
  {
    size_t item_size = sizeof(ros_message.blinker_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cut_in_and_out
  {
    size_t item_size = sizeof(ros_message.cut_in_and_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_rel_vel_x
  {
    size_t item_size = sizeof(ros_message.obstacle_rel_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_type
  {
    size_t item_size = sizeof(ros_message.obstacle_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_status
  {
    size_t item_size = sizeof(ros_message.obstacle_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_brake_lights
  {
    size_t item_size = sizeof(ros_message.obstacle_brake_lights);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_valid
  {
    size_t item_size = sizeof(ros_message.obstacle_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_length
  {
    size_t item_size = sizeof(ros_message.obstacle_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_width
  {
    size_t item_size = sizeof(ros_message.obstacle_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_age
  {
    size_t item_size = sizeof(ros_message.obstacle_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_lane
  {
    size_t item_size = sizeof(ros_message.obstacle_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cipv_flag
  {
    size_t item_size = sizeof(ros_message.cipv_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radar_pos_x
  {
    size_t item_size = sizeof(ros_message.radar_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radar_vel_x
  {
    size_t item_size = sizeof(ros_message.radar_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radar_match_confidence
  {
    size_t item_size = sizeof(ros_message.radar_match_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matched_radar_id
  {
    size_t item_size = sizeof(ros_message.matched_radar_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_angle_rate
  {
    size_t item_size = sizeof(ros_message.obstacle_angle_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_scale_change
  {
    size_t item_size = sizeof(ros_message.obstacle_scale_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object_accel_x
  {
    size_t item_size = sizeof(ros_message.object_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_replaced
  {
    size_t item_size = sizeof(ros_message.obstacle_replaced);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_angle
  {
    size_t item_size = sizeof(ros_message.obstacle_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
max_serialized_size_ObstacleData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: obstacle_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: obstacle_pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: obstacle_pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: blinker_info
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cut_in_and_out
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: obstacle_rel_vel_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: obstacle_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: obstacle_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: obstacle_brake_lights
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: obstacle_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: obstacle_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: obstacle_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: obstacle_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: obstacle_lane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cipv_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: radar_pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: radar_vel_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: radar_match_confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: matched_radar_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: obstacle_angle_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: obstacle_scale_change
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: object_accel_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: obstacle_replaced
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: obstacle_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ObstacleData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::ObstacleData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObstacleData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mobileye_560_660_msgs::msg::ObstacleData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObstacleData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::ObstacleData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObstacleData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ObstacleData(full_bounded, 0);
}

static message_type_support_callbacks_t _ObstacleData__callbacks = {
  "mobileye_560_660_msgs::msg",
  "ObstacleData",
  _ObstacleData__cdr_serialize,
  _ObstacleData__cdr_deserialize,
  _ObstacleData__get_serialized_size,
  _ObstacleData__max_serialized_size
};

static rosidl_message_type_support_t _ObstacleData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObstacleData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mobileye_560_660_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mobileye_560_660_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mobileye_560_660_msgs::msg::ObstacleData>()
{
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_ObstacleData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mobileye_560_660_msgs, msg, ObstacleData)() {
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_ObstacleData__handle;
}

#ifdef __cplusplus
}
#endif
