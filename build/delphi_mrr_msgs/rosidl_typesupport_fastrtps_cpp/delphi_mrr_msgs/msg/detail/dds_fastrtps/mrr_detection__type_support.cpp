// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_mrr_msgs:msg/MrrDetection.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_detection__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_mrr_msgs/msg/detail/mrr_detection__struct.hpp"

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
  const delphi_mrr_msgs::msg::MrrDetection & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: detection_id
  cdr << ros_message.detection_id;
  // Member: confid_azimuth
  cdr << ros_message.confid_azimuth;
  // Member: super_res_target
  cdr << (ros_message.super_res_target ? true : false);
  // Member: nd_target
  cdr << (ros_message.nd_target ? true : false);
  // Member: host_veh_clutter
  cdr << (ros_message.host_veh_clutter ? true : false);
  // Member: valid_level
  cdr << (ros_message.valid_level ? true : false);
  // Member: azimuth
  cdr << ros_message.azimuth;
  // Member: range
  cdr << ros_message.range;
  // Member: range_rate
  cdr << ros_message.range_rate;
  // Member: amplitude
  cdr << ros_message.amplitude;
  // Member: index_2lsb
  cdr << ros_message.index_2lsb;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_mrr_msgs::msg::MrrDetection & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: detection_id
  cdr >> ros_message.detection_id;

  // Member: confid_azimuth
  cdr >> ros_message.confid_azimuth;

  // Member: super_res_target
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.super_res_target = tmp ? true : false;
  }

  // Member: nd_target
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.nd_target = tmp ? true : false;
  }

  // Member: host_veh_clutter
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.host_veh_clutter = tmp ? true : false;
  }

  // Member: valid_level
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.valid_level = tmp ? true : false;
  }

  // Member: azimuth
  cdr >> ros_message.azimuth;

  // Member: range
  cdr >> ros_message.range;

  // Member: range_rate
  cdr >> ros_message.range_rate;

  // Member: amplitude
  cdr >> ros_message.amplitude;

  // Member: index_2lsb
  cdr >> ros_message.index_2lsb;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
get_serialized_size(
  const delphi_mrr_msgs::msg::MrrDetection & ros_message,
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
  // Member: detection_id
  {
    size_t item_size = sizeof(ros_message.detection_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: confid_azimuth
  {
    size_t item_size = sizeof(ros_message.confid_azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: super_res_target
  {
    size_t item_size = sizeof(ros_message.super_res_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nd_target
  {
    size_t item_size = sizeof(ros_message.nd_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: host_veh_clutter
  {
    size_t item_size = sizeof(ros_message.host_veh_clutter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: valid_level
  {
    size_t item_size = sizeof(ros_message.valid_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: azimuth
  {
    size_t item_size = sizeof(ros_message.azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range
  {
    size_t item_size = sizeof(ros_message.range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range_rate
  {
    size_t item_size = sizeof(ros_message.range_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: amplitude
  {
    size_t item_size = sizeof(ros_message.amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: index_2lsb
  {
    size_t item_size = sizeof(ros_message.index_2lsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
max_serialized_size_MrrDetection(
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

  // Member: detection_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: confid_azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: super_res_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nd_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: host_veh_clutter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: valid_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: range_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: amplitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: index_2lsb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MrrDetection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_mrr_msgs::msg::MrrDetection *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MrrDetection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_mrr_msgs::msg::MrrDetection *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MrrDetection__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_mrr_msgs::msg::MrrDetection *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MrrDetection__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MrrDetection(full_bounded, 0);
}

static message_type_support_callbacks_t _MrrDetection__callbacks = {
  "delphi_mrr_msgs::msg",
  "MrrDetection",
  _MrrDetection__cdr_serialize,
  _MrrDetection__cdr_deserialize,
  _MrrDetection__get_serialized_size,
  _MrrDetection__max_serialized_size
};

static rosidl_message_type_support_t _MrrDetection__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MrrDetection__callbacks,
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
get_message_type_support_handle<delphi_mrr_msgs::msg::MrrDetection>()
{
  return &delphi_mrr_msgs::msg::typesupport_fastrtps_cpp::_MrrDetection__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_mrr_msgs, msg, MrrDetection)() {
  return &delphi_mrr_msgs::msg::typesupport_fastrtps_cpp::_MrrDetection__handle;
}

#ifdef __cplusplus
}
#endif
