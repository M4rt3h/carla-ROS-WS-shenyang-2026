// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_vehicle3__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrVehicle3_angle_mounting_offset
{
public:
  explicit Init_EsrVehicle3_angle_mounting_offset(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrVehicle3 angle_mounting_offset(::delphi_esr_msgs::msg::EsrVehicle3::_angle_mounting_offset_type arg)
  {
    msg_.angle_mounting_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_serv_align_updates_need
{
public:
  explicit Init_EsrVehicle3_serv_align_updates_need(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_angle_mounting_offset serv_align_updates_need(::delphi_esr_msgs::msg::EsrVehicle3::_serv_align_updates_need_type arg)
  {
    msg_.serv_align_updates_need = std::move(arg);
    return Init_EsrVehicle3_angle_mounting_offset(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_wheel_slip
{
public:
  explicit Init_EsrVehicle3_wheel_slip(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_serv_align_updates_need wheel_slip(::delphi_esr_msgs::msg::EsrVehicle3::_wheel_slip_type arg)
  {
    msg_.wheel_slip = std::move(arg);
    return Init_EsrVehicle3_serv_align_updates_need(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_auto_align_converged
{
public:
  explicit Init_EsrVehicle3_auto_align_converged(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_wheel_slip auto_align_converged(::delphi_esr_msgs::msg::EsrVehicle3::_auto_align_converged_type arg)
  {
    msg_.auto_align_converged = std::move(arg);
    return Init_EsrVehicle3_wheel_slip(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_aalign_avg_ctr_total
{
public:
  explicit Init_EsrVehicle3_aalign_avg_ctr_total(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_auto_align_converged aalign_avg_ctr_total(::delphi_esr_msgs::msg::EsrVehicle3::_aalign_avg_ctr_total_type arg)
  {
    msg_.aalign_avg_ctr_total = std::move(arg);
    return Init_EsrVehicle3_auto_align_converged(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_serv_align_enable
{
public:
  explicit Init_EsrVehicle3_serv_align_enable(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_aalign_avg_ctr_total serv_align_enable(::delphi_esr_msgs::msg::EsrVehicle3::_serv_align_enable_type arg)
  {
    msg_.serv_align_enable = std::move(arg);
    return Init_EsrVehicle3_aalign_avg_ctr_total(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_serv_align_type
{
public:
  explicit Init_EsrVehicle3_serv_align_type(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_serv_align_enable serv_align_type(::delphi_esr_msgs::msg::EsrVehicle3::_serv_align_type_type arg)
  {
    msg_.serv_align_type = std::move(arg);
    return Init_EsrVehicle3_serv_align_enable(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_radar_height
{
public:
  explicit Init_EsrVehicle3_radar_height(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_serv_align_type radar_height(::delphi_esr_msgs::msg::EsrVehicle3::_radar_height_type arg)
  {
    msg_.radar_height = std::move(arg);
    return Init_EsrVehicle3_serv_align_type(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_auto_align_disable
{
public:
  explicit Init_EsrVehicle3_auto_align_disable(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_radar_height auto_align_disable(::delphi_esr_msgs::msg::EsrVehicle3::_auto_align_disable_type arg)
  {
    msg_.auto_align_disable = std::move(arg);
    return Init_EsrVehicle3_radar_height(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_radar_fov_mr
{
public:
  explicit Init_EsrVehicle3_radar_fov_mr(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_auto_align_disable radar_fov_mr(::delphi_esr_msgs::msg::EsrVehicle3::_radar_fov_mr_type arg)
  {
    msg_.radar_fov_mr = std::move(arg);
    return Init_EsrVehicle3_auto_align_disable(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_radar_fov_lr
{
public:
  explicit Init_EsrVehicle3_radar_fov_lr(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_radar_fov_mr radar_fov_lr(::delphi_esr_msgs::msg::EsrVehicle3::_radar_fov_lr_type arg)
  {
    msg_.radar_fov_lr = std::move(arg);
    return Init_EsrVehicle3_radar_fov_mr(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_long_accel
{
public:
  explicit Init_EsrVehicle3_long_accel(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_radar_fov_lr long_accel(::delphi_esr_msgs::msg::EsrVehicle3::_long_accel_type arg)
  {
    msg_.long_accel = std::move(arg);
    return Init_EsrVehicle3_radar_fov_lr(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_lat_accel
{
public:
  explicit Init_EsrVehicle3_lat_accel(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_long_accel lat_accel(::delphi_esr_msgs::msg::EsrVehicle3::_lat_accel_type arg)
  {
    msg_.lat_accel = std::move(arg);
    return Init_EsrVehicle3_long_accel(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_lat_accel_validity
{
public:
  explicit Init_EsrVehicle3_lat_accel_validity(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_lat_accel lat_accel_validity(::delphi_esr_msgs::msg::EsrVehicle3::_lat_accel_validity_type arg)
  {
    msg_.lat_accel_validity = std::move(arg);
    return Init_EsrVehicle3_lat_accel(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_long_accel_validity
{
public:
  explicit Init_EsrVehicle3_long_accel_validity(::delphi_esr_msgs::msg::EsrVehicle3 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle3_lat_accel_validity long_accel_validity(::delphi_esr_msgs::msg::EsrVehicle3::_long_accel_validity_type arg)
  {
    msg_.long_accel_validity = std::move(arg);
    return Init_EsrVehicle3_lat_accel_validity(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

class Init_EsrVehicle3_header
{
public:
  Init_EsrVehicle3_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrVehicle3_long_accel_validity header(::delphi_esr_msgs::msg::EsrVehicle3::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrVehicle3_long_accel_validity(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrVehicle3>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrVehicle3_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__BUILDER_HPP_
