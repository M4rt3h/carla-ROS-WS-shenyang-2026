// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mobileye_560_660_msgs:msg/AwsDisplay.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/aws_display__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mobileye_560_660_msgs/msg/detail/aws_display__struct.hpp"

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


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
cdr_serialize(
  const mobileye_560_660_msgs::msg::AwsDisplay & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: suppress_sound
  cdr << (ros_message.suppress_sound ? true : false);
  // Member: night_time
  cdr << (ros_message.night_time ? true : false);
  // Member: dusk_time
  cdr << (ros_message.dusk_time ? true : false);
  // Member: sound_type
  cdr << ros_message.sound_type;
  // Member: headway_valid
  cdr << (ros_message.headway_valid ? true : false);
  // Member: headway_measurement
  cdr << ros_message.headway_measurement;
  // Member: lanes_on
  cdr << (ros_message.lanes_on ? true : false);
  // Member: left_ldw_on
  cdr << (ros_message.left_ldw_on ? true : false);
  // Member: right_ldw_on
  cdr << (ros_message.right_ldw_on ? true : false);
  // Member: fcw_on
  cdr << (ros_message.fcw_on ? true : false);
  // Member: left_crossing
  cdr << (ros_message.left_crossing ? true : false);
  // Member: right_crossing
  cdr << (ros_message.right_crossing ? true : false);
  // Member: maintenance
  cdr << (ros_message.maintenance ? true : false);
  // Member: failsafe
  cdr << (ros_message.failsafe ? true : false);
  // Member: ped_fcw
  cdr << (ros_message.ped_fcw ? true : false);
  // Member: ped_in_dz
  cdr << (ros_message.ped_in_dz ? true : false);
  // Member: headway_warning_level
  cdr << ros_message.headway_warning_level;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mobileye_560_660_msgs::msg::AwsDisplay & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: suppress_sound
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.suppress_sound = tmp ? true : false;
  }

  // Member: night_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.night_time = tmp ? true : false;
  }

  // Member: dusk_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dusk_time = tmp ? true : false;
  }

  // Member: sound_type
  cdr >> ros_message.sound_type;

  // Member: headway_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.headway_valid = tmp ? true : false;
  }

  // Member: headway_measurement
  cdr >> ros_message.headway_measurement;

  // Member: lanes_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lanes_on = tmp ? true : false;
  }

  // Member: left_ldw_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.left_ldw_on = tmp ? true : false;
  }

  // Member: right_ldw_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.right_ldw_on = tmp ? true : false;
  }

  // Member: fcw_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fcw_on = tmp ? true : false;
  }

  // Member: left_crossing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.left_crossing = tmp ? true : false;
  }

  // Member: right_crossing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.right_crossing = tmp ? true : false;
  }

  // Member: maintenance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.maintenance = tmp ? true : false;
  }

  // Member: failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.failsafe = tmp ? true : false;
  }

  // Member: ped_fcw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ped_fcw = tmp ? true : false;
  }

  // Member: ped_in_dz
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ped_in_dz = tmp ? true : false;
  }

  // Member: headway_warning_level
  cdr >> ros_message.headway_warning_level;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
get_serialized_size(
  const mobileye_560_660_msgs::msg::AwsDisplay & ros_message,
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
  // Member: suppress_sound
  {
    size_t item_size = sizeof(ros_message.suppress_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: night_time
  {
    size_t item_size = sizeof(ros_message.night_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dusk_time
  {
    size_t item_size = sizeof(ros_message.dusk_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sound_type
  {
    size_t item_size = sizeof(ros_message.sound_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: headway_valid
  {
    size_t item_size = sizeof(ros_message.headway_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: headway_measurement
  {
    size_t item_size = sizeof(ros_message.headway_measurement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanes_on
  {
    size_t item_size = sizeof(ros_message.lanes_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_ldw_on
  {
    size_t item_size = sizeof(ros_message.left_ldw_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_ldw_on
  {
    size_t item_size = sizeof(ros_message.right_ldw_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fcw_on
  {
    size_t item_size = sizeof(ros_message.fcw_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_crossing
  {
    size_t item_size = sizeof(ros_message.left_crossing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_crossing
  {
    size_t item_size = sizeof(ros_message.right_crossing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maintenance
  {
    size_t item_size = sizeof(ros_message.maintenance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failsafe
  {
    size_t item_size = sizeof(ros_message.failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ped_fcw
  {
    size_t item_size = sizeof(ros_message.ped_fcw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ped_in_dz
  {
    size_t item_size = sizeof(ros_message.ped_in_dz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: headway_warning_level
  {
    size_t item_size = sizeof(ros_message.headway_warning_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
max_serialized_size_AwsDisplay(
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

  // Member: suppress_sound
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: night_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dusk_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sound_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: headway_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: headway_measurement
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lanes_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_ldw_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_ldw_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fcw_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_crossing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_crossing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: maintenance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ped_fcw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ped_in_dz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: headway_warning_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AwsDisplay__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::AwsDisplay *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AwsDisplay__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mobileye_560_660_msgs::msg::AwsDisplay *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AwsDisplay__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::AwsDisplay *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AwsDisplay__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AwsDisplay(full_bounded, 0);
}

static message_type_support_callbacks_t _AwsDisplay__callbacks = {
  "mobileye_560_660_msgs::msg",
  "AwsDisplay",
  _AwsDisplay__cdr_serialize,
  _AwsDisplay__cdr_deserialize,
  _AwsDisplay__get_serialized_size,
  _AwsDisplay__max_serialized_size
};

static rosidl_message_type_support_t _AwsDisplay__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AwsDisplay__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mobileye_560_660_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mobileye_560_660_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mobileye_560_660_msgs::msg::AwsDisplay>()
{
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_AwsDisplay__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mobileye_560_660_msgs, msg, AwsDisplay)() {
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_AwsDisplay__handle;
}

#ifdef __cplusplus
}
#endif
