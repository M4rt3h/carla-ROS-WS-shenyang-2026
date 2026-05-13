// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ibeo_msgs:msg/Object2271.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object2271__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ibeo_msgs/msg/detail/object2271__struct.hpp"

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
namespace ibeo_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ibeo_msgs::msg::TrackedProperties &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ibeo_msgs::msg::TrackedProperties &);
size_t get_serialized_size(
  const ibeo_msgs::msg::TrackedProperties &,
  size_t current_alignment);
size_t
max_serialized_size_TrackedProperties(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ibeo_msgs

namespace ibeo_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ibeo_msgs::msg::UntrackedProperties &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ibeo_msgs::msg::UntrackedProperties &);
size_t get_serialized_size(
  const ibeo_msgs::msg::UntrackedProperties &,
  size_t current_alignment);
size_t
max_serialized_size_UntrackedProperties(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ibeo_msgs


namespace ibeo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_serialize(
  const ibeo_msgs::msg::Object2271 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: tracked_properties_available
  cdr << (ros_message.tracked_properties_available ? true : false);
  // Member: untracked_properties_available
  cdr << (ros_message.untracked_properties_available ? true : false);
  // Member: tracked_properties
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tracked_properties,
    cdr);
  // Member: untracked_properties
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.untracked_properties,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ibeo_msgs::msg::Object2271 & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: tracked_properties_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tracked_properties_available = tmp ? true : false;
  }

  // Member: untracked_properties_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.untracked_properties_available = tmp ? true : false;
  }

  // Member: tracked_properties
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tracked_properties);

  // Member: untracked_properties
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.untracked_properties);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
get_serialized_size(
  const ibeo_msgs::msg::Object2271 & ros_message,
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
  // Member: tracked_properties_available
  {
    size_t item_size = sizeof(ros_message.tracked_properties_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: untracked_properties_available
  {
    size_t item_size = sizeof(ros_message.untracked_properties_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tracked_properties

  current_alignment +=
    ibeo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tracked_properties, current_alignment);
  // Member: untracked_properties

  current_alignment +=
    ibeo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.untracked_properties, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
max_serialized_size_Object2271(
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

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tracked_properties_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: untracked_properties_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tracked_properties
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrackedProperties(
        full_bounded, current_alignment);
    }
  }

  // Member: untracked_properties
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UntrackedProperties(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Object2271__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::Object2271 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Object2271__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ibeo_msgs::msg::Object2271 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Object2271__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::Object2271 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Object2271__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Object2271(full_bounded, 0);
}

static message_type_support_callbacks_t _Object2271__callbacks = {
  "ibeo_msgs::msg",
  "Object2271",
  _Object2271__cdr_serialize,
  _Object2271__cdr_deserialize,
  _Object2271__get_serialized_size,
  _Object2271__max_serialized_size
};

static rosidl_message_type_support_t _Object2271__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Object2271__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ibeo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ibeo_msgs::msg::Object2271>()
{
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_Object2271__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ibeo_msgs, msg, Object2271)() {
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_Object2271__handle;
}

#ifdef __cplusplus
}
#endif
