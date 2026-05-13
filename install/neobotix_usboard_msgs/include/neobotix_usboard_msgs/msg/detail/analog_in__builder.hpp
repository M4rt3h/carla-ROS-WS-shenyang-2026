// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neobotix_usboard_msgs:msg/AnalogIn.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANALOG_IN__BUILDER_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANALOG_IN__BUILDER_HPP_

#include "neobotix_usboard_msgs/msg/detail/analog_in__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace neobotix_usboard_msgs
{

namespace msg
{

namespace builder
{

class Init_AnalogIn_analog_data_ch1_high_bits
{
public:
  explicit Init_AnalogIn_analog_data_ch1_high_bits(::neobotix_usboard_msgs::msg::AnalogIn & msg)
  : msg_(msg)
  {}
  ::neobotix_usboard_msgs::msg::AnalogIn analog_data_ch1_high_bits(::neobotix_usboard_msgs::msg::AnalogIn::_analog_data_ch1_high_bits_type arg)
  {
    msg_.analog_data_ch1_high_bits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnalogIn msg_;
};

class Init_AnalogIn_analog_data_ch1_low_byte
{
public:
  explicit Init_AnalogIn_analog_data_ch1_low_byte(::neobotix_usboard_msgs::msg::AnalogIn & msg)
  : msg_(msg)
  {}
  Init_AnalogIn_analog_data_ch1_high_bits analog_data_ch1_low_byte(::neobotix_usboard_msgs::msg::AnalogIn::_analog_data_ch1_low_byte_type arg)
  {
    msg_.analog_data_ch1_low_byte = std::move(arg);
    return Init_AnalogIn_analog_data_ch1_high_bits(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnalogIn msg_;
};

class Init_AnalogIn_analog_data_ch2_high_bits
{
public:
  explicit Init_AnalogIn_analog_data_ch2_high_bits(::neobotix_usboard_msgs::msg::AnalogIn & msg)
  : msg_(msg)
  {}
  Init_AnalogIn_analog_data_ch1_low_byte analog_data_ch2_high_bits(::neobotix_usboard_msgs::msg::AnalogIn::_analog_data_ch2_high_bits_type arg)
  {
    msg_.analog_data_ch2_high_bits = std::move(arg);
    return Init_AnalogIn_analog_data_ch1_low_byte(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnalogIn msg_;
};

class Init_AnalogIn_analog_data_ch2_low_byte
{
public:
  explicit Init_AnalogIn_analog_data_ch2_low_byte(::neobotix_usboard_msgs::msg::AnalogIn & msg)
  : msg_(msg)
  {}
  Init_AnalogIn_analog_data_ch2_high_bits analog_data_ch2_low_byte(::neobotix_usboard_msgs::msg::AnalogIn::_analog_data_ch2_low_byte_type arg)
  {
    msg_.analog_data_ch2_low_byte = std::move(arg);
    return Init_AnalogIn_analog_data_ch2_high_bits(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnalogIn msg_;
};

class Init_AnalogIn_analog_data_ch3_high_bits
{
public:
  explicit Init_AnalogIn_analog_data_ch3_high_bits(::neobotix_usboard_msgs::msg::AnalogIn & msg)
  : msg_(msg)
  {}
  Init_AnalogIn_analog_data_ch2_low_byte analog_data_ch3_high_bits(::neobotix_usboard_msgs::msg::AnalogIn::_analog_data_ch3_high_bits_type arg)
  {
    msg_.analog_data_ch3_high_bits = std::move(arg);
    return Init_AnalogIn_analog_data_ch2_low_byte(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnalogIn msg_;
};

class Init_AnalogIn_analog_data_ch3_low_byte
{
public:
  explicit Init_AnalogIn_analog_data_ch3_low_byte(::neobotix_usboard_msgs::msg::AnalogIn & msg)
  : msg_(msg)
  {}
  Init_AnalogIn_analog_data_ch3_high_bits analog_data_ch3_low_byte(::neobotix_usboard_msgs::msg::AnalogIn::_analog_data_ch3_low_byte_type arg)
  {
    msg_.analog_data_ch3_low_byte = std::move(arg);
    return Init_AnalogIn_analog_data_ch3_high_bits(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnalogIn msg_;
};

class Init_AnalogIn_analog_data_ch4_high_bits
{
public:
  explicit Init_AnalogIn_analog_data_ch4_high_bits(::neobotix_usboard_msgs::msg::AnalogIn & msg)
  : msg_(msg)
  {}
  Init_AnalogIn_analog_data_ch3_low_byte analog_data_ch4_high_bits(::neobotix_usboard_msgs::msg::AnalogIn::_analog_data_ch4_high_bits_type arg)
  {
    msg_.analog_data_ch4_high_bits = std::move(arg);
    return Init_AnalogIn_analog_data_ch3_low_byte(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnalogIn msg_;
};

class Init_AnalogIn_analog_data_ch4_low_byte
{
public:
  explicit Init_AnalogIn_analog_data_ch4_low_byte(::neobotix_usboard_msgs::msg::AnalogIn & msg)
  : msg_(msg)
  {}
  Init_AnalogIn_analog_data_ch4_high_bits analog_data_ch4_low_byte(::neobotix_usboard_msgs::msg::AnalogIn::_analog_data_ch4_low_byte_type arg)
  {
    msg_.analog_data_ch4_low_byte = std::move(arg);
    return Init_AnalogIn_analog_data_ch4_high_bits(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnalogIn msg_;
};

class Init_AnalogIn_command
{
public:
  explicit Init_AnalogIn_command(::neobotix_usboard_msgs::msg::AnalogIn & msg)
  : msg_(msg)
  {}
  Init_AnalogIn_analog_data_ch4_low_byte command(::neobotix_usboard_msgs::msg::AnalogIn::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_AnalogIn_analog_data_ch4_low_byte(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnalogIn msg_;
};

class Init_AnalogIn_header
{
public:
  Init_AnalogIn_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnalogIn_command header(::neobotix_usboard_msgs::msg::AnalogIn::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AnalogIn_command(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::AnalogIn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neobotix_usboard_msgs::msg::AnalogIn>()
{
  return neobotix_usboard_msgs::msg::builder::Init_AnalogIn_header();
}

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANALOG_IN__BUILDER_HPP_
