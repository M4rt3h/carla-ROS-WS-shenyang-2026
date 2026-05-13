// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carla_msgs:msg/CarlaReferenceLine.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carla_msgs/msg/detail/carla_reference_line__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carla_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CarlaReferenceLine_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carla_msgs::msg::CarlaReferenceLine(_init);
}

void CarlaReferenceLine_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carla_msgs::msg::CarlaReferenceLine *>(message_memory);
  typed_message->~CarlaReferenceLine();
}

size_t size_function__CarlaReferenceLine__reference_line(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carla_msgs::msg::CarlaReferencePoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CarlaReferenceLine__reference_line(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carla_msgs::msg::CarlaReferencePoint> *>(untyped_member);
  return &member[index];
}

void * get_function__CarlaReferenceLine__reference_line(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carla_msgs::msg::CarlaReferencePoint> *>(untyped_member);
  return &member[index];
}

void resize_function__CarlaReferenceLine__reference_line(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carla_msgs::msg::CarlaReferencePoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CarlaReferenceLine_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs::msg::CarlaReferenceLine, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reference_line",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carla_msgs::msg::CarlaReferencePoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs::msg::CarlaReferenceLine, reference_line),  // bytes offset in struct
    nullptr,  // default value
    size_function__CarlaReferenceLine__reference_line,  // size() function pointer
    get_const_function__CarlaReferenceLine__reference_line,  // get_const(index) function pointer
    get_function__CarlaReferenceLine__reference_line,  // get(index) function pointer
    resize_function__CarlaReferenceLine__reference_line  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CarlaReferenceLine_message_members = {
  "carla_msgs::msg",  // message namespace
  "CarlaReferenceLine",  // message name
  2,  // number of fields
  sizeof(carla_msgs::msg::CarlaReferenceLine),
  CarlaReferenceLine_message_member_array,  // message members
  CarlaReferenceLine_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaReferenceLine_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CarlaReferenceLine_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CarlaReferenceLine_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carla_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_msgs::msg::CarlaReferenceLine>()
{
  return &::carla_msgs::msg::rosidl_typesupport_introspection_cpp::CarlaReferenceLine_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carla_msgs, msg, CarlaReferenceLine)() {
  return &::carla_msgs::msg::rosidl_typesupport_introspection_cpp::CarlaReferenceLine_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
