// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_esr_msgs:msg/EsrEthTx.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_eth_tx__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_esr_msgs/msg/detail/esr_eth_tx__struct.hpp"

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
  const delphi_esr_msgs::msg::EsrEthTx & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: xcp_format_version
  cdr << ros_message.xcp_format_version;
  // Member: scan_index
  cdr << ros_message.scan_index;
  // Member: tcp_size
  cdr << ros_message.tcp_size;
  // Member: xcp_scan_type
  cdr << ros_message.xcp_scan_type;
  // Member: look_index
  cdr << ros_message.look_index;
  // Member: mmr_scan_index
  cdr << ros_message.mmr_scan_index;
  // Member: target_report_host_speed
  cdr << ros_message.target_report_host_speed;
  // Member: target_report_host_yaw_rate
  cdr << ros_message.target_report_host_yaw_rate;
  // Member: xcp_timestamp
  cdr << ros_message.xcp_timestamp;
  // Member: release_revision
  cdr << ros_message.release_revision;
  // Member: promote_revision
  cdr << ros_message.promote_revision;
  // Member: field_revision
  cdr << ros_message.field_revision;
  // Member: target_report_count
  cdr << ros_message.target_report_count;
  // Member: target_report_range
  {
    cdr << ros_message.target_report_range;
  }
  // Member: target_report_range_rate
  {
    cdr << ros_message.target_report_range_rate;
  }
  // Member: target_report_theta
  {
    cdr << ros_message.target_report_theta;
  }
  // Member: target_report_amplitude
  {
    cdr << ros_message.target_report_amplitude;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_esr_msgs::msg::EsrEthTx & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: xcp_format_version
  cdr >> ros_message.xcp_format_version;

  // Member: scan_index
  cdr >> ros_message.scan_index;

  // Member: tcp_size
  cdr >> ros_message.tcp_size;

  // Member: xcp_scan_type
  cdr >> ros_message.xcp_scan_type;

  // Member: look_index
  cdr >> ros_message.look_index;

  // Member: mmr_scan_index
  cdr >> ros_message.mmr_scan_index;

  // Member: target_report_host_speed
  cdr >> ros_message.target_report_host_speed;

  // Member: target_report_host_yaw_rate
  cdr >> ros_message.target_report_host_yaw_rate;

  // Member: xcp_timestamp
  cdr >> ros_message.xcp_timestamp;

  // Member: release_revision
  cdr >> ros_message.release_revision;

  // Member: promote_revision
  cdr >> ros_message.promote_revision;

  // Member: field_revision
  cdr >> ros_message.field_revision;

  // Member: target_report_count
  cdr >> ros_message.target_report_count;

  // Member: target_report_range
  {
    cdr >> ros_message.target_report_range;
  }

  // Member: target_report_range_rate
  {
    cdr >> ros_message.target_report_range_rate;
  }

  // Member: target_report_theta
  {
    cdr >> ros_message.target_report_theta;
  }

  // Member: target_report_amplitude
  {
    cdr >> ros_message.target_report_amplitude;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
get_serialized_size(
  const delphi_esr_msgs::msg::EsrEthTx & ros_message,
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
  // Member: xcp_format_version
  {
    size_t item_size = sizeof(ros_message.xcp_format_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scan_index
  {
    size_t item_size = sizeof(ros_message.scan_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tcp_size
  {
    size_t item_size = sizeof(ros_message.tcp_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: xcp_scan_type
  {
    size_t item_size = sizeof(ros_message.xcp_scan_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: look_index
  {
    size_t item_size = sizeof(ros_message.look_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mmr_scan_index
  {
    size_t item_size = sizeof(ros_message.mmr_scan_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_report_host_speed
  {
    size_t item_size = sizeof(ros_message.target_report_host_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_report_host_yaw_rate
  {
    size_t item_size = sizeof(ros_message.target_report_host_yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: xcp_timestamp
  {
    size_t item_size = sizeof(ros_message.xcp_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: release_revision
  {
    size_t item_size = sizeof(ros_message.release_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: promote_revision
  {
    size_t item_size = sizeof(ros_message.promote_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: field_revision
  {
    size_t item_size = sizeof(ros_message.field_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_report_count
  {
    size_t item_size = sizeof(ros_message.target_report_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_report_range
  {
    size_t array_size = 64;
    size_t item_size = sizeof(ros_message.target_report_range[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_report_range_rate
  {
    size_t array_size = 64;
    size_t item_size = sizeof(ros_message.target_report_range_rate[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_report_theta
  {
    size_t array_size = 64;
    size_t item_size = sizeof(ros_message.target_report_theta[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_report_amplitude
  {
    size_t array_size = 64;
    size_t item_size = sizeof(ros_message.target_report_amplitude[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
max_serialized_size_EsrEthTx(
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

  // Member: xcp_format_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: scan_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: tcp_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: xcp_scan_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: look_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mmr_scan_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: target_report_host_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_report_host_yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: xcp_timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: release_revision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: promote_revision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: field_revision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: target_report_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: target_report_range
  {
    size_t array_size = 64;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_report_range_rate
  {
    size_t array_size = 64;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_report_theta
  {
    size_t array_size = 64;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_report_amplitude
  {
    size_t array_size = 64;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _EsrEthTx__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrEthTx *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsrEthTx__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_esr_msgs::msg::EsrEthTx *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsrEthTx__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrEthTx *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsrEthTx__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EsrEthTx(full_bounded, 0);
}

static message_type_support_callbacks_t _EsrEthTx__callbacks = {
  "delphi_esr_msgs::msg",
  "EsrEthTx",
  _EsrEthTx__cdr_serialize,
  _EsrEthTx__cdr_deserialize,
  _EsrEthTx__get_serialized_size,
  _EsrEthTx__max_serialized_size
};

static rosidl_message_type_support_t _EsrEthTx__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsrEthTx__callbacks,
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
get_message_type_support_handle<delphi_esr_msgs::msg::EsrEthTx>()
{
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrEthTx__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_esr_msgs, msg, EsrEthTx)() {
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrEthTx__handle;
}

#ifdef __cplusplus
}
#endif
