// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mobileye_560_660_msgs:msg/TsrVisionOnly.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mobileye_560_660_msgs/msg/detail/tsr_vision_only__rosidl_typesupport_introspection_c.h"
#include "mobileye_560_660_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mobileye_560_660_msgs/msg/detail/tsr_vision_only__functions.h"
#include "mobileye_560_660_msgs/msg/detail/tsr_vision_only__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mobileye_560_660_msgs__msg__TsrVisionOnly__init(message_memory);
}

void TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_fini_function(void * message_memory)
{
  mobileye_560_660_msgs__msg__TsrVisionOnly__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs__msg__TsrVisionOnly, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vision_only_sign_type_display1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs__msg__TsrVisionOnly, vision_only_sign_type_display1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vision_only_supplementary_sign_type_display1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs__msg__TsrVisionOnly, vision_only_supplementary_sign_type_display1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vision_only_sign_type_display2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs__msg__TsrVisionOnly, vision_only_sign_type_display2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vision_only_supplementary_sign_type_display2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs__msg__TsrVisionOnly, vision_only_supplementary_sign_type_display2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vision_only_sign_type_display3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs__msg__TsrVisionOnly, vision_only_sign_type_display3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vision_only_supplementary_sign_type_display3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs__msg__TsrVisionOnly, vision_only_supplementary_sign_type_display3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vision_only_sign_type_display4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs__msg__TsrVisionOnly, vision_only_sign_type_display4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vision_only_supplementary_sign_type_display4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs__msg__TsrVisionOnly, vision_only_supplementary_sign_type_display4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_message_members = {
  "mobileye_560_660_msgs__msg",  // message namespace
  "TsrVisionOnly",  // message name
  9,  // number of fields
  sizeof(mobileye_560_660_msgs__msg__TsrVisionOnly),
  TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_message_member_array,  // message members
  TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_init_function,  // function to initialize message memory (memory has to be allocated)
  TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_message_type_support_handle = {
  0,
  &TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mobileye_560_660_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mobileye_560_660_msgs, msg, TsrVisionOnly)() {
  TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_message_type_support_handle.typesupport_identifier) {
    TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TsrVisionOnly__rosidl_typesupport_introspection_c__TsrVisionOnly_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
