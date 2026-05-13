// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_esr_msgs:msg/EsrStatus6.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status6__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_esr_msgs/msg/detail/esr_status6__struct.hpp"

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
  const delphi_esr_msgs::msg::EsrStatus6 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: canmsg
  cdr << ros_message.canmsg;
  // Member: supply_1p8v_a2d
  cdr << ros_message.supply_1p8v_a2d;
  // Member: supply_n5v_a2d
  cdr << ros_message.supply_n5v_a2d;
  // Member: wave_diff_a2d
  cdr << ros_message.wave_diff_a2d;
  // Member: sw_version_dsp_3rd_byte
  cdr << ros_message.sw_version_dsp_3rd_byte;
  // Member: vertical_align_updated
  cdr << (ros_message.vertical_align_updated ? true : false);
  // Member: system_power_mode
  cdr << ros_message.system_power_mode;
  // Member: found_target
  cdr << (ros_message.found_target ? true : false);
  // Member: recommend_unconverge
  cdr << (ros_message.recommend_unconverge ? true : false);
  // Member: factory_align_status_1
  cdr << ros_message.factory_align_status_1;
  // Member: factory_align_status_2
  cdr << ros_message.factory_align_status_2;
  // Member: factory_misalignment
  cdr << ros_message.factory_misalignment;
  // Member: serv_align_updates_done
  cdr << ros_message.serv_align_updates_done;
  // Member: vertical_misalignment
  cdr << ros_message.vertical_misalignment;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_esr_msgs::msg::EsrStatus6 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: canmsg
  cdr >> ros_message.canmsg;

  // Member: supply_1p8v_a2d
  cdr >> ros_message.supply_1p8v_a2d;

  // Member: supply_n5v_a2d
  cdr >> ros_message.supply_n5v_a2d;

  // Member: wave_diff_a2d
  cdr >> ros_message.wave_diff_a2d;

  // Member: sw_version_dsp_3rd_byte
  cdr >> ros_message.sw_version_dsp_3rd_byte;

  // Member: vertical_align_updated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vertical_align_updated = tmp ? true : false;
  }

  // Member: system_power_mode
  cdr >> ros_message.system_power_mode;

  // Member: found_target
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.found_target = tmp ? true : false;
  }

  // Member: recommend_unconverge
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.recommend_unconverge = tmp ? true : false;
  }

  // Member: factory_align_status_1
  cdr >> ros_message.factory_align_status_1;

  // Member: factory_align_status_2
  cdr >> ros_message.factory_align_status_2;

  // Member: factory_misalignment
  cdr >> ros_message.factory_misalignment;

  // Member: serv_align_updates_done
  cdr >> ros_message.serv_align_updates_done;

  // Member: vertical_misalignment
  cdr >> ros_message.vertical_misalignment;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
get_serialized_size(
  const delphi_esr_msgs::msg::EsrStatus6 & ros_message,
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
  // Member: supply_1p8v_a2d
  {
    size_t item_size = sizeof(ros_message.supply_1p8v_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: supply_n5v_a2d
  {
    size_t item_size = sizeof(ros_message.supply_n5v_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wave_diff_a2d
  {
    size_t item_size = sizeof(ros_message.wave_diff_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sw_version_dsp_3rd_byte
  {
    size_t item_size = sizeof(ros_message.sw_version_dsp_3rd_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vertical_align_updated
  {
    size_t item_size = sizeof(ros_message.vertical_align_updated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_power_mode
  {
    size_t item_size = sizeof(ros_message.system_power_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: found_target
  {
    size_t item_size = sizeof(ros_message.found_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: recommend_unconverge
  {
    size_t item_size = sizeof(ros_message.recommend_unconverge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: factory_align_status_1
  {
    size_t item_size = sizeof(ros_message.factory_align_status_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: factory_align_status_2
  {
    size_t item_size = sizeof(ros_message.factory_align_status_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: factory_misalignment
  {
    size_t item_size = sizeof(ros_message.factory_misalignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: serv_align_updates_done
  {
    size_t item_size = sizeof(ros_message.serv_align_updates_done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vertical_misalignment
  {
    size_t item_size = sizeof(ros_message.vertical_misalignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
max_serialized_size_EsrStatus6(
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

  // Member: supply_1p8v_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: supply_n5v_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wave_diff_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sw_version_dsp_3rd_byte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vertical_align_updated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: system_power_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: found_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: recommend_unconverge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: factory_align_status_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: factory_align_status_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: factory_misalignment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: serv_align_updates_done
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vertical_misalignment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _EsrStatus6__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrStatus6 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsrStatus6__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_esr_msgs::msg::EsrStatus6 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsrStatus6__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrStatus6 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsrStatus6__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EsrStatus6(full_bounded, 0);
}

static message_type_support_callbacks_t _EsrStatus6__callbacks = {
  "delphi_esr_msgs::msg",
  "EsrStatus6",
  _EsrStatus6__cdr_serialize,
  _EsrStatus6__cdr_deserialize,
  _EsrStatus6__get_serialized_size,
  _EsrStatus6__max_serialized_size
};

static rosidl_message_type_support_t _EsrStatus6__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsrStatus6__callbacks,
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
get_message_type_support_handle<delphi_esr_msgs::msg::EsrStatus6>()
{
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrStatus6__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_esr_msgs, msg, EsrStatus6)() {
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrStatus6__handle;
}

#ifdef __cplusplus
}
#endif
