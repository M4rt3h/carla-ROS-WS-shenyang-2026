// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ibeo_msgs:msg/Object2270.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object2270__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ibeo_msgs/msg/detail/object2270__struct.hpp"

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
  const ibeo_msgs::msg::Point2Di &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ibeo_msgs::msg::Point2Di &);
size_t get_serialized_size(
  const ibeo_msgs::msg::Point2Di &,
  size_t current_alignment);
size_t
max_serialized_size_Point2Di(
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
  const ibeo_msgs::msg::Object2270 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: age
  cdr << ros_message.age;
  // Member: prediction_age
  cdr << ros_message.prediction_age;
  // Member: relative_moment_of_measurement
  cdr << ros_message.relative_moment_of_measurement;
  // Member: reference_point_location
  cdr << ros_message.reference_point_location;
  // Member: reference_point_position_x
  cdr << ros_message.reference_point_position_x;
  // Member: reference_point_position_y
  cdr << ros_message.reference_point_position_y;
  // Member: reference_point_position_sigma_x
  cdr << ros_message.reference_point_position_sigma_x;
  // Member: reference_point_position_sigma_y
  cdr << ros_message.reference_point_position_sigma_y;
  // Member: contour_points_cog_x
  cdr << ros_message.contour_points_cog_x;
  // Member: contour_points_cog_y
  cdr << ros_message.contour_points_cog_y;
  // Member: object_box_length
  cdr << ros_message.object_box_length;
  // Member: object_box_width
  cdr << ros_message.object_box_width;
  // Member: object_box_orientation_angle
  cdr << ros_message.object_box_orientation_angle;
  // Member: object_box_orientation_angle_sigma
  cdr << ros_message.object_box_orientation_angle_sigma;
  // Member: absolute_velocity_x
  cdr << ros_message.absolute_velocity_x;
  // Member: absolute_velocity_y
  cdr << ros_message.absolute_velocity_y;
  // Member: absolute_velocity_sigma_x
  cdr << ros_message.absolute_velocity_sigma_x;
  // Member: absolute_velocity_sigma_y
  cdr << ros_message.absolute_velocity_sigma_y;
  // Member: relative_velocity_x
  cdr << ros_message.relative_velocity_x;
  // Member: relative_velocity_y
  cdr << ros_message.relative_velocity_y;
  // Member: relative_velocity_sigma_x
  cdr << ros_message.relative_velocity_sigma_x;
  // Member: relative_velocity_sigma_y
  cdr << ros_message.relative_velocity_sigma_y;
  // Member: classification
  cdr << ros_message.classification;
  // Member: tracking_model
  cdr << ros_message.tracking_model;
  // Member: mobile_detected
  cdr << (ros_message.mobile_detected ? true : false);
  // Member: track_valid
  cdr << (ros_message.track_valid ? true : false);
  // Member: classification_age
  cdr << ros_message.classification_age;
  // Member: classification_confidence
  cdr << ros_message.classification_confidence;
  // Member: number_of_contour_points
  cdr << ros_message.number_of_contour_points;
  // Member: contour_point_list
  {
    size_t size = ros_message.contour_point_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.contour_point_list[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ibeo_msgs::msg::Object2270 & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: age
  cdr >> ros_message.age;

  // Member: prediction_age
  cdr >> ros_message.prediction_age;

  // Member: relative_moment_of_measurement
  cdr >> ros_message.relative_moment_of_measurement;

  // Member: reference_point_location
  cdr >> ros_message.reference_point_location;

  // Member: reference_point_position_x
  cdr >> ros_message.reference_point_position_x;

  // Member: reference_point_position_y
  cdr >> ros_message.reference_point_position_y;

  // Member: reference_point_position_sigma_x
  cdr >> ros_message.reference_point_position_sigma_x;

  // Member: reference_point_position_sigma_y
  cdr >> ros_message.reference_point_position_sigma_y;

  // Member: contour_points_cog_x
  cdr >> ros_message.contour_points_cog_x;

  // Member: contour_points_cog_y
  cdr >> ros_message.contour_points_cog_y;

  // Member: object_box_length
  cdr >> ros_message.object_box_length;

  // Member: object_box_width
  cdr >> ros_message.object_box_width;

  // Member: object_box_orientation_angle
  cdr >> ros_message.object_box_orientation_angle;

  // Member: object_box_orientation_angle_sigma
  cdr >> ros_message.object_box_orientation_angle_sigma;

  // Member: absolute_velocity_x
  cdr >> ros_message.absolute_velocity_x;

  // Member: absolute_velocity_y
  cdr >> ros_message.absolute_velocity_y;

  // Member: absolute_velocity_sigma_x
  cdr >> ros_message.absolute_velocity_sigma_x;

  // Member: absolute_velocity_sigma_y
  cdr >> ros_message.absolute_velocity_sigma_y;

  // Member: relative_velocity_x
  cdr >> ros_message.relative_velocity_x;

  // Member: relative_velocity_y
  cdr >> ros_message.relative_velocity_y;

  // Member: relative_velocity_sigma_x
  cdr >> ros_message.relative_velocity_sigma_x;

  // Member: relative_velocity_sigma_y
  cdr >> ros_message.relative_velocity_sigma_y;

  // Member: classification
  cdr >> ros_message.classification;

  // Member: tracking_model
  cdr >> ros_message.tracking_model;

  // Member: mobile_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mobile_detected = tmp ? true : false;
  }

  // Member: track_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.track_valid = tmp ? true : false;
  }

  // Member: classification_age
  cdr >> ros_message.classification_age;

  // Member: classification_confidence
  cdr >> ros_message.classification_confidence;

  // Member: number_of_contour_points
  cdr >> ros_message.number_of_contour_points;

  // Member: contour_point_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.contour_point_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.contour_point_list[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
get_serialized_size(
  const ibeo_msgs::msg::Object2270 & ros_message,
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
  // Member: age
  {
    size_t item_size = sizeof(ros_message.age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prediction_age
  {
    size_t item_size = sizeof(ros_message.prediction_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relative_moment_of_measurement
  {
    size_t item_size = sizeof(ros_message.relative_moment_of_measurement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reference_point_location
  {
    size_t item_size = sizeof(ros_message.reference_point_location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reference_point_position_x
  {
    size_t item_size = sizeof(ros_message.reference_point_position_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reference_point_position_y
  {
    size_t item_size = sizeof(ros_message.reference_point_position_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reference_point_position_sigma_x
  {
    size_t item_size = sizeof(ros_message.reference_point_position_sigma_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reference_point_position_sigma_y
  {
    size_t item_size = sizeof(ros_message.reference_point_position_sigma_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: contour_points_cog_x
  {
    size_t item_size = sizeof(ros_message.contour_points_cog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: contour_points_cog_y
  {
    size_t item_size = sizeof(ros_message.contour_points_cog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object_box_length
  {
    size_t item_size = sizeof(ros_message.object_box_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object_box_width
  {
    size_t item_size = sizeof(ros_message.object_box_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object_box_orientation_angle
  {
    size_t item_size = sizeof(ros_message.object_box_orientation_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object_box_orientation_angle_sigma
  {
    size_t item_size = sizeof(ros_message.object_box_orientation_angle_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: absolute_velocity_x
  {
    size_t item_size = sizeof(ros_message.absolute_velocity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: absolute_velocity_y
  {
    size_t item_size = sizeof(ros_message.absolute_velocity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: absolute_velocity_sigma_x
  {
    size_t item_size = sizeof(ros_message.absolute_velocity_sigma_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: absolute_velocity_sigma_y
  {
    size_t item_size = sizeof(ros_message.absolute_velocity_sigma_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relative_velocity_x
  {
    size_t item_size = sizeof(ros_message.relative_velocity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relative_velocity_y
  {
    size_t item_size = sizeof(ros_message.relative_velocity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relative_velocity_sigma_x
  {
    size_t item_size = sizeof(ros_message.relative_velocity_sigma_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relative_velocity_sigma_y
  {
    size_t item_size = sizeof(ros_message.relative_velocity_sigma_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: classification
  {
    size_t item_size = sizeof(ros_message.classification);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tracking_model
  {
    size_t item_size = sizeof(ros_message.tracking_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mobile_detected
  {
    size_t item_size = sizeof(ros_message.mobile_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: track_valid
  {
    size_t item_size = sizeof(ros_message.track_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: classification_age
  {
    size_t item_size = sizeof(ros_message.classification_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: classification_confidence
  {
    size_t item_size = sizeof(ros_message.classification_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: number_of_contour_points
  {
    size_t item_size = sizeof(ros_message.number_of_contour_points);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: contour_point_list
  {
    size_t array_size = ros_message.contour_point_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.contour_point_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
max_serialized_size_Object2270(
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

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: prediction_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: relative_moment_of_measurement
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: reference_point_location
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reference_point_position_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: reference_point_position_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: reference_point_position_sigma_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: reference_point_position_sigma_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: contour_points_cog_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: contour_points_cog_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: object_box_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: object_box_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: object_box_orientation_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: object_box_orientation_angle_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: absolute_velocity_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: absolute_velocity_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: absolute_velocity_sigma_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: absolute_velocity_sigma_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: relative_velocity_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: relative_velocity_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: relative_velocity_sigma_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: relative_velocity_sigma_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: classification
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tracking_model
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mobile_detected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: track_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: classification_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: classification_confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: number_of_contour_points
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: contour_point_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2Di(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Object2270__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::Object2270 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Object2270__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ibeo_msgs::msg::Object2270 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Object2270__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::Object2270 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Object2270__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Object2270(full_bounded, 0);
}

static message_type_support_callbacks_t _Object2270__callbacks = {
  "ibeo_msgs::msg",
  "Object2270",
  _Object2270__cdr_serialize,
  _Object2270__cdr_deserialize,
  _Object2270__get_serialized_size,
  _Object2270__max_serialized_size
};

static rosidl_message_type_support_t _Object2270__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Object2270__callbacks,
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
get_message_type_support_handle<ibeo_msgs::msg::Object2270>()
{
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_Object2270__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ibeo_msgs, msg, Object2270)() {
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_Object2270__handle;
}

#ifdef __cplusplus
}
#endif
