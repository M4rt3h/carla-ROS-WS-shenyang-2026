// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from neobotix_usboard_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "neobotix_usboard_msgs/msg/detail/sensors__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace neobotix_usboard_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Sensors_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) neobotix_usboard_msgs::msg::Sensors(_init);
}

void Sensors_fini_function(void * message_memory)
{
  auto typed_message = static_cast<neobotix_usboard_msgs::msg::Sensors *>(message_memory);
  typed_message->~Sensors();
}

size_t size_function__Sensors__sensors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<neobotix_usboard_msgs::msg::SensorData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Sensors__sensors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<neobotix_usboard_msgs::msg::SensorData> *>(untyped_member);
  return &member[index];
}

void * get_function__Sensors__sensors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<neobotix_usboard_msgs::msg::SensorData> *>(untyped_member);
  return &member[index];
}

void resize_function__Sensors__sensors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<neobotix_usboard_msgs::msg::SensorData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sensors_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs::msg::Sensors, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<neobotix_usboard_msgs::msg::SensorData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs::msg::Sensors, sensors),  // bytes offset in struct
    nullptr,  // default value
    size_function__Sensors__sensors,  // size() function pointer
    get_const_function__Sensors__sensors,  // get_const(index) function pointer
    get_function__Sensors__sensors,  // get(index) function pointer
    resize_function__Sensors__sensors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sensors_message_members = {
  "neobotix_usboard_msgs::msg",  // message namespace
  "Sensors",  // message name
  2,  // number of fields
  sizeof(neobotix_usboard_msgs::msg::Sensors),
  Sensors_message_member_array,  // message members
  Sensors_init_function,  // function to initialize message memory (memory has to be allocated)
  Sensors_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sensors_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sensors_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace neobotix_usboard_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<neobotix_usboard_msgs::msg::Sensors>()
{
  return &::neobotix_usboard_msgs::msg::rosidl_typesupport_introspection_cpp::Sensors_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, neobotix_usboard_msgs, msg, Sensors)() {
  return &::neobotix_usboard_msgs::msg::rosidl_typesupport_introspection_cpp::Sensors_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
