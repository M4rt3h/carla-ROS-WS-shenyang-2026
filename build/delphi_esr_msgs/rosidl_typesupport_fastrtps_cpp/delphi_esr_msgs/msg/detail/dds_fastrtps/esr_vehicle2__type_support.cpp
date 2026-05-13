// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle2.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_vehicle2__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_esr_msgs/msg/detail/esr_vehicle2__struct.hpp"

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


namespace delphi_esr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
cdr_serialize(
  const delphi_esr_msgs::msg::EsrVehicle2 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: scan_index_ack
  cdr << ros_message.scan_index_ack;
  // Member: use_angle_misalignment
  cdr << (ros_message.use_angle_misalignment ? true : false);
  // Member: clear_faults
  cdr << (ros_message.clear_faults ? true : false);
  // Member: high_yaw_angle
  cdr << ros_message.high_yaw_angle;
  // Member: mr_only_transmit
  cdr << (ros_message.mr_only_transmit ? true : false);
  // Member: lr_only_transmit
  cdr << (ros_message.lr_only_transmit ? true : false);
  // Member: angle_misalignment
  cdr << ros_message.angle_misalignment;
  // Member: lateral_mounting_offset
  cdr << ros_message.lateral_mounting_offset;
  // Member: radar_cmd_radiate
  cdr << (ros_message.radar_cmd_radiate ? true : false);
  // Member: blockage_disable
  cdr << (ros_message.blockage_disable ? true : false);
  // Member: maximum_tracks
  cdr << ros_message.maximum_tracks;
  // Member: turn_signal_status
  cdr << ros_message.turn_signal_status;
  // Member: vehicle_speed_validity
  cdr << (ros_message.vehicle_speed_validity ? true : false);
  // Member: mmr_upside_down
  cdr << (ros_message.mmr_upside_down ? true : false);
  // Member: grouping_mode
  cdr << ros_message.grouping_mode;
  // Member: wiper_status
  cdr << (ros_message.wiper_status ? true : false);
  // Member: raw_data_enable
  cdr << (ros_message.raw_data_enable ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_esr_msgs::msg::EsrVehicle2 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: scan_index_ack
  cdr >> ros_message.scan_index_ack;

  // Member: use_angle_misalignment
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_angle_misalignment = tmp ? true : false;
  }

  // Member: clear_faults
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.clear_faults = tmp ? true : false;
  }

  // Member: high_yaw_angle
  cdr >> ros_message.high_yaw_angle;

  // Member: mr_only_transmit
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mr_only_transmit = tmp ? true : false;
  }

  // Member: lr_only_transmit
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lr_only_transmit = tmp ? true : false;
  }

  // Member: angle_misalignment
  cdr >> ros_message.angle_misalignment;

  // Member: lateral_mounting_offset
  cdr >> ros_message.lateral_mounting_offset;

  // Member: radar_cmd_radiate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.radar_cmd_radiate = tmp ? true : false;
  }

  // Member: blockage_disable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.blockage_disable = tmp ? true : false;
  }

  // Member: maximum_tracks
  cdr >> ros_message.maximum_tracks;

  // Member: turn_signal_status
  cdr >> ros_message.turn_signal_status;

  // Member: vehicle_speed_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vehicle_speed_validity = tmp ? true : false;
  }

  // Member: mmr_upside_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mmr_upside_down = tmp ? true : false;
  }

  // Member: grouping_mode
  cdr >> ros_message.grouping_mode;

  // Member: wiper_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wiper_status = tmp ? true : false;
  }

  // Member: raw_data_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.raw_data_enable = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
get_serialized_size(
  const delphi_esr_msgs::msg::EsrVehicle2 & ros_message,
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
  // Member: scan_index_ack
  {
    size_t item_size = sizeof(ros_message.scan_index_ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_angle_misalignment
  {
    size_t item_size = sizeof(ros_message.use_angle_misalignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: clear_faults
  {
    size_t item_size = sizeof(ros_message.clear_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: high_yaw_angle
  {
    size_t item_size = sizeof(ros_message.high_yaw_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mr_only_transmit
  {
    size_t item_size = sizeof(ros_message.mr_only_transmit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lr_only_transmit
  {
    size_t item_size = sizeof(ros_message.lr_only_transmit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_misalignment
  {
    size_t item_size = sizeof(ros_message.angle_misalignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_mounting_offset
  {
    size_t item_size = sizeof(ros_message.lateral_mounting_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radar_cmd_radiate
  {
    size_t item_size = sizeof(ros_message.radar_cmd_radiate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blockage_disable
  {
    size_t item_size = sizeof(ros_message.blockage_disable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maximum_tracks
  {
    size_t item_size = sizeof(ros_message.maximum_tracks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_signal_status
  {
    size_t item_size = sizeof(ros_message.turn_signal_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_speed_validity
  {
    size_t item_size = sizeof(ros_message.vehicle_speed_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mmr_upside_down
  {
    size_t item_size = sizeof(ros_message.mmr_upside_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: grouping_mode
  {
    size_t item_size = sizeof(ros_message.grouping_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wiper_status
  {
    size_t item_size = sizeof(ros_message.wiper_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: raw_data_enable
  {
    size_t item_size = sizeof(ros_message.raw_data_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
max_serialized_size_EsrVehicle2(
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

  // Member: scan_index_ack
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: use_angle_misalignment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: clear_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: high_yaw_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mr_only_transmit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lr_only_transmit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: angle_misalignment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lateral_mounting_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: radar_cmd_radiate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: blockage_disable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: maximum_tracks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_signal_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_speed_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mmr_upside_down
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: grouping_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wiper_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: raw_data_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _EsrVehicle2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrVehicle2 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsrVehicle2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_esr_msgs::msg::EsrVehicle2 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsrVehicle2__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrVehicle2 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsrVehicle2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EsrVehicle2(full_bounded, 0);
}

static message_type_support_callbacks_t _EsrVehicle2__callbacks = {
  "delphi_esr_msgs::msg",
  "EsrVehicle2",
  _EsrVehicle2__cdr_serialize,
  _EsrVehicle2__cdr_deserialize,
  _EsrVehicle2__get_serialized_size,
  _EsrVehicle2__max_serialized_size
};

static rosidl_message_type_support_t _EsrVehicle2__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsrVehicle2__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace delphi_esr_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_delphi_esr_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<delphi_esr_msgs::msg::EsrVehicle2>()
{
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrVehicle2__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_esr_msgs, msg, EsrVehicle2)() {
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrVehicle2__handle;
}

#ifdef __cplusplus
}
#endif
