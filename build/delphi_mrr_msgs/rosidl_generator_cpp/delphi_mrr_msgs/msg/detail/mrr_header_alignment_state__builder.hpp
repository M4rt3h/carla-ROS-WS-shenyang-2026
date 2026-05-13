// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderAlignmentState.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_header_alignment_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrHeaderAlignmentState_can_auto_align_hangle
{
public:
  explicit Init_MrrHeaderAlignmentState_can_auto_align_hangle(::delphi_mrr_msgs::msg::MrrHeaderAlignmentState & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrHeaderAlignmentState can_auto_align_hangle(::delphi_mrr_msgs::msg::MrrHeaderAlignmentState::_can_auto_align_hangle_type arg)
  {
    msg_.can_auto_align_hangle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderAlignmentState msg_;
};

class Init_MrrHeaderAlignmentState_can_auto_align_hangle_ref
{
public:
  explicit Init_MrrHeaderAlignmentState_can_auto_align_hangle_ref(::delphi_mrr_msgs::msg::MrrHeaderAlignmentState & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderAlignmentState_can_auto_align_hangle can_auto_align_hangle_ref(::delphi_mrr_msgs::msg::MrrHeaderAlignmentState::_can_auto_align_hangle_ref_type arg)
  {
    msg_.can_auto_align_hangle_ref = std::move(arg);
    return Init_MrrHeaderAlignmentState_can_auto_align_hangle(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderAlignmentState msg_;
};

class Init_MrrHeaderAlignmentState_can_alignment_state
{
public:
  explicit Init_MrrHeaderAlignmentState_can_alignment_state(::delphi_mrr_msgs::msg::MrrHeaderAlignmentState & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderAlignmentState_can_auto_align_hangle_ref can_alignment_state(::delphi_mrr_msgs::msg::MrrHeaderAlignmentState::_can_alignment_state_type arg)
  {
    msg_.can_alignment_state = std::move(arg);
    return Init_MrrHeaderAlignmentState_can_auto_align_hangle_ref(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderAlignmentState msg_;
};

class Init_MrrHeaderAlignmentState_can_alignment_status
{
public:
  explicit Init_MrrHeaderAlignmentState_can_alignment_status(::delphi_mrr_msgs::msg::MrrHeaderAlignmentState & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderAlignmentState_can_alignment_state can_alignment_status(::delphi_mrr_msgs::msg::MrrHeaderAlignmentState::_can_alignment_status_type arg)
  {
    msg_.can_alignment_status = std::move(arg);
    return Init_MrrHeaderAlignmentState_can_alignment_state(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderAlignmentState msg_;
};

class Init_MrrHeaderAlignmentState_can_auto_align_hangle_qf
{
public:
  explicit Init_MrrHeaderAlignmentState_can_auto_align_hangle_qf(::delphi_mrr_msgs::msg::MrrHeaderAlignmentState & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderAlignmentState_can_alignment_status can_auto_align_hangle_qf(::delphi_mrr_msgs::msg::MrrHeaderAlignmentState::_can_auto_align_hangle_qf_type arg)
  {
    msg_.can_auto_align_hangle_qf = std::move(arg);
    return Init_MrrHeaderAlignmentState_can_alignment_status(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderAlignmentState msg_;
};

class Init_MrrHeaderAlignmentState_header
{
public:
  Init_MrrHeaderAlignmentState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrHeaderAlignmentState_can_auto_align_hangle_qf header(::delphi_mrr_msgs::msg::MrrHeaderAlignmentState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrHeaderAlignmentState_can_auto_align_hangle_qf(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderAlignmentState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrHeaderAlignmentState>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrHeaderAlignmentState_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__BUILDER_HPP_
