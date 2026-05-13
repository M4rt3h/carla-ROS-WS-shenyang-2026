// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/TrackedProperties.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/tracked_properties__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/tracked_properties__struct.h"
#include "ibeo_msgs/msg/detail/tracked_properties__functions.h"
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

#include "ibeo_msgs/msg/detail/contour_point_sigma__functions.h"  // contour_point_list
#include "ibeo_msgs/msg/detail/point2_di__functions.h"  // acceleration, object_box_size, position_closest_point, relative_velocity, tracking_point_coordinate, velocity
#include "ibeo_msgs/msg/detail/point2_dui__functions.h"  // acceleration_sigma, object_box_size_sigma, relative_velocity_sigma, tracking_point_coordinate_sigma, velocity_sigma

// forward declare type support functions
size_t get_serialized_size_ibeo_msgs__msg__ContourPointSigma(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__ContourPointSigma(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ContourPointSigma)();
size_t get_serialized_size_ibeo_msgs__msg__Point2Di(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__Point2Di(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di)();
size_t get_serialized_size_ibeo_msgs__msg__Point2Dui(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__Point2Dui(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Dui)();


using _TrackedProperties__ros_msg_type = ibeo_msgs__msg__TrackedProperties;

static bool _TrackedProperties__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrackedProperties__ros_msg_type * ros_message = static_cast<const _TrackedProperties__ros_msg_type *>(untyped_ros_message);
  // Field name: object_age
  {
    cdr << ros_message->object_age;
  }

  // Field name: hidden_status_age
  {
    cdr << ros_message->hidden_status_age;
  }

  // Field name: object_phase
  {
    cdr << ros_message->object_phase;
  }

  // Field name: dynamic_property
  {
    cdr << ros_message->dynamic_property;
  }

  // Field name: relative_time_of_measure
  {
    cdr << ros_message->relative_time_of_measure;
  }

  // Field name: position_closest_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position_closest_point, cdr))
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

  // Field name: relative_velocity_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Dui
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relative_velocity_sigma, cdr))
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

  // Field name: object_box_size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_box_size, cdr))
    {
      return false;
    }
  }

  // Field name: object_box_size_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Dui
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_box_size_sigma, cdr))
    {
      return false;
    }
  }

  // Field name: object_box_orientation
  {
    cdr << ros_message->object_box_orientation;
  }

  // Field name: object_box_orientation_sigma
  {
    cdr << ros_message->object_box_orientation_sigma;
  }

  // Field name: tracking_point_location
  {
    cdr << ros_message->tracking_point_location;
  }

  // Field name: tracking_point_coordinate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tracking_point_coordinate, cdr))
    {
      return false;
    }
  }

  // Field name: tracking_point_coordinate_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Dui
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tracking_point_coordinate_sigma, cdr))
    {
      return false;
    }
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity, cdr))
    {
      return false;
    }
  }

  // Field name: velocity_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Dui
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity_sigma, cdr))
    {
      return false;
    }
  }

  // Field name: acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->acceleration, cdr))
    {
      return false;
    }
  }

  // Field name: acceleration_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Dui
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->acceleration_sigma, cdr))
    {
      return false;
    }
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  // Field name: yaw_rate_sigma
  {
    cdr << ros_message->yaw_rate_sigma;
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
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ContourPointSigma
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

static bool _TrackedProperties__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrackedProperties__ros_msg_type * ros_message = static_cast<_TrackedProperties__ros_msg_type *>(untyped_ros_message);
  // Field name: object_age
  {
    cdr >> ros_message->object_age;
  }

  // Field name: hidden_status_age
  {
    cdr >> ros_message->hidden_status_age;
  }

  // Field name: object_phase
  {
    cdr >> ros_message->object_phase;
  }

  // Field name: dynamic_property
  {
    cdr >> ros_message->dynamic_property;
  }

  // Field name: relative_time_of_measure
  {
    cdr >> ros_message->relative_time_of_measure;
  }

  // Field name: position_closest_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position_closest_point))
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

  // Field name: relative_velocity_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Dui
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relative_velocity_sigma))
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

  // Field name: object_box_size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_box_size))
    {
      return false;
    }
  }

  // Field name: object_box_size_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Dui
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_box_size_sigma))
    {
      return false;
    }
  }

  // Field name: object_box_orientation
  {
    cdr >> ros_message->object_box_orientation;
  }

  // Field name: object_box_orientation_sigma
  {
    cdr >> ros_message->object_box_orientation_sigma;
  }

  // Field name: tracking_point_location
  {
    cdr >> ros_message->tracking_point_location;
  }

  // Field name: tracking_point_coordinate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tracking_point_coordinate))
    {
      return false;
    }
  }

  // Field name: tracking_point_coordinate_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Dui
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tracking_point_coordinate_sigma))
    {
      return false;
    }
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity))
    {
      return false;
    }
  }

  // Field name: velocity_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Dui
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity_sigma))
    {
      return false;
    }
  }

  // Field name: acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Di
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->acceleration))
    {
      return false;
    }
  }

  // Field name: acceleration_sigma
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Point2Dui
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->acceleration_sigma))
    {
      return false;
    }
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  // Field name: yaw_rate_sigma
  {
    cdr >> ros_message->yaw_rate_sigma;
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
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ContourPointSigma
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->contour_point_list.data) {
      ibeo_msgs__msg__ContourPointSigma__Sequence__fini(&ros_message->contour_point_list);
    }
    if (!ibeo_msgs__msg__ContourPointSigma__Sequence__init(&ros_message->contour_point_list, size)) {
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
size_t get_serialized_size_ibeo_msgs__msg__TrackedProperties(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackedProperties__ros_msg_type * ros_message = static_cast<const _TrackedProperties__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name object_age
  {
    size_t item_size = sizeof(ros_message->object_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hidden_status_age
  {
    size_t item_size = sizeof(ros_message->hidden_status_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_phase
  {
    size_t item_size = sizeof(ros_message->object_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dynamic_property
  {
    size_t item_size = sizeof(ros_message->dynamic_property);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_time_of_measure
  {
    size_t item_size = sizeof(ros_message->relative_time_of_measure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_closest_point

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->position_closest_point), current_alignment);
  // field.name relative_velocity

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->relative_velocity), current_alignment);
  // field.name relative_velocity_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Dui(
    &(ros_message->relative_velocity_sigma), current_alignment);
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
  // field.name object_box_size

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->object_box_size), current_alignment);
  // field.name object_box_size_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Dui(
    &(ros_message->object_box_size_sigma), current_alignment);
  // field.name object_box_orientation
  {
    size_t item_size = sizeof(ros_message->object_box_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_box_orientation_sigma
  {
    size_t item_size = sizeof(ros_message->object_box_orientation_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tracking_point_location
  {
    size_t item_size = sizeof(ros_message->tracking_point_location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tracking_point_coordinate

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->tracking_point_coordinate), current_alignment);
  // field.name tracking_point_coordinate_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Dui(
    &(ros_message->tracking_point_coordinate_sigma), current_alignment);
  // field.name velocity

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->velocity), current_alignment);
  // field.name velocity_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Dui(
    &(ros_message->velocity_sigma), current_alignment);
  // field.name acceleration

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->acceleration), current_alignment);
  // field.name acceleration_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Dui(
    &(ros_message->acceleration_sigma), current_alignment);
  // field.name yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate_sigma
  {
    size_t item_size = sizeof(ros_message->yaw_rate_sigma);
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
      current_alignment += get_serialized_size_ibeo_msgs__msg__ContourPointSigma(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrackedProperties__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__TrackedProperties(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__TrackedProperties(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: object_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hidden_status_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: object_phase
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dynamic_property
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: relative_time_of_measure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: position_closest_point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
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
  // member: relative_velocity_sigma
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Dui(
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
  // member: object_box_size
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }
  // member: object_box_size_sigma
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Dui(
        full_bounded, current_alignment);
    }
  }
  // member: object_box_orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: object_box_orientation_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tracking_point_location
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tracking_point_coordinate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }
  // member: tracking_point_coordinate_sigma
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Dui(
        full_bounded, current_alignment);
    }
  }
  // member: velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }
  // member: velocity_sigma
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Dui(
        full_bounded, current_alignment);
    }
  }
  // member: acceleration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Di(
        full_bounded, current_alignment);
    }
  }
  // member: acceleration_sigma
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__Point2Dui(
        full_bounded, current_alignment);
    }
  }
  // member: yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: yaw_rate_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: number_of_contour_points
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: contour_point_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__ContourPointSigma(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrackedProperties__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__TrackedProperties(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrackedProperties = {
  "ibeo_msgs::msg",
  "TrackedProperties",
  _TrackedProperties__cdr_serialize,
  _TrackedProperties__cdr_deserialize,
  _TrackedProperties__get_serialized_size,
  _TrackedProperties__max_serialized_size
};

static rosidl_message_type_support_t _TrackedProperties__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrackedProperties,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, TrackedProperties)() {
  return &_TrackedProperties__type_support;
}

#if defined(__cplusplus)
}
#endif
