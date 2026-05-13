// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from derived_object_msgs:msg/LaneModels.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "derived_object_msgs/msg/detail/lane_models__rosidl_typesupport_introspection_c.h"
#include "derived_object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "derived_object_msgs/msg/detail/lane_models__functions.h"
#include "derived_object_msgs/msg/detail/lane_models__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `left_lane`
// Member `right_lane`
// Member `additional_lanes`
#include "derived_object_msgs/msg/lane.h"
// Member `left_lane`
// Member `right_lane`
// Member `additional_lanes`
#include "derived_object_msgs/msg/detail/lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LaneModels__rosidl_typesupport_introspection_c__LaneModels_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  derived_object_msgs__msg__LaneModels__init(message_memory);
}

void LaneModels__rosidl_typesupport_introspection_c__LaneModels_fini_function(void * message_memory)
{
  derived_object_msgs__msg__LaneModels__fini(message_memory);
}

size_t LaneModels__rosidl_typesupport_introspection_c__size_function__Lane__additional_lanes(
  const void * untyped_member)
{
  const derived_object_msgs__msg__Lane__Sequence * member =
    (const derived_object_msgs__msg__Lane__Sequence *)(untyped_member);
  return member->size;
}

const void * LaneModels__rosidl_typesupport_introspection_c__get_const_function__Lane__additional_lanes(
  const void * untyped_member, size_t index)
{
  const derived_object_msgs__msg__Lane__Sequence * member =
    (const derived_object_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LaneModels__rosidl_typesupport_introspection_c__get_function__Lane__additional_lanes(
  void * untyped_member, size_t index)
{
  derived_object_msgs__msg__Lane__Sequence * member =
    (derived_object_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LaneModels__rosidl_typesupport_introspection_c__resize_function__Lane__additional_lanes(
  void * untyped_member, size_t size)
{
  derived_object_msgs__msg__Lane__Sequence * member =
    (derived_object_msgs__msg__Lane__Sequence *)(untyped_member);
  derived_object_msgs__msg__Lane__Sequence__fini(member);
  return derived_object_msgs__msg__Lane__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs__msg__LaneModels, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs__msg__LaneModels, left_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs__msg__LaneModels, right_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "additional_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs__msg__LaneModels, additional_lanes),  // bytes offset in struct
    NULL,  // default value
    LaneModels__rosidl_typesupport_introspection_c__size_function__Lane__additional_lanes,  // size() function pointer
    LaneModels__rosidl_typesupport_introspection_c__get_const_function__Lane__additional_lanes,  // get_const(index) function pointer
    LaneModels__rosidl_typesupport_introspection_c__get_function__Lane__additional_lanes,  // get(index) function pointer
    LaneModels__rosidl_typesupport_introspection_c__resize_function__Lane__additional_lanes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_members = {
  "derived_object_msgs__msg",  // message namespace
  "LaneModels",  // message name
  4,  // number of fields
  sizeof(derived_object_msgs__msg__LaneModels),
  LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_member_array,  // message members
  LaneModels__rosidl_typesupport_introspection_c__LaneModels_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneModels__rosidl_typesupport_introspection_c__LaneModels_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_type_support_handle = {
  0,
  &LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_derived_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, derived_object_msgs, msg, LaneModels)() {
  LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, derived_object_msgs, msg, Lane)();
  LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, derived_object_msgs, msg, Lane)();
  LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, derived_object_msgs, msg, Lane)();
  if (!LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_type_support_handle.typesupport_identifier) {
    LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneModels__rosidl_typesupport_introspection_c__LaneModels_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
