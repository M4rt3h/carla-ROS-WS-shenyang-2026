// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_esr_msgs:msg/EsrStatus2.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status2__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_esr_msgs/msg/detail/esr_status2__struct.hpp"

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
  const delphi_esr_msgs::msg::EsrStatus2 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: canmsg
  cdr << ros_message.canmsg;
  // Member: maximum_tracks_ack
  cdr << ros_message.maximum_tracks_ack;
  // Member: rolling_count_2
  cdr << ros_message.rolling_count_2;
  // Member: overheat_error
  cdr << (ros_message.overheat_error ? true : false);
  // Member: range_perf_error
  cdr << (ros_message.range_perf_error ? true : false);
  // Member: internal_error
  cdr << (ros_message.internal_error ? true : false);
  // Member: xcvr_operational
  cdr << (ros_message.xcvr_operational ? true : false);
  // Member: raw_data_mode
  cdr << (ros_message.raw_data_mode ? true : false);
  // Member: steering_angle_ack
  cdr << ros_message.steering_angle_ack;
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: veh_spd_comp_factor
  cdr << ros_message.veh_spd_comp_factor;
  // Member: grouping_mode
  cdr << ros_message.grouping_mode;
  // Member: yaw_rate_bias
  cdr << ros_message.yaw_rate_bias;
  // Member: sw_version_dsp
  cdr << ros_message.sw_version_dsp;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_esr_msgs::msg::EsrStatus2 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: canmsg
  cdr >> ros_message.canmsg;

  // Member: maximum_tracks_ack
  cdr >> ros_message.maximum_tracks_ack;

  // Member: rolling_count_2
  cdr >> ros_message.rolling_count_2;

  // Member: overheat_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.overheat_error = tmp ? true : false;
  }

  // Member: range_perf_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.range_perf_error = tmp ? true : false;
  }

  // Member: internal_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.internal_error = tmp ? true : false;
  }

  // Member: xcvr_operational
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.xcvr_operational = tmp ? true : false;
  }

  // Member: raw_data_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.raw_data_mode = tmp ? true : false;
  }

  // Member: steering_angle_ack
  cdr >> ros_message.steering_angle_ack;

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: veh_spd_comp_factor
  cdr >> ros_message.veh_spd_comp_factor;

  // Member: grouping_mode
  cdr >> ros_message.grouping_mode;

  // Member: yaw_rate_bias
  cdr >> ros_message.yaw_rate_bias;

  // Member: sw_version_dsp
  cdr >> ros_message.sw_version_dsp;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
get_serialized_size(
  const delphi_esr_msgs::msg::EsrStatus2 & ros_message,
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
  // Member: canmsg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.canmsg.size() + 1);
  // Member: maximum_tracks_ack
  {
    size_t item_size = sizeof(ros_message.maximum_tracks_ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rolling_count_2
  {
    size_t item_size = sizeof(ros_message.rolling_count_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: overheat_error
  {
    size_t item_size = sizeof(ros_message.overheat_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range_perf_error
  {
    size_t item_size = sizeof(ros_message.range_perf_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: internal_error
  {
    size_t item_size = sizeof(ros_message.internal_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: xcvr_operational
  {
    size_t item_size = sizeof(ros_message.xcvr_operational);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: raw_data_mode
  {
    size_t item_size = sizeof(ros_message.raw_data_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_angle_ack
  {
    size_t item_size = sizeof(ros_message.steering_angle_ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_spd_comp_factor
  {
    size_t item_size = sizeof(ros_message.veh_spd_comp_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: grouping_mode
  {
    size_t item_size = sizeof(ros_message.grouping_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate_bias
  {
    size_t item_size = sizeof(ros_message.yaw_rate_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sw_version_dsp
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sw_version_dsp.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
max_serialized_size_EsrStatus2(
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

  // Member: canmsg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: maximum_tracks_ack
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rolling_count_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: overheat_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: range_perf_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: internal_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: xcvr_operational
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: raw_data_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steering_angle_ack
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_spd_comp_factor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: grouping_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: yaw_rate_bias
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sw_version_dsp
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _EsrStatus2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrStatus2 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsrStatus2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_esr_msgs::msg::EsrStatus2 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsrStatus2__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrStatus2 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsrStatus2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EsrStatus2(full_bounded, 0);
}

static message_type_support_callbacks_t _EsrStatus2__callbacks = {
  "delphi_esr_msgs::msg",
  "EsrStatus2",
  _EsrStatus2__cdr_serialize,
  _EsrStatus2__cdr_deserialize,
  _EsrStatus2__get_serialized_size,
  _EsrStatus2__max_serialized_size
};

static rosidl_message_type_support_t _EsrStatus2__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsrStatus2__callbacks,
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
get_message_type_support_handle<delphi_esr_msgs::msg::EsrStatus2>()
{
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrStatus2__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_esr_msgs, msg, EsrStatus2)() {
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrStatus2__handle;
}

#ifdef __cplusplus
}
#endif
