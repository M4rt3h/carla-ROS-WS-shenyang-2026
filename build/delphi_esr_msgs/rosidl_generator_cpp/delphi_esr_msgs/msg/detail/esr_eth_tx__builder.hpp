// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrEthTx.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_eth_tx__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrEthTx_target_report_amplitude
{
public:
  explicit Init_EsrEthTx_target_report_amplitude(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrEthTx target_report_amplitude(::delphi_esr_msgs::msg::EsrEthTx::_target_report_amplitude_type arg)
  {
    msg_.target_report_amplitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_target_report_theta
{
public:
  explicit Init_EsrEthTx_target_report_theta(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_target_report_amplitude target_report_theta(::delphi_esr_msgs::msg::EsrEthTx::_target_report_theta_type arg)
  {
    msg_.target_report_theta = std::move(arg);
    return Init_EsrEthTx_target_report_amplitude(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_target_report_range_rate
{
public:
  explicit Init_EsrEthTx_target_report_range_rate(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_target_report_theta target_report_range_rate(::delphi_esr_msgs::msg::EsrEthTx::_target_report_range_rate_type arg)
  {
    msg_.target_report_range_rate = std::move(arg);
    return Init_EsrEthTx_target_report_theta(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_target_report_range
{
public:
  explicit Init_EsrEthTx_target_report_range(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_target_report_range_rate target_report_range(::delphi_esr_msgs::msg::EsrEthTx::_target_report_range_type arg)
  {
    msg_.target_report_range = std::move(arg);
    return Init_EsrEthTx_target_report_range_rate(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_target_report_count
{
public:
  explicit Init_EsrEthTx_target_report_count(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_target_report_range target_report_count(::delphi_esr_msgs::msg::EsrEthTx::_target_report_count_type arg)
  {
    msg_.target_report_count = std::move(arg);
    return Init_EsrEthTx_target_report_range(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_field_revision
{
public:
  explicit Init_EsrEthTx_field_revision(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_target_report_count field_revision(::delphi_esr_msgs::msg::EsrEthTx::_field_revision_type arg)
  {
    msg_.field_revision = std::move(arg);
    return Init_EsrEthTx_target_report_count(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_promote_revision
{
public:
  explicit Init_EsrEthTx_promote_revision(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_field_revision promote_revision(::delphi_esr_msgs::msg::EsrEthTx::_promote_revision_type arg)
  {
    msg_.promote_revision = std::move(arg);
    return Init_EsrEthTx_field_revision(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_release_revision
{
public:
  explicit Init_EsrEthTx_release_revision(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_promote_revision release_revision(::delphi_esr_msgs::msg::EsrEthTx::_release_revision_type arg)
  {
    msg_.release_revision = std::move(arg);
    return Init_EsrEthTx_promote_revision(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_xcp_timestamp
{
public:
  explicit Init_EsrEthTx_xcp_timestamp(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_release_revision xcp_timestamp(::delphi_esr_msgs::msg::EsrEthTx::_xcp_timestamp_type arg)
  {
    msg_.xcp_timestamp = std::move(arg);
    return Init_EsrEthTx_release_revision(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_target_report_host_yaw_rate
{
public:
  explicit Init_EsrEthTx_target_report_host_yaw_rate(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_xcp_timestamp target_report_host_yaw_rate(::delphi_esr_msgs::msg::EsrEthTx::_target_report_host_yaw_rate_type arg)
  {
    msg_.target_report_host_yaw_rate = std::move(arg);
    return Init_EsrEthTx_xcp_timestamp(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_target_report_host_speed
{
public:
  explicit Init_EsrEthTx_target_report_host_speed(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_target_report_host_yaw_rate target_report_host_speed(::delphi_esr_msgs::msg::EsrEthTx::_target_report_host_speed_type arg)
  {
    msg_.target_report_host_speed = std::move(arg);
    return Init_EsrEthTx_target_report_host_yaw_rate(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_mmr_scan_index
{
public:
  explicit Init_EsrEthTx_mmr_scan_index(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_target_report_host_speed mmr_scan_index(::delphi_esr_msgs::msg::EsrEthTx::_mmr_scan_index_type arg)
  {
    msg_.mmr_scan_index = std::move(arg);
    return Init_EsrEthTx_target_report_host_speed(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_look_index
{
public:
  explicit Init_EsrEthTx_look_index(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_mmr_scan_index look_index(::delphi_esr_msgs::msg::EsrEthTx::_look_index_type arg)
  {
    msg_.look_index = std::move(arg);
    return Init_EsrEthTx_mmr_scan_index(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_xcp_scan_type
{
public:
  explicit Init_EsrEthTx_xcp_scan_type(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_look_index xcp_scan_type(::delphi_esr_msgs::msg::EsrEthTx::_xcp_scan_type_type arg)
  {
    msg_.xcp_scan_type = std::move(arg);
    return Init_EsrEthTx_look_index(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_tcp_size
{
public:
  explicit Init_EsrEthTx_tcp_size(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_xcp_scan_type tcp_size(::delphi_esr_msgs::msg::EsrEthTx::_tcp_size_type arg)
  {
    msg_.tcp_size = std::move(arg);
    return Init_EsrEthTx_xcp_scan_type(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_scan_index
{
public:
  explicit Init_EsrEthTx_scan_index(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_tcp_size scan_index(::delphi_esr_msgs::msg::EsrEthTx::_scan_index_type arg)
  {
    msg_.scan_index = std::move(arg);
    return Init_EsrEthTx_tcp_size(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_xcp_format_version
{
public:
  explicit Init_EsrEthTx_xcp_format_version(::delphi_esr_msgs::msg::EsrEthTx & msg)
  : msg_(msg)
  {}
  Init_EsrEthTx_scan_index xcp_format_version(::delphi_esr_msgs::msg::EsrEthTx::_xcp_format_version_type arg)
  {
    msg_.xcp_format_version = std::move(arg);
    return Init_EsrEthTx_scan_index(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

class Init_EsrEthTx_header
{
public:
  Init_EsrEthTx_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrEthTx_xcp_format_version header(::delphi_esr_msgs::msg::EsrEthTx::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrEthTx_xcp_format_version(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrEthTx msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrEthTx>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrEthTx_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__BUILDER_HPP_
