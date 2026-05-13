// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_esr_msgs:msg/EsrStatus1.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status1__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_esr_msgs/msg/detail/esr_status1__struct.hpp"

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
  const delphi_esr_msgs::msg::EsrStatus1 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: canmsg
  cdr << ros_message.canmsg;
  // Member: rolling_count_1
  cdr << ros_message.rolling_count_1;
  // Member: dsp_timestamp
  cdr << ros_message.dsp_timestamp;
  // Member: comm_error
  cdr << (ros_message.comm_error ? true : false);
  // Member: radius_curvature_calc
  cdr << ros_message.radius_curvature_calc;
  // Member: scan_index
  cdr << ros_message.scan_index;
  // Member: yaw_rate_calc
  cdr << ros_message.yaw_rate_calc;
  // Member: vehicle_speed_calc
  cdr << ros_message.vehicle_speed_calc;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_esr_msgs::msg::EsrStatus1 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: canmsg
  cdr >> ros_message.canmsg;

  // Member: rolling_count_1
  cdr >> ros_message.rolling_count_1;

  // Member: dsp_timestamp
  cdr >> ros_message.dsp_timestamp;

  // Member: comm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.comm_error = tmp ? true : false;
  }

  // Member: radius_curvature_calc
  cdr >> ros_message.radius_curvature_calc;

  // Member: scan_index
  cdr >> ros_message.scan_index;

  // Member: yaw_rate_calc
  cdr >> ros_message.yaw_rate_calc;

  // Member: vehicle_speed_calc
  cdr >> ros_message.vehicle_speed_calc;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
get_serialized_size(
  const delphi_esr_msgs::msg::EsrStatus1 & ros_message,
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
  // Member: rolling_count_1
  {
    size_t item_size = sizeof(ros_message.rolling_count_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_timestamp
  {
    size_t item_size = sizeof(ros_message.dsp_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: comm_error
  {
    size_t item_size = sizeof(ros_message.comm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radius_curvature_calc
  {
    size_t item_size = sizeof(ros_message.radius_curvature_calc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scan_index
  {
    size_t item_size = sizeof(ros_message.scan_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate_calc
  {
    size_t item_size = sizeof(ros_message.yaw_rate_calc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_speed_calc
  {
    size_t item_size = sizeof(ros_message.vehicle_speed_calc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
max_serialized_size_EsrStatus1(
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

  // Member: rolling_count_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: comm_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: radius_curvature_calc
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

  // Member: yaw_rate_calc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vehicle_speed_calc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _EsrStatus1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrStatus1 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsrStatus1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_esr_msgs::msg::EsrStatus1 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsrStatus1__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrStatus1 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsrStatus1__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EsrStatus1(full_bounded, 0);
}

static message_type_support_callbacks_t _EsrStatus1__callbacks = {
  "delphi_esr_msgs::msg",
  "EsrStatus1",
  _EsrStatus1__cdr_serialize,
  _EsrStatus1__cdr_deserialize,
  _EsrStatus1__get_serialized_size,
  _EsrStatus1__max_serialized_size
};

static rosidl_message_type_support_t _EsrStatus1__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsrStatus1__callbacks,
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
get_message_type_support_handle<delphi_esr_msgs::msg::EsrStatus1>()
{
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrStatus1__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_esr_msgs, msg, EsrStatus1)() {
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrStatus1__handle;
}

#ifdef __cplusplus
}
#endif
