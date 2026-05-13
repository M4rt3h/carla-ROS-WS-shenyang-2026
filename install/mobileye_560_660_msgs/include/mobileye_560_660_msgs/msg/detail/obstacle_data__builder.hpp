// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/ObstacleData.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/obstacle_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleData_obstacle_angle
{
public:
  explicit Init_ObstacleData_obstacle_angle(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::ObstacleData obstacle_angle(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_angle_type arg)
  {
    msg_.obstacle_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_replaced
{
public:
  explicit Init_ObstacleData_obstacle_replaced(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_angle obstacle_replaced(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_replaced_type arg)
  {
    msg_.obstacle_replaced = std::move(arg);
    return Init_ObstacleData_obstacle_angle(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_object_accel_x
{
public:
  explicit Init_ObstacleData_object_accel_x(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_replaced object_accel_x(::mobileye_560_660_msgs::msg::ObstacleData::_object_accel_x_type arg)
  {
    msg_.object_accel_x = std::move(arg);
    return Init_ObstacleData_obstacle_replaced(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_scale_change
{
public:
  explicit Init_ObstacleData_obstacle_scale_change(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_object_accel_x obstacle_scale_change(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_scale_change_type arg)
  {
    msg_.obstacle_scale_change = std::move(arg);
    return Init_ObstacleData_object_accel_x(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_angle_rate
{
public:
  explicit Init_ObstacleData_obstacle_angle_rate(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_scale_change obstacle_angle_rate(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_angle_rate_type arg)
  {
    msg_.obstacle_angle_rate = std::move(arg);
    return Init_ObstacleData_obstacle_scale_change(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_matched_radar_id
{
public:
  explicit Init_ObstacleData_matched_radar_id(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_angle_rate matched_radar_id(::mobileye_560_660_msgs::msg::ObstacleData::_matched_radar_id_type arg)
  {
    msg_.matched_radar_id = std::move(arg);
    return Init_ObstacleData_obstacle_angle_rate(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_radar_match_confidence
{
public:
  explicit Init_ObstacleData_radar_match_confidence(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_matched_radar_id radar_match_confidence(::mobileye_560_660_msgs::msg::ObstacleData::_radar_match_confidence_type arg)
  {
    msg_.radar_match_confidence = std::move(arg);
    return Init_ObstacleData_matched_radar_id(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_radar_vel_x
{
public:
  explicit Init_ObstacleData_radar_vel_x(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_radar_match_confidence radar_vel_x(::mobileye_560_660_msgs::msg::ObstacleData::_radar_vel_x_type arg)
  {
    msg_.radar_vel_x = std::move(arg);
    return Init_ObstacleData_radar_match_confidence(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_radar_pos_x
{
public:
  explicit Init_ObstacleData_radar_pos_x(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_radar_vel_x radar_pos_x(::mobileye_560_660_msgs::msg::ObstacleData::_radar_pos_x_type arg)
  {
    msg_.radar_pos_x = std::move(arg);
    return Init_ObstacleData_radar_vel_x(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_cipv_flag
{
public:
  explicit Init_ObstacleData_cipv_flag(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_radar_pos_x cipv_flag(::mobileye_560_660_msgs::msg::ObstacleData::_cipv_flag_type arg)
  {
    msg_.cipv_flag = std::move(arg);
    return Init_ObstacleData_radar_pos_x(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_lane
{
public:
  explicit Init_ObstacleData_obstacle_lane(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_cipv_flag obstacle_lane(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_lane_type arg)
  {
    msg_.obstacle_lane = std::move(arg);
    return Init_ObstacleData_cipv_flag(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_age
{
public:
  explicit Init_ObstacleData_obstacle_age(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_lane obstacle_age(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_age_type arg)
  {
    msg_.obstacle_age = std::move(arg);
    return Init_ObstacleData_obstacle_lane(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_width
{
public:
  explicit Init_ObstacleData_obstacle_width(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_age obstacle_width(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_width_type arg)
  {
    msg_.obstacle_width = std::move(arg);
    return Init_ObstacleData_obstacle_age(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_length
{
public:
  explicit Init_ObstacleData_obstacle_length(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_width obstacle_length(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_length_type arg)
  {
    msg_.obstacle_length = std::move(arg);
    return Init_ObstacleData_obstacle_width(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_valid
{
public:
  explicit Init_ObstacleData_obstacle_valid(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_length obstacle_valid(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_valid_type arg)
  {
    msg_.obstacle_valid = std::move(arg);
    return Init_ObstacleData_obstacle_length(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_brake_lights
{
public:
  explicit Init_ObstacleData_obstacle_brake_lights(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_valid obstacle_brake_lights(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_brake_lights_type arg)
  {
    msg_.obstacle_brake_lights = std::move(arg);
    return Init_ObstacleData_obstacle_valid(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_status
{
public:
  explicit Init_ObstacleData_obstacle_status(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_brake_lights obstacle_status(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_status_type arg)
  {
    msg_.obstacle_status = std::move(arg);
    return Init_ObstacleData_obstacle_brake_lights(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_type
{
public:
  explicit Init_ObstacleData_obstacle_type(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_status obstacle_type(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_type_type arg)
  {
    msg_.obstacle_type = std::move(arg);
    return Init_ObstacleData_obstacle_status(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_rel_vel_x
{
public:
  explicit Init_ObstacleData_obstacle_rel_vel_x(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_type obstacle_rel_vel_x(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_rel_vel_x_type arg)
  {
    msg_.obstacle_rel_vel_x = std::move(arg);
    return Init_ObstacleData_obstacle_type(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_cut_in_and_out
{
public:
  explicit Init_ObstacleData_cut_in_and_out(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_rel_vel_x cut_in_and_out(::mobileye_560_660_msgs::msg::ObstacleData::_cut_in_and_out_type arg)
  {
    msg_.cut_in_and_out = std::move(arg);
    return Init_ObstacleData_obstacle_rel_vel_x(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_blinker_info
{
public:
  explicit Init_ObstacleData_blinker_info(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_cut_in_and_out blinker_info(::mobileye_560_660_msgs::msg::ObstacleData::_blinker_info_type arg)
  {
    msg_.blinker_info = std::move(arg);
    return Init_ObstacleData_cut_in_and_out(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_pos_y
{
public:
  explicit Init_ObstacleData_obstacle_pos_y(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_blinker_info obstacle_pos_y(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_pos_y_type arg)
  {
    msg_.obstacle_pos_y = std::move(arg);
    return Init_ObstacleData_blinker_info(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_pos_x
{
public:
  explicit Init_ObstacleData_obstacle_pos_x(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_pos_y obstacle_pos_x(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_pos_x_type arg)
  {
    msg_.obstacle_pos_x = std::move(arg);
    return Init_ObstacleData_obstacle_pos_y(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_obstacle_id
{
public:
  explicit Init_ObstacleData_obstacle_id(::mobileye_560_660_msgs::msg::ObstacleData & msg)
  : msg_(msg)
  {}
  Init_ObstacleData_obstacle_pos_x obstacle_id(::mobileye_560_660_msgs::msg::ObstacleData::_obstacle_id_type arg)
  {
    msg_.obstacle_id = std::move(arg);
    return Init_ObstacleData_obstacle_pos_x(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

class Init_ObstacleData_header
{
public:
  Init_ObstacleData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleData_obstacle_id header(::mobileye_560_660_msgs::msg::ObstacleData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleData_obstacle_id(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::ObstacleData>()
{
  return mobileye_560_660_msgs::msg::builder::Init_ObstacleData_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__BUILDER_HPP_
