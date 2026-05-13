// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_vehicle4__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrVehicle4_fac_tgt_range_m2t
{
public:
  explicit Init_EsrVehicle4_fac_tgt_range_m2t(::delphi_esr_msgs::msg::EsrVehicle4 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrVehicle4 fac_tgt_range_m2t(::delphi_esr_msgs::msg::EsrVehicle4::_fac_tgt_range_m2t_type arg)
  {
    msg_.fac_tgt_range_m2t = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle4 msg_;
};

class Init_EsrVehicle4_fac_tgt_range_r2m
{
public:
  explicit Init_EsrVehicle4_fac_tgt_range_r2m(::delphi_esr_msgs::msg::EsrVehicle4 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle4_fac_tgt_range_m2t fac_tgt_range_r2m(::delphi_esr_msgs::msg::EsrVehicle4::_fac_tgt_range_r2m_type arg)
  {
    msg_.fac_tgt_range_r2m = std::move(arg);
    return Init_EsrVehicle4_fac_tgt_range_m2t(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle4 msg_;
};

class Init_EsrVehicle4_fac_tgt_range_1
{
public:
  explicit Init_EsrVehicle4_fac_tgt_range_1(::delphi_esr_msgs::msg::EsrVehicle4 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle4_fac_tgt_range_r2m fac_tgt_range_1(::delphi_esr_msgs::msg::EsrVehicle4::_fac_tgt_range_1_type arg)
  {
    msg_.fac_tgt_range_1 = std::move(arg);
    return Init_EsrVehicle4_fac_tgt_range_r2m(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle4 msg_;
};

class Init_EsrVehicle4_fac_tgt_mtg_space_ver
{
public:
  explicit Init_EsrVehicle4_fac_tgt_mtg_space_ver(::delphi_esr_msgs::msg::EsrVehicle4 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle4_fac_tgt_range_1 fac_tgt_mtg_space_ver(::delphi_esr_msgs::msg::EsrVehicle4::_fac_tgt_mtg_space_ver_type arg)
  {
    msg_.fac_tgt_mtg_space_ver = std::move(arg);
    return Init_EsrVehicle4_fac_tgt_range_1(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle4 msg_;
};

class Init_EsrVehicle4_fac_tgt_mtg_space_hor
{
public:
  explicit Init_EsrVehicle4_fac_tgt_mtg_space_hor(::delphi_esr_msgs::msg::EsrVehicle4 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle4_fac_tgt_mtg_space_ver fac_tgt_mtg_space_hor(::delphi_esr_msgs::msg::EsrVehicle4::_fac_tgt_mtg_space_hor_type arg)
  {
    msg_.fac_tgt_mtg_space_hor = std::move(arg);
    return Init_EsrVehicle4_fac_tgt_mtg_space_ver(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle4 msg_;
};

class Init_EsrVehicle4_fac_tgt_mtg_offset
{
public:
  explicit Init_EsrVehicle4_fac_tgt_mtg_offset(::delphi_esr_msgs::msg::EsrVehicle4 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle4_fac_tgt_mtg_space_hor fac_tgt_mtg_offset(::delphi_esr_msgs::msg::EsrVehicle4::_fac_tgt_mtg_offset_type arg)
  {
    msg_.fac_tgt_mtg_offset = std::move(arg);
    return Init_EsrVehicle4_fac_tgt_mtg_space_hor(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle4 msg_;
};

class Init_EsrVehicle4_fac_align_samp_req
{
public:
  explicit Init_EsrVehicle4_fac_align_samp_req(::delphi_esr_msgs::msg::EsrVehicle4 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle4_fac_tgt_mtg_offset fac_align_samp_req(::delphi_esr_msgs::msg::EsrVehicle4::_fac_align_samp_req_type arg)
  {
    msg_.fac_align_samp_req = std::move(arg);
    return Init_EsrVehicle4_fac_tgt_mtg_offset(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle4 msg_;
};

class Init_EsrVehicle4_fac_align_max_nt
{
public:
  explicit Init_EsrVehicle4_fac_align_max_nt(::delphi_esr_msgs::msg::EsrVehicle4 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle4_fac_align_samp_req fac_align_max_nt(::delphi_esr_msgs::msg::EsrVehicle4::_fac_align_max_nt_type arg)
  {
    msg_.fac_align_max_nt = std::move(arg);
    return Init_EsrVehicle4_fac_align_samp_req(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle4 msg_;
};

class Init_EsrVehicle4_fac_align_cmd_2
{
public:
  explicit Init_EsrVehicle4_fac_align_cmd_2(::delphi_esr_msgs::msg::EsrVehicle4 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle4_fac_align_max_nt fac_align_cmd_2(::delphi_esr_msgs::msg::EsrVehicle4::_fac_align_cmd_2_type arg)
  {
    msg_.fac_align_cmd_2 = std::move(arg);
    return Init_EsrVehicle4_fac_align_max_nt(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle4 msg_;
};

class Init_EsrVehicle4_fac_align_cmd_1
{
public:
  explicit Init_EsrVehicle4_fac_align_cmd_1(::delphi_esr_msgs::msg::EsrVehicle4 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle4_fac_align_cmd_2 fac_align_cmd_1(::delphi_esr_msgs::msg::EsrVehicle4::_fac_align_cmd_1_type arg)
  {
    msg_.fac_align_cmd_1 = std::move(arg);
    return Init_EsrVehicle4_fac_align_cmd_2(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle4 msg_;
};

class Init_EsrVehicle4_header
{
public:
  Init_EsrVehicle4_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrVehicle4_fac_align_cmd_1 header(::delphi_esr_msgs::msg::EsrVehicle4::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrVehicle4_fac_align_cmd_1(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle4 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrVehicle4>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrVehicle4_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__BUILDER_HPP_
