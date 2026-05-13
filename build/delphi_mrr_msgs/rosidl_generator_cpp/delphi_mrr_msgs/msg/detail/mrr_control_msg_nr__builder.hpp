// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgNR.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_nr__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrControlMsgNR_can_desired_sweep_bw_nrll
{
public:
  explicit Init_MrrControlMsgNR_can_desired_sweep_bw_nrll(::delphi_mrr_msgs::msg::MrrControlMsgNR & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrControlMsgNR can_desired_sweep_bw_nrll(::delphi_mrr_msgs::msg::MrrControlMsgNR::_can_desired_sweep_bw_nrll_type arg)
  {
    msg_.can_desired_sweep_bw_nrll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgNR msg_;
};

class Init_MrrControlMsgNR_can_prp_factor_nrll
{
public:
  explicit Init_MrrControlMsgNR_can_prp_factor_nrll(::delphi_mrr_msgs::msg::MrrControlMsgNR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgNR_can_desired_sweep_bw_nrll can_prp_factor_nrll(::delphi_mrr_msgs::msg::MrrControlMsgNR::_can_prp_factor_nrll_type arg)
  {
    msg_.can_prp_factor_nrll = std::move(arg);
    return Init_MrrControlMsgNR_can_desired_sweep_bw_nrll(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgNR msg_;
};

class Init_MrrControlMsgNR_can_stop_frequency_nrll
{
public:
  explicit Init_MrrControlMsgNR_can_stop_frequency_nrll(::delphi_mrr_msgs::msg::MrrControlMsgNR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgNR_can_prp_factor_nrll can_stop_frequency_nrll(::delphi_mrr_msgs::msg::MrrControlMsgNR::_can_stop_frequency_nrll_type arg)
  {
    msg_.can_stop_frequency_nrll = std::move(arg);
    return Init_MrrControlMsgNR_can_prp_factor_nrll(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgNR msg_;
};

class Init_MrrControlMsgNR_can_radiation_ctrl
{
public:
  explicit Init_MrrControlMsgNR_can_radiation_ctrl(::delphi_mrr_msgs::msg::MrrControlMsgNR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgNR_can_stop_frequency_nrll can_radiation_ctrl(::delphi_mrr_msgs::msg::MrrControlMsgNR::_can_radiation_ctrl_type arg)
  {
    msg_.can_radiation_ctrl = std::move(arg);
    return Init_MrrControlMsgNR_can_stop_frequency_nrll(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgNR msg_;
};

class Init_MrrControlMsgNR_can_desired_sweep_bw_nrml
{
public:
  explicit Init_MrrControlMsgNR_can_desired_sweep_bw_nrml(::delphi_mrr_msgs::msg::MrrControlMsgNR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgNR_can_radiation_ctrl can_desired_sweep_bw_nrml(::delphi_mrr_msgs::msg::MrrControlMsgNR::_can_desired_sweep_bw_nrml_type arg)
  {
    msg_.can_desired_sweep_bw_nrml = std::move(arg);
    return Init_MrrControlMsgNR_can_radiation_ctrl(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgNR msg_;
};

class Init_MrrControlMsgNR_can_prp_factor_nrml
{
public:
  explicit Init_MrrControlMsgNR_can_prp_factor_nrml(::delphi_mrr_msgs::msg::MrrControlMsgNR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgNR_can_desired_sweep_bw_nrml can_prp_factor_nrml(::delphi_mrr_msgs::msg::MrrControlMsgNR::_can_prp_factor_nrml_type arg)
  {
    msg_.can_prp_factor_nrml = std::move(arg);
    return Init_MrrControlMsgNR_can_desired_sweep_bw_nrml(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgNR msg_;
};

class Init_MrrControlMsgNR_can_stop_frequency_nrml
{
public:
  explicit Init_MrrControlMsgNR_can_stop_frequency_nrml(::delphi_mrr_msgs::msg::MrrControlMsgNR & msg)
  : msg_(msg)
  {}
  Init_MrrControlMsgNR_can_prp_factor_nrml can_stop_frequency_nrml(::delphi_mrr_msgs::msg::MrrControlMsgNR::_can_stop_frequency_nrml_type arg)
  {
    msg_.can_stop_frequency_nrml = std::move(arg);
    return Init_MrrControlMsgNR_can_prp_factor_nrml(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgNR msg_;
};

class Init_MrrControlMsgNR_header
{
public:
  Init_MrrControlMsgNR_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrControlMsgNR_can_stop_frequency_nrml header(::delphi_mrr_msgs::msg::MrrControlMsgNR::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrControlMsgNR_can_stop_frequency_nrml(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrControlMsgNR msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrControlMsgNR>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrControlMsgNR_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__BUILDER_HPP_
