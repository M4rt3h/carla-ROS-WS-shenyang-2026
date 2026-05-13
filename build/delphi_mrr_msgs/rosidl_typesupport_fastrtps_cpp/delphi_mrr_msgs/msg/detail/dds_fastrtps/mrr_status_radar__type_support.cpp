// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusRadar.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_status_radar__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_mrr_msgs/msg/detail/mrr_status_radar__struct.hpp"

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
  const delphi_mrr_msgs::msg::MrrStatusRadar & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: can_interference_type
  cdr << ros_message.can_interference_type;
  // Member: can_recommend_unconverge
  cdr << (ros_message.can_recommend_unconverge ? true : false);
  // Member: can_blockage_sidelobe_filter_val
  cdr << ros_message.can_blockage_sidelobe_filter_val;
  // Member: can_radar_align_incomplete
  cdr << (ros_message.can_radar_align_incomplete ? true : false);
  // Member: can_blockage_sidelobe
  cdr << (ros_message.can_blockage_sidelobe ? true : false);
  // Member: can_blockage_mnr
  cdr << (ros_message.can_blockage_mnr ? true : false);
  // Member: can_radar_ext_cond_nok
  cdr << (ros_message.can_radar_ext_cond_nok ? true : false);
  // Member: can_radar_align_out_range
  cdr << (ros_message.can_radar_align_out_range ? true : false);
  // Member: can_radar_align_not_start
  cdr << (ros_message.can_radar_align_not_start ? true : false);
  // Member: can_radar_overheat_error
  cdr << (ros_message.can_radar_overheat_error ? true : false);
  // Member: can_radar_not_op
  cdr << (ros_message.can_radar_not_op ? true : false);
  // Member: can_xcvr_operational
  cdr << (ros_message.can_xcvr_operational ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_mrr_msgs::msg::MrrStatusRadar & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: can_interference_type
  cdr >> ros_message.can_interference_type;

  // Member: can_recommend_unconverge
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_recommend_unconverge = tmp ? true : false;
  }

  // Member: can_blockage_sidelobe_filter_val
  cdr >> ros_message.can_blockage_sidelobe_filter_val;

  // Member: can_radar_align_incomplete
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_radar_align_incomplete = tmp ? true : false;
  }

  // Member: can_blockage_sidelobe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_blockage_sidelobe = tmp ? true : false;
  }

  // Member: can_blockage_mnr
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_blockage_mnr = tmp ? true : false;
  }

  // Member: can_radar_ext_cond_nok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_radar_ext_cond_nok = tmp ? true : false;
  }

  // Member: can_radar_align_out_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_radar_align_out_range = tmp ? true : false;
  }

  // Member: can_radar_align_not_start
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_radar_align_not_start = tmp ? true : false;
  }

  // Member: can_radar_overheat_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_radar_overheat_error = tmp ? true : false;
  }

  // Member: can_radar_not_op
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_radar_not_op = tmp ? true : false;
  }

  // Member: can_xcvr_operational
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_xcvr_operational = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
get_serialized_size(
  const delphi_mrr_msgs::msg::MrrStatusRadar & ros_message,
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
  // Member: can_interference_type
  {
    size_t item_size = sizeof(ros_message.can_interference_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_recommend_unconverge
  {
    size_t item_size = sizeof(ros_message.can_recommend_unconverge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_blockage_sidelobe_filter_val
  {
    size_t item_size = sizeof(ros_message.can_blockage_sidelobe_filter_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_align_incomplete
  {
    size_t item_size = sizeof(ros_message.can_radar_align_incomplete);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_blockage_sidelobe
  {
    size_t item_size = sizeof(ros_message.can_blockage_sidelobe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_blockage_mnr
  {
    size_t item_size = sizeof(ros_message.can_blockage_mnr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_ext_cond_nok
  {
    size_t item_size = sizeof(ros_message.can_radar_ext_cond_nok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_align_out_range
  {
    size_t item_size = sizeof(ros_message.can_radar_align_out_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_align_not_start
  {
    size_t item_size = sizeof(ros_message.can_radar_align_not_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_overheat_error
  {
    size_t item_size = sizeof(ros_message.can_radar_overheat_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_not_op
  {
    size_t item_size = sizeof(ros_message.can_radar_not_op);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_xcvr_operational
  {
    size_t item_size = sizeof(ros_message.can_xcvr_operational);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_mrr_msgs
max_serialized_size_MrrStatusRadar(
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

  // Member: can_interference_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_recommend_unconverge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_blockage_sidelobe_filter_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_radar_align_incomplete
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_blockage_sidelobe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_blockage_mnr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_radar_ext_cond_nok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_radar_align_out_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_radar_align_not_start
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_radar_overheat_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_radar_not_op
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_xcvr_operational
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MrrStatusRadar__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_mrr_msgs::msg::MrrStatusRadar *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MrrStatusRadar__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_mrr_msgs::msg::MrrStatusRadar *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MrrStatusRadar__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_mrr_msgs::msg::MrrStatusRadar *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MrrStatusRadar__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MrrStatusRadar(full_bounded, 0);
}

static message_type_support_callbacks_t _MrrStatusRadar__callbacks = {
  "delphi_mrr_msgs::msg",
  "MrrStatusRadar",
  _MrrStatusRadar__cdr_serialize,
  _MrrStatusRadar__cdr_deserialize,
  _MrrStatusRadar__get_serialized_size,
  _MrrStatusRadar__max_serialized_size
};

static rosidl_message_type_support_t _MrrStatusRadar__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MrrStatusRadar__callbacks,
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
get_message_type_support_handle<delphi_mrr_msgs::msg::MrrStatusRadar>()
{
  return &delphi_mrr_msgs::msg::typesupport_fastrtps_cpp::_MrrStatusRadar__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_mrr_msgs, msg, MrrStatusRadar)() {
  return &delphi_mrr_msgs::msg::typesupport_fastrtps_cpp::_MrrStatusRadar__handle;
}

#ifdef __cplusplus
}
#endif
