// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/Object2221.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object2221__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/object2221__struct.h"
#include "ibeo_msgs/msg/detail/object2221__functions.h"
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

#include "ibeo_msgs/msg/detail/point2_di__functions.h"  // absolute_velocity, bounding_box_center, closest_point, contour_point_list, object_box_center, reference_point, reference_point_sigma, relative_velocity
#include "ibeo_msgs/msg/detail/size2_d__functions.h"  // absolute_velocity_sigma, object_box_size

// forward declare type support functions
size_t get_serialized_size_ibeo_msgs__msg__Point2Di(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__Point2Di(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di)();
size_t get_serialized_size_ibeo_msgs__msg__Size2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__Size2D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Size2D)();


using _Object2221__ros_msg_type = ibeo_msgs__msg__Object2221;

static bool _Object2221__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Object2221__ros_msg_type * ros_message = static_cast<const _Object2221__ros_msg_type *>(untyped_ros_message);
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

  // Field name: relative_timestamp
  {
    cdr << ros_message->relative_timestamp;
  }

  // Field name: reference_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->reference_point, cdr))
    {
      return false;
    }
  }

  // Field name: reference_point_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->reference_point_sigma, cdr))
    {
      return false;
    }
  }

  // Field name: closest_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->closest_point, cdr))
    {
      return false;
    }
  }

  // Field name: bounding_box_center
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bounding_box_center, cdr))
    {
      return false;
    }
  }

  // Field name: bounding_box_width
  {
    cdr << ros_message->bounding_box_width;
  }

  // Field name: bounding_box_length
  {
    cdr << ros_message->bounding_box_length;
  }

  // Field name: object_box_center
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_box_center, cdr))
    {
      return false;
    }
  }

  // Field name: object_box_size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Size2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_box_size, cdr))
    {
      return false;
    }
  }

  // Field name: object_box_orientation
  {
    cdr << ros_message->object_box_orientation;
  }

  // Field name: absolute_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
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
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Size2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->absolute_velocity_sigma, cdr))
    {
      return false;
    }
  }

  // Field name: relative_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relative_velocity, cdr))
    {
      return false;
    }
  }

  // Field name: classification
  {
    cdr << ros_message->classification;
  }

  // Field name: classification_age
  {
    cdr << ros_message->classification_age;
  }

  // Field name: classification_certainty
  {
    cdr << ros_message->classification_certainty;
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

static bool _Object2221__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Object2221__ros_msg_type * ros_message = static_cast<_Object2221__ros_msg_type *>(untyped_ros_message);
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

  // Field name: relative_timestamp
  {
    cdr >> ros_message->relative_timestamp;
  }

  // Field name: reference_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->reference_point))
    {
      return false;
    }
  }

  // Field name: reference_point_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->reference_point_sigma))
    {
      return false;
    }
  }

  // Field name: closest_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->closest_point))
    {
      return false;
    }
  }

  // Field name: bounding_box_center
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bounding_box_center))
    {
      return false;
    }
  }

  // Field name: bounding_box_width
  {
    cdr >> ros_message->bounding_box_width;
  }

  // Field name: bounding_box_length
  {
    cdr >> ros_message->bounding_box_length;
  }

  // Field name: object_box_center
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_box_center))
    {
      return false;
    }
  }

  // Field name: object_box_size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Size2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_box_size))
    {
      return false;
    }
  }

  // Field name: object_box_orientation
  {
    cdr >> ros_message->object_box_orientation;
  }

  // Field name: absolute_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
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
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Size2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->absolute_velocity_sigma))
    {
      return false;
    }
  }

  // Field name: relative_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relative_velocity))
    {
      return false;
    }
  }

  // Field name: classification
  {
    cdr >> ros_message->classification;
  }

  // Field name: classification_age
  {
    cdr >> ros_message->classification_age;
  }

  // Field name: classification_certainty
  {
    cdr >> ros_message->classification_certainty;
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
size_t get_serialized_size_ibeo_msgs__msg__Object2221(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Object2221__ros_msg_type * ros_message = static_cast<const _Object2221__ros_msg_type *>(untyped_ros_message);
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
  // field.name relative_timestamp
  {
    size_t item_size = sizeof(ros_message->relative_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_point

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->reference_point), current_alignment);
  // field.name reference_point_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->reference_point_sigma), current_alignment);
  // field.name closest_point

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->closest_point), current_alignment);
  // field.name bounding_box_center

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->bounding_box_center), current_alignment);
  // field.name bounding_box_width
  {
    size_t item_size = sizeof(ros_message->bounding_box_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bounding_box_length
  {
    size_t item_size = sizeof(ros_message->bounding_box_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_box_center

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->object_box_center), current_alignment);
  // field.name object_box_size

  current_alignment += get_serialized_size_ibeo_msgs__msg__Size2D(
    &(ros_message->object_box_size), current_alignment);
  // field.name object_box_orientation
  {
    size_t item_size = sizeof(ros_message->object_box_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name absolute_velocity

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->absolute_velocity), current_alignment);
  // field.name absolute_velocity_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Size2D(
    &(ros_message->absolute_velocity_sigma), current_alignment);
  // field.name relative_velocity

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->relative_velocity), current_alignment);
  // field.name classification
  {
    size_t item_size = sizeof(ros_message->classification);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classification_age
  {
    size_t item_size = sizeof(ros_message->classification_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classification_certainty
  {
    size_t item_size = sizeof(ros_message->classification_certainty);
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

static uint32_t _Object2221__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__Object2221(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__Object2221(
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
  // member: relative_timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reference_point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }
  // member: reference_point_sigma
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }
  // member: closest_point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }
  // member: bounding_box_center
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }
  // member: bounding_box_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: bounding_box_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: object_box_center
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }
  // member: object_box_size
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Size2D(
        full_bounded, current_alignment);
    }
  }
  // member: object_box_orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: absolute_velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }
  // member: absolute_velocity_sigma
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Size2D(
        full_bounded, current_alignment);
    }
  }
  // member: relative_velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }
  // member: classification
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
  // member: classification_certainty
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

static size_t _Object2221__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__Object2221(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Object2221 = {
  "ibeo_msgs::msg",
  "Object2221",
  _Object2221__cdr_serialize,
  _Object2221__cdr_deserialize,
  _Object2221__get_serialized_size,
  _Object2221__max_serialized_size
};

static rosidl_message_type_support_t _Object2221__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Object2221,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Object2221)() {
  return &_Object2221__type_support;
}

#if defined(__cplusplus)
}
#endif
