// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/UntrackedProperties.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/untracked_properties__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/untracked_properties__struct.h"
#include "ibeo_msgs/msg/detail/untracked_properties__functions.h"
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
#include "ibeo_msgs/msg/detail/point2_di__functions.h"  // object_box_size, position_closest_point, tracking_point_coordinate
#include "ibeo_msgs/msg/detail/point2_dui__functions.h"  // object_box_size_sigma, tracking_point_coordinate_sigma

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


using _UntrackedProperties__ros_msg_type = ibeo_msgs__msg__UntrackedProperties;

static bool _UntrackedProperties__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UntrackedProperties__ros_msg_type * ros_message = static_cast<const _UntrackedProperties__ros_msg_type *>(untyped_ros_message);
  // Field name: relative_time_of_measurement
  {
    cdr << ros_message->relative_time_of_measurement;
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

static bool _UntrackedProperties__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UntrackedProperties__ros_msg_type * ros_message = static_cast<_UntrackedProperties__ros_msg_type *>(untyped_ros_message);
  // Field name: relative_time_of_measurement
  {
    cdr >> ros_message->relative_time_of_measurement;
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
size_t get_serialized_size_ibeo_msgs__msg__UntrackedProperties(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UntrackedProperties__ros_msg_type * ros_message = static_cast<const _UntrackedProperties__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name relative_time_of_measurement
  {
    size_t item_size = sizeof(ros_message->relative_time_of_measurement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_closest_point

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->position_closest_point), current_alignment);
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
  // field.name tracking_point_coordinate

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Di(
    &(ros_message->tracking_point_coordinate), current_alignment);
  // field.name tracking_point_coordinate_sigma

  current_alignment += get_serialized_size_ibeo_msgs__msg__Point2Dui(
    &(ros_message->tracking_point_coordinate_sigma), current_alignment);
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

static uint32_t _UntrackedProperties__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__UntrackedProperties(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__UntrackedProperties(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: relative_time_of_measurement
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

static size_t _UntrackedProperties__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__UntrackedProperties(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UntrackedProperties = {
  "ibeo_msgs::msg",
  "UntrackedProperties",
  _UntrackedProperties__cdr_serialize,
  _UntrackedProperties__cdr_deserialize,
  _UntrackedProperties__get_serialized_size,
  _UntrackedProperties__max_serialized_size
};

static rosidl_message_type_support_t _UntrackedProperties__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UntrackedProperties,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, UntrackedProperties)() {
  return &_UntrackedProperties__type_support;
}

#if defined(__cplusplus)
}
#endif
