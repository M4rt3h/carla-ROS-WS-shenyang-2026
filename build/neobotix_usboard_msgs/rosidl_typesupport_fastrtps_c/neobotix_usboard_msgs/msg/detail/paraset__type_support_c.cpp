// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from neobotix_usboard_msgs:msg/Paraset.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/paraset__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "neobotix_usboard_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "neobotix_usboard_msgs/msg/detail/paraset__struct.h"
#include "neobotix_usboard_msgs/msg/detail/paraset__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_neobotix_usboard_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_neobotix_usboard_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_neobotix_usboard_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Paraset__ros_msg_type = neobotix_usboard_msgs__msg__Paraset;

static bool _Paraset__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Paraset__ros_msg_type * ros_message = static_cast<const _Paraset__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: command
  {
    cdr << ros_message->command;
  }

  // Field name: set_num
  {
    cdr << ros_message->set_num;
  }

  // Field name: paraset_byte54
  {
    cdr << ros_message->paraset_byte54;
  }

  // Field name: paraset_byte53
  {
    cdr << ros_message->paraset_byte53;
  }

  // Field name: paraset_byte52
  {
    cdr << ros_message->paraset_byte52;
  }

  // Field name: paraset_byte51
  {
    cdr << ros_message->paraset_byte51;
  }

  // Field name: paraset_byte50
  {
    cdr << ros_message->paraset_byte50;
  }

  // Field name: paraset_byte49
  {
    cdr << ros_message->paraset_byte49;
  }

  // Field name: paraset_byte48
  {
    cdr << ros_message->paraset_byte48;
  }

  // Field name: paraset_byte47
  {
    cdr << ros_message->paraset_byte47;
  }

  // Field name: paraset_byte46
  {
    cdr << ros_message->paraset_byte46;
  }

  // Field name: paraset_byte45
  {
    cdr << ros_message->paraset_byte45;
  }

  // Field name: paraset_byte44
  {
    cdr << ros_message->paraset_byte44;
  }

  // Field name: paraset_byte43
  {
    cdr << ros_message->paraset_byte43;
  }

  // Field name: paraset_byte42
  {
    cdr << ros_message->paraset_byte42;
  }

  // Field name: paraset_byte41
  {
    cdr << ros_message->paraset_byte41;
  }

  // Field name: paraset_byte40
  {
    cdr << ros_message->paraset_byte40;
  }

  // Field name: paraset_byte39
  {
    cdr << ros_message->paraset_byte39;
  }

  // Field name: paraset_byte38
  {
    cdr << ros_message->paraset_byte38;
  }

  // Field name: paraset_byte37
  {
    cdr << ros_message->paraset_byte37;
  }

  // Field name: paraset_byte36
  {
    cdr << ros_message->paraset_byte36;
  }

  // Field name: paraset_byte35
  {
    cdr << ros_message->paraset_byte35;
  }

  // Field name: paraset_byte34
  {
    cdr << ros_message->paraset_byte34;
  }

  // Field name: paraset_byte33
  {
    cdr << ros_message->paraset_byte33;
  }

  // Field name: paraset_byte32
  {
    cdr << ros_message->paraset_byte32;
  }

  // Field name: paraset_byte31
  {
    cdr << ros_message->paraset_byte31;
  }

  // Field name: paraset_byte30
  {
    cdr << ros_message->paraset_byte30;
  }

  // Field name: paraset_byte29
  {
    cdr << ros_message->paraset_byte29;
  }

  // Field name: paraset_byte28
  {
    cdr << ros_message->paraset_byte28;
  }

  // Field name: paraset_byte27
  {
    cdr << ros_message->paraset_byte27;
  }

  // Field name: paraset_byte26
  {
    cdr << ros_message->paraset_byte26;
  }

  // Field name: paraset_byte25
  {
    cdr << ros_message->paraset_byte25;
  }

  // Field name: paraset_byte24
  {
    cdr << ros_message->paraset_byte24;
  }

  // Field name: paraset_byte23
  {
    cdr << ros_message->paraset_byte23;
  }

  // Field name: paraset_byte22
  {
    cdr << ros_message->paraset_byte22;
  }

  // Field name: paraset_byte21
  {
    cdr << ros_message->paraset_byte21;
  }

  // Field name: paraset_byte20
  {
    cdr << ros_message->paraset_byte20;
  }

  // Field name: paraset_byte19
  {
    cdr << ros_message->paraset_byte19;
  }

  // Field name: paraset_byte18
  {
    cdr << ros_message->paraset_byte18;
  }

  // Field name: paraset_byte17
  {
    cdr << ros_message->paraset_byte17;
  }

  // Field name: paraset_byte16
  {
    cdr << ros_message->paraset_byte16;
  }

  // Field name: paraset_byte15
  {
    cdr << ros_message->paraset_byte15;
  }

  // Field name: paraset_byte14
  {
    cdr << ros_message->paraset_byte14;
  }

  // Field name: paraset_byte13
  {
    cdr << ros_message->paraset_byte13;
  }

  // Field name: paraset_byte12
  {
    cdr << ros_message->paraset_byte12;
  }

  // Field name: paraset_byte11
  {
    cdr << ros_message->paraset_byte11;
  }

  // Field name: paraset_byte10
  {
    cdr << ros_message->paraset_byte10;
  }

  // Field name: paraset_byte9
  {
    cdr << ros_message->paraset_byte9;
  }

  // Field name: paraset_byte8
  {
    cdr << ros_message->paraset_byte8;
  }

  // Field name: paraset_byte7
  {
    cdr << ros_message->paraset_byte7;
  }

  // Field name: paraset_byte6
  {
    cdr << ros_message->paraset_byte6;
  }

  // Field name: paraset_byte5
  {
    cdr << ros_message->paraset_byte5;
  }

  // Field name: paraset_byte4
  {
    cdr << ros_message->paraset_byte4;
  }

  // Field name: paraset_byte3
  {
    cdr << ros_message->paraset_byte3;
  }

  // Field name: paraset_byte2
  {
    cdr << ros_message->paraset_byte2;
  }

  // Field name: paraset_byte1
  {
    cdr << ros_message->paraset_byte1;
  }

  return true;
}

static bool _Paraset__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Paraset__ros_msg_type * ros_message = static_cast<_Paraset__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: command
  {
    cdr >> ros_message->command;
  }

  // Field name: set_num
  {
    cdr >> ros_message->set_num;
  }

  // Field name: paraset_byte54
  {
    cdr >> ros_message->paraset_byte54;
  }

  // Field name: paraset_byte53
  {
    cdr >> ros_message->paraset_byte53;
  }

  // Field name: paraset_byte52
  {
    cdr >> ros_message->paraset_byte52;
  }

  // Field name: paraset_byte51
  {
    cdr >> ros_message->paraset_byte51;
  }

  // Field name: paraset_byte50
  {
    cdr >> ros_message->paraset_byte50;
  }

  // Field name: paraset_byte49
  {
    cdr >> ros_message->paraset_byte49;
  }

  // Field name: paraset_byte48
  {
    cdr >> ros_message->paraset_byte48;
  }

  // Field name: paraset_byte47
  {
    cdr >> ros_message->paraset_byte47;
  }

  // Field name: paraset_byte46
  {
    cdr >> ros_message->paraset_byte46;
  }

  // Field name: paraset_byte45
  {
    cdr >> ros_message->paraset_byte45;
  }

  // Field name: paraset_byte44
  {
    cdr >> ros_message->paraset_byte44;
  }

  // Field name: paraset_byte43
  {
    cdr >> ros_message->paraset_byte43;
  }

  // Field name: paraset_byte42
  {
    cdr >> ros_message->paraset_byte42;
  }

  // Field name: paraset_byte41
  {
    cdr >> ros_message->paraset_byte41;
  }

  // Field name: paraset_byte40
  {
    cdr >> ros_message->paraset_byte40;
  }

  // Field name: paraset_byte39
  {
    cdr >> ros_message->paraset_byte39;
  }

  // Field name: paraset_byte38
  {
    cdr >> ros_message->paraset_byte38;
  }

  // Field name: paraset_byte37
  {
    cdr >> ros_message->paraset_byte37;
  }

  // Field name: paraset_byte36
  {
    cdr >> ros_message->paraset_byte36;
  }

  // Field name: paraset_byte35
  {
    cdr >> ros_message->paraset_byte35;
  }

  // Field name: paraset_byte34
  {
    cdr >> ros_message->paraset_byte34;
  }

  // Field name: paraset_byte33
  {
    cdr >> ros_message->paraset_byte33;
  }

  // Field name: paraset_byte32
  {
    cdr >> ros_message->paraset_byte32;
  }

  // Field name: paraset_byte31
  {
    cdr >> ros_message->paraset_byte31;
  }

  // Field name: paraset_byte30
  {
    cdr >> ros_message->paraset_byte30;
  }

  // Field name: paraset_byte29
  {
    cdr >> ros_message->paraset_byte29;
  }

  // Field name: paraset_byte28
  {
    cdr >> ros_message->paraset_byte28;
  }

  // Field name: paraset_byte27
  {
    cdr >> ros_message->paraset_byte27;
  }

  // Field name: paraset_byte26
  {
    cdr >> ros_message->paraset_byte26;
  }

  // Field name: paraset_byte25
  {
    cdr >> ros_message->paraset_byte25;
  }

  // Field name: paraset_byte24
  {
    cdr >> ros_message->paraset_byte24;
  }

  // Field name: paraset_byte23
  {
    cdr >> ros_message->paraset_byte23;
  }

  // Field name: paraset_byte22
  {
    cdr >> ros_message->paraset_byte22;
  }

  // Field name: paraset_byte21
  {
    cdr >> ros_message->paraset_byte21;
  }

  // Field name: paraset_byte20
  {
    cdr >> ros_message->paraset_byte20;
  }

  // Field name: paraset_byte19
  {
    cdr >> ros_message->paraset_byte19;
  }

  // Field name: paraset_byte18
  {
    cdr >> ros_message->paraset_byte18;
  }

  // Field name: paraset_byte17
  {
    cdr >> ros_message->paraset_byte17;
  }

  // Field name: paraset_byte16
  {
    cdr >> ros_message->paraset_byte16;
  }

  // Field name: paraset_byte15
  {
    cdr >> ros_message->paraset_byte15;
  }

  // Field name: paraset_byte14
  {
    cdr >> ros_message->paraset_byte14;
  }

  // Field name: paraset_byte13
  {
    cdr >> ros_message->paraset_byte13;
  }

  // Field name: paraset_byte12
  {
    cdr >> ros_message->paraset_byte12;
  }

  // Field name: paraset_byte11
  {
    cdr >> ros_message->paraset_byte11;
  }

  // Field name: paraset_byte10
  {
    cdr >> ros_message->paraset_byte10;
  }

  // Field name: paraset_byte9
  {
    cdr >> ros_message->paraset_byte9;
  }

  // Field name: paraset_byte8
  {
    cdr >> ros_message->paraset_byte8;
  }

  // Field name: paraset_byte7
  {
    cdr >> ros_message->paraset_byte7;
  }

  // Field name: paraset_byte6
  {
    cdr >> ros_message->paraset_byte6;
  }

  // Field name: paraset_byte5
  {
    cdr >> ros_message->paraset_byte5;
  }

  // Field name: paraset_byte4
  {
    cdr >> ros_message->paraset_byte4;
  }

  // Field name: paraset_byte3
  {
    cdr >> ros_message->paraset_byte3;
  }

  // Field name: paraset_byte2
  {
    cdr >> ros_message->paraset_byte2;
  }

  // Field name: paraset_byte1
  {
    cdr >> ros_message->paraset_byte1;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_neobotix_usboard_msgs
size_t get_serialized_size_neobotix_usboard_msgs__msg__Paraset(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Paraset__ros_msg_type * ros_message = static_cast<const _Paraset__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name command
  {
    size_t item_size = sizeof(ros_message->command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_num
  {
    size_t item_size = sizeof(ros_message->set_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte54
  {
    size_t item_size = sizeof(ros_message->paraset_byte54);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte53
  {
    size_t item_size = sizeof(ros_message->paraset_byte53);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte52
  {
    size_t item_size = sizeof(ros_message->paraset_byte52);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte51
  {
    size_t item_size = sizeof(ros_message->paraset_byte51);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte50
  {
    size_t item_size = sizeof(ros_message->paraset_byte50);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte49
  {
    size_t item_size = sizeof(ros_message->paraset_byte49);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte48
  {
    size_t item_size = sizeof(ros_message->paraset_byte48);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte47
  {
    size_t item_size = sizeof(ros_message->paraset_byte47);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte46
  {
    size_t item_size = sizeof(ros_message->paraset_byte46);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte45
  {
    size_t item_size = sizeof(ros_message->paraset_byte45);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte44
  {
    size_t item_size = sizeof(ros_message->paraset_byte44);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte43
  {
    size_t item_size = sizeof(ros_message->paraset_byte43);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte42
  {
    size_t item_size = sizeof(ros_message->paraset_byte42);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte41
  {
    size_t item_size = sizeof(ros_message->paraset_byte41);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte40
  {
    size_t item_size = sizeof(ros_message->paraset_byte40);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte39
  {
    size_t item_size = sizeof(ros_message->paraset_byte39);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte38
  {
    size_t item_size = sizeof(ros_message->paraset_byte38);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte37
  {
    size_t item_size = sizeof(ros_message->paraset_byte37);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte36
  {
    size_t item_size = sizeof(ros_message->paraset_byte36);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte35
  {
    size_t item_size = sizeof(ros_message->paraset_byte35);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte34
  {
    size_t item_size = sizeof(ros_message->paraset_byte34);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte33
  {
    size_t item_size = sizeof(ros_message->paraset_byte33);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte32
  {
    size_t item_size = sizeof(ros_message->paraset_byte32);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte31
  {
    size_t item_size = sizeof(ros_message->paraset_byte31);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte30
  {
    size_t item_size = sizeof(ros_message->paraset_byte30);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte29
  {
    size_t item_size = sizeof(ros_message->paraset_byte29);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte28
  {
    size_t item_size = sizeof(ros_message->paraset_byte28);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte27
  {
    size_t item_size = sizeof(ros_message->paraset_byte27);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte26
  {
    size_t item_size = sizeof(ros_message->paraset_byte26);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte25
  {
    size_t item_size = sizeof(ros_message->paraset_byte25);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte24
  {
    size_t item_size = sizeof(ros_message->paraset_byte24);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte23
  {
    size_t item_size = sizeof(ros_message->paraset_byte23);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte22
  {
    size_t item_size = sizeof(ros_message->paraset_byte22);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte21
  {
    size_t item_size = sizeof(ros_message->paraset_byte21);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte20
  {
    size_t item_size = sizeof(ros_message->paraset_byte20);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte19
  {
    size_t item_size = sizeof(ros_message->paraset_byte19);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte18
  {
    size_t item_size = sizeof(ros_message->paraset_byte18);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte17
  {
    size_t item_size = sizeof(ros_message->paraset_byte17);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte16
  {
    size_t item_size = sizeof(ros_message->paraset_byte16);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte15
  {
    size_t item_size = sizeof(ros_message->paraset_byte15);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte14
  {
    size_t item_size = sizeof(ros_message->paraset_byte14);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte13
  {
    size_t item_size = sizeof(ros_message->paraset_byte13);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte12
  {
    size_t item_size = sizeof(ros_message->paraset_byte12);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte11
  {
    size_t item_size = sizeof(ros_message->paraset_byte11);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte10
  {
    size_t item_size = sizeof(ros_message->paraset_byte10);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte9
  {
    size_t item_size = sizeof(ros_message->paraset_byte9);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte8
  {
    size_t item_size = sizeof(ros_message->paraset_byte8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte7
  {
    size_t item_size = sizeof(ros_message->paraset_byte7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte6
  {
    size_t item_size = sizeof(ros_message->paraset_byte6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte5
  {
    size_t item_size = sizeof(ros_message->paraset_byte5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte4
  {
    size_t item_size = sizeof(ros_message->paraset_byte4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte3
  {
    size_t item_size = sizeof(ros_message->paraset_byte3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte2
  {
    size_t item_size = sizeof(ros_message->paraset_byte2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name paraset_byte1
  {
    size_t item_size = sizeof(ros_message->paraset_byte1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Paraset__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_neobotix_usboard_msgs__msg__Paraset(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_neobotix_usboard_msgs
size_t max_serialized_size_neobotix_usboard_msgs__msg__Paraset(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: set_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte54
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte53
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte52
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte51
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte50
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte49
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte48
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte47
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte46
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte45
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte44
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte43
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte42
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte41
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte40
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte39
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte38
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte37
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte36
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte35
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte34
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte33
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte32
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte31
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte30
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte29
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte28
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte27
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte26
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte25
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte24
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte23
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte22
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte21
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte20
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte19
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte18
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte17
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte16
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte15
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte14
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte13
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte12
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte11
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte10
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte9
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte8
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: paraset_byte1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Paraset__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_neobotix_usboard_msgs__msg__Paraset(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Paraset = {
  "neobotix_usboard_msgs::msg",
  "Paraset",
  _Paraset__cdr_serialize,
  _Paraset__cdr_deserialize,
  _Paraset__get_serialized_size,
  _Paraset__max_serialized_size
};

static rosidl_message_type_support_t _Paraset__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Paraset,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, neobotix_usboard_msgs, msg, Paraset)() {
  return &_Paraset__type_support;
}

#if defined(__cplusplus)
}
#endif
