// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgFR.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_fr__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrControlMsgFR_can_desired_sweep_bw_frll
{
public:
  explicit Init_MrrControlMsgFR_can_desired_sweep_bw_frll(::delphi_mrr_msgs::msg::MrrControlMsgFR & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrControlMsgFR can_desired_sweep_bw_frll(::delphi_mrr_msgs::msg::MrrControlMsgFR::_can_desired_sweep_bw_frll_type arg)
  {
    msg_.can_desired_sweep_bw_frll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgFR msg_;
};

class Init_MrrControlMsgFR_can_desired_sweep_bw_frml
{
public:
  explicit Init_MrrControlMsgFR_can_desired_sweep_bw_frml(::delphi_mrr_msgs::msg::MrrControlMsgFR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgFR_can_desired_sweep_bw_frll can_desired_sweep_bw_frml(::delphi_mrr_msgs::msg::MrrControlMsgFR::_can_desired_sweep_bw_frml_type arg)
  {
    msg_.can_desired_sweep_bw_frml = std::move(arg);
    return Init_MrrControlMsgFR_can_desired_sweep_bw_frll(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgFR msg_;
};

class Init_MrrControlMsgFR_can_prp_factor_frll
{
public:
  explicit Init_MrrControlMsgFR_can_prp_factor_frll(::delphi_mrr_msgs::msg::MrrControlMsgFR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgFR_can_desired_sweep_bw_frml can_prp_factor_frll(::delphi_mrr_msgs::msg::MrrControlMsgFR::_can_prp_factor_frll_type arg)
  {
    msg_.can_prp_factor_frll = std::move(arg);
    return Init_MrrControlMsgFR_can_desired_sweep_bw_frml(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgFR msg_;
};

class Init_MrrControlMsgFR_can_prp_factor_frml
{
public:
  explicit Init_MrrControlMsgFR_can_prp_factor_frml(::delphi_mrr_msgs::msg::MrrControlMsgFR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgFR_can_prp_factor_frll can_prp_factor_frml(::delphi_mrr_msgs::msg::MrrControlMsgFR::_can_prp_factor_frml_type arg)
  {
    msg_.can_prp_factor_frml = std::move(arg);
    return Init_MrrControlMsgFR_can_prp_factor_frll(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgFR msg_;
};

class Init_MrrControlMsgFR_can_stop_frequency_frll
{
public:
  explicit Init_MrrControlMsgFR_can_stop_frequency_frll(::delphi_mrr_msgs::msg::MrrControlMsgFR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgFR_can_prp_factor_frml can_stop_frequency_frll(::delphi_mrr_msgs::msg::MrrControlMsgFR::_can_stop_frequency_frll_type arg)
  {
    msg_.can_stop_frequency_frll = std::move(arg);
    return Init_MrrControlMsgFR_can_prp_factor_frml(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgFR msg_;
};

class Init_MrrControlMsgFR_can_stop_frequency_frml
{
public:
  explicit Init_MrrControlMsgFR_can_stop_frequency_frml(::delphi_mrr_msgs::msg::MrrControlMsgFR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgFR_can_stop_frequency_frll can_stop_frequency_frml(::delphi_mrr_msgs::msg::MrrControlMsgFR::_can_stop_frequency_frml_type arg)
  {
    msg_.can_stop_frequency_frml = std::move(arg);
    return Init_MrrControlMsgFR_can_stop_frequency_frll(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgFR msg_;
};

class Init_MrrControlMsgFR_can_sensitivity_profile_select
{
public:
  explicit Init_MrrControlMsgFR_can_sensitivity_profile_select(::delphi_mrr_msgs::msg::MrrControlMsgFR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgFR_can_stop_frequency_frml can_sensitivity_profile_select(::delphi_mrr_msgs::msg::MrrControlMsgFR::_can_sensitivity_profile_select_type arg)
  {
    msg_.can_sensitivity_profile_select = std::move(arg);
    return Init_MrrControlMsgFR_can_stop_frequency_frml(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgFR msg_;
};

class Init_MrrControlMsgFR_header
{
public:
  Init_MrrControlMsgFR_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrControlMsgFR_can_sensitivity_profile_select header(::delphi_mrr_msgs::msg::MrrControlMsgFR::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrControlMsgFR_can_sensitivity_profile_select(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgFR msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrControlMsgFR>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrControlMsgFR_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__BUILDER_HPP_
