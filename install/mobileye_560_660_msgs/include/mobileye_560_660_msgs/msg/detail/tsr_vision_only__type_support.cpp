// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mobileye_560_660_msgs:msg/TsrVisionOnly.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mobileye_560_660_msgs/msg/detail/tsr_vision_only__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mobileye_560_660_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TsrVisionOnly_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mobileye_560_660_msgs::msg::TsrVisionOnly(_init);
}

void TsrVisionOnly_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mobileye_560_660_msgs::msg::TsrVisionOnly *>(message_memory);
  typed_message->~TsrVisionOnly();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TsrVisionOnly_message_member_array[9] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::TsrVisionOnly, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vision_only_sign_type_display1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::TsrVisionOnly, vision_only_sign_type_display1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vision_only_supplementary_sign_type_display1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::TsrVisionOnly, vision_only_supplementary_sign_type_display1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vision_only_sign_type_display2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::TsrVisionOnly, vision_only_sign_type_display2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vision_only_supplementary_sign_type_display2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::TsrVisionOnly, vision_only_supplementary_sign_type_display2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vision_only_sign_type_display3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::TsrVisionOnly, vision_only_sign_type_display3),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vision_only_supplementary_sign_type_display3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::TsrVisionOnly, vision_only_supplementary_sign_type_display3),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vision_only_sign_type_display4",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::TsrVisionOnly, vision_only_sign_type_display4),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vision_only_supplementary_sign_type_display4",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::TsrVisionOnly, vision_only_supplementary_sign_type_display4),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TsrVisionOnly_message_members = {
  "mobileye_560_660_msgs::msg",  // message namespace
  "TsrVisionOnly",  // message name
  9,  // number of fields
  sizeof(mobileye_560_660_msgs::msg::TsrVisionOnly),
  TsrVisionOnly_message_member_array,  // message members
  TsrVisionOnly_init_function,  // function to initialize message memory (memory has to be allocated)
  TsrVisionOnly_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TsrVisionOnly_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TsrVisionOnly_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mobileye_560_660_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mobileye_560_660_msgs::msg::TsrVisionOnly>()
{
  return &::mobileye_560_660_msgs::msg::rosidl_typesupport_introspection_cpp::TsrVisionOnly_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mobileye_560_660_msgs, msg, TsrVisionOnly)() {
  return &::mobileye_560_660_msgs::msg::rosidl_typesupport_introspection_cpp::TsrVisionOnly_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
