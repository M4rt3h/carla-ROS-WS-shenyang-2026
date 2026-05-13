// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neobotix_usboard_msgs:msg/AnsParasetToEEPROM.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__BUILDER_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__BUILDER_HPP_

#include "neobotix_usboard_msgs/msg/detail/ans_paraset_to_eeprom__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace neobotix_usboard_msgs
{

namespace msg
{

namespace builder
{

class Init_AnsParasetToEEPROM_paraset_cksum_high_byte
{
public:
  explicit Init_AnsParasetToEEPROM_paraset_cksum_high_byte(::neobotix_usboard_msgs::msg::AnsParasetToEEPROM & msg)
  : msg_(msg)
  {}
  ::neobotix_usboard_msgs::msg::AnsParasetToEEPROM paraset_cksum_high_byte(::neobotix_usboard_msgs::msg::AnsParasetToEEPROM::_paraset_cksum_high_byte_type arg)
  {
    msg_.paraset_cksum_high_byte = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsParasetToEEPROM msg_;
};

class Init_AnsParasetToEEPROM_paraset_cksum_low_byte
{
public:
  explicit Init_AnsParasetToEEPROM_paraset_cksum_low_byte(::neobotix_usboard_msgs::msg::AnsParasetToEEPROM & msg)
  : msg_(msg)
  {}
  Init_AnsParasetToEEPROM_paraset_cksum_high_byte paraset_cksum_low_byte(::neobotix_usboard_msgs::msg::AnsParasetToEEPROM::_paraset_cksum_low_byte_type arg)
  {
    msg_.paraset_cksum_low_byte = std::move(arg);
    return Init_AnsParasetToEEPROM_paraset_cksum_high_byte(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsParasetToEEPROM msg_;
};

class Init_AnsParasetToEEPROM_command
{
public:
  explicit Init_AnsParasetToEEPROM_command(::neobotix_usboard_msgs::msg::AnsParasetToEEPROM & msg)
  : msg_(msg)
  {}
  Init_AnsParasetToEEPROM_paraset_cksum_low_byte command(::neobotix_usboard_msgs::msg::AnsParasetToEEPROM::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_AnsParasetToEEPROM_paraset_cksum_low_byte(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsParasetToEEPROM msg_;
};

class Init_AnsParasetToEEPROM_header
{
public:
  Init_AnsParasetToEEPROM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnsParasetToEEPROM_command header(::neobotix_usboard_msgs::msg::AnsParasetToEEPROM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AnsParasetToEEPROM_command(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnsParasetToEEPROM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neobotix_usboard_msgs::msg::AnsParasetToEEPROM>()
{
  return neobotix_usboard_msgs::msg::builder::Init_AnsParasetToEEPROM_header();
}

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__BUILDER_HPP_
