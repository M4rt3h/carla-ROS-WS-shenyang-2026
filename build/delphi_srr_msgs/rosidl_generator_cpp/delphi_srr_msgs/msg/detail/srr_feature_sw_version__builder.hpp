// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_srr_msgs:msg/SrrFeatureSwVersion.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__BUILDER_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__BUILDER_HPP_

#include "delphi_srr_msgs/msg/detail/srr_feature_sw_version__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_srr_msgs
{

namespace msg
{

namespace builder
{

class Init_SrrFeatureSwVersion_cta_sw_version
{
public:
  explicit Init_SrrFeatureSwVersion_cta_sw_version(::delphi_srr_msgs::msg::SrrFeatureSwVersion & msg)
  : msg_(msg)
  {}
  ::delphi_srr_msgs::msg::SrrFeatureSwVersion cta_sw_version(::delphi_srr_msgs::msg::SrrFeatureSwVersion::_cta_sw_version_type arg)
  {
    msg_.cta_sw_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureSwVersion msg_;
};

class Init_SrrFeatureSwVersion_lcma_sw_version
{
public:
  explicit Init_SrrFeatureSwVersion_lcma_sw_version(::delphi_srr_msgs::msg::SrrFeatureSwVersion & msg)
  : msg_(msg)
  {}
  Init_SrrFeatureSwVersion_cta_sw_version lcma_sw_version(::delphi_srr_msgs::msg::SrrFeatureSwVersion::_lcma_sw_version_type arg)
  {
    msg_.lcma_sw_version = std::move(arg);
    return Init_SrrFeatureSwVersion_cta_sw_version(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureSwVersion msg_;
};

class Init_SrrFeatureSwVersion_header
{
public:
  Init_SrrFeatureSwVersion_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrrFeatureSwVersion_lcma_sw_version header(::delphi_srr_msgs::msg::SrrFeatureSwVersion::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SrrFeatureSwVersion_lcma_sw_version(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrFeatureSwVersion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_srr_msgs::msg::SrrFeatureSwVersion>()
{
  return delphi_srr_msgs::msg::builder::Init_SrrFeatureSwVersion_header();
}

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__BUILDER_HPP_
