// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerGroup.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_group__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_group__struct.hpp"

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
bool cdr_serialize(
  const delphi_esr_msgs::msg::EsrTrackMotionPowerTrack &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  delphi_esr_msgs::msg::EsrTrackMotionPowerTrack &);
size_t get_serialized_size(
  const delphi_esr_msgs::msg::EsrTrackMotionPowerTrack &,
  size_t current_alignment);
size_t
max_serialized_size_EsrTrackMotionPowerTrack(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace delphi_esr_msgs


namespace delphi_esr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
cdr_serialize(
  const delphi_esr_msgs::msg::EsrTrackMotionPowerGroup & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: canmsg
  cdr << ros_message.canmsg;
  // Member: rolling_count_2
  cdr << ros_message.rolling_count_2;
  // Member: can_id_group
  cdr << ros_message.can_id_group;
  // Member: tracks
  {
    size_t size = ros_message.tracks.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      delphi_esr_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.tracks[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_esr_msgs::msg::EsrTrackMotionPowerGroup & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: canmsg
  cdr >> ros_message.canmsg;

  // Member: rolling_count_2
  cdr >> ros_message.rolling_count_2;

  // Member: can_id_group
  cdr >> ros_message.can_id_group;

  // Member: tracks
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.tracks.resize(size);
    for (size_t i = 0; i < size; i++) {
      delphi_esr_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.tracks[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
get_serialized_size(
  const delphi_esr_msgs::msg::EsrTrackMotionPowerGroup & ros_message,
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
  // Member: rolling_count_2
  {
    size_t item_size = sizeof(ros_message.rolling_count_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_id_group
  {
    size_t item_size = sizeof(ros_message.can_id_group);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tracks
  {
    size_t array_size = ros_message.tracks.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        delphi_esr_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.tracks[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_esr_msgs
max_serialized_size_EsrTrackMotionPowerGroup(
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

  // Member: rolling_count_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_id_group
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tracks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        delphi_esr_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EsrTrackMotionPowerTrack(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _EsrTrackMotionPowerGroup__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrTrackMotionPowerGroup *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsrTrackMotionPowerGroup__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsrTrackMotionPowerGroup__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_esr_msgs::msg::EsrTrackMotionPowerGroup *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsrTrackMotionPowerGroup__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EsrTrackMotionPowerGroup(full_bounded, 0);
}

static message_type_support_callbacks_t _EsrTrackMotionPowerGroup__callbacks = {
  "delphi_esr_msgs::msg",
  "EsrTrackMotionPowerGroup",
  _EsrTrackMotionPowerGroup__cdr_serialize,
  _EsrTrackMotionPowerGroup__cdr_deserialize,
  _EsrTrackMotionPowerGroup__get_serialized_size,
  _EsrTrackMotionPowerGroup__max_serialized_size
};

static rosidl_message_type_support_t _EsrTrackMotionPowerGroup__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsrTrackMotionPowerGroup__callbacks,
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
get_message_type_support_handle<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup>()
{
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrTrackMotionPowerGroup__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_esr_msgs, msg, EsrTrackMotionPowerGroup)() {
  return &delphi_esr_msgs::msg::typesupport_fastrtps_cpp::_EsrTrackMotionPowerGroup__handle;
}

#ifdef __cplusplus
}
#endif
