// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mobileye_560_660_msgs:msg/LkaLane.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/lka_lane__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mobileye_560_660_msgs/msg/detail/lka_lane__struct.hpp"

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
  const mobileye_560_660_msgs::msg::LkaLane & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: lane_type
  cdr << ros_message.lane_type;
  // Member: quality
  cdr << ros_message.quality;
  // Member: model_degree
  cdr << ros_message.model_degree;
  // Member: position_parameter_c0
  cdr << ros_message.position_parameter_c0;
  // Member: curvature_parameter_c2
  cdr << ros_message.curvature_parameter_c2;
  // Member: curvature_derivative_parameter_c3
  cdr << ros_message.curvature_derivative_parameter_c3;
  // Member: marking_width
  cdr << ros_message.marking_width;
  // Member: heading_angle_parameter_c1
  cdr << ros_message.heading_angle_parameter_c1;
  // Member: view_range
  cdr << ros_message.view_range;
  // Member: view_range_availability
  cdr << (ros_message.view_range_availability ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mobileye_560_660_msgs::msg::LkaLane & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: lane_type
  cdr >> ros_message.lane_type;

  // Member: quality
  cdr >> ros_message.quality;

  // Member: model_degree
  cdr >> ros_message.model_degree;

  // Member: position_parameter_c0
  cdr >> ros_message.position_parameter_c0;

  // Member: curvature_parameter_c2
  cdr >> ros_message.curvature_parameter_c2;

  // Member: curvature_derivative_parameter_c3
  cdr >> ros_message.curvature_derivative_parameter_c3;

  // Member: marking_width
  cdr >> ros_message.marking_width;

  // Member: heading_angle_parameter_c1
  cdr >> ros_message.heading_angle_parameter_c1;

  // Member: view_range
  cdr >> ros_message.view_range;

  // Member: view_range_availability
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.view_range_availability = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
get_serialized_size(
  const mobileye_560_660_msgs::msg::LkaLane & ros_message,
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
  // Member: lane_type
  {
    size_t item_size = sizeof(ros_message.lane_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: quality
  {
    size_t item_size = sizeof(ros_message.quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: model_degree
  {
    size_t item_size = sizeof(ros_message.model_degree);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_parameter_c0
  {
    size_t item_size = sizeof(ros_message.position_parameter_c0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curvature_parameter_c2
  {
    size_t item_size = sizeof(ros_message.curvature_parameter_c2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curvature_derivative_parameter_c3
  {
    size_t item_size = sizeof(ros_message.curvature_derivative_parameter_c3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: marking_width
  {
    size_t item_size = sizeof(ros_message.marking_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_angle_parameter_c1
  {
    size_t item_size = sizeof(ros_message.heading_angle_parameter_c1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: view_range
  {
    size_t item_size = sizeof(ros_message.view_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: view_range_availability
  {
    size_t item_size = sizeof(ros_message.view_range_availability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
max_serialized_size_LkaLane(
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

  // Member: lane_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: model_degree
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position_parameter_c0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: curvature_parameter_c2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: curvature_derivative_parameter_c3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: marking_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading_angle_parameter_c1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: view_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: view_range_availability
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _LkaLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::LkaLane *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LkaLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mobileye_560_660_msgs::msg::LkaLane *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LkaLane__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::LkaLane *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LkaLane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LkaLane(full_bounded, 0);
}

static message_type_support_callbacks_t _LkaLane__callbacks = {
  "mobileye_560_660_msgs::msg",
  "LkaLane",
  _LkaLane__cdr_serialize,
  _LkaLane__cdr_deserialize,
  _LkaLane__get_serialized_size,
  _LkaLane__max_serialized_size
};

static rosidl_message_type_support_t _LkaLane__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LkaLane__callbacks,
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
get_message_type_support_handle<mobileye_560_660_msgs::msg::LkaLane>()
{
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_LkaLane__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mobileye_560_660_msgs, msg, LkaLane)() {
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_LkaLane__handle;
}

#ifdef __cplusplus
}
#endif
