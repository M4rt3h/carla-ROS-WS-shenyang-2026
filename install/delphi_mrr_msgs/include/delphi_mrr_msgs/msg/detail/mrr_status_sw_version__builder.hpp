// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusSwVersion.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_status_sw_version__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrStatusSwVersion_can_pbl_release_revision
{
public:
  explicit Init_MrrStatusSwVersion_can_pbl_release_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrStatusSwVersion can_pbl_release_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion::_can_pbl_release_revision_type arg)
  {
    msg_.can_pbl_release_revision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusSwVersion msg_;
};

class Init_MrrStatusSwVersion_can_sw_release_revision
{
public:
  explicit Init_MrrStatusSwVersion_can_sw_release_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion & msg)
  : msg_(msg)
  {}
  Init_MrrStatusSwVersion_can_pbl_release_revision can_sw_release_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion::_can_sw_release_revision_type arg)
  {
    msg_.can_sw_release_revision = std::move(arg);
    return Init_MrrStatusSwVersion_can_pbl_release_revision(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusSwVersion msg_;
};

class Init_MrrStatusSwVersion_can_sw_promote_revision
{
public:
  explicit Init_MrrStatusSwVersion_can_sw_promote_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion & msg)
  : msg_(msg)
  {}
  Init_MrrStatusSwVersion_can_sw_release_revision can_sw_promote_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion::_can_sw_promote_revision_type arg)
  {
    msg_.can_sw_promote_revision = std::move(arg);
    return Init_MrrStatusSwVersion_can_sw_release_revision(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusSwVersion msg_;
};

class Init_MrrStatusSwVersion_can_sw_field_revision
{
public:
  explicit Init_MrrStatusSwVersion_can_sw_field_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion & msg)
  : msg_(msg)
  {}
  Init_MrrStatusSwVersion_can_sw_promote_revision can_sw_field_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion::_can_sw_field_revision_type arg)
  {
    msg_.can_sw_field_revision = std::move(arg);
    return Init_MrrStatusSwVersion_can_sw_promote_revision(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusSwVersion msg_;
};

class Init_MrrStatusSwVersion_can_pbl_promote_revision
{
public:
  explicit Init_MrrStatusSwVersion_can_pbl_promote_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion & msg)
  : msg_(msg)
  {}
  Init_MrrStatusSwVersion_can_sw_field_revision can_pbl_promote_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion::_can_pbl_promote_revision_type arg)
  {
    msg_.can_pbl_promote_revision = std::move(arg);
    return Init_MrrStatusSwVersion_can_sw_field_revision(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusSwVersion msg_;
};

class Init_MrrStatusSwVersion_can_pbl_field_revision
{
public:
  explicit Init_MrrStatusSwVersion_can_pbl_field_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion & msg)
  : msg_(msg)
  {}
  Init_MrrStatusSwVersion_can_pbl_promote_revision can_pbl_field_revision(::delphi_mrr_msgs::msg::MrrStatusSwVersion::_can_pbl_field_revision_type arg)
  {
    msg_.can_pbl_field_revision = std::move(arg);
    return Init_MrrStatusSwVersion_can_pbl_promote_revision(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusSwVersion msg_;
};

class Init_MrrStatusSwVersion_header
{
public:
  Init_MrrStatusSwVersion_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrStatusSwVersion_can_pbl_field_revision header(::delphi_mrr_msgs::msg::MrrStatusSwVersion::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrStatusSwVersion_can_pbl_field_revision(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusSwVersion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrStatusSwVersion>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrStatusSwVersion_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__BUILDER_HPP_
