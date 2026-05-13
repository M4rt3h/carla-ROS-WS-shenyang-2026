// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_srr_msgs:msg/SrrFeatureAlert.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__BUILDER_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__BUILDER_HPP_

#include "delphi_srr_msgs/msg/detail/srr_feature_alert__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_srr_msgs
{

namespace msg
{

namespace builder
{

class Init_SrrFeatureAlert_lcma_active
{
public:
  explicit Init_SrrFeatureAlert_lcma_active(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  ::delphi_srr_msgs::msg::SrrFeatureAlert lcma_active(::delphi_srr_msgs::msg::SrrFeatureAlert::_lcma_active_type arg)
  {
    msg_.lcma_active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_lcma_blis_alert_state
{
public:
  explicit Init_SrrFeatureAlert_lcma_blis_alert_state(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureAlert_lcma_active lcma_blis_alert_state(::delphi_srr_msgs::msg::SrrFeatureAlert::_lcma_blis_alert_state_type arg)
  {
    msg_.lcma_blis_alert_state = std::move(arg);
    return Init_SrrFeatureAlert_lcma_active(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_lcma_cvw_alert_state
{
public:
  explicit Init_SrrFeatureAlert_lcma_cvw_alert_state(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureAlert_lcma_blis_alert_state lcma_cvw_alert_state(::delphi_srr_msgs::msg::SrrFeatureAlert::_lcma_cvw_alert_state_type arg)
  {
    msg_.lcma_cvw_alert_state = std::move(arg);
    return Init_SrrFeatureAlert_lcma_blis_alert_state(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_lcma_cvw_cipv
{
public:
  explicit Init_SrrFeatureAlert_lcma_cvw_cipv(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureAlert_lcma_cvw_alert_state lcma_cvw_cipv(::delphi_srr_msgs::msg::SrrFeatureAlert::_lcma_cvw_cipv_type arg)
  {
    msg_.lcma_cvw_cipv = std::move(arg);
    return Init_SrrFeatureAlert_lcma_cvw_alert_state(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_cta_active
{
public:
  explicit Init_SrrFeatureAlert_cta_active(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureAlert_lcma_cvw_cipv cta_active(::delphi_srr_msgs::msg::SrrFeatureAlert::_cta_active_type arg)
  {
    msg_.cta_active = std::move(arg);
    return Init_SrrFeatureAlert_lcma_cvw_cipv(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_cta_alert
{
public:
  explicit Init_SrrFeatureAlert_cta_alert(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureAlert_cta_active cta_alert(::delphi_srr_msgs::msg::SrrFeatureAlert::_cta_alert_type arg)
  {
    msg_.cta_alert = std::move(arg);
    return Init_SrrFeatureAlert_cta_active(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_cta_selected_track
{
public:
  explicit Init_SrrFeatureAlert_cta_selected_track(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureAlert_cta_alert cta_selected_track(::delphi_srr_msgs::msg::SrrFeatureAlert::_cta_selected_track_type arg)
  {
    msg_.cta_selected_track = std::move(arg);
    return Init_SrrFeatureAlert_cta_alert(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_cta_selected_track_ttc
{
public:
  explicit Init_SrrFeatureAlert_cta_selected_track_ttc(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureAlert_cta_selected_track cta_selected_track_ttc(::delphi_srr_msgs::msg::SrrFeatureAlert::_cta_selected_track_ttc_type arg)
  {
    msg_.cta_selected_track_ttc = std::move(arg);
    return Init_SrrFeatureAlert_cta_selected_track(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_cta_ttc_alert
{
public:
  explicit Init_SrrFeatureAlert_cta_ttc_alert(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureAlert_cta_selected_track_ttc cta_ttc_alert(::delphi_srr_msgs::msg::SrrFeatureAlert::_cta_ttc_alert_type arg)
  {
    msg_.cta_ttc_alert = std::move(arg);
    return Init_SrrFeatureAlert_cta_selected_track_ttc(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_lcma_cvw_ttc
{
public:
  explicit Init_SrrFeatureAlert_lcma_cvw_ttc(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureAlert_cta_ttc_alert lcma_cvw_ttc(::delphi_srr_msgs::msg::SrrFeatureAlert::_lcma_cvw_ttc_type arg)
  {
    msg_.lcma_cvw_ttc = std::move(arg);
    return Init_SrrFeatureAlert_cta_ttc_alert(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_lcma_blis_track_id
{
public:
  explicit Init_SrrFeatureAlert_lcma_blis_track_id(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureAlert_lcma_cvw_ttc lcma_blis_track_id(::delphi_srr_msgs::msg::SrrFeatureAlert::_lcma_blis_track_id_type arg)
  {
    msg_.lcma_blis_track_id = std::move(arg);
    return Init_SrrFeatureAlert_lcma_cvw_ttc(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_lcma_blis_ignored_track_id
{
public:
  explicit Init_SrrFeatureAlert_lcma_blis_ignored_track_id(::delphi_srr_msgs::msg::SrrFeatureAlert & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureAlert_lcma_blis_track_id lcma_blis_ignored_track_id(::delphi_srr_msgs::msg::SrrFeatureAlert::_lcma_blis_ignored_track_id_type arg)
  {
    msg_.lcma_blis_ignored_track_id = std::move(arg);
    return Init_SrrFeatureAlert_lcma_blis_track_id(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

class Init_SrrFeatureAlert_header
{
public:
  Init_SrrFeatureAlert_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrrFeatureAlert_lcma_blis_ignored_track_id header(::delphi_srr_msgs::msg::SrrFeatureAlert::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SrrFeatureAlert_lcma_blis_ignored_track_id(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureAlert msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_srr_msgs::msg::SrrFeatureAlert>()
{
  return delphi_srr_msgs::msg::builder::Init_SrrFeatureAlert_header();
}

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__BUILDER_HPP_
