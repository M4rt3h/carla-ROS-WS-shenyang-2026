// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/Object2280.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object2280__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/object2280__struct.h"
#include "ibeo_msgs/msg/detail/object2280__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // timestamp
#include "ibeo_msgs/msg/detail/point2_df__functions.h"  // absolute_velocity, absolute_velocity_sigma, contour_point_list, object_box_center, object_box_center_sigma, object_box_size, reference_point_coordinate, reference_point_coordinate_sigma, relative_velocity, relative_velocity_sigma

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_ibeo_msgs__msg__Point2Df(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__Point2Df(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df)();


using _Object2280__ros_msg_type = ibeo_msgs__msg__Object2280;

static bool _Object2280__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Object2280__ros_msg_type * ros_message = static_cast<const _Object2280__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: tracking_model
  {
    cdr << ros_message->tracking_model;
  }

  // Field name: mobility_of_dyn_object_detected
  {
    cdr << (ros_message->mobility_of_dyn_object_detected ? true : false);
  }

  // Field name: motion_model_validated
  {
    cdr << (ros_message->motion_model_validated ? true : false);
  }

  // Field name: object_age
  {
    cdr << ros_message->object_age;
  }

  // Field name: timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->timestamp, cdr))
    {
      return false;
    }
  }

  // Field name: object_prediction_age
  {
    cdr << ros_message->object_prediction_age;
  }

  // Field name: classification
  {
    cdr << ros_message->classification;
  }

  // Field name: classification_certainty
  {
    cdr << ros_message->classification_certainty;
  }

  // Field name: classification_age
  {
    cdr << ros_message->classification_age;
  }

  // Field name: object_box_center
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_box_center, cdr))
    {
      return false;
    }
  }

  // Field name: object_box_center_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_box_center_sigma, cdr))
    {
      return false;
    }
  }

  // Field name: object_box_size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_box_size, cdr))
    {
      return false;
    }
  }

  // Field name: object_box_orientation_angle
  {
    cdr << ros_message->object_box_orientation_angle;
  }

  // Field name: object_box_orientation_angle_sigma
  {
    cdr << ros_message->object_box_orientation_angle_sigma;
  }

  // Field name: relative_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relative_velocity, cdr))
    {
      return false;
    }
  }

  // Field name: relative_velocity_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relative_velocity_sigma, cdr))
    {
      return false;
    }
  }

  // Field name: absolute_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->absolute_velocity, cdr))
    {
      return false;
    }
  }

  // Field name: absolute_velocity_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->absolute_velocity_sigma, cdr))
    {
      return false;
    }
  }

  // Field name: number_of_contour_points
  {
    cdr << ros_message->number_of_contour_points;
  }

  // Field name: closest_point_index
  {
    cdr << ros_message->closest_point_index;
  }

  // Field name: reference_point_location
  {
    cdr << ros_message->reference_point_location;
  }

  // Field name: reference_point_coordinate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->reference_point_coordinate, cdr))
    {
      return false;
    }
  }

  // Field name: reference_point_coordinate_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->reference_point_coordinate_sigma, cdr))
    {
      return false;
    }
  }

  // Field name: reference_point_position_correction_coefficient
  {
    cdr << ros_message->reference_point_position_correction_coefficient;
  }

  // Field name: object_priority
  {
    cdr << ros_message->object_priority;
  }

  // Field name: object_existence_measurement
  {
    cdr << ros_message->object_existence_measurement;
  }

  // Field name: contour_point_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
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

static bool _Object2280__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Object2280__ros_msg_type * ros_message = static_cast<_Object2280__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: tracking_model
  {
    cdr >> ros_message->tracking_model;
  }

  // Field name: mobility_of_dyn_object_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mobility_of_dyn_object_detected = tmp ? true : false;
  }

  // Field name: motion_model_validated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motion_model_validated = tmp ? true : false;
  }

  // Field name: object_age
  {
    cdr >> ros_message->object_age;
  }

  // Field name: timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->timestamp))
    {
      return false;
    }
  }

  // Field name: object_prediction_age
  {
    cdr >> ros_message->object_prediction_age;
  }

  // Field name: classification
  {
    cdr >> ros_message->classification;
  }

  // Field name: classification_certainty
  {
    cdr >> ros_message->classification_certainty;
  }

  // Field name: classification_age
  {
    cdr >> ros_message->classification_age;
  }

  // Field name: object_box_center
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_box_center))
    {
      return false;
    }
  }

  // Field name: object_box_center_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_box_center_sigma))
    {
      return false;
    }
  }

  // Field name: object_box_size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_box_size))
    {
      return false;
    }
  }

  // Field name: object_box_orientation_angle
  {
    cdr >> ros_message->object_box_orientation_angle;
  }

  // Field name: object_box_orientation_angle_sigma
  {
    cdr >> ros_message->object_box_orientation_angle_sigma;
  }

  // Field name: relative_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relative_velocity))
    {
      return false;
    }
  }

  // Field name: relative_velocity_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relative_velocity_sigma))
    {
      return false;
    }
  }

  // Field name: absolute_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->absolute_velocity))
    {
      return false;
    }
  }

  // Field name: absolute_velocity_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->absolute_velocity_sigma))
    {
      return false;
    }
  }

  // Field name: number_of_contour_points
  {
    cdr >> ros_message->number_of_contour_points;
  }

  // Field name: closest_point_index
  {
    cdr >> ros_message->closest_point_index;
  }

  // Field name: reference_point_location
  {
    cdr >> ros_message->reference_point_location;
  }

  // Field name: reference_point_coordinate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->reference_point_coordinate))
    {
      return false;
    }
  }

  // Field name: reference_point_coordinate_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->reference_point_coordinate_sigma))
    {
      return false;
    }
  }

  // Field name: reference_point_position_correction_coefficient
  {
    cdr >> ros_message->reference_point_position_correction_coefficient;
  }

  // Field name: object_priority
  {
    cdr >> ros_message->object_priority;
  }

  // Field name: object_existence_measurement
  {
    cdr >> ros_message->object_existence_measurement;
  }

  // Field name: contour_point_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Df
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->contour_point_list.data) {
      ibeo_msgs__msg__Point2Df__Sequence__fini(&ros_message->contour_point_list);
    }
    if (!ibeo_msgs__msg__Point2Df__Sequence__init(&ros_message->contour_point_list, size)) {
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
size_t get_serialized_size_ibeo_msgs__msg__Object2280(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Object2280__ros_msg_type * ros_message = static_cast<const _Object2280__ros_msg_type *>(untyped_ros_message);
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
  // field.name tracking_model
  {
    size_t item_size = sizeof(ros_message->tracking_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mobility_of_dyn_object_detected
  {
    size_t item_size = sizeof(ros_message->mobility_of_dyn_object_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motion_model_validated
  {
    size_t item_size = sizeof(ros_message->motion_model_validated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_age
  {
    size_t item_size = sizeof(ros_message->object_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->timestamp), current_alignment);
  // field.name object_prediction_age
  {
    size_t item_size = sizeof(ros_message->object_prediction_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classification
  {
    size_t item_size = sizeof(ros_message->classification);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classification_certainty
  {
    size_t item_size = sizeof(ros_message->classification_certainty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classification_age
  {
    size_t item_size = sizeof(ros_message->classification_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_box_center

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Df(
    &(ros_message->object_box_center), current_alignment);
  // field.name object_box_center_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Df(
    &(ros_message->object_box_center_sigma), current_alignment);
  // field.name object_box_size

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Df(
    &(ros_message->object_box_size), current_alignment);
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
  // field.name relative_velocity

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Df(
    &(ros_message->relative_velocity), current_alignment);
  // field.name relative_velocity_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Df(
    &(ros_message->relative_velocity_sigma), current_alignment);
  // field.name absolute_velocity

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Df(
    &(ros_message->absolute_velocity), current_alignment);
  // field.name absolute_velocity_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Df(
    &(ros_message->absolute_velocity_sigma), current_alignment);
  // field.name number_of_contour_points
  {
    size_t item_size = sizeof(ros_message->number_of_contour_points);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name closest_point_index
  {
    size_t item_size = sizeof(ros_message->closest_point_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_point_location
  {
    size_t item_size = sizeof(ros_message->reference_point_location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_point_coordinate

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Df(
    &(ros_message->reference_point_coordinate), current_alignment);
  // field.name reference_point_coordinate_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Df(
    &(ros_message->reference_point_coordinate_sigma), current_alignment);
  // field.name reference_point_position_correction_coefficient
  {
    size_t item_size = sizeof(ros_message->reference_point_position_correction_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_priority
  {
    size_t item_size = sizeof(ros_message->object_priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_existence_measurement
  {
    size_t item_size = sizeof(ros_message->object_existence_measurement);
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
      current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Df(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Object2280__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__Object2280(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__Object2280(
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
  // member: tracking_model
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mobility_of_dyn_object_detected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motion_model_validated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: timestamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: object_prediction_age
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
  // member: classification_certainty
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: classification_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_box_center
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Df(
        full_bounded, current_alignment);
    }
  }
  // member: object_box_center_sigma
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Df(
        full_bounded, current_alignment);
    }
  }
  // member: object_box_size
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Df(
        full_bounded, current_alignment);
    }
  }
  // member: object_box_orientation_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_box_orientation_angle_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: relative_velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Df(
        full_bounded, current_alignment);
    }
  }
  // member: relative_velocity_sigma
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Df(
        full_bounded, current_alignment);
    }
  }
  // member: absolute_velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Df(
        full_bounded, current_alignment);
    }
  }
  // member: absolute_velocity_sigma
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Df(
        full_bounded, current_alignment);
    }
  }
  // member: number_of_contour_points
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: closest_point_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reference_point_location
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reference_point_coordinate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Df(
        full_bounded, current_alignment);
    }
  }
  // member: reference_point_coordinate_sigma
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Df(
        full_bounded, current_alignment);
    }
  }
  // member: reference_point_position_correction_coefficient
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_priority
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: object_existence_measurement
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: contour_point_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Df(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Object2280__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__Object2280(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Object2280 = {
  "ibeo_msgs::msg",
  "Object2280",
  _Object2280__cdr_serialize,
  _Object2280__cdr_deserialize,
  _Object2280__get_serialized_size,
  _Object2280__max_serialized_size
};

static rosidl_message_type_support_t _Object2280__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Object2280,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Object2280)() {
  return &_Object2280__type_support;
}

#if defined(__cplusplus)
}
#endif
