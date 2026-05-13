// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/Object2270.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object2270__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/object2270__struct.h"
#include "ibeo_msgs/msg/detail/object2270__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ibeo_msgs/msg/detail/point2_di__functions.h"  // contour_point_list

// forward declare type support functions
size_t get_serialized_size_ibeo_msgs__msg__Point2Di(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__Point2Di(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di)();


using _Object2270__ros_msg_type = ibeo_msgs__msg__Object2270;

static bool _Object2270__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Object2270__ros_msg_type * ros_message = static_cast<const _Object2270__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: age
  {
    cdr << ros_message->age;
  }

  // Field name: prediction_age
  {
    cdr << ros_message->prediction_age;
  }

  // Field name: relative_moment_of_measurement
  {
    cdr << ros_message->relative_moment_of_measurement;
  }

  // Field name: reference_point_location
  {
    cdr << ros_message->reference_point_location;
  }

  // Field name: reference_point_position_x
  {
    cdr << ros_message->reference_point_position_x;
  }

  // Field name: reference_point_position_y
  {
    cdr << ros_message->reference_point_position_y;
  }

  // Field name: reference_point_position_sigma_x
  {
    cdr << ros_message->reference_point_position_sigma_x;
  }

  // Field name: reference_point_position_sigma_y
  {
    cdr << ros_message->reference_point_position_sigma_y;
  }

  // Field name: contour_points_cog_x
  {
    cdr << ros_message->contour_points_cog_x;
  }

  // Field name: contour_points_cog_y
  {
    cdr << ros_message->contour_points_cog_y;
  }

  // Field name: object_box_length
  {
    cdr << ros_message->object_box_length;
  }

  // Field name: object_box_width
  {
    cdr << ros_message->object_box_width;
  }

  // Field name: object_box_orientation_angle
  {
    cdr << ros_message->object_box_orientation_angle;
  }

  // Field name: object_box_orientation_angle_sigma
  {
    cdr << ros_message->object_box_orientation_angle_sigma;
  }

  // Field name: absolute_velocity_x
  {
    cdr << ros_message->absolute_velocity_x;
  }

  // Field name: absolute_velocity_y
  {
    cdr << ros_message->absolute_velocity_y;
  }

  // Field name: absolute_velocity_sigma_x
  {
    cdr << ros_message->absolute_velocity_sigma_x;
  }

  // Field name: absolute_velocity_sigma_y
  {
    cdr << ros_message->absolute_velocity_sigma_y;
  }

  // Field name: relative_velocity_x
  {
    cdr << ros_message->relative_velocity_x;
  }

  // Field name: relative_velocity_y
  {
    cdr << ros_message->relative_velocity_y;
  }

  // Field name: relative_velocity_sigma_x
  {
    cdr << ros_message->relative_velocity_sigma_x;
  }

  // Field name: relative_velocity_sigma_y
  {
    cdr << ros_message->relative_velocity_sigma_y;
  }

  // Field name: classification
  {
    cdr << ros_message->classification;
  }

  // Field name: tracking_model
  {
    cdr << ros_message->tracking_model;
  }

  // Field name: mobile_detected
  {
    cdr << (ros_message->mobile_detected ? true : false);
  }

  // Field name: track_valid
  {
    cdr << (ros_message->track_valid ? true : false);
  }

  // Field name: classification_age
  {
    cdr << ros_message->classification_age;
  }

  // Field name: classification_confidence
  {
    cdr << ros_message->classification_confidence;
  }

  // Field name: number_of_contour_points
  {
    cdr << ros_message->number_of_contour_points;
  }

  // Field name: contour_point_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    size_t size = ros_message->contour_point_list.size;
    auto array_ptr = ros_message->contour_point_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Object2270__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Object2270__ros_msg_type * ros_message = static_cast<_Object2270__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: age
  {
    cdr >> ros_message->age;
  }

  // Field name: prediction_age
  {
    cdr >> ros_message->prediction_age;
  }

  // Field name: relative_moment_of_measurement
  {
    cdr >> ros_message->relative_moment_of_measurement;
  }

  // Field name: reference_point_location
  {
    cdr >> ros_message->reference_point_location;
  }

  // Field name: reference_point_position_x
  {
    cdr >> ros_message->reference_point_position_x;
  }

  // Field name: reference_point_position_y
  {
    cdr >> ros_message->reference_point_position_y;
  }

  // Field name: reference_point_position_sigma_x
  {
    cdr >> ros_message->reference_point_position_sigma_x;
  }

  // Field name: reference_point_position_sigma_y
  {
    cdr >> ros_message->reference_point_position_sigma_y;
  }

  // Field name: contour_points_cog_x
  {
    cdr >> ros_message->contour_points_cog_x;
  }

  // Field name: contour_points_cog_y
  {
    cdr >> ros_message->contour_points_cog_y;
  }

  // Field name: object_box_length
  {
    cdr >> ros_message->object_box_length;
  }

  // Field name: object_box_width
  {
    cdr >> ros_message->object_box_width;
  }

  // Field name: object_box_orientation_angle
  {
    cdr >> ros_message->object_box_orientation_angle;
  }

  // Field name: object_box_orientation_angle_sigma
  {
    cdr >> ros_message->object_box_orientation_angle_sigma;
  }

  // Field name: absolute_velocity_x
  {
    cdr >> ros_message->absolute_velocity_x;
  }

  // Field name: absolute_velocity_y
  {
    cdr >> ros_message->absolute_velocity_y;
  }

  // Field name: absolute_velocity_sigma_x
  {
    cdr >> ros_message->absolute_velocity_sigma_x;
  }

  // Field name: absolute_velocity_sigma_y
  {
    cdr >> ros_message->absolute_velocity_sigma_y;
  }

  // Field name: relative_velocity_x
  {
    cdr >> ros_message->relative_velocity_x;
  }

  // Field name: relative_velocity_y
  {
    cdr >> ros_message->relative_velocity_y;
  }

  // Field name: relative_velocity_sigma_x
  {
    cdr >> ros_message->relative_velocity_sigma_x;
  }

  // Field name: relative_velocity_sigma_y
  {
    cdr >> ros_message->relative_velocity_sigma_y;
  }

  // Field name: classification
  {
    cdr >> ros_message->classification;
  }

  // Field name: tracking_model
  {
    cdr >> ros_message->tracking_model;
  }

  // Field name: mobile_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mobile_detected = tmp ? true : false;
  }

  // Field name: track_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->track_valid = tmp ? true : false;
  }

  // Field name: classification_age
  {
    cdr >> ros_message->classification_age;
  }

  // Field name: classification_confidence
  {
    cdr >> ros_message->classification_confidence;
  }

  // Field name: number_of_contour_points
  {
    cdr >> ros_message->number_of_contour_points;
  }

  // Field name: contour_point_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->contour_point_list.data) {
      ibeo_msgs__msg__Point2Di__Sequence__fini(&ros_message->contour_point_list);
    }
    if (!ibeo_msgs__msg__Point2Di__Sequence__init(&ros_message->contour_point_list, size)) {
      fprintf(stderr, "failed to create array for field 'contour_point_list'");
      return false;
    }
    auto array_ptr = ros_message->contour_point_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t get_serialized_size_ibeo_msgs__msg__Object2270(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Object2270__ros_msg_type * ros_message = static_cast<const _Object2270__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name age
  {
    size_t item_size = sizeof(ros_message->age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prediction_age
  {
    size_t item_size = sizeof(ros_message->prediction_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_moment_of_measurement
  {
    size_t item_size = sizeof(ros_message->relative_moment_of_measurement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_point_location
  {
    size_t item_size = sizeof(ros_message->reference_point_location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_point_position_x
  {
    size_t item_size = sizeof(ros_message->reference_point_position_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_point_position_y
  {
    size_t item_size = sizeof(ros_message->reference_point_position_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_point_position_sigma_x
  {
    size_t item_size = sizeof(ros_message->reference_point_position_sigma_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_point_position_sigma_y
  {
    size_t item_size = sizeof(ros_message->reference_point_position_sigma_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contour_points_cog_x
  {
    size_t item_size = sizeof(ros_message->contour_points_cog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contour_points_cog_y
  {
    size_t item_size = sizeof(ros_message->contour_points_cog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_box_length
  {
    size_t item_size = sizeof(ros_message->object_box_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_box_width
  {
    size_t item_size = sizeof(ros_message->object_box_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_box_orientation_angle
  {
    size_t item_size = sizeof(ros_message->object_box_orientation_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_box_orientation_angle_sigma
  {
    size_t item_size = sizeof(ros_message->object_box_orientation_angle_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name absolute_velocity_x
  {
    size_t item_size = sizeof(ros_message->absolute_velocity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name absolute_velocity_y
  {
    size_t item_size = sizeof(ros_message->absolute_velocity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name absolute_velocity_sigma_x
  {
    size_t item_size = sizeof(ros_message->absolute_velocity_sigma_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name absolute_velocity_sigma_y
  {
    size_t item_size = sizeof(ros_message->absolute_velocity_sigma_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_velocity_x
  {
    size_t item_size = sizeof(ros_message->relative_velocity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_velocity_y
  {
    size_t item_size = sizeof(ros_message->relative_velocity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_velocity_sigma_x
  {
    size_t item_size = sizeof(ros_message->relative_velocity_sigma_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_velocity_sigma_y
  {
    size_t item_size = sizeof(ros_message->relative_velocity_sigma_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classification
  {
    size_t item_size = sizeof(ros_message->classification);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tracking_model
  {
    size_t item_size = sizeof(ros_message->tracking_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mobile_detected
  {
    size_t item_size = sizeof(ros_message->mobile_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track_valid
  {
    size_t item_size = sizeof(ros_message->track_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classification_age
  {
    size_t item_size = sizeof(ros_message->classification_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classification_confidence
  {
    size_t item_size = sizeof(ros_message->classification_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_contour_points
  {
    size_t item_size = sizeof(ros_message->number_of_contour_points);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contour_point_list
  {
    size_t array_size = ros_message->contour_point_list.size;
    auto array_ptr = ros_message->contour_point_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Object2270__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__Object2270(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__Object2270(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: prediction_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: relative_moment_of_measurement
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reference_point_location
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reference_point_position_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reference_point_position_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reference_point_position_sigma_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reference_point_position_sigma_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: contour_points_cog_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: contour_points_cog_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: object_box_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: object_box_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: object_box_orientation_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: object_box_orientation_angle_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: absolute_velocity_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: absolute_velocity_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: absolute_velocity_sigma_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: absolute_velocity_sigma_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: relative_velocity_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: relative_velocity_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: relative_velocity_sigma_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: relative_velocity_sigma_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: classification
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tracking_model
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mobile_detected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: track_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: classification_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: classification_confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: number_of_contour_points
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: contour_point_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Object2270__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__Object2270(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Object2270 = {
  "ibeo_msgs::msg",
  "Object2270",
  _Object2270__cdr_serialize,
  _Object2270__cdr_deserialize,
  _Object2270__get_serialized_size,
  _Object2270__max_serialized_size
};

static rosidl_message_type_support_t _Object2270__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Object2270,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Object2270)() {
  return &_Object2270__type_support;
}

#if defined(__cplusplus)
}
#endif
