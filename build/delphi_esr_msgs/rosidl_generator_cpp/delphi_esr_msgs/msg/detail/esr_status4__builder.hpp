// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status4__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrStatus4_path_id_acc_stat
{
public:
  explicit Init_EsrStatus4_path_id_acc_stat(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrStatus4 path_id_acc_stat(::delphi_esr_msgs::msg::EsrStatus4::_path_id_acc_stat_type arg)
  {
    msg_.path_id_acc_stat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_auto_align_angle
{
public:
  explicit Init_EsrStatus4_auto_align_angle(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_path_id_acc_stat auto_align_angle(::delphi_esr_msgs::msg::EsrStatus4::_auto_align_angle_type arg)
  {
    msg_.auto_align_angle = std::move(arg);
    return Init_EsrStatus4_path_id_acc_stat(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_path_id_fcw_stat
{
public:
  explicit Init_EsrStatus4_path_id_fcw_stat(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_auto_align_angle path_id_fcw_stat(::delphi_esr_msgs::msg::EsrStatus4::_path_id_fcw_stat_type arg)
  {
    msg_.path_id_fcw_stat = std::move(arg);
    return Init_EsrStatus4_auto_align_angle(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_path_id_fcw_move
{
public:
  explicit Init_EsrStatus4_path_id_fcw_move(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_path_id_fcw_stat path_id_fcw_move(::delphi_esr_msgs::msg::EsrStatus4::_path_id_fcw_move_type arg)
  {
    msg_.path_id_fcw_move = std::move(arg);
    return Init_EsrStatus4_path_id_fcw_stat(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_path_id_cmbb_stat
{
public:
  explicit Init_EsrStatus4_path_id_cmbb_stat(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_path_id_fcw_move path_id_cmbb_stat(::delphi_esr_msgs::msg::EsrStatus4::_path_id_cmbb_stat_type arg)
  {
    msg_.path_id_cmbb_stat = std::move(arg);
    return Init_EsrStatus4_path_id_fcw_move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_path_id_cmbb_move
{
public:
  explicit Init_EsrStatus4_path_id_cmbb_move(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_path_id_cmbb_stat path_id_cmbb_move(::delphi_esr_msgs::msg::EsrStatus4::_path_id_cmbb_move_type arg)
  {
    msg_.path_id_cmbb_move = std::move(arg);
    return Init_EsrStatus4_path_id_cmbb_stat(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_path_id_acc
{
public:
  explicit Init_EsrStatus4_path_id_acc(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_path_id_cmbb_move path_id_acc(::delphi_esr_msgs::msg::EsrStatus4::_path_id_acc_type arg)
  {
    msg_.path_id_acc = std::move(arg);
    return Init_EsrStatus4_path_id_cmbb_move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_rolling_count_3
{
public:
  explicit Init_EsrStatus4_rolling_count_3(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_path_id_acc rolling_count_3(::delphi_esr_msgs::msg::EsrStatus4::_rolling_count_3_type arg)
  {
    msg_.rolling_count_3 = std::move(arg);
    return Init_EsrStatus4_path_id_acc(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_mr_lr_mode
{
public:
  explicit Init_EsrStatus4_mr_lr_mode(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_rolling_count_3 mr_lr_mode(::delphi_esr_msgs::msg::EsrStatus4::_mr_lr_mode_type arg)
  {
    msg_.mr_lr_mode = std::move(arg);
    return Init_EsrStatus4_rolling_count_3(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_partial_blockage
{
public:
  explicit Init_EsrStatus4_partial_blockage(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_mr_lr_mode partial_blockage(::delphi_esr_msgs::msg::EsrStatus4::_partial_blockage_type arg)
  {
    msg_.partial_blockage = std::move(arg);
    return Init_EsrStatus4_mr_lr_mode(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_sidelobe_blockage
{
public:
  explicit Init_EsrStatus4_sidelobe_blockage(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_partial_blockage sidelobe_blockage(::delphi_esr_msgs::msg::EsrStatus4::_sidelobe_blockage_type arg)
  {
    msg_.sidelobe_blockage = std::move(arg);
    return Init_EsrStatus4_partial_blockage(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_lr_only_grating_lobe_det
{
public:
  explicit Init_EsrStatus4_lr_only_grating_lobe_det(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_sidelobe_blockage lr_only_grating_lobe_det(::delphi_esr_msgs::msg::EsrStatus4::_lr_only_grating_lobe_det_type arg)
  {
    msg_.lr_only_grating_lobe_det = std::move(arg);
    return Init_EsrStatus4_sidelobe_blockage(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_truck_target_det
{
public:
  explicit Init_EsrStatus4_truck_target_det(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_lr_only_grating_lobe_det truck_target_det(::delphi_esr_msgs::msg::EsrStatus4::_truck_target_det_type arg)
  {
    msg_.truck_target_det = std::move(arg);
    return Init_EsrStatus4_lr_only_grating_lobe_det(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_canmsg
{
public:
  explicit Init_EsrStatus4_canmsg(::delphi_esr_msgs::msg::EsrStatus4 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus4_truck_target_det canmsg(::delphi_esr_msgs::msg::EsrStatus4::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrStatus4_truck_target_det(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

class Init_EsrStatus4_header
{
public:
  Init_EsrStatus4_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrStatus4_canmsg header(::delphi_esr_msgs::msg::EsrStatus4::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrStatus4_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus4 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrStatus4>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrStatus4_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__BUILDER_HPP_
