// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ibeo_msgs:msg/UntrackedProperties.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ibeo_msgs/msg/detail/untracked_properties__rosidl_typesupport_introspection_c.h"
#include "ibeo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ibeo_msgs/msg/detail/untracked_properties__functions.h"
#include "ibeo_msgs/msg/detail/untracked_properties__struct.h"


// Include directives for member types
// Member `position_closest_point`
// Member `object_box_size`
// Member `tracking_point_coordinate`
#include "ibeo_msgs/msg/point2_di.h"
// Member `position_closest_point`
// Member `object_box_size`
// Member `tracking_point_coordinate`
#include "ibeo_msgs/msg/detail/point2_di__rosidl_typesupport_introspection_c.h"
// Member `object_box_size_sigma`
// Member `tracking_point_coordinate_sigma`
#include "ibeo_msgs/msg/point2_dui.h"
// Member `object_box_size_sigma`
// Member `tracking_point_coordinate_sigma`
#include "ibeo_msgs/msg/detail/point2_dui__rosidl_typesupport_introspection_c.h"
// Member `contour_point_list`
#include "ibeo_msgs/msg/contour_point_sigma.h"
// Member `contour_point_list`
#include "ibeo_msgs/msg/detail/contour_point_sigma__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ibeo_msgs__msg__UntrackedProperties__init(message_memory);
}

void UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_fini_function(void * message_memory)
{
  ibeo_msgs__msg__UntrackedProperties__fini(message_memory);
}

size_t UntrackedProperties__rosidl_typesupport_introspection_c__size_function__ContourPointSigma__contour_point_list(
  const void * untyped_member)
{
  const ibeo_msgs__msg__ContourPointSigma__Sequence * member =
    (const ibeo_msgs__msg__ContourPointSigma__Sequence *)(untyped_member);
  return member->size;
}

const void * UntrackedProperties__rosidl_typesupport_introspection_c__get_const_function__ContourPointSigma__contour_point_list(
  const void * untyped_member, size_t index)
{
  const ibeo_msgs__msg__ContourPointSigma__Sequence * member =
    (const ibeo_msgs__msg__ContourPointSigma__Sequence *)(untyped_member);
  return &member->data[index];
}

void * UntrackedProperties__rosidl_typesupport_introspection_c__get_function__ContourPointSigma__contour_point_list(
  void * untyped_member, size_t index)
{
  ibeo_msgs__msg__ContourPointSigma__Sequence * member =
    (ibeo_msgs__msg__ContourPointSigma__Sequence *)(untyped_member);
  return &member->data[index];
}

bool UntrackedProperties__rosidl_typesupport_introspection_c__resize_function__ContourPointSigma__contour_point_list(
  void * untyped_member, size_t size)
{
  ibeo_msgs__msg__ContourPointSigma__Sequence * member =
    (ibeo_msgs__msg__ContourPointSigma__Sequence *)(untyped_member);
  ibeo_msgs__msg__ContourPointSigma__Sequence__fini(member);
  return ibeo_msgs__msg__ContourPointSigma__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_member_array[10] = {
  {
    "relative_time_of_measurement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__UntrackedProperties, relative_time_of_measurement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_closest_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__UntrackedProperties, position_closest_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_box_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__UntrackedProperties, object_box_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_box_size_sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__UntrackedProperties, object_box_size_sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_box_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__UntrackedProperties, object_box_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_box_orientation_sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__UntrackedProperties, object_box_orientation_sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracking_point_coordinate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__UntrackedProperties, tracking_point_coordinate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracking_point_coordinate_sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__UntrackedProperties, tracking_point_coordinate_sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_contour_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__UntrackedProperties, number_of_contour_points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contour_point_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__UntrackedProperties, contour_point_list),  // bytes offset in struct
    NULL,  // default value
    UntrackedProperties__rosidl_typesupport_introspection_c__size_function__ContourPointSigma__contour_point_list,  // size() function pointer
    UntrackedProperties__rosidl_typesupport_introspection_c__get_const_function__ContourPointSigma__contour_point_list,  // get_const(index) function pointer
    UntrackedProperties__rosidl_typesupport_introspection_c__get_function__ContourPointSigma__contour_point_list,  // get(index) function pointer
    UntrackedProperties__rosidl_typesupport_introspection_c__resize_function__ContourPointSigma__contour_point_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_members = {
  "ibeo_msgs__msg",  // message namespace
  "UntrackedProperties",  // message name
  10,  // number of fields
  sizeof(ibeo_msgs__msg__UntrackedProperties),
  UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_member_array,  // message members
  UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_init_function,  // function to initialize message memory (memory has to be allocated)
  UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_type_support_handle = {
  0,
  &UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, UntrackedProperties)() {
  UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Di)();
  UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Di)();
  UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Dui)();
  UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Di)();
  UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Dui)();
  UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, ContourPointSigma)();
  if (!UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_type_support_handle.typesupport_identifier) {
    UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UntrackedProperties__rosidl_typesupport_introspection_c__UntrackedProperties_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
