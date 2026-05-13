// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle4.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_vehicle4__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_esr_msgs/msg/detail/esr_vehicle4__struct.hpp"

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
  const delphi_esr_msgs::msg::EsrVehicle4 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: fac_align_cmd_1
  cdr << (ros_message.fac_align_cmd_1 ? true : false);
  // Member: fac_align_cmd_2
  cdr << (ros_message.fac_align_cmd_2 ? true : false);
  // Member: fac_align_max_nt
  cdr << ros_message.fac_align_max_nt;
  // Member: fac_align_samp_req
  cdr << ros_message.fac_align_samp_req;
  // Member: fac_tgt_mtg_offset
  cdr << ros_message.fac_tgt_mtg_offset;
  // Member: fac_tgt_mtg_space_hor
  cdr << ros_message.fac_tgt_mtg_space_hor;
  // Member: fac_tgt_mtg_space_ver
  cdr << ros_message.fac_tgt_mtg_space_ver;
  // Member: fac_tgt_range_1
  cdr << ros_message.fac_tgt_range_1;
  // Member: fac_tgt_range_r2m
  cdr << ros_message.fac_tgt_range_r2m;
  // Member: fac_tgt_range_m2t
  cdr << ros_message.fac_tgt_range_m2t;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_esr_msgs::msg::EsrVehicle4 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: fac_align_cmd_1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fac_align_cmd_1 = tmp ? true : false;
  }

  // Member: fac_align_cmd_2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fac_align_cmd_2 = tmp ? true : false;
  }

  // Member: fac_align_max_nt
  cdr >> ros_message.fac_align_max_nt;

  // Member: fac_align_samp_req
  cdr >> ros_message.fac_align_samp_req;

  // Member: fac_tgt_mtg_offset
  cdr >> ros_message.fac_tgt_mtg_offset;

  // Member: fac_tgt_mtg_space_hor
  cdr >> ros_message.fac_tgt_mtg_space_hor;

  // Member: fac_tgt_mtg_space_ver
  cdr >> ros_message.fac_tgt_mtg_space_ver;

  // Member: fac_tgt_range_1
  cdr >> ros_message.fac_tgt_range_1;

  // Member: fac_tgt_range_r2m
  cdr >> ros_message.fac_tgt_range_r2m;

  // Member: fac_tgt_range_m2t
  cdr >> ros_message.fac_tgt_range_m2t;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
get_serialized_size(
  const delphi_esr_msgs::msg::EsrVehicle4 & ros_message,
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
  // Member: fac_align_cmd_1
  {
    size_t item_size = sizeof(ros_message.fac_align_cmd_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fac_align_cmd_2
  {
    size_t item_size = sizeof(ros_message.fac_align_cmd_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fac_align_max_nt
  {
    size_t item_size = sizeof(ros_message.fac_align_max_nt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fac_align_samp_req
  {
    size_t item_size = sizeof(ros_message.fac_align_samp_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fac_tgt_mtg_offset
  {
    size_t item_size = sizeof(ros_message.fac_tgt_mtg_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fac_tgt_mtg_space_hor
  {
    size_t item_size = sizeof(ros_message.fac_tgt_mtg_space_hor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fac_tgt_mtg_space_ver
  {
    size_t item_size = sizeof(ros_message.fac_tgt_mtg_space_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fac_tgt_range_1
  {
    size_t item_size = sizeof(ros_message.fac_tgt_range_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fac_tgt_range_r2m
  {
    size_t item_size = sizeof(ros_message.fac_tgt_range_r2m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fac_tgt_range_m2t
  {
    size_t item_size = sizeof(ros_message.fac_tgt_range_m2t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
max_serialized_size_EsrVehicle4(
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

  // Member: fac_align_cmd_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fac_align_cmd_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fac_align_max_nt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fac_align_samp_req
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fac_tgt_mtg_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fac_tgt_mtg_space_hor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fac_tgt_mtg_space_ver
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fac_tgt_range_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fac_tgt_range_r2m
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fac_tgt_range_m2t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _EsrVehicle4__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrVehicle4 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsrVehicle4__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_esr_msgs::msg::EsrVehicle4 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsrVehicle4__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrVehicle4 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsrVehicle4__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EsrVehicle4(full_bounded, 0);
}

static message_type_support_callbacks_t _EsrVehicle4__callbacks = {
  "delphi_esr_msgs::msg",
  "EsrVehicle4",
  _EsrVehicle4__cdr_serialize,
  _EsrVehicle4__cdr_deserialize,
  _EsrVehicle4__get_serialized_size,
  _EsrVehicle4__max_serialized_size
};

static rosidl_message_type_support_t _EsrVehicle4__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsrVehicle4__callbacks,
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
get_message_type_support_handle<delphi_esr_msgs::msg::EsrVehicle4>()
{
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrVehicle4__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_esr_msgs, msg, EsrVehicle4)() {
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrVehicle4__handle;
}

#ifdef __cplusplus
}
#endif
