// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderInformationDetections.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_INFORMATION_DETECTIONS__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_INFORMATION_DETECTIONS__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_header_information_detections__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrHeaderInformationDetections_can_look_index
{
public:
  explicit Init_MrrHeaderInformationDetections_can_look_index(::delphi_mrr_msgs::msg::MrrHeaderInformationDetections & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrHeaderInformationDetections can_look_index(::delphi_mrr_msgs::msg::MrrHeaderInformationDetections::_can_look_index_type arg)
  {
    msg_.can_look_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderInformationDetections msg_;
};

class Init_MrrHeaderInformationDetections_can_look_id
{
public:
  explicit Init_MrrHeaderInformationDetections_can_look_id(::delphi_mrr_msgs::msg::MrrHeaderInformationDetections & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderInformationDetections_can_look_index can_look_id(::delphi_mrr_msgs::msg::MrrHeaderInformationDetections::_can_look_id_type arg)
  {
    msg_.can_look_id = std::move(arg);
    return Init_MrrHeaderInformationDetections_can_look_index(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderInformationDetections msg_;
};

class Init_MrrHeaderInformationDetections_can_number_of_det
{
public:
  explicit Init_MrrHeaderInformationDetections_can_number_of_det(::delphi_mrr_msgs::msg::MrrHeaderInformationDetections & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderInformationDetections_can_look_id can_number_of_det(::delphi_mrr_msgs::msg::MrrHeaderInformationDetections::_can_number_of_det_type arg)
  {
    msg_.can_number_of_det = std::move(arg);
    return Init_MrrHeaderInformationDetections_can_look_id(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderInformationDetections msg_;
};

class Init_MrrHeaderInformationDetections_can_scan_index
{
public:
  explicit Init_MrrHeaderInformationDetections_can_scan_index(::delphi_mrr_msgs::msg::MrrHeaderInformationDetections & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderInformationDetections_can_number_of_det can_scan_index(::delphi_mrr_msgs::msg::MrrHeaderInformationDetections::_can_scan_index_type arg)
  {
    msg_.can_scan_index = std::move(arg);
    return Init_MrrHeaderInformationDetections_can_number_of_det(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderInformationDetections msg_;
};

class Init_MrrHeaderInformationDetections_can_align_updates_done
{
public:
  explicit Init_MrrHeaderInformationDetections_can_align_updates_done(::delphi_mrr_msgs::msg::MrrHeaderInformationDetections & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderInformationDetections_can_scan_index can_align_updates_done(::delphi_mrr_msgs::msg::MrrHeaderInformationDetections::_can_align_updates_done_type arg)
  {
    msg_.can_align_updates_done = std::move(arg);
    return Init_MrrHeaderInformationDetections_can_scan_index(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderInformationDetections msg_;
};

class Init_MrrHeaderInformationDetections_header
{
public:
  Init_MrrHeaderInformationDetections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrHeaderInformationDetections_can_align_updates_done header(::delphi_mrr_msgs::msg::MrrHeaderInformationDetections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrHeaderInformationDetections_can_align_updates_done(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderInformationDetections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrHeaderInformationDetections>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrHeaderInformationDetections_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_INFORMATION_DETECTIONS__BUILDER_HPP_
