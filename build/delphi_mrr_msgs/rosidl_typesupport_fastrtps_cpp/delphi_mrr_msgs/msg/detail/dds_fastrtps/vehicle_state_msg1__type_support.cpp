// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg1.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg1__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg1__struct.hpp"

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


namespace delphi_mrr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
cdr_serialize(
  const delphi_mrr_msgs::msg::VehicleStateMsg1 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: can_fcw_sensitivity_level
  cdr << ros_message.can_fcw_sensitivity_level;
  // Member: can_vehicle_stationary
  cdr << (ros_message.can_vehicle_stationary ? true : false);
  // Member: can_intf_minor_version
  cdr << ros_message.can_intf_minor_version;
  // Member: can_intf_major_version
  cdr << ros_message.can_intf_major_version;
  // Member: can_brake_pedal
  cdr << ros_message.can_brake_pedal;
  // Member: can_high_wheel_slip
  cdr << (ros_message.can_high_wheel_slip ? true : false);
  // Member: can_turn_signal_status
  cdr << ros_message.can_turn_signal_status;
  // Member: can_washer_front_cmd
  cdr << (ros_message.can_washer_front_cmd ? true : false);
  // Member: can_wiper_front_cmd
  cdr << (ros_message.can_wiper_front_cmd ? true : false);
  // Member: can_wiper_speed_info
  cdr << ros_message.can_wiper_speed_info;
  // Member: can_reverse_gear
  cdr << (ros_message.can_reverse_gear ? true : false);
  // Member: can_beam_shape_actual_right
  cdr << ros_message.can_beam_shape_actual_right;
  // Member: can_beam_shape_actual_left
  cdr << ros_message.can_beam_shape_actual_left;
  // Member: can_main_beam_indication
  cdr << (ros_message.can_main_beam_indication ? true : false);
  // Member: can_vehicle_index
  cdr << ros_message.can_vehicle_index;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_mrr_msgs::msg::VehicleStateMsg1 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: can_fcw_sensitivity_level
  cdr >> ros_message.can_fcw_sensitivity_level;

  // Member: can_vehicle_stationary
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_vehicle_stationary = tmp ? true : false;
  }

  // Member: can_intf_minor_version
  cdr >> ros_message.can_intf_minor_version;

  // Member: can_intf_major_version
  cdr >> ros_message.can_intf_major_version;

  // Member: can_brake_pedal
  cdr >> ros_message.can_brake_pedal;

  // Member: can_high_wheel_slip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_high_wheel_slip = tmp ? true : false;
  }

  // Member: can_turn_signal_status
  cdr >> ros_message.can_turn_signal_status;

  // Member: can_washer_front_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_washer_front_cmd = tmp ? true : false;
  }

  // Member: can_wiper_front_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_wiper_front_cmd = tmp ? true : false;
  }

  // Member: can_wiper_speed_info
  cdr >> ros_message.can_wiper_speed_info;

  // Member: can_reverse_gear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_reverse_gear = tmp ? true : false;
  }

  // Member: can_beam_shape_actual_right
  cdr >> ros_message.can_beam_shape_actual_right;

  // Member: can_beam_shape_actual_left
  cdr >> ros_message.can_beam_shape_actual_left;

  // Member: can_main_beam_indication
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_main_beam_indication = tmp ? true : false;
  }

  // Member: can_vehicle_index
  cdr >> ros_message.can_vehicle_index;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
get_serialized_size(
  const delphi_mrr_msgs::msg::VehicleStateMsg1 & ros_message,
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
  // Member: can_fcw_sensitivity_level
  {
    size_t item_size = sizeof(ros_message.can_fcw_sensitivity_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_vehicle_stationary
  {
    size_t item_size = sizeof(ros_message.can_vehicle_stationary);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_intf_minor_version
  {
    size_t item_size = sizeof(ros_message.can_intf_minor_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_intf_major_version
  {
    size_t item_size = sizeof(ros_message.can_intf_major_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_brake_pedal
  {
    size_t item_size = sizeof(ros_message.can_brake_pedal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_high_wheel_slip
  {
    size_t item_size = sizeof(ros_message.can_high_wheel_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_turn_signal_status
  {
    size_t item_size = sizeof(ros_message.can_turn_signal_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_washer_front_cmd
  {
    size_t item_size = sizeof(ros_message.can_washer_front_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_wiper_front_cmd
  {
    size_t item_size = sizeof(ros_message.can_wiper_front_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_wiper_speed_info
  {
    size_t item_size = sizeof(ros_message.can_wiper_speed_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_reverse_gear
  {
    size_t item_size = sizeof(ros_message.can_reverse_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_beam_shape_actual_right
  {
    size_t item_size = sizeof(ros_message.can_beam_shape_actual_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_beam_shape_actual_left
  {
    size_t item_size = sizeof(ros_message.can_beam_shape_actual_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_main_beam_indication
  {
    size_t item_size = sizeof(ros_message.can_main_beam_indication);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_vehicle_index
  {
    size_t item_size = sizeof(ros_message.can_vehicle_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
max_serialized_size_VehicleStateMsg1(
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

  // Member: can_fcw_sensitivity_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_vehicle_stationary
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_intf_minor_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_intf_major_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_brake_pedal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_high_wheel_slip
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_turn_signal_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_washer_front_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_wiper_front_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_wiper_speed_info
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_reverse_gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_beam_shape_actual_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_beam_shape_actual_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_main_beam_indication
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_vehicle_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleStateMsg1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_mrr_msgs::msg::VehicleStateMsg1 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleStateMsg1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_mrr_msgs::msg::VehicleStateMsg1 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleStateMsg1__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_mrr_msgs::msg::VehicleStateMsg1 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleStateMsg1__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleStateMsg1(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleStateMsg1__callbacks = {
  "delphi_mrr_msgs::msg",
  "VehicleStateMsg1",
  _VehicleStateMsg1__cdr_serialize,
  _VehicleStateMsg1__cdr_deserialize,
  _VehicleStateMsg1__get_serialized_size,
  _VehicleStateMsg1__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStateMsg1__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleStateMsg1__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace delphi_mrr_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_delphi_mrr_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<delphi_mrr_msgs::msg::VehicleStateMsg1>()
{
  return &delphi_mrr_msgs::msg::typesupport_fastrtps_cpp::_VehicleStateMsg1__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_mrr_msgs, msg, VehicleStateMsg1)() {
  return &delphi_mrr_msgs::msg::typesupport_fastrtps_cpp::_VehicleStateMsg1__handle;
}

#ifdef __cplusplus
}
#endif
