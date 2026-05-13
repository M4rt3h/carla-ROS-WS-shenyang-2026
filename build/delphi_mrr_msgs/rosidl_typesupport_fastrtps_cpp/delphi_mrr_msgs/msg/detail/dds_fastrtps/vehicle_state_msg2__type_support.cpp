// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg2.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg2__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg2__struct.hpp"

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
  const delphi_mrr_msgs::msg::VehicleStateMsg2 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: fsm_yaw_rate_valid
  cdr << (ros_message.fsm_yaw_rate_valid ? true : false);
  // Member: fsm_yaw_rate
  cdr << ros_message.fsm_yaw_rate;
  // Member: can_vehicle_index_4fa
  cdr << ros_message.can_vehicle_index_4fa;
  // Member: fsm_vehicle_velocity
  cdr << ros_message.fsm_vehicle_velocity;
  // Member: can_steering_whl_angle_qf
  cdr << (ros_message.can_steering_whl_angle_qf ? true : false);
  // Member: fsm_vehicle_velocity_valid
  cdr << (ros_message.fsm_vehicle_velocity_valid ? true : false);
  // Member: can_steering_whl_angle
  cdr << ros_message.can_steering_whl_angle;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_mrr_msgs::msg::VehicleStateMsg2 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: fsm_yaw_rate_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fsm_yaw_rate_valid = tmp ? true : false;
  }

  // Member: fsm_yaw_rate
  cdr >> ros_message.fsm_yaw_rate;

  // Member: can_vehicle_index_4fa
  cdr >> ros_message.can_vehicle_index_4fa;

  // Member: fsm_vehicle_velocity
  cdr >> ros_message.fsm_vehicle_velocity;

  // Member: can_steering_whl_angle_qf
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_steering_whl_angle_qf = tmp ? true : false;
  }

  // Member: fsm_vehicle_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fsm_vehicle_velocity_valid = tmp ? true : false;
  }

  // Member: can_steering_whl_angle
  cdr >> ros_message.can_steering_whl_angle;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
get_serialized_size(
  const delphi_mrr_msgs::msg::VehicleStateMsg2 & ros_message,
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
  // Member: fsm_yaw_rate_valid
  {
    size_t item_size = sizeof(ros_message.fsm_yaw_rate_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fsm_yaw_rate
  {
    size_t item_size = sizeof(ros_message.fsm_yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_vehicle_index_4fa
  {
    size_t item_size = sizeof(ros_message.can_vehicle_index_4fa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fsm_vehicle_velocity
  {
    size_t item_size = sizeof(ros_message.fsm_vehicle_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_steering_whl_angle_qf
  {
    size_t item_size = sizeof(ros_message.can_steering_whl_angle_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fsm_vehicle_velocity_valid
  {
    size_t item_size = sizeof(ros_message.fsm_vehicle_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_steering_whl_angle
  {
    size_t item_size = sizeof(ros_message.can_steering_whl_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
max_serialized_size_VehicleStateMsg2(
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

  // Member: fsm_yaw_rate_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fsm_yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: can_vehicle_index_4fa
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: fsm_vehicle_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: can_steering_whl_angle_qf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fsm_vehicle_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_steering_whl_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleStateMsg2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_mrr_msgs::msg::VehicleStateMsg2 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleStateMsg2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_mrr_msgs::msg::VehicleStateMsg2 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleStateMsg2__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_mrr_msgs::msg::VehicleStateMsg2 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleStateMsg2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleStateMsg2(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleStateMsg2__callbacks = {
  "delphi_mrr_msgs::msg",
  "VehicleStateMsg2",
  _VehicleStateMsg2__cdr_serialize,
  _VehicleStateMsg2__cdr_deserialize,
  _VehicleStateMsg2__get_serialized_size,
  _VehicleStateMsg2__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStateMsg2__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleStateMsg2__callbacks,
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
get_message_type_support_handle<delphi_mrr_msgs::msg::VehicleStateMsg2>()
{
  return &delphi_mrr_msgs::msg::typesupport_fastrtps_cpp::_VehicleStateMsg2__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_mrr_msgs, msg, VehicleStateMsg2)() {
  return &delphi_mrr_msgs::msg::typesupport_fastrtps_cpp::_VehicleStateMsg2__handle;
}

#ifdef __cplusplus
}
#endif
