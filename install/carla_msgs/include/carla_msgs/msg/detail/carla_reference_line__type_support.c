// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:msg/CarlaReferenceLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/msg/detail/carla_reference_line__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/msg/detail/carla_reference_line__functions.h"
#include "carla_msgs/msg/detail/carla_reference_line__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `reference_line`
#include "carla_msgs/msg/carla_reference_point.h"
// Member `reference_line`
#include "carla_msgs/msg/detail/carla_reference_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__msg__CarlaReferenceLine__init(message_memory);
}

void CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_fini_function(void * message_memory)
{
  carla_msgs__msg__CarlaReferenceLine__fini(message_memory);
}

size_t CarlaReferenceLine__rosidl_typesupport_introspection_c__size_function__CarlaReferencePoint__reference_line(
  const void * untyped_member)
{
  const carla_msgs__msg__CarlaReferencePoint__Sequence * member =
    (const carla_msgs__msg__CarlaReferencePoint__Sequence *)(untyped_member);
  return member->size;
}

const void * CarlaReferenceLine__rosidl_typesupport_introspection_c__get_const_function__CarlaReferencePoint__reference_line(
  const void * untyped_member, size_t index)
{
  const carla_msgs__msg__CarlaReferencePoint__Sequence * member =
    (const carla_msgs__msg__CarlaReferencePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CarlaReferenceLine__rosidl_typesupport_introspection_c__get_function__CarlaReferencePoint__reference_line(
  void * untyped_member, size_t index)
{
  carla_msgs__msg__CarlaReferencePoint__Sequence * member =
    (carla_msgs__msg__CarlaReferencePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CarlaReferenceLine__rosidl_typesupport_introspection_c__resize_function__CarlaReferencePoint__reference_line(
  void * untyped_member, size_t size)
{
  carla_msgs__msg__CarlaReferencePoint__Sequence * member =
    (carla_msgs__msg__CarlaReferencePoint__Sequence *)(untyped_member);
  carla_msgs__msg__CarlaReferencePoint__Sequence__fini(member);
  return carla_msgs__msg__CarlaReferencePoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaReferenceLine, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaReferenceLine, reference_line),  // bytes offset in struct
    NULL,  // default value
    CarlaReferenceLine__rosidl_typesupport_introspection_c__size_function__CarlaReferencePoint__reference_line,  // size() function pointer
    CarlaReferenceLine__rosidl_typesupport_introspection_c__get_const_function__CarlaReferencePoint__reference_line,  // get_const(index) function pointer
    CarlaReferenceLine__rosidl_typesupport_introspection_c__get_function__CarlaReferencePoint__reference_line,  // get(index) function pointer
    CarlaReferenceLine__rosidl_typesupport_introspection_c__resize_function__CarlaReferencePoint__reference_line  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_message_members = {
  "carla_msgs__msg",  // message namespace
  "CarlaReferenceLine",  // message name
  2,  // number of fields
  sizeof(carla_msgs__msg__CarlaReferenceLine),
  CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_message_member_array,  // message members
  CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_message_type_support_handle = {
  0,
  &CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaReferenceLine)() {
  CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaReferencePoint)();
  if (!CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_message_type_support_handle.typesupport_identifier) {
    CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaReferenceLine__rosidl_typesupport_introspection_c__CarlaReferenceLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
