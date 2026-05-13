// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/active_fault_latched2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_ActiveFaultLatched2_car_cfg_not_configured_error
{
public:
  explicit Init_ActiveFaultLatched2_car_cfg_not_configured_error(::delphi_mrr_msgs::msg::ActiveFaultLatched2 & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::ActiveFaultLatched2 car_cfg_not_configured_error(::delphi_mrr_msgs::msg::ActiveFaultLatched2::_car_cfg_not_configured_error_type arg)
  {
    msg_.car_cfg_not_configured_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched2 msg_;
};

class Init_ActiveFaultLatched2_module_not_configured_error
{
public:
  explicit Init_ActiveFaultLatched2_module_not_configured_error(::delphi_mrr_msgs::msg::ActiveFaultLatched2 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched2_car_cfg_not_configured_error module_not_configured_error(::delphi_mrr_msgs::msg::ActiveFaultLatched2::_module_not_configured_error_type arg)
  {
    msg_.module_not_configured_error = std::move(arg);
    return Init_ActiveFaultLatched2_car_cfg_not_configured_error(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched2 msg_;
};

class Init_ActiveFaultLatched2_vin_signal_compare_failure
{
public:
  explicit Init_ActiveFaultLatched2_vin_signal_compare_failure(::delphi_mrr_msgs::msg::ActiveFaultLatched2 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched2_module_not_configured_error vin_signal_compare_failure(::delphi_mrr_msgs::msg::ActiveFaultLatched2::_vin_signal_compare_failure_type arg)
  {
    msg_.vin_signal_compare_failure = std::move(arg);
    return Init_ActiveFaultLatched2_module_not_configured_error(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched2 msg_;
};

class Init_ActiveFaultLatched2_ipma_pcan_missing_msg
{
public:
  explicit Init_ActiveFaultLatched2_ipma_pcan_missing_msg(::delphi_mrr_msgs::msg::ActiveFaultLatched2 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched2_vin_signal_compare_failure ipma_pcan_missing_msg(::delphi_mrr_msgs::msg::ActiveFaultLatched2::_ipma_pcan_missing_msg_type arg)
  {
    msg_.ipma_pcan_missing_msg = std::move(arg);
    return Init_ActiveFaultLatched2_vin_signal_compare_failure(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched2 msg_;
};

class Init_ActiveFaultLatched2_ipma_pcan_data_range_check
{
public:
  explicit Init_ActiveFaultLatched2_ipma_pcan_data_range_check(::delphi_mrr_msgs::msg::ActiveFaultLatched2 & msg)
  : msg_(msg)
  {}
  Init_ActiveFaultLatched2_ipma_pcan_missing_msg ipma_pcan_data_range_check(::delphi_mrr_msgs::msg::ActiveFaultLatched2::_ipma_pcan_data_range_check_type arg)
  {
    msg_.ipma_pcan_data_range_check = std::move(arg);
    return Init_ActiveFaultLatched2_ipma_pcan_missing_msg(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched2 msg_;
};

class Init_ActiveFaultLatched2_header
{
public:
  Init_ActiveFaultLatched2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActiveFaultLatched2_ipma_pcan_data_range_check header(::delphi_mrr_msgs::msg::ActiveFaultLatched2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActiveFaultLatched2_ipma_pcan_data_range_check(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::ActiveFaultLatched2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::ActiveFaultLatched2>()
{
  return delphi_mrr_msgs::msg::builder::Init_ActiveFaultLatched2_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__BUILDER_HPP_
