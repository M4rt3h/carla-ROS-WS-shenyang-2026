// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from neobotix_usboard_msgs:msg/AnsToCmdConnect.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "neobotix_usboard_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "neobotix_usboard_msgs/msg/detail/ans_to_cmd_connect__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace neobotix_usboard_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _AnsToCmdConnect_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AnsToCmdConnect_type_support_ids_t;

static const _AnsToCmdConnect_type_support_ids_t _AnsToCmdConnect_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AnsToCmdConnect_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AnsToCmdConnect_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AnsToCmdConnect_type_support_symbol_names_t _AnsToCmdConnect_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, neobotix_usboard_msgs, msg, AnsToCmdConnect)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neobotix_usboard_msgs, msg, AnsToCmdConnect)),
  }
};

typedef struct _AnsToCmdConnect_type_support_data_t
{
  void * data[2];
} _AnsToCmdConnect_type_support_data_t;

static _AnsToCmdConnect_type_support_data_t _AnsToCmdConnect_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AnsToCmdConnect_message_typesupport_map = {
  2,
  "neobotix_usboard_msgs",
  &_AnsToCmdConnect_message_typesupport_ids.typesupport_identifier[0],
  &_AnsToCmdConnect_message_typesupport_symbol_names.symbol_name[0],
  &_AnsToCmdConnect_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AnsToCmdConnect_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AnsToCmdConnect_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace neobotix_usboard_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_neobotix_usboard_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, neobotix_usboard_msgs, msg, AnsToCmdConnect)() {
  return &::neobotix_usboard_msgs::msg::rosidl_typesupport_c::AnsToCmdConnect_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
