// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ibeo_msgs:msg/Velocity2D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ibeo_msgs/msg/detail/velocity2_d__rosidl_typesupport_introspection_c.h"
#include "ibeo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ibeo_msgs/msg/detail/velocity2_d__functions.h"
#include "ibeo_msgs/msg/detail/velocity2_d__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ibeo_msgs__msg__Velocity2D__init(message_memory);
}

void Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_fini_function(void * message_memory)
{
  ibeo_msgs__msg__Velocity2D__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_message_member_array[2] = {
  {
    "velocity_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Velocity2D, velocity_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Velocity2D, velocity_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_message_members = {
  "ibeo_msgs__msg",  // message namespace
  "Velocity2D",  // message name
  2,  // number of fields
  sizeof(ibeo_msgs__msg__Velocity2D),
  Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_message_member_array,  // message members
  Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_init_function,  // function to initialize message memory (memory has to be allocated)
  Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_message_type_support_handle = {
  0,
  &Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Velocity2D)() {
  if (!Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_message_type_support_handle.typesupport_identifier) {
    Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Velocity2D__rosidl_typesupport_introspection_c__Velocity2D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
