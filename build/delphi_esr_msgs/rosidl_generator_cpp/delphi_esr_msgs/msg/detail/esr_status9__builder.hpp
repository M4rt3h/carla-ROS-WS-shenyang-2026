// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus9.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status9__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrStatus9_path_id_acc_3
{
public:
  explicit Init_EsrStatus9_path_id_acc_3(::delphi_esr_msgs::msg::EsrStatus9 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrStatus9 path_id_acc_3(::delphi_esr_msgs::msg::EsrStatus9::_path_id_acc_3_type arg)
  {
    msg_.path_id_acc_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus9 msg_;
};

class Init_EsrStatus9_path_id_acc_2
{
public:
  explicit Init_EsrStatus9_path_id_acc_2(::delphi_esr_msgs::msg::EsrStatus9 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus9_path_id_acc_3 path_id_acc_2(::delphi_esr_msgs::msg::EsrStatus9::_path_id_acc_2_type arg)
  {
    msg_.path_id_acc_2 = std::move(arg);
    return Init_EsrStatus9_path_id_acc_3(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus9 msg_;
};

class Init_EsrStatus9_filtered_xohp_acc_cipv
{
public:
  explicit Init_EsrStatus9_filtered_xohp_acc_cipv(::delphi_esr_msgs::msg::EsrStatus9 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus9_path_id_acc_2 filtered_xohp_acc_cipv(::delphi_esr_msgs::msg::EsrStatus9::_filtered_xohp_acc_cipv_type arg)
  {
    msg_.filtered_xohp_acc_cipv = std::move(arg);
    return Init_EsrStatus9_path_id_acc_2(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus9 msg_;
};

class Init_EsrStatus9_water_spray_target_id
{
public:
  explicit Init_EsrStatus9_water_spray_target_id(::delphi_esr_msgs::msg::EsrStatus9 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus9_filtered_xohp_acc_cipv water_spray_target_id(::delphi_esr_msgs::msg::EsrStatus9::_water_spray_target_id_type arg)
  {
    msg_.water_spray_target_id = std::move(arg);
    return Init_EsrStatus9_filtered_xohp_acc_cipv(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus9 msg_;
};

class Init_EsrStatus9_serial_num_3rd_byte
{
public:
  explicit Init_EsrStatus9_serial_num_3rd_byte(::delphi_esr_msgs::msg::EsrStatus9 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus9_water_spray_target_id serial_num_3rd_byte(::delphi_esr_msgs::msg::EsrStatus9::_serial_num_3rd_byte_type arg)
  {
    msg_.serial_num_3rd_byte = std::move(arg);
    return Init_EsrStatus9_water_spray_target_id(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus9 msg_;
};

class Init_EsrStatus9_sideslip_angle
{
public:
  explicit Init_EsrStatus9_sideslip_angle(::delphi_esr_msgs::msg::EsrStatus9 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus9_serial_num_3rd_byte sideslip_angle(::delphi_esr_msgs::msg::EsrStatus9::_sideslip_angle_type arg)
  {
    msg_.sideslip_angle = std::move(arg);
    return Init_EsrStatus9_serial_num_3rd_byte(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus9 msg_;
};

class Init_EsrStatus9_avg_pwr_cwblkg
{
public:
  explicit Init_EsrStatus9_avg_pwr_cwblkg(::delphi_esr_msgs::msg::EsrStatus9 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus9_sideslip_angle avg_pwr_cwblkg(::delphi_esr_msgs::msg::EsrStatus9::_avg_pwr_cwblkg_type arg)
  {
    msg_.avg_pwr_cwblkg = std::move(arg);
    return Init_EsrStatus9_sideslip_angle(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus9 msg_;
};

class Init_EsrStatus9_canmsg
{
public:
  explicit Init_EsrStatus9_canmsg(::delphi_esr_msgs::msg::EsrStatus9 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus9_avg_pwr_cwblkg canmsg(::delphi_esr_msgs::msg::EsrStatus9::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrStatus9_avg_pwr_cwblkg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus9 msg_;
};

class Init_EsrStatus9_header
{
public:
  Init_EsrStatus9_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrStatus9_canmsg header(::delphi_esr_msgs::msg::EsrStatus9::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrStatus9_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus9 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrStatus9>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrStatus9_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__BUILDER_HPP_
