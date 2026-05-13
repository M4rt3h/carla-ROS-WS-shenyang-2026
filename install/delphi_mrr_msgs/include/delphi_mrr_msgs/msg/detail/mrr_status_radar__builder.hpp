// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusRadar.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_status_radar__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrStatusRadar_can_xcvr_operational
{
public:
  explicit Init_MrrStatusRadar_can_xcvr_operational(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrStatusRadar can_xcvr_operational(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_xcvr_operational_type arg)
  {
    msg_.can_xcvr_operational = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_can_radar_not_op
{
public:
  explicit Init_MrrStatusRadar_can_radar_not_op(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  Init_MrrStatusRadar_can_xcvr_operational can_radar_not_op(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_radar_not_op_type arg)
  {
    msg_.can_radar_not_op = std::move(arg);
    return Init_MrrStatusRadar_can_xcvr_operational(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_can_radar_overheat_error
{
public:
  explicit Init_MrrStatusRadar_can_radar_overheat_error(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  Init_MrrStatusRadar_can_radar_not_op can_radar_overheat_error(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_radar_overheat_error_type arg)
  {
    msg_.can_radar_overheat_error = std::move(arg);
    return Init_MrrStatusRadar_can_radar_not_op(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_can_radar_align_not_start
{
public:
  explicit Init_MrrStatusRadar_can_radar_align_not_start(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  Init_MrrStatusRadar_can_radar_overheat_error can_radar_align_not_start(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_radar_align_not_start_type arg)
  {
    msg_.can_radar_align_not_start = std::move(arg);
    return Init_MrrStatusRadar_can_radar_overheat_error(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_can_radar_align_out_range
{
public:
  explicit Init_MrrStatusRadar_can_radar_align_out_range(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  Init_MrrStatusRadar_can_radar_align_not_start can_radar_align_out_range(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_radar_align_out_range_type arg)
  {
    msg_.can_radar_align_out_range = std::move(arg);
    return Init_MrrStatusRadar_can_radar_align_not_start(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_can_radar_ext_cond_nok
{
public:
  explicit Init_MrrStatusRadar_can_radar_ext_cond_nok(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  Init_MrrStatusRadar_can_radar_align_out_range can_radar_ext_cond_nok(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_radar_ext_cond_nok_type arg)
  {
    msg_.can_radar_ext_cond_nok = std::move(arg);
    return Init_MrrStatusRadar_can_radar_align_out_range(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_can_blockage_mnr
{
public:
  explicit Init_MrrStatusRadar_can_blockage_mnr(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  Init_MrrStatusRadar_can_radar_ext_cond_nok can_blockage_mnr(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_blockage_mnr_type arg)
  {
    msg_.can_blockage_mnr = std::move(arg);
    return Init_MrrStatusRadar_can_radar_ext_cond_nok(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_can_blockage_sidelobe
{
public:
  explicit Init_MrrStatusRadar_can_blockage_sidelobe(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  Init_MrrStatusRadar_can_blockage_mnr can_blockage_sidelobe(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_blockage_sidelobe_type arg)
  {
    msg_.can_blockage_sidelobe = std::move(arg);
    return Init_MrrStatusRadar_can_blockage_mnr(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_can_radar_align_incomplete
{
public:
  explicit Init_MrrStatusRadar_can_radar_align_incomplete(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  Init_MrrStatusRadar_can_blockage_sidelobe can_radar_align_incomplete(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_radar_align_incomplete_type arg)
  {
    msg_.can_radar_align_incomplete = std::move(arg);
    return Init_MrrStatusRadar_can_blockage_sidelobe(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_can_blockage_sidelobe_filter_val
{
public:
  explicit Init_MrrStatusRadar_can_blockage_sidelobe_filter_val(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  Init_MrrStatusRadar_can_radar_align_incomplete can_blockage_sidelobe_filter_val(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_blockage_sidelobe_filter_val_type arg)
  {
    msg_.can_blockage_sidelobe_filter_val = std::move(arg);
    return Init_MrrStatusRadar_can_radar_align_incomplete(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_can_recommend_unconverge
{
public:
  explicit Init_MrrStatusRadar_can_recommend_unconverge(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  Init_MrrStatusRadar_can_blockage_sidelobe_filter_val can_recommend_unconverge(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_recommend_unconverge_type arg)
  {
    msg_.can_recommend_unconverge = std::move(arg);
    return Init_MrrStatusRadar_can_blockage_sidelobe_filter_val(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_can_interference_type
{
public:
  explicit Init_MrrStatusRadar_can_interference_type(::delphi_mrr_msgs::msg::MrrStatusRadar & msg)
  : msg_(msg)
  {}
  Init_MrrStatusRadar_can_recommend_unconverge can_interference_type(::delphi_mrr_msgs::msg::MrrStatusRadar::_can_interference_type_type arg)
  {
    msg_.can_interference_type = std::move(arg);
    return Init_MrrStatusRadar_can_recommend_unconverge(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

class Init_MrrStatusRadar_header
{
public:
  Init_MrrStatusRadar_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrStatusRadar_can_interference_type header(::delphi_mrr_msgs::msg::MrrStatusRadar::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrStatusRadar_can_interference_type(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrStatusRadar msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrStatusRadar>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrStatusRadar_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__BUILDER_HPP_
