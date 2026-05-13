// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusSerialNumber.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SERIAL_NUMBER__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SERIAL_NUMBER__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_status_serial_number__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrStatusSerialNumber_can_serial_number
{
public:
  explicit Init_MrrStatusSerialNumber_can_serial_number(::delphi_mrr_msgs::msg::MrrStatusSerialNumber & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrStatusSerialNumber can_serial_number(::delphi_mrr_msgs::msg::MrrStatusSerialNumber::_can_serial_number_type arg)
  {
    msg_.can_serial_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusSerialNumber msg_;
};

class Init_MrrStatusSerialNumber_can_sequence_number
{
public:
  explicit Init_MrrStatusSerialNumber_can_sequence_number(::delphi_mrr_msgs::msg::MrrStatusSerialNumber & msg)
  : msg_(msg)
  {}
  Init_MrrStatusSerialNumber_can_serial_number can_sequence_number(::delphi_mrr_msgs::msg::MrrStatusSerialNumber::_can_sequence_number_type arg)
  {
    msg_.can_sequence_number = std::move(arg);
    return Init_MrrStatusSerialNumber_can_serial_number(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusSerialNumber msg_;
};

class Init_MrrStatusSerialNumber_header
{
public:
  Init_MrrStatusSerialNumber_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrStatusSerialNumber_can_sequence_number header(::delphi_mrr_msgs::msg::MrrStatusSerialNumber::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrStatusSerialNumber_can_sequence_number(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusSerialNumber msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrStatusSerialNumber>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrStatusSerialNumber_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SERIAL_NUMBER__BUILDER_HPP_
