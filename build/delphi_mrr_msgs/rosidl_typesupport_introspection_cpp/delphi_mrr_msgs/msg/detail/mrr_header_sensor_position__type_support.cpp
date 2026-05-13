// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderSensorPosition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "delphi_mrr_msgs/msg/detail/mrr_header_sensor_position__struct.hpp"
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

void MrrHeaderSensorPosition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) delphi_mrr_msgs::msg::MrrHeaderSensorPosition(_init);
}

void MrrHeaderSensorPosition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<delphi_mrr_msgs::msg::MrrHeaderSensorPosition *>(message_memory);
  typed_message->~MrrHeaderSensorPosition();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MrrHeaderSensorPosition_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderSensorPosition, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_sensor_polarity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderSensorPosition, can_sensor_polarity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_sensor_lat_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderSensorPosition, can_sensor_lat_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_sensor_long_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderSensorPosition, can_sensor_long_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_sensor_hangle_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderSensorPosition, can_sensor_hangle_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MrrHeaderSensorPosition_message_members = {
  "delphi_mrr_msgs::msg",  // message namespace
  "MrrHeaderSensorPosition",  // message name
  5,  // number of fields
  sizeof(delphi_mrr_msgs::msg::MrrHeaderSensorPosition),
  MrrHeaderSensorPosition_message_member_array,  // message members
  MrrHeaderSensorPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  MrrHeaderSensorPosition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MrrHeaderSensorPosition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MrrHeaderSensorPosition_message_members,
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
get_message_type_support_handle<delphi_mrr_msgs::msg::MrrHeaderSensorPosition>()
{
  return &::delphi_mrr_msgs::msg::rosidl_typesupport_introspection_cpp::MrrHeaderSensorPosition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delphi_mrr_msgs, msg, MrrHeaderSensorPosition)() {
  return &::delphi_mrr_msgs::msg::rosidl_typesupport_introspection_cpp::MrrHeaderSensorPosition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
