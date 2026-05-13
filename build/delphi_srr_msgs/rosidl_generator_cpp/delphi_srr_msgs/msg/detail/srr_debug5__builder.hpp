// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_srr_msgs:msg/SrrDebug5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG5__BUILDER_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG5__BUILDER_HPP_

#include "delphi_srr_msgs/msg/detail/srr_debug5__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_srr_msgs
{

namespace msg
{

namespace builder
{

class Init_SrrDebug5_can_tx_align_updates
{
public:
  explicit Init_SrrDebug5_can_tx_align_updates(::delphi_srr_msgs::msg::SrrDebug5 & msg)
  : msg_(msg)
  {}
  ::delphi_srr_msgs::msg::SrrDebug5 can_tx_align_updates(::delphi_srr_msgs::msg::SrrDebug5::_can_tx_align_updates_type arg)
  {
    msg_.can_tx_align_updates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug5 msg_;
};

class Init_SrrDebug5_header
{
public:
  Init_SrrDebug5_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrrDebug5_can_tx_align_updates header(::delphi_srr_msgs::msg::SrrDebug5::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SrrDebug5_can_tx_align_updates(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug5 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_srr_msgs::msg::SrrDebug5>()
{
  return delphi_srr_msgs::msg::builder::Init_SrrDebug5_header();
}

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG5__BUILDER_HPP_
