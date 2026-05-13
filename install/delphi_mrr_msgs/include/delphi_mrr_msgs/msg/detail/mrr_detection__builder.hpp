// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrDetection.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_detection__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrDetection_index_2lsb
{
public:
  explicit Init_MrrDetection_index_2lsb(::delphi_mrr_msgs::msg::MrrDetection & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrDetection index_2lsb(::delphi_mrr_msgs::msg::MrrDetection::_index_2lsb_type arg)
  {
    msg_.index_2lsb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

class Init_MrrDetection_amplitude
{
public:
  explicit Init_MrrDetection_amplitude(::delphi_mrr_msgs::msg::MrrDetection & msg)
  : msg_(msg)
  {}
  Init_MrrDetection_index_2lsb amplitude(::delphi_mrr_msgs::msg::MrrDetection::_amplitude_type arg)
  {
    msg_.amplitude = std::move(arg);
    return Init_MrrDetection_index_2lsb(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

class Init_MrrDetection_range_rate
{
public:
  explicit Init_MrrDetection_range_rate(::delphi_mrr_msgs::msg::MrrDetection & msg)
  : msg_(msg)
  {}
  Init_MrrDetection_amplitude range_rate(::delphi_mrr_msgs::msg::MrrDetection::_range_rate_type arg)
  {
    msg_.range_rate = std::move(arg);
    return Init_MrrDetection_amplitude(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

class Init_MrrDetection_range
{
public:
  explicit Init_MrrDetection_range(::delphi_mrr_msgs::msg::MrrDetection & msg)
  : msg_(msg)
  {}
  Init_MrrDetection_range_rate range(::delphi_mrr_msgs::msg::MrrDetection::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_MrrDetection_range_rate(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

class Init_MrrDetection_azimuth
{
public:
  explicit Init_MrrDetection_azimuth(::delphi_mrr_msgs::msg::MrrDetection & msg)
  : msg_(msg)
  {}
  Init_MrrDetection_range azimuth(::delphi_mrr_msgs::msg::MrrDetection::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_MrrDetection_range(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

class Init_MrrDetection_valid_level
{
public:
  explicit Init_MrrDetection_valid_level(::delphi_mrr_msgs::msg::MrrDetection & msg)
  : msg_(msg)
  {}
  Init_MrrDetection_azimuth valid_level(::delphi_mrr_msgs::msg::MrrDetection::_valid_level_type arg)
  {
    msg_.valid_level = std::move(arg);
    return Init_MrrDetection_azimuth(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

class Init_MrrDetection_host_veh_clutter
{
public:
  explicit Init_MrrDetection_host_veh_clutter(::delphi_mrr_msgs::msg::MrrDetection & msg)
  : msg_(msg)
  {}
  Init_MrrDetection_valid_level host_veh_clutter(::delphi_mrr_msgs::msg::MrrDetection::_host_veh_clutter_type arg)
  {
    msg_.host_veh_clutter = std::move(arg);
    return Init_MrrDetection_valid_level(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

class Init_MrrDetection_nd_target
{
public:
  explicit Init_MrrDetection_nd_target(::delphi_mrr_msgs::msg::MrrDetection & msg)
  : msg_(msg)
  {}
  Init_MrrDetection_host_veh_clutter nd_target(::delphi_mrr_msgs::msg::MrrDetection::_nd_target_type arg)
  {
    msg_.nd_target = std::move(arg);
    return Init_MrrDetection_host_veh_clutter(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

class Init_MrrDetection_super_res_target
{
public:
  explicit Init_MrrDetection_super_res_target(::delphi_mrr_msgs::msg::MrrDetection & msg)
  : msg_(msg)
  {}
  Init_MrrDetection_nd_target super_res_target(::delphi_mrr_msgs::msg::MrrDetection::_super_res_target_type arg)
  {
    msg_.super_res_target = std::move(arg);
    return Init_MrrDetection_nd_target(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

class Init_MrrDetection_confid_azimuth
{
public:
  explicit Init_MrrDetection_confid_azimuth(::delphi_mrr_msgs::msg::MrrDetection & msg)
  : msg_(msg)
  {}
  Init_MrrDetection_super_res_target confid_azimuth(::delphi_mrr_msgs::msg::MrrDetection::_confid_azimuth_type arg)
  {
    msg_.confid_azimuth = std::move(arg);
    return Init_MrrDetection_super_res_target(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

class Init_MrrDetection_detection_id
{
public:
  explicit Init_MrrDetection_detection_id(::delphi_mrr_msgs::msg::MrrDetection & msg)
  : msg_(msg)
  {}
  Init_MrrDetection_confid_azimuth detection_id(::delphi_mrr_msgs::msg::MrrDetection::_detection_id_type arg)
  {
    msg_.detection_id = std::move(arg);
    return Init_MrrDetection_confid_azimuth(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

class Init_MrrDetection_header
{
public:
  Init_MrrDetection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrDetection_detection_id header(::delphi_mrr_msgs::msg::MrrDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrDetection_detection_id(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrDetection>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrDetection_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__BUILDER_HPP_
