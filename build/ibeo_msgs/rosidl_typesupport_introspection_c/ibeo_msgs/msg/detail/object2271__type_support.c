// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ibeo_msgs:msg/Object2271.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ibeo_msgs/msg/detail/object2271__rosidl_typesupport_introspection_c.h"
#include "ibeo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ibeo_msgs/msg/detail/object2271__functions.h"
#include "ibeo_msgs/msg/detail/object2271__struct.h"


// Include directives for member types
// Member `tracked_properties`
#include "ibeo_msgs/msg/tracked_properties.h"
// Member `tracked_properties`
#include "ibeo_msgs/msg/detail/tracked_properties__rosidl_typesupport_introspection_c.h"
// Member `untracked_properties`
#include "ibeo_msgs/msg/untracked_properties.h"
// Member `untracked_properties`
#include "ibeo_msgs/msg/detail/untracked_properties__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Object2271__rosidl_typesupport_introspection_c__Object2271_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ibeo_msgs__msg__Object2271__init(message_memory);
}

void Object2271__rosidl_typesupport_introspection_c__Object2271_fini_function(void * message_memory)
{
  ibeo_msgs__msg__Object2271__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Object2271__rosidl_typesupport_introspection_c__Object2271_message_member_array[5] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2271, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracked_properties_available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2271, tracked_properties_available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "untracked_properties_available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2271, untracked_properties_available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracked_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2271, tracked_properties),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "untracked_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2271, untracked_properties),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Object2271__rosidl_typesupport_introspection_c__Object2271_message_members = {
  "ibeo_msgs__msg",  // message namespace
  "Object2271",  // message name
  5,  // number of fields
  sizeof(ibeo_msgs__msg__Object2271),
  Object2271__rosidl_typesupport_introspection_c__Object2271_message_member_array,  // message members
  Object2271__rosidl_typesupport_introspection_c__Object2271_init_function,  // function to initialize message memory (memory has to be allocated)
  Object2271__rosidl_typesupport_introspection_c__Object2271_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Object2271__rosidl_typesupport_introspection_c__Object2271_message_type_support_handle = {
  0,
  &Object2271__rosidl_typesupport_introspection_c__Object2271_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Object2271)() {
  Object2271__rosidl_typesupport_introspection_c__Object2271_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, TrackedProperties)();
  Object2271__rosidl_typesupport_introspection_c__Object2271_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, UntrackedProperties)();
  if (!Object2271__rosidl_typesupport_introspection_c__Object2271_message_type_support_handle.typesupport_identifier) {
    Object2271__rosidl_typesupport_introspection_c__Object2271_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Object2271__rosidl_typesupport_introspection_c__Object2271_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
