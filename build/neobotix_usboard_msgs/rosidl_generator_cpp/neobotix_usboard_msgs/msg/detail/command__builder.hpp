// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neobotix_usboard_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include "neobotix_usboard_msgs/msg/detail/command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace neobotix_usboard_msgs
{

namespace msg
{

namespace builder
{

class Init_Command_set_active_1to8
{
public:
  explicit Init_Command_set_active_1to8(::neobotix_usboard_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  ::neobotix_usboard_msgs::msg::Command set_active_1to8(::neobotix_usboard_msgs::msg::Command::_set_active_1to8_type arg)
  {
    msg_.set_active_1to8 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

class Init_Command_set_active_9to16
{
public:
  explicit Init_Command_set_active_9to16(::neobotix_usboard_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_set_active_1to8 set_active_9to16(::neobotix_usboard_msgs::msg::Command::_set_active_9to16_type arg)
  {
    msg_.set_active_9to16 = std::move(arg);
    return Init_Command_set_active_1to8(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

class Init_Command_paraset_byte1
{
public:
  explicit Init_Command_paraset_byte1(::neobotix_usboard_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_set_active_9to16 paraset_byte1(::neobotix_usboard_msgs::msg::Command::_paraset_byte1_type arg)
  {
    msg_.paraset_byte1 = std::move(arg);
    return Init_Command_set_active_9to16(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

class Init_Command_paraset_byte2
{
public:
  explicit Init_Command_paraset_byte2(::neobotix_usboard_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_paraset_byte1 paraset_byte2(::neobotix_usboard_msgs::msg::Command::_paraset_byte2_type arg)
  {
    msg_.paraset_byte2 = std::move(arg);
    return Init_Command_paraset_byte1(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

class Init_Command_paraset_byte3
{
public:
  explicit Init_Command_paraset_byte3(::neobotix_usboard_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_paraset_byte2 paraset_byte3(::neobotix_usboard_msgs::msg::Command::_paraset_byte3_type arg)
  {
    msg_.paraset_byte3 = std::move(arg);
    return Init_Command_paraset_byte2(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

class Init_Command_paraset_byte4
{
public:
  explicit Init_Command_paraset_byte4(::neobotix_usboard_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_paraset_byte3 paraset_byte4(::neobotix_usboard_msgs::msg::Command::_paraset_byte4_type arg)
  {
    msg_.paraset_byte4 = std::move(arg);
    return Init_Command_paraset_byte3(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

class Init_Command_paraset_byte5
{
public:
  explicit Init_Command_paraset_byte5(::neobotix_usboard_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_paraset_byte4 paraset_byte5(::neobotix_usboard_msgs::msg::Command::_paraset_byte5_type arg)
  {
    msg_.paraset_byte5 = std::move(arg);
    return Init_Command_paraset_byte4(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

class Init_Command_paraset_byte6
{
public:
  explicit Init_Command_paraset_byte6(::neobotix_usboard_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_paraset_byte5 paraset_byte6(::neobotix_usboard_msgs::msg::Command::_paraset_byte6_type arg)
  {
    msg_.paraset_byte6 = std::move(arg);
    return Init_Command_paraset_byte5(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

class Init_Command_set_num
{
public:
  explicit Init_Command_set_num(::neobotix_usboard_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_paraset_byte6 set_num(::neobotix_usboard_msgs::msg::Command::_set_num_type arg)
  {
    msg_.set_num = std::move(arg);
    return Init_Command_paraset_byte6(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

class Init_Command_command_data
{
public:
  explicit Init_Command_command_data(::neobotix_usboard_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_set_num command_data(::neobotix_usboard_msgs::msg::Command::_command_data_type arg)
  {
    msg_.command_data = std::move(arg);
    return Init_Command_set_num(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

class Init_Command_command
{
public:
  explicit Init_Command_command(::neobotix_usboard_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_command_data command(::neobotix_usboard_msgs::msg::Command::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_Command_command_data(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

class Init_Command_header
{
public:
  Init_Command_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_command header(::neobotix_usboard_msgs::msg::Command::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Command_command(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neobotix_usboard_msgs::msg::Command>()
{
  return neobotix_usboard_msgs::msg::builder::Init_Command_header();
}

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_
