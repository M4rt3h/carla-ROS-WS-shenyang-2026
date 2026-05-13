// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from neobotix_usboard_msgs:msg/Paraset.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/paraset__rosidl_typesupport_fastrtps_cpp.hpp"
#include "neobotix_usboard_msgs/msg/detail/paraset__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace neobotix_usboard_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
cdr_serialize(
  const neobotix_usboard_msgs::msg::Paraset & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: command
  cdr << ros_message.command;
  // Member: set_num
  cdr << ros_message.set_num;
  // Member: paraset_byte54
  cdr << ros_message.paraset_byte54;
  // Member: paraset_byte53
  cdr << ros_message.paraset_byte53;
  // Member: paraset_byte52
  cdr << ros_message.paraset_byte52;
  // Member: paraset_byte51
  cdr << ros_message.paraset_byte51;
  // Member: paraset_byte50
  cdr << ros_message.paraset_byte50;
  // Member: paraset_byte49
  cdr << ros_message.paraset_byte49;
  // Member: paraset_byte48
  cdr << ros_message.paraset_byte48;
  // Member: paraset_byte47
  cdr << ros_message.paraset_byte47;
  // Member: paraset_byte46
  cdr << ros_message.paraset_byte46;
  // Member: paraset_byte45
  cdr << ros_message.paraset_byte45;
  // Member: paraset_byte44
  cdr << ros_message.paraset_byte44;
  // Member: paraset_byte43
  cdr << ros_message.paraset_byte43;
  // Member: paraset_byte42
  cdr << ros_message.paraset_byte42;
  // Member: paraset_byte41
  cdr << ros_message.paraset_byte41;
  // Member: paraset_byte40
  cdr << ros_message.paraset_byte40;
  // Member: paraset_byte39
  cdr << ros_message.paraset_byte39;
  // Member: paraset_byte38
  cdr << ros_message.paraset_byte38;
  // Member: paraset_byte37
  cdr << ros_message.paraset_byte37;
  // Member: paraset_byte36
  cdr << ros_message.paraset_byte36;
  // Member: paraset_byte35
  cdr << ros_message.paraset_byte35;
  // Member: paraset_byte34
  cdr << ros_message.paraset_byte34;
  // Member: paraset_byte33
  cdr << ros_message.paraset_byte33;
  // Member: paraset_byte32
  cdr << ros_message.paraset_byte32;
  // Member: paraset_byte31
  cdr << ros_message.paraset_byte31;
  // Member: paraset_byte30
  cdr << ros_message.paraset_byte30;
  // Member: paraset_byte29
  cdr << ros_message.paraset_byte29;
  // Member: paraset_byte28
  cdr << ros_message.paraset_byte28;
  // Member: paraset_byte27
  cdr << ros_message.paraset_byte27;
  // Member: paraset_byte26
  cdr << ros_message.paraset_byte26;
  // Member: paraset_byte25
  cdr << ros_message.paraset_byte25;
  // Member: paraset_byte24
  cdr << ros_message.paraset_byte24;
  // Member: paraset_byte23
  cdr << ros_message.paraset_byte23;
  // Member: paraset_byte22
  cdr << ros_message.paraset_byte22;
  // Member: paraset_byte21
  cdr << ros_message.paraset_byte21;
  // Member: paraset_byte20
  cdr << ros_message.paraset_byte20;
  // Member: paraset_byte19
  cdr << ros_message.paraset_byte19;
  // Member: paraset_byte18
  cdr << ros_message.paraset_byte18;
  // Member: paraset_byte17
  cdr << ros_message.paraset_byte17;
  // Member: paraset_byte16
  cdr << ros_message.paraset_byte16;
  // Member: paraset_byte15
  cdr << ros_message.paraset_byte15;
  // Member: paraset_byte14
  cdr << ros_message.paraset_byte14;
  // Member: paraset_byte13
  cdr << ros_message.paraset_byte13;
  // Member: paraset_byte12
  cdr << ros_message.paraset_byte12;
  // Member: paraset_byte11
  cdr << ros_message.paraset_byte11;
  // Member: paraset_byte10
  cdr << ros_message.paraset_byte10;
  // Member: paraset_byte9
  cdr << ros_message.paraset_byte9;
  // Member: paraset_byte8
  cdr << ros_message.paraset_byte8;
  // Member: paraset_byte7
  cdr << ros_message.paraset_byte7;
  // Member: paraset_byte6
  cdr << ros_message.paraset_byte6;
  // Member: paraset_byte5
  cdr << ros_message.paraset_byte5;
  // Member: paraset_byte4
  cdr << ros_message.paraset_byte4;
  // Member: paraset_byte3
  cdr << ros_message.paraset_byte3;
  // Member: paraset_byte2
  cdr << ros_message.paraset_byte2;
  // Member: paraset_byte1
  cdr << ros_message.paraset_byte1;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  neobotix_usboard_msgs::msg::Paraset & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: command
  cdr >> ros_message.command;

  // Member: set_num
  cdr >> ros_message.set_num;

  // Member: paraset_byte54
  cdr >> ros_message.paraset_byte54;

  // Member: paraset_byte53
  cdr >> ros_message.paraset_byte53;

  // Member: paraset_byte52
  cdr >> ros_message.paraset_byte52;

  // Member: paraset_byte51
  cdr >> ros_message.paraset_byte51;

  // Member: paraset_byte50
  cdr >> ros_message.paraset_byte50;

  // Member: paraset_byte49
  cdr >> ros_message.paraset_byte49;

  // Member: paraset_byte48
  cdr >> ros_message.paraset_byte48;

  // Member: paraset_byte47
  cdr >> ros_message.paraset_byte47;

  // Member: paraset_byte46
  cdr >> ros_message.paraset_byte46;

  // Member: paraset_byte45
  cdr >> ros_message.paraset_byte45;

  // Member: paraset_byte44
  cdr >> ros_message.paraset_byte44;

  // Member: paraset_byte43
  cdr >> ros_message.paraset_byte43;

  // Member: paraset_byte42
  cdr >> ros_message.paraset_byte42;

  // Member: paraset_byte41
  cdr >> ros_message.paraset_byte41;

  // Member: paraset_byte40
  cdr >> ros_message.paraset_byte40;

  // Member: paraset_byte39
  cdr >> ros_message.paraset_byte39;

  // Member: paraset_byte38
  cdr >> ros_message.paraset_byte38;

  // Member: paraset_byte37
  cdr >> ros_message.paraset_byte37;

  // Member: paraset_byte36
  cdr >> ros_message.paraset_byte36;

  // Member: paraset_byte35
  cdr >> ros_message.paraset_byte35;

  // Member: paraset_byte34
  cdr >> ros_message.paraset_byte34;

  // Member: paraset_byte33
  cdr >> ros_message.paraset_byte33;

  // Member: paraset_byte32
  cdr >> ros_message.paraset_byte32;

  // Member: paraset_byte31
  cdr >> ros_message.paraset_byte31;

  // Member: paraset_byte30
  cdr >> ros_message.paraset_byte30;

  // Member: paraset_byte29
  cdr >> ros_message.paraset_byte29;

  // Member: paraset_byte28
  cdr >> ros_message.paraset_byte28;

  // Member: paraset_byte27
  cdr >> ros_message.paraset_byte27;

  // Member: paraset_byte26
  cdr >> ros_message.paraset_byte26;

  // Member: paraset_byte25
  cdr >> ros_message.paraset_byte25;

  // Member: paraset_byte24
  cdr >> ros_message.paraset_byte24;

  // Member: paraset_byte23
  cdr >> ros_message.paraset_byte23;

  // Member: paraset_byte22
  cdr >> ros_message.paraset_byte22;

  // Member: paraset_byte21
  cdr >> ros_message.paraset_byte21;

  // Member: paraset_byte20
  cdr >> ros_message.paraset_byte20;

  // Member: paraset_byte19
  cdr >> ros_message.paraset_byte19;

  // Member: paraset_byte18
  cdr >> ros_message.paraset_byte18;

  // Member: paraset_byte17
  cdr >> ros_message.paraset_byte17;

  // Member: paraset_byte16
  cdr >> ros_message.paraset_byte16;

  // Member: paraset_byte15
  cdr >> ros_message.paraset_byte15;

  // Member: paraset_byte14
  cdr >> ros_message.paraset_byte14;

  // Member: paraset_byte13
  cdr >> ros_message.paraset_byte13;

  // Member: paraset_byte12
  cdr >> ros_message.paraset_byte12;

  // Member: paraset_byte11
  cdr >> ros_message.paraset_byte11;

  // Member: paraset_byte10
  cdr >> ros_message.paraset_byte10;

  // Member: paraset_byte9
  cdr >> ros_message.paraset_byte9;

  // Member: paraset_byte8
  cdr >> ros_message.paraset_byte8;

  // Member: paraset_byte7
  cdr >> ros_message.paraset_byte7;

  // Member: paraset_byte6
  cdr >> ros_message.paraset_byte6;

  // Member: paraset_byte5
  cdr >> ros_message.paraset_byte5;

  // Member: paraset_byte4
  cdr >> ros_message.paraset_byte4;

  // Member: paraset_byte3
  cdr >> ros_message.paraset_byte3;

  // Member: paraset_byte2
  cdr >> ros_message.paraset_byte2;

  // Member: paraset_byte1
  cdr >> ros_message.paraset_byte1;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
get_serialized_size(
  const neobotix_usboard_msgs::msg::Paraset & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: command
  {
    size_t item_size = sizeof(ros_message.command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_num
  {
    size_t item_size = sizeof(ros_message.set_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte54
  {
    size_t item_size = sizeof(ros_message.paraset_byte54);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte53
  {
    size_t item_size = sizeof(ros_message.paraset_byte53);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte52
  {
    size_t item_size = sizeof(ros_message.paraset_byte52);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte51
  {
    size_t item_size = sizeof(ros_message.paraset_byte51);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte50
  {
    size_t item_size = sizeof(ros_message.paraset_byte50);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte49
  {
    size_t item_size = sizeof(ros_message.paraset_byte49);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte48
  {
    size_t item_size = sizeof(ros_message.paraset_byte48);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte47
  {
    size_t item_size = sizeof(ros_message.paraset_byte47);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte46
  {
    size_t item_size = sizeof(ros_message.paraset_byte46);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte45
  {
    size_t item_size = sizeof(ros_message.paraset_byte45);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte44
  {
    size_t item_size = sizeof(ros_message.paraset_byte44);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte43
  {
    size_t item_size = sizeof(ros_message.paraset_byte43);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte42
  {
    size_t item_size = sizeof(ros_message.paraset_byte42);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte41
  {
    size_t item_size = sizeof(ros_message.paraset_byte41);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte40
  {
    size_t item_size = sizeof(ros_message.paraset_byte40);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte39
  {
    size_t item_size = sizeof(ros_message.paraset_byte39);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte38
  {
    size_t item_size = sizeof(ros_message.paraset_byte38);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte37
  {
    size_t item_size = sizeof(ros_message.paraset_byte37);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte36
  {
    size_t item_size = sizeof(ros_message.paraset_byte36);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte35
  {
    size_t item_size = sizeof(ros_message.paraset_byte35);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte34
  {
    size_t item_size = sizeof(ros_message.paraset_byte34);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte33
  {
    size_t item_size = sizeof(ros_message.paraset_byte33);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte32
  {
    size_t item_size = sizeof(ros_message.paraset_byte32);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte31
  {
    size_t item_size = sizeof(ros_message.paraset_byte31);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte30
  {
    size_t item_size = sizeof(ros_message.paraset_byte30);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte29
  {
    size_t item_size = sizeof(ros_message.paraset_byte29);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte28
  {
    size_t item_size = sizeof(ros_message.paraset_byte28);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte27
  {
    size_t item_size = sizeof(ros_message.paraset_byte27);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte26
  {
    size_t item_size = sizeof(ros_message.paraset_byte26);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte25
  {
    size_t item_size = sizeof(ros_message.paraset_byte25);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte24
  {
    size_t item_size = sizeof(ros_message.paraset_byte24);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte23
  {
    size_t item_size = sizeof(ros_message.paraset_byte23);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte22
  {
    size_t item_size = sizeof(ros_message.paraset_byte22);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte21
  {
    size_t item_size = sizeof(ros_message.paraset_byte21);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte20
  {
    size_t item_size = sizeof(ros_message.paraset_byte20);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte19
  {
    size_t item_size = sizeof(ros_message.paraset_byte19);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte18
  {
    size_t item_size = sizeof(ros_message.paraset_byte18);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte17
  {
    size_t item_size = sizeof(ros_message.paraset_byte17);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte16
  {
    size_t item_size = sizeof(ros_message.paraset_byte16);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte15
  {
    size_t item_size = sizeof(ros_message.paraset_byte15);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte14
  {
    size_t item_size = sizeof(ros_message.paraset_byte14);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte13
  {
    size_t item_size = sizeof(ros_message.paraset_byte13);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte12
  {
    size_t item_size = sizeof(ros_message.paraset_byte12);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte11
  {
    size_t item_size = sizeof(ros_message.paraset_byte11);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte10
  {
    size_t item_size = sizeof(ros_message.paraset_byte10);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte9
  {
    size_t item_size = sizeof(ros_message.paraset_byte9);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte8
  {
    size_t item_size = sizeof(ros_message.paraset_byte8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte7
  {
    size_t item_size = sizeof(ros_message.paraset_byte7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte6
  {
    size_t item_size = sizeof(ros_message.paraset_byte6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte5
  {
    size_t item_size = sizeof(ros_message.paraset_byte5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte4
  {
    size_t item_size = sizeof(ros_message.paraset_byte4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte3
  {
    size_t item_size = sizeof(ros_message.paraset_byte3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte2
  {
    size_t item_size = sizeof(ros_message.paraset_byte2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte1
  {
    size_t item_size = sizeof(ros_message.paraset_byte1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
max_serialized_size_Paraset(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: set_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte54
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte53
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte52
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte51
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte50
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte49
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte48
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte47
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte46
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte45
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte44
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte43
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte42
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte41
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte40
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte39
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte38
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte37
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte36
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte35
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte34
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte33
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte32
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte31
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte30
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte29
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte28
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte27
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte26
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte25
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte24
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte23
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte22
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte21
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte20
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte19
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte18
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte17
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte16
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte15
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte14
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte13
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte12
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte11
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte10
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte9
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte8
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Paraset__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const neobotix_usboard_msgs::msg::Paraset *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Paraset__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<neobotix_usboard_msgs::msg::Paraset *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Paraset__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const neobotix_usboard_msgs::msg::Paraset *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Paraset__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Paraset(full_bounded, 0);
}

static message_type_support_callbacks_t _Paraset__callbacks = {
  "neobotix_usboard_msgs::msg",
  "Paraset",
  _Paraset__cdr_serialize,
  _Paraset__cdr_deserialize,
  _Paraset__get_serialized_size,
  _Paraset__max_serialized_size
};

static rosidl_message_type_support_t _Paraset__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Paraset__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace neobotix_usboard_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_neobotix_usboard_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<neobotix_usboard_msgs::msg::Paraset>()
{
  return &neobotix_usboard_msgs::msg::typesupport_fastrtps_cpp::_Paraset__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, neobotix_usboard_msgs, msg, Paraset)() {
  return &neobotix_usboard_msgs::msg::typesupport_fastrtps_cpp::_Paraset__handle;
}

#ifdef __cplusplus
}
#endif
