// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_srr_msgs:msg/SrrStatus2.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_status2__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_srr_msgs/msg/detail/srr_status2__struct.hpp"

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


namespace delphi_srr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
cdr_serialize(
  const delphi_srr_msgs::msg::SrrStatus2 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: can_tx_alignment_status
  cdr << ros_message.can_tx_alignment_status;
  // Member: can_tx_comm_error
  cdr << (ros_message.can_tx_comm_error ? true : false);
  // Member: can_tx_steering_angle_sign
  cdr << (ros_message.can_tx_steering_angle_sign ? true : false);
  // Member: can_tx_yaw_rate_bias
  cdr << ros_message.can_tx_yaw_rate_bias;
  // Member: can_tx_veh_spd_comp_factor
  cdr << ros_message.can_tx_veh_spd_comp_factor;
  // Member: can_tx_sw_version_dsp
  cdr << ros_message.can_tx_sw_version_dsp;
  // Member: can_tx_temperature
  cdr << ros_message.can_tx_temperature;
  // Member: can_tx_range_perf_error
  cdr << (ros_message.can_tx_range_perf_error ? true : false);
  // Member: can_tx_overheat_error
  cdr << (ros_message.can_tx_overheat_error ? true : false);
  // Member: can_tx_internal_error
  cdr << (ros_message.can_tx_internal_error ? true : false);
  // Member: can_tx_xcvr_operational
  cdr << (ros_message.can_tx_xcvr_operational ? true : false);
  // Member: can_tx_steering_angle
  cdr << ros_message.can_tx_steering_angle;
  // Member: can_tx_rolling_count_2
  cdr << ros_message.can_tx_rolling_count_2;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_srr_msgs::msg::SrrStatus2 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: can_tx_alignment_status
  cdr >> ros_message.can_tx_alignment_status;

  // Member: can_tx_comm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_tx_comm_error = tmp ? true : false;
  }

  // Member: can_tx_steering_angle_sign
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_tx_steering_angle_sign = tmp ? true : false;
  }

  // Member: can_tx_yaw_rate_bias
  cdr >> ros_message.can_tx_yaw_rate_bias;

  // Member: can_tx_veh_spd_comp_factor
  cdr >> ros_message.can_tx_veh_spd_comp_factor;

  // Member: can_tx_sw_version_dsp
  cdr >> ros_message.can_tx_sw_version_dsp;

  // Member: can_tx_temperature
  cdr >> ros_message.can_tx_temperature;

  // Member: can_tx_range_perf_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_tx_range_perf_error = tmp ? true : false;
  }

  // Member: can_tx_overheat_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_tx_overheat_error = tmp ? true : false;
  }

  // Member: can_tx_internal_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_tx_internal_error = tmp ? true : false;
  }

  // Member: can_tx_xcvr_operational
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_tx_xcvr_operational = tmp ? true : false;
  }

  // Member: can_tx_steering_angle
  cdr >> ros_message.can_tx_steering_angle;

  // Member: can_tx_rolling_count_2
  cdr >> ros_message.can_tx_rolling_count_2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
get_serialized_size(
  const delphi_srr_msgs::msg::SrrStatus2 & ros_message,
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
  // Member: can_tx_alignment_status
  {
    size_t item_size = sizeof(ros_message.can_tx_alignment_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_comm_error
  {
    size_t item_size = sizeof(ros_message.can_tx_comm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_steering_angle_sign
  {
    size_t item_size = sizeof(ros_message.can_tx_steering_angle_sign);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_yaw_rate_bias
  {
    size_t item_size = sizeof(ros_message.can_tx_yaw_rate_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_veh_spd_comp_factor
  {
    size_t item_size = sizeof(ros_message.can_tx_veh_spd_comp_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_sw_version_dsp
  {
    size_t item_size = sizeof(ros_message.can_tx_sw_version_dsp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_temperature
  {
    size_t item_size = sizeof(ros_message.can_tx_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_range_perf_error
  {
    size_t item_size = sizeof(ros_message.can_tx_range_perf_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_overheat_error
  {
    size_t item_size = sizeof(ros_message.can_tx_overheat_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_internal_error
  {
    size_t item_size = sizeof(ros_message.can_tx_internal_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_xcvr_operational
  {
    size_t item_size = sizeof(ros_message.can_tx_xcvr_operational);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_steering_angle
  {
    size_t item_size = sizeof(ros_message.can_tx_steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_rolling_count_2
  {
    size_t item_size = sizeof(ros_message.can_tx_rolling_count_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
max_serialized_size_SrrStatus2(
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

  // Member: can_tx_alignment_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx_comm_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx_steering_angle_sign
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx_yaw_rate_bias
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: can_tx_veh_spd_comp_factor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: can_tx_sw_version_dsp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: can_tx_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: can_tx_range_perf_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx_overheat_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx_internal_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx_xcvr_operational
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx_steering_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: can_tx_rolling_count_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SrrStatus2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_srr_msgs::msg::SrrStatus2 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SrrStatus2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_srr_msgs::msg::SrrStatus2 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SrrStatus2__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_srr_msgs::msg::SrrStatus2 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SrrStatus2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SrrStatus2(full_bounded, 0);
}

static message_type_support_callbacks_t _SrrStatus2__callbacks = {
  "delphi_srr_msgs::msg",
  "SrrStatus2",
  _SrrStatus2__cdr_serialize,
  _SrrStatus2__cdr_deserialize,
  _SrrStatus2__get_serialized_size,
  _SrrStatus2__max_serialized_size
};

static rosidl_message_type_support_t _SrrStatus2__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SrrStatus2__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace delphi_srr_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_delphi_srr_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<delphi_srr_msgs::msg::SrrStatus2>()
{
  return &delphi_srr_msgs::msg::typesupport_fastrtps_cpp::_SrrStatus2__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_srr_msgs, msg, SrrStatus2)() {
  return &delphi_srr_msgs::msg::typesupport_fastrtps_cpp::_SrrStatus2__handle;
}

#ifdef __cplusplus
}
#endif
