// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusCanVersion.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_CAN_VERSION__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_CAN_VERSION__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_status_can_version__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrStatusCanVersion_can_pcan_major_mrr
{
public:
  explicit Init_MrrStatusCanVersion_can_pcan_major_mrr(::delphi_mrr_msgs::msg::MrrStatusCanVersion & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrStatusCanVersion can_pcan_major_mrr(::delphi_mrr_msgs::msg::MrrStatusCanVersion::_can_pcan_major_mrr_type arg)
  {
    msg_.can_pcan_major_mrr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusCanVersion msg_;
};

class Init_MrrStatusCanVersion_can_pcan_minor_mrr
{
public:
  explicit Init_MrrStatusCanVersion_can_pcan_minor_mrr(::delphi_mrr_msgs::msg::MrrStatusCanVersion & msg)
  : msg_(msg)
  {}
  Init_MrrStatusCanVersion_can_pcan_major_mrr can_pcan_minor_mrr(::delphi_mrr_msgs::msg::MrrStatusCanVersion::_can_pcan_minor_mrr_type arg)
  {
    msg_.can_pcan_minor_mrr = std::move(arg);
    return Init_MrrStatusCanVersion_can_pcan_major_mrr(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusCanVersion msg_;
};

class Init_MrrStatusCanVersion_can_usc_section_compatibility
{
public:
  explicit Init_MrrStatusCanVersion_can_usc_section_compatibility(::delphi_mrr_msgs::msg::MrrStatusCanVersion & msg)
  : msg_(msg)
  {}
  Init_MrrStatusCanVersion_can_pcan_minor_mrr can_usc_section_compatibility(::delphi_mrr_msgs::msg::MrrStatusCanVersion::_can_usc_section_compatibility_type arg)
  {
    msg_.can_usc_section_compatibility = std::move(arg);
    return Init_MrrStatusCanVersion_can_pcan_minor_mrr(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusCanVersion msg_;
};

class Init_MrrStatusCanVersion_header
{
public:
  Init_MrrStatusCanVersion_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrStatusCanVersion_can_usc_section_compatibility header(::delphi_mrr_msgs::msg::MrrStatusCanVersion::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrStatusCanVersion_can_usc_section_compatibility(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusCanVersion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrStatusCanVersion>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrStatusCanVersion_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_CAN_VERSION__BUILDER_HPP_
