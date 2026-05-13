// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus6.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status6__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrStatus6_vertical_misalignment
{
public:
  explicit Init_EsrStatus6_vertical_misalignment(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrStatus6 vertical_misalignment(::delphi_esr_msgs::msg::EsrStatus6::_vertical_misalignment_type arg)
  {
    msg_.vertical_misalignment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_serv_align_updates_done
{
public:
  explicit Init_EsrStatus6_serv_align_updates_done(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_vertical_misalignment serv_align_updates_done(::delphi_esr_msgs::msg::EsrStatus6::_serv_align_updates_done_type arg)
  {
    msg_.serv_align_updates_done = std::move(arg);
    return Init_EsrStatus6_vertical_misalignment(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_factory_misalignment
{
public:
  explicit Init_EsrStatus6_factory_misalignment(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_serv_align_updates_done factory_misalignment(::delphi_esr_msgs::msg::EsrStatus6::_factory_misalignment_type arg)
  {
    msg_.factory_misalignment = std::move(arg);
    return Init_EsrStatus6_serv_align_updates_done(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_factory_align_status_2
{
public:
  explicit Init_EsrStatus6_factory_align_status_2(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_factory_misalignment factory_align_status_2(::delphi_esr_msgs::msg::EsrStatus6::_factory_align_status_2_type arg)
  {
    msg_.factory_align_status_2 = std::move(arg);
    return Init_EsrStatus6_factory_misalignment(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_factory_align_status_1
{
public:
  explicit Init_EsrStatus6_factory_align_status_1(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_factory_align_status_2 factory_align_status_1(::delphi_esr_msgs::msg::EsrStatus6::_factory_align_status_1_type arg)
  {
    msg_.factory_align_status_1 = std::move(arg);
    return Init_EsrStatus6_factory_align_status_2(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_recommend_unconverge
{
public:
  explicit Init_EsrStatus6_recommend_unconverge(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_factory_align_status_1 recommend_unconverge(::delphi_esr_msgs::msg::EsrStatus6::_recommend_unconverge_type arg)
  {
    msg_.recommend_unconverge = std::move(arg);
    return Init_EsrStatus6_factory_align_status_1(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_found_target
{
public:
  explicit Init_EsrStatus6_found_target(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_recommend_unconverge found_target(::delphi_esr_msgs::msg::EsrStatus6::_found_target_type arg)
  {
    msg_.found_target = std::move(arg);
    return Init_EsrStatus6_recommend_unconverge(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_system_power_mode
{
public:
  explicit Init_EsrStatus6_system_power_mode(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_found_target system_power_mode(::delphi_esr_msgs::msg::EsrStatus6::_system_power_mode_type arg)
  {
    msg_.system_power_mode = std::move(arg);
    return Init_EsrStatus6_found_target(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_vertical_align_updated
{
public:
  explicit Init_EsrStatus6_vertical_align_updated(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_system_power_mode vertical_align_updated(::delphi_esr_msgs::msg::EsrStatus6::_vertical_align_updated_type arg)
  {
    msg_.vertical_align_updated = std::move(arg);
    return Init_EsrStatus6_system_power_mode(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_sw_version_dsp_3rd_byte
{
public:
  explicit Init_EsrStatus6_sw_version_dsp_3rd_byte(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_vertical_align_updated sw_version_dsp_3rd_byte(::delphi_esr_msgs::msg::EsrStatus6::_sw_version_dsp_3rd_byte_type arg)
  {
    msg_.sw_version_dsp_3rd_byte = std::move(arg);
    return Init_EsrStatus6_vertical_align_updated(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_wave_diff_a2d
{
public:
  explicit Init_EsrStatus6_wave_diff_a2d(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_sw_version_dsp_3rd_byte wave_diff_a2d(::delphi_esr_msgs::msg::EsrStatus6::_wave_diff_a2d_type arg)
  {
    msg_.wave_diff_a2d = std::move(arg);
    return Init_EsrStatus6_sw_version_dsp_3rd_byte(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_supply_n5v_a2d
{
public:
  explicit Init_EsrStatus6_supply_n5v_a2d(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_wave_diff_a2d supply_n5v_a2d(::delphi_esr_msgs::msg::EsrStatus6::_supply_n5v_a2d_type arg)
  {
    msg_.supply_n5v_a2d = std::move(arg);
    return Init_EsrStatus6_wave_diff_a2d(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_supply_1p8v_a2d
{
public:
  explicit Init_EsrStatus6_supply_1p8v_a2d(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_supply_n5v_a2d supply_1p8v_a2d(::delphi_esr_msgs::msg::EsrStatus6::_supply_1p8v_a2d_type arg)
  {
    msg_.supply_1p8v_a2d = std::move(arg);
    return Init_EsrStatus6_supply_n5v_a2d(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_canmsg
{
public:
  explicit Init_EsrStatus6_canmsg(::delphi_esr_msgs::msg::EsrStatus6 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus6_supply_1p8v_a2d canmsg(::delphi_esr_msgs::msg::EsrStatus6::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrStatus6_supply_1p8v_a2d(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

class Init_EsrStatus6_header
{
public:
  Init_EsrStatus6_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrStatus6_canmsg header(::delphi_esr_msgs::msg::EsrStatus6::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrStatus6_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus6 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrStatus6>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrStatus6_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__BUILDER_HPP_
