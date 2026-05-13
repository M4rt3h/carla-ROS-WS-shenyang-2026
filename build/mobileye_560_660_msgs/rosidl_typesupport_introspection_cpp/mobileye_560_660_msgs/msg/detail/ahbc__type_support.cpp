// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mobileye_560_660_msgs:msg/Ahbc.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mobileye_560_660_msgs/msg/detail/ahbc__struct.hpp"
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

void Ahbc_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mobileye_560_660_msgs::msg::Ahbc(_init);
}

void Ahbc_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mobileye_560_660_msgs::msg::Ahbc *>(message_memory);
  typed_message->~Ahbc();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Ahbc_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::Ahbc, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "high_low_beam_decision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::Ahbc, high_low_beam_decision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reasons_for_switch_to_low_beam",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::Ahbc, reasons_for_switch_to_low_beam),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Ahbc_message_members = {
  "mobileye_560_660_msgs::msg",  // message namespace
  "Ahbc",  // message name
  3,  // number of fields
  sizeof(mobileye_560_660_msgs::msg::Ahbc),
  Ahbc_message_member_array,  // message members
  Ahbc_init_function,  // function to initialize message memory (memory has to be allocated)
  Ahbc_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Ahbc_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Ahbc_message_members,
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
get_message_type_support_handle<mobileye_560_660_msgs::msg::Ahbc>()
{
  return &::mobileye_560_660_msgs::msg::rosidl_typesupport_introspection_cpp::Ahbc_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mobileye_560_660_msgs, msg, Ahbc)() {
  return &::mobileye_560_660_msgs::msg::rosidl_typesupport_introspection_cpp::Ahbc_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
