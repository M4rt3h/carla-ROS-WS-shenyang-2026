// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mobileye_560_660_msgs:msg/AhbcGradual.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/ahbc_gradual__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mobileye_560_660_msgs/msg/detail/ahbc_gradual__struct.hpp"

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
  const mobileye_560_660_msgs::msg::AhbcGradual & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: boundary_domain_bottom_non_glare_hlb
  cdr << ros_message.boundary_domain_bottom_non_glare_hlb;
  // Member: boundary_domain_non_glare_left_hand_hlb
  cdr << ros_message.boundary_domain_non_glare_left_hand_hlb;
  // Member: boundary_domain_non_glare_right_hand_hlb
  cdr << ros_message.boundary_domain_non_glare_right_hand_hlb;
  // Member: object_distance_hlb
  cdr << ros_message.object_distance_hlb;
  // Member: status_boundary_domain_bottom_non_glare_hlb
  cdr << ros_message.status_boundary_domain_bottom_non_glare_hlb;
  // Member: status_boundary_domain_non_glare_left_hand_hlb
  cdr << ros_message.status_boundary_domain_non_glare_left_hand_hlb;
  // Member: status_boundary_domain_non_glare_right_hand_hlb
  cdr << ros_message.status_boundary_domain_non_glare_right_hand_hlb;
  // Member: status_object_distance_hlb
  cdr << ros_message.status_object_distance_hlb;
  // Member: left_target_change
  cdr << (ros_message.left_target_change ? true : false);
  // Member: right_target_change
  cdr << (ros_message.right_target_change ? true : false);
  // Member: too_many_cars
  cdr << (ros_message.too_many_cars ? true : false);
  // Member: busy_scene
  cdr << (ros_message.busy_scene ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mobileye_560_660_msgs::msg::AhbcGradual & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: boundary_domain_bottom_non_glare_hlb
  cdr >> ros_message.boundary_domain_bottom_non_glare_hlb;

  // Member: boundary_domain_non_glare_left_hand_hlb
  cdr >> ros_message.boundary_domain_non_glare_left_hand_hlb;

  // Member: boundary_domain_non_glare_right_hand_hlb
  cdr >> ros_message.boundary_domain_non_glare_right_hand_hlb;

  // Member: object_distance_hlb
  cdr >> ros_message.object_distance_hlb;

  // Member: status_boundary_domain_bottom_non_glare_hlb
  cdr >> ros_message.status_boundary_domain_bottom_non_glare_hlb;

  // Member: status_boundary_domain_non_glare_left_hand_hlb
  cdr >> ros_message.status_boundary_domain_non_glare_left_hand_hlb;

  // Member: status_boundary_domain_non_glare_right_hand_hlb
  cdr >> ros_message.status_boundary_domain_non_glare_right_hand_hlb;

  // Member: status_object_distance_hlb
  cdr >> ros_message.status_object_distance_hlb;

  // Member: left_target_change
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.left_target_change = tmp ? true : false;
  }

  // Member: right_target_change
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.right_target_change = tmp ? true : false;
  }

  // Member: too_many_cars
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.too_many_cars = tmp ? true : false;
  }

  // Member: busy_scene
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.busy_scene = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
get_serialized_size(
  const mobileye_560_660_msgs::msg::AhbcGradual & ros_message,
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
  // Member: boundary_domain_bottom_non_glare_hlb
  {
    size_t item_size = sizeof(ros_message.boundary_domain_bottom_non_glare_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: boundary_domain_non_glare_left_hand_hlb
  {
    size_t item_size = sizeof(ros_message.boundary_domain_non_glare_left_hand_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: boundary_domain_non_glare_right_hand_hlb
  {
    size_t item_size = sizeof(ros_message.boundary_domain_non_glare_right_hand_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object_distance_hlb
  {
    size_t item_size = sizeof(ros_message.object_distance_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_boundary_domain_bottom_non_glare_hlb
  {
    size_t item_size = sizeof(ros_message.status_boundary_domain_bottom_non_glare_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_boundary_domain_non_glare_left_hand_hlb
  {
    size_t item_size = sizeof(ros_message.status_boundary_domain_non_glare_left_hand_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_boundary_domain_non_glare_right_hand_hlb
  {
    size_t item_size = sizeof(ros_message.status_boundary_domain_non_glare_right_hand_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_object_distance_hlb
  {
    size_t item_size = sizeof(ros_message.status_object_distance_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_target_change
  {
    size_t item_size = sizeof(ros_message.left_target_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_target_change
  {
    size_t item_size = sizeof(ros_message.right_target_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: too_many_cars
  {
    size_t item_size = sizeof(ros_message.too_many_cars);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: busy_scene
  {
    size_t item_size = sizeof(ros_message.busy_scene);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
max_serialized_size_AhbcGradual(
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

  // Member: boundary_domain_bottom_non_glare_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: boundary_domain_non_glare_left_hand_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: boundary_domain_non_glare_right_hand_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: object_distance_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: status_boundary_domain_bottom_non_glare_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_boundary_domain_non_glare_left_hand_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_boundary_domain_non_glare_right_hand_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_object_distance_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_target_change
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_target_change
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: too_many_cars
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: busy_scene
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AhbcGradual__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::AhbcGradual *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AhbcGradual__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mobileye_560_660_msgs::msg::AhbcGradual *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AhbcGradual__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::AhbcGradual *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AhbcGradual__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AhbcGradual(full_bounded, 0);
}

static message_type_support_callbacks_t _AhbcGradual__callbacks = {
  "mobileye_560_660_msgs::msg",
  "AhbcGradual",
  _AhbcGradual__cdr_serialize,
  _AhbcGradual__cdr_deserialize,
  _AhbcGradual__get_serialized_size,
  _AhbcGradual__max_serialized_size
};

static rosidl_message_type_support_t _AhbcGradual__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AhbcGradual__callbacks,
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
get_message_type_support_handle<mobileye_560_660_msgs::msg::AhbcGradual>()
{
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_AhbcGradual__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mobileye_560_660_msgs, msg, AhbcGradual)() {
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_AhbcGradual__handle;
}

#ifdef __cplusplus
}
#endif
