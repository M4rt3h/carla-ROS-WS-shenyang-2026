// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from derived_object_msgs:msg/ObjectWithCovarianceArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "derived_object_msgs/msg/detail/object_with_covariance_array__rosidl_typesupport_introspection_c.h"
#include "derived_object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "derived_object_msgs/msg/detail/object_with_covariance_array__functions.h"
#include "derived_object_msgs/msg/detail/object_with_covariance_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "derived_object_msgs/msg/object_with_covariance.h"
// Member `objects`
#include "derived_object_msgs/msg/detail/object_with_covariance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  derived_object_msgs__msg__ObjectWithCovarianceArray__init(message_memory);
}

void ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_fini_function(void * message_memory)
{
  derived_object_msgs__msg__ObjectWithCovarianceArray__fini(message_memory);
}

size_t ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__size_function__ObjectWithCovariance__objects(
  const void * untyped_member)
{
  const derived_object_msgs__msg__ObjectWithCovariance__Sequence * member =
    (const derived_object_msgs__msg__ObjectWithCovariance__Sequence *)(untyped_member);
  return member->size;
}

const void * ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__get_const_function__ObjectWithCovariance__objects(
  const void * untyped_member, size_t index)
{
  const derived_object_msgs__msg__ObjectWithCovariance__Sequence * member =
    (const derived_object_msgs__msg__ObjectWithCovariance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__get_function__ObjectWithCovariance__objects(
  void * untyped_member, size_t index)
{
  derived_object_msgs__msg__ObjectWithCovariance__Sequence * member =
    (derived_object_msgs__msg__ObjectWithCovariance__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__resize_function__ObjectWithCovariance__objects(
  void * untyped_member, size_t size)
{
  derived_object_msgs__msg__ObjectWithCovariance__Sequence * member =
    (derived_object_msgs__msg__ObjectWithCovariance__Sequence *)(untyped_member);
  derived_object_msgs__msg__ObjectWithCovariance__Sequence__fini(member);
  return derived_object_msgs__msg__ObjectWithCovariance__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs__msg__ObjectWithCovarianceArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs__msg__ObjectWithCovarianceArray, objects),  // bytes offset in struct
    NULL,  // default value
    ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__size_function__ObjectWithCovariance__objects,  // size() function pointer
    ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__get_const_function__ObjectWithCovariance__objects,  // get_const(index) function pointer
    ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__get_function__ObjectWithCovariance__objects,  // get(index) function pointer
    ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__resize_function__ObjectWithCovariance__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_message_members = {
  "derived_object_msgs__msg",  // message namespace
  "ObjectWithCovarianceArray",  // message name
  2,  // number of fields
  sizeof(derived_object_msgs__msg__ObjectWithCovarianceArray),
  ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_message_member_array,  // message members
  ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_message_type_support_handle = {
  0,
  &ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_derived_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, derived_object_msgs, msg, ObjectWithCovarianceArray)() {
  ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, derived_object_msgs, msg, ObjectWithCovariance)();
  if (!ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_message_type_support_handle.typesupport_identifier) {
    ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectWithCovarianceArray__rosidl_typesupport_introspection_c__ObjectWithCovarianceArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
