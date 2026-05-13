// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderTimestamps.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "delphi_mrr_msgs/msg/detail/mrr_header_timestamps__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace delphi_mrr_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MrrHeaderTimestamps_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) delphi_mrr_msgs::msg::MrrHeaderTimestamps(_init);
}

void MrrHeaderTimestamps_fini_function(void * message_memory)
{
  auto typed_message = static_cast<delphi_mrr_msgs::msg::MrrHeaderTimestamps *>(message_memory);
  typed_message->~MrrHeaderTimestamps();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MrrHeaderTimestamps_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderTimestamps, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_det_time_since_meas",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderTimestamps, can_det_time_since_meas),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_sensor_time_stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderTimestamps, can_sensor_time_stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MrrHeaderTimestamps_message_members = {
  "delphi_mrr_msgs::msg",  // message namespace
  "MrrHeaderTimestamps",  // message name
  3,  // number of fields
  sizeof(delphi_mrr_msgs::msg::MrrHeaderTimestamps),
  MrrHeaderTimestamps_message_member_array,  // message members
  MrrHeaderTimestamps_init_function,  // function to initialize message memory (memory has to be allocated)
  MrrHeaderTimestamps_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MrrHeaderTimestamps_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MrrHeaderTimestamps_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace delphi_mrr_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delphi_mrr_msgs::msg::MrrHeaderTimestamps>()
{
  return &::delphi_mrr_msgs::msg::rosidl_typesupport_introspection_cpp::MrrHeaderTimestamps_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delphi_mrr_msgs, msg, MrrHeaderTimestamps)() {
  return &::delphi_mrr_msgs::msg::rosidl_typesupport_introspection_cpp::MrrHeaderTimestamps_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
