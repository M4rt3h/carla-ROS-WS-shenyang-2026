// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusTempVolt.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_status_temp_volt__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrStatusTempVolt_can_processor_temp1
{
public:
  explicit Init_MrrStatusTempVolt_can_processor_temp1(::delphi_mrr_msgs::msg::MrrStatusTempVolt & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrStatusTempVolt can_processor_temp1(::delphi_mrr_msgs::msg::MrrStatusTempVolt::_can_processor_temp1_type arg)
  {
    msg_.can_processor_temp1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusTempVolt msg_;
};

class Init_MrrStatusTempVolt_can_processor_thermistor
{
public:
  explicit Init_MrrStatusTempVolt_can_processor_thermistor(::delphi_mrr_msgs::msg::MrrStatusTempVolt & msg)
  : msg_(msg)
  {}
  Init_MrrStatusTempVolt_can_processor_temp1 can_processor_thermistor(::delphi_mrr_msgs::msg::MrrStatusTempVolt::_can_processor_thermistor_type arg)
  {
    msg_.can_processor_thermistor = std::move(arg);
    return Init_MrrStatusTempVolt_can_processor_temp1(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusTempVolt msg_;
};

class Init_MrrStatusTempVolt_can_mmic_temp1
{
public:
  explicit Init_MrrStatusTempVolt_can_mmic_temp1(::delphi_mrr_msgs::msg::MrrStatusTempVolt & msg)
  : msg_(msg)
  {}
  Init_MrrStatusTempVolt_can_processor_thermistor can_mmic_temp1(::delphi_mrr_msgs::msg::MrrStatusTempVolt::_can_mmic_temp1_type arg)
  {
    msg_.can_mmic_temp1 = std::move(arg);
    return Init_MrrStatusTempVolt_can_processor_thermistor(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusTempVolt msg_;
};

class Init_MrrStatusTempVolt_can_3_3_v_dac
{
public:
  explicit Init_MrrStatusTempVolt_can_3_3_v_dac(::delphi_mrr_msgs::msg::MrrStatusTempVolt & msg)
  : msg_(msg)
  {}
  Init_MrrStatusTempVolt_can_mmic_temp1 can_3_3_v_dac(::delphi_mrr_msgs::msg::MrrStatusTempVolt::_can_3_3_v_dac_type arg)
  {
    msg_.can_3_3_v_dac = std::move(arg);
    return Init_MrrStatusTempVolt_can_mmic_temp1(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusTempVolt msg_;
};

class Init_MrrStatusTempVolt_can_3_3_v_raw
{
public:
  explicit Init_MrrStatusTempVolt_can_3_3_v_raw(::delphi_mrr_msgs::msg::MrrStatusTempVolt & msg)
  : msg_(msg)
  {}
  Init_MrrStatusTempVolt_can_3_3_v_dac can_3_3_v_raw(::delphi_mrr_msgs::msg::MrrStatusTempVolt::_can_3_3_v_raw_type arg)
  {
    msg_.can_3_3_v_raw = std::move(arg);
    return Init_MrrStatusTempVolt_can_3_3_v_dac(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusTempVolt msg_;
};

class Init_MrrStatusTempVolt_can_5_v
{
public:
  explicit Init_MrrStatusTempVolt_can_5_v(::delphi_mrr_msgs::msg::MrrStatusTempVolt & msg)
  : msg_(msg)
  {}
  Init_MrrStatusTempVolt_can_3_3_v_raw can_5_v(::delphi_mrr_msgs::msg::MrrStatusTempVolt::_can_5_v_type arg)
  {
    msg_.can_5_v = std::move(arg);
    return Init_MrrStatusTempVolt_can_3_3_v_raw(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusTempVolt msg_;
};

class Init_MrrStatusTempVolt_can_1_25_v
{
public:
  explicit Init_MrrStatusTempVolt_can_1_25_v(::delphi_mrr_msgs::msg::MrrStatusTempVolt & msg)
  : msg_(msg)
  {}
  Init_MrrStatusTempVolt_can_5_v can_1_25_v(::delphi_mrr_msgs::msg::MrrStatusTempVolt::_can_1_25_v_type arg)
  {
    msg_.can_1_25_v = std::move(arg);
    return Init_MrrStatusTempVolt_can_5_v(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusTempVolt msg_;
};

class Init_MrrStatusTempVolt_can_batt_volts
{
public:
  explicit Init_MrrStatusTempVolt_can_batt_volts(::delphi_mrr_msgs::msg::MrrStatusTempVolt & msg)
  : msg_(msg)
  {}
  Init_MrrStatusTempVolt_can_1_25_v can_batt_volts(::delphi_mrr_msgs::msg::MrrStatusTempVolt::_can_batt_volts_type arg)
  {
    msg_.can_batt_volts = std::move(arg);
    return Init_MrrStatusTempVolt_can_1_25_v(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusTempVolt msg_;
};

class Init_MrrStatusTempVolt_header
{
public:
  Init_MrrStatusTempVolt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrStatusTempVolt_can_batt_volts header(::delphi_mrr_msgs::msg::MrrStatusTempVolt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrStatusTempVolt_can_batt_volts(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusTempVolt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrStatusTempVolt>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrStatusTempVolt_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__BUILDER_HPP_
