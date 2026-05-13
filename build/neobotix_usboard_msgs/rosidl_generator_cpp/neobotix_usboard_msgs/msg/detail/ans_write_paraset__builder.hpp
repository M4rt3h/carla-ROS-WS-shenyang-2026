// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neobotix_usboard_msgs:msg/AnsWriteParaset.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_WRITE_PARASET__BUILDER_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_WRITE_PARASET__BUILDER_HPP_

#include "neobotix_usboard_msgs/msg/detail/ans_write_paraset__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace neobotix_usboard_msgs
{

namespace msg
{

namespace builder
{

class Init_AnsWriteParaset_paramset_cksum_high_byte
{
public:
  explicit Init_AnsWriteParaset_paramset_cksum_high_byte(::neobotix_usboard_msgs::msg::AnsWriteParaset & msg)
  : msg_(msg)
  {}
  ::neobotix_usboard_msgs::msg::AnsWriteParaset paramset_cksum_high_byte(::neobotix_usboard_msgs::msg::AnsWriteParaset::_paramset_cksum_high_byte_type arg)
  {
    msg_.paramset_cksum_high_byte = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsWriteParaset msg_;
};

class Init_AnsWriteParaset_paramset_cksum_low_byte
{
public:
  explicit Init_AnsWriteParaset_paramset_cksum_low_byte(::neobotix_usboard_msgs::msg::AnsWriteParaset & msg)
  : msg_(msg)
  {}
  Init_AnsWriteParaset_paramset_cksum_high_byte paramset_cksum_low_byte(::neobotix_usboard_msgs::msg::AnsWriteParaset::_paramset_cksum_low_byte_type arg)
  {
    msg_.paramset_cksum_low_byte = std::move(arg);
    return Init_AnsWriteParaset_paramset_cksum_high_byte(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsWriteParaset msg_;
};

class Init_AnsWriteParaset_command
{
public:
  explicit Init_AnsWriteParaset_command(::neobotix_usboard_msgs::msg::AnsWriteParaset & msg)
  : msg_(msg)
  {}
  Init_AnsWriteParaset_paramset_cksum_low_byte command(::neobotix_usboard_msgs::msg::AnsWriteParaset::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_AnsWriteParaset_paramset_cksum_low_byte(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsWriteParaset msg_;
};

class Init_AnsWriteParaset_header
{
public:
  Init_AnsWriteParaset_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnsWriteParaset_command header(::neobotix_usboard_msgs::msg::AnsWriteParaset::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AnsWriteParaset_command(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsWriteParaset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neobotix_usboard_msgs::msg::AnsWriteParaset>()
{
  return neobotix_usboard_msgs::msg::builder::Init_AnsWriteParaset_header();
}

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_WRITE_PARASET__BUILDER_HPP_
