// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kartech_linear_actuator_msgs:msg/ConfigureOutputsKdFreqDeadbandCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_kd_freq_deadband_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ConfigureOutputsKdFreqDeadbandCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd(_init);
}

void ConfigureOutputsKdFreqDeadbandCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd *>(message_memory);
  typed_message->~ConfigureOutputsKdFreqDeadbandCmd();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConfigureOutputsKdFreqDeadbandCmd_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confirm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd, confirm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd, kd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "closed_loop_freq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd, closed_loop_freq),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_dead_band",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd, error_dead_band),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConfigureOutputsKdFreqDeadbandCmd_message_members = {
  "kartech_linear_actuator_msgs::msg",  // message namespace
  "ConfigureOutputsKdFreqDeadbandCmd",  // message name
  5,  // number of fields
  sizeof(kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd),
  ConfigureOutputsKdFreqDeadbandCmd_message_member_array,  // message members
  ConfigureOutputsKdFreqDeadbandCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureOutputsKdFreqDeadbandCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConfigureOutputsKdFreqDeadbandCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConfigureOutputsKdFreqDeadbandCmd_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd>()
{
  return &::kartech_linear_actuator_msgs::msg::rosidl_typesupport_introspection_cpp::ConfigureOutputsKdFreqDeadbandCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kartech_linear_actuator_msgs, msg, ConfigureOutputsKdFreqDeadbandCmd)() {
  return &::kartech_linear_actuator_msgs::msg::rosidl_typesupport_introspection_cpp::ConfigureOutputsKdFreqDeadbandCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
