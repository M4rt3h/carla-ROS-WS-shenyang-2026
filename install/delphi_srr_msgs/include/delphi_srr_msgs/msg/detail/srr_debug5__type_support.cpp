// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from delphi_srr_msgs:msg/SrrDebug5.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "delphi_srr_msgs/msg/detail/srr_debug5__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace delphi_srr_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SrrDebug5_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) delphi_srr_msgs::msg::SrrDebug5(_init);
}

void SrrDebug5_fini_function(void * message_memory)
{
  auto typed_message = static_cast<delphi_srr_msgs::msg::SrrDebug5 *>(message_memory);
  typed_message->~SrrDebug5();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SrrDebug5_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs::msg::SrrDebug5, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_tx_align_updates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs::msg::SrrDebug5, can_tx_align_updates),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SrrDebug5_message_members = {
  "delphi_srr_msgs::msg",  // message namespace
  "SrrDebug5",  // message name
  2,  // number of fields
  sizeof(delphi_srr_msgs::msg::SrrDebug5),
  SrrDebug5_message_member_array,  // message members
  SrrDebug5_init_function,  // function to initialize message memory (memory has to be allocated)
  SrrDebug5_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SrrDebug5_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SrrDebug5_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace delphi_srr_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delphi_srr_msgs::msg::SrrDebug5>()
{
  return &::delphi_srr_msgs::msg::rosidl_typesupport_introspection_cpp::SrrDebug5_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delphi_srr_msgs, msg, SrrDebug5)() {
  return &::delphi_srr_msgs::msg::rosidl_typesupport_introspection_cpp::SrrDebug5_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
