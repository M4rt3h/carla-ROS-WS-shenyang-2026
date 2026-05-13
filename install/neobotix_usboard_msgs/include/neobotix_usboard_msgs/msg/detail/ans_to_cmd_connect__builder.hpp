// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neobotix_usboard_msgs:msg/AnsToCmdConnect.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__BUILDER_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__BUILDER_HPP_

#include "neobotix_usboard_msgs/msg/detail/ans_to_cmd_connect__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace neobotix_usboard_msgs
{

namespace msg
{

namespace builder
{

class Init_AnsToCmdConnect_cmd_connect_ans_d1
{
public:
  explicit Init_AnsToCmdConnect_cmd_connect_ans_d1(::neobotix_usboard_msgs::msg::AnsToCmdConnect & msg)
  : msg_(msg)
  {}
  ::neobotix_usboard_msgs::msg::AnsToCmdConnect cmd_connect_ans_d1(::neobotix_usboard_msgs::msg::AnsToCmdConnect::_cmd_connect_ans_d1_type arg)
  {
    msg_.cmd_connect_ans_d1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsToCmdConnect msg_;
};

class Init_AnsToCmdConnect_cmd_connect_ans_d2
{
public:
  explicit Init_AnsToCmdConnect_cmd_connect_ans_d2(::neobotix_usboard_msgs::msg::AnsToCmdConnect & msg)
  : msg_(msg)
  {}
  Init_AnsToCmdConnect_cmd_connect_ans_d1 cmd_connect_ans_d2(::neobotix_usboard_msgs::msg::AnsToCmdConnect::_cmd_connect_ans_d2_type arg)
  {
    msg_.cmd_connect_ans_d2 = std::move(arg);
    return Init_AnsToCmdConnect_cmd_connect_ans_d1(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsToCmdConnect msg_;
};

class Init_AnsToCmdConnect_cmd_connect_ans_d3
{
public:
  explicit Init_AnsToCmdConnect_cmd_connect_ans_d3(::neobotix_usboard_msgs::msg::AnsToCmdConnect & msg)
  : msg_(msg)
  {}
  Init_AnsToCmdConnect_cmd_connect_ans_d2 cmd_connect_ans_d3(::neobotix_usboard_msgs::msg::AnsToCmdConnect::_cmd_connect_ans_d3_type arg)
  {
    msg_.cmd_connect_ans_d3 = std::move(arg);
    return Init_AnsToCmdConnect_cmd_connect_ans_d2(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsToCmdConnect msg_;
};

class Init_AnsToCmdConnect_cmd_connect_ans_d4
{
public:
  explicit Init_AnsToCmdConnect_cmd_connect_ans_d4(::neobotix_usboard_msgs::msg::AnsToCmdConnect & msg)
  : msg_(msg)
  {}
  Init_AnsToCmdConnect_cmd_connect_ans_d3 cmd_connect_ans_d4(::neobotix_usboard_msgs::msg::AnsToCmdConnect::_cmd_connect_ans_d4_type arg)
  {
    msg_.cmd_connect_ans_d4 = std::move(arg);
    return Init_AnsToCmdConnect_cmd_connect_ans_d3(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsToCmdConnect msg_;
};

class Init_AnsToCmdConnect_cmd_connect_ans_d5
{
public:
  explicit Init_AnsToCmdConnect_cmd_connect_ans_d5(::neobotix_usboard_msgs::msg::AnsToCmdConnect & msg)
  : msg_(msg)
  {}
  Init_AnsToCmdConnect_cmd_connect_ans_d4 cmd_connect_ans_d5(::neobotix_usboard_msgs::msg::AnsToCmdConnect::_cmd_connect_ans_d5_type arg)
  {
    msg_.cmd_connect_ans_d5 = std::move(arg);
    return Init_AnsToCmdConnect_cmd_connect_ans_d4(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsToCmdConnect msg_;
};

class Init_AnsToCmdConnect_cmd_connect_ans_d6
{
public:
  explicit Init_AnsToCmdConnect_cmd_connect_ans_d6(::neobotix_usboard_msgs::msg::AnsToCmdConnect & msg)
  : msg_(msg)
  {}
  Init_AnsToCmdConnect_cmd_connect_ans_d5 cmd_connect_ans_d6(::neobotix_usboard_msgs::msg::AnsToCmdConnect::_cmd_connect_ans_d6_type arg)
  {
    msg_.cmd_connect_ans_d6 = std::move(arg);
    return Init_AnsToCmdConnect_cmd_connect_ans_d5(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsToCmdConnect msg_;
};

class Init_AnsToCmdConnect_cmd_connect_ans_d7
{
public:
  explicit Init_AnsToCmdConnect_cmd_connect_ans_d7(::neobotix_usboard_msgs::msg::AnsToCmdConnect & msg)
  : msg_(msg)
  {}
  Init_AnsToCmdConnect_cmd_connect_ans_d6 cmd_connect_ans_d7(::neobotix_usboard_msgs::msg::AnsToCmdConnect::_cmd_connect_ans_d7_type arg)
  {
    msg_.cmd_connect_ans_d7 = std::move(arg);
    return Init_AnsToCmdConnect_cmd_connect_ans_d6(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsToCmdConnect msg_;
};

class Init_AnsToCmdConnect_command
{
public:
  explicit Init_AnsToCmdConnect_command(::neobotix_usboard_msgs::msg::AnsToCmdConnect & msg)
  : msg_(msg)
  {}
  Init_AnsToCmdConnect_cmd_connect_ans_d7 command(::neobotix_usboard_msgs::msg::AnsToCmdConnect::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_AnsToCmdConnect_cmd_connect_ans_d7(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsToCmdConnect msg_;
};

class Init_AnsToCmdConnect_header
{
public:
  Init_AnsToCmdConnect_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnsToCmdConnect_command header(::neobotix_usboard_msgs::msg::AnsToCmdConnect::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AnsToCmdConnect_command(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsToCmdConnect msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neobotix_usboard_msgs::msg::AnsToCmdConnect>()
{
  return neobotix_usboard_msgs::msg::builder::Init_AnsToCmdConnect_header();
}

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__BUILDER_HPP_
