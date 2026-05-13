// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerTrack.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__struct.hpp"

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

namespace delphi_esr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
cdr_serialize(
  const delphi_esr_msgs::msg::EsrTrackMotionPowerTrack & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: movable_fast
  cdr << (ros_message.movable_fast ? true : false);
  // Member: movable_slow
  cdr << (ros_message.movable_slow ? true : false);
  // Member: moving
  cdr << (ros_message.moving ? true : false);
  // Member: power
  cdr << ros_message.power;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_esr_msgs::msg::EsrTrackMotionPowerTrack & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: movable_fast
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.movable_fast = tmp ? true : false;
  }

  // Member: movable_slow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.movable_slow = tmp ? true : false;
  }

  // Member: moving
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.moving = tmp ? true : false;
  }

  // Member: power
  cdr >> ros_message.power;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
get_serialized_size(
  const delphi_esr_msgs::msg::EsrTrackMotionPowerTrack & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: movable_fast
  {
    size_t item_size = sizeof(ros_message.movable_fast);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: movable_slow
  {
    size_t item_size = sizeof(ros_message.movable_slow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: moving
  {
    size_t item_size = sizeof(ros_message.moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power
  {
    size_t item_size = sizeof(ros_message.power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
max_serialized_size_EsrTrackMotionPowerTrack(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: movable_fast
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: movable_slow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: moving
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _EsrTrackMotionPowerTrack__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrTrackMotionPowerTrack *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsrTrackMotionPowerTrack__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsrTrackMotionPowerTrack__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrTrackMotionPowerTrack *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsrTrackMotionPowerTrack__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EsrTrackMotionPowerTrack(full_bounded, 0);
}

static message_type_support_callbacks_t _EsrTrackMotionPowerTrack__callbacks = {
  "delphi_esr_msgs::msg",
  "EsrTrackMotionPowerTrack",
  _EsrTrackMotionPowerTrack__cdr_serialize,
  _EsrTrackMotionPowerTrack__cdr_deserialize,
  _EsrTrackMotionPowerTrack__get_serialized_size,
  _EsrTrackMotionPowerTrack__max_serialized_size
};

static rosidl_message_type_support_t _EsrTrackMotionPowerTrack__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsrTrackMotionPowerTrack__callbacks,
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
get_message_type_support_handle<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>()
{
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrTrackMotionPowerTrack__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_esr_msgs, msg, EsrTrackMotionPowerTrack)() {
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrTrackMotionPowerTrack__handle;
}

#ifdef __cplusplus
}
#endif
