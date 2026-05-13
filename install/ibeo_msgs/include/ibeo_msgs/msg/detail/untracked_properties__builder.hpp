// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/UntrackedProperties.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/untracked_properties__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_UntrackedProperties_contour_point_list
{
public:
  explicit Init_UntrackedProperties_contour_point_list(::ibeo_msgs::msg::UntrackedProperties & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::UntrackedProperties contour_point_list(::ibeo_msgs::msg::UntrackedProperties::_contour_point_list_type arg)
  {
    msg_.contour_point_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::UntrackedProperties msg_;
};

class Init_UntrackedProperties_number_of_contour_points
{
public:
  explicit Init_UntrackedProperties_number_of_contour_points(::ibeo_msgs::msg::UntrackedProperties & msg)
  : msg_(msg)
  {}
  Init_UntrackedProperties_contour_point_list number_of_contour_points(::ibeo_msgs::msg::UntrackedProperties::_number_of_contour_points_type arg)
  {
    msg_.number_of_contour_points = std::move(arg);
    return Init_UntrackedProperties_contour_point_list(msg_);
  }

private:
  ::ibeo_msgs::msg::UntrackedProperties msg_;
};

class Init_UntrackedProperties_tracking_point_coordinate_sigma
{
public:
  explicit Init_UntrackedProperties_tracking_point_coordinate_sigma(::ibeo_msgs::msg::UntrackedProperties & msg)
  : msg_(msg)
  {}
  Init_UntrackedProperties_number_of_contour_points tracking_point_coordinate_sigma(::ibeo_msgs::msg::UntrackedProperties::_tracking_point_coordinate_sigma_type arg)
  {
    msg_.tracking_point_coordinate_sigma = std::move(arg);
    return Init_UntrackedProperties_number_of_contour_points(msg_);
  }

private:
  ::ibeo_msgs::msg::UntrackedProperties msg_;
};

class Init_UntrackedProperties_tracking_point_coordinate
{
public:
  explicit Init_UntrackedProperties_tracking_point_coordinate(::ibeo_msgs::msg::UntrackedProperties & msg)
  : msg_(msg)
  {}
  Init_UntrackedProperties_tracking_point_coordinate_sigma tracking_point_coordinate(::ibeo_msgs::msg::UntrackedProperties::_tracking_point_coordinate_type arg)
  {
    msg_.tracking_point_coordinate = std::move(arg);
    return Init_UntrackedProperties_tracking_point_coordinate_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::UntrackedProperties msg_;
};

class Init_UntrackedProperties_object_box_orientation_sigma
{
public:
  explicit Init_UntrackedProperties_object_box_orientation_sigma(::ibeo_msgs::msg::UntrackedProperties & msg)
  : msg_(msg)
  {}
  Init_UntrackedProperties_tracking_point_coordinate object_box_orientation_sigma(::ibeo_msgs::msg::UntrackedProperties::_object_box_orientation_sigma_type arg)
  {
    msg_.object_box_orientation_sigma = std::move(arg);
    return Init_UntrackedProperties_tracking_point_coordinate(msg_);
  }

private:
  ::ibeo_msgs::msg::UntrackedProperties msg_;
};

class Init_UntrackedProperties_object_box_orientation
{
public:
  explicit Init_UntrackedProperties_object_box_orientation(::ibeo_msgs::msg::UntrackedProperties & msg)
  : msg_(msg)
  {}
  Init_UntrackedProperties_object_box_orientation_sigma object_box_orientation(::ibeo_msgs::msg::UntrackedProperties::_object_box_orientation_type arg)
  {
    msg_.object_box_orientation = std::move(arg);
    return Init_UntrackedProperties_object_box_orientation_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::UntrackedProperties msg_;
};

class Init_UntrackedProperties_object_box_size_sigma
{
public:
  explicit Init_UntrackedProperties_object_box_size_sigma(::ibeo_msgs::msg::UntrackedProperties & msg)
  : msg_(msg)
  {}
  Init_UntrackedProperties_object_box_orientation object_box_size_sigma(::ibeo_msgs::msg::UntrackedProperties::_object_box_size_sigma_type arg)
  {
    msg_.object_box_size_sigma = std::move(arg);
    return Init_UntrackedProperties_object_box_orientation(msg_);
  }

private:
  ::ibeo_msgs::msg::UntrackedProperties msg_;
};

class Init_UntrackedProperties_object_box_size
{
public:
  explicit Init_UntrackedProperties_object_box_size(::ibeo_msgs::msg::UntrackedProperties & msg)
  : msg_(msg)
  {}
  Init_UntrackedProperties_object_box_size_sigma object_box_size(::ibeo_msgs::msg::UntrackedProperties::_object_box_size_type arg)
  {
    msg_.object_box_size = std::move(arg);
    return Init_UntrackedProperties_object_box_size_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::UntrackedProperties msg_;
};

class Init_UntrackedProperties_position_closest_point
{
public:
  explicit Init_UntrackedProperties_position_closest_point(::ibeo_msgs::msg::UntrackedProperties & msg)
  : msg_(msg)
  {}
  Init_UntrackedProperties_object_box_size position_closest_point(::ibeo_msgs::msg::UntrackedProperties::_position_closest_point_type arg)
  {
    msg_.position_closest_point = std::move(arg);
    return Init_UntrackedProperties_object_box_size(msg_);
  }

private:
  ::ibeo_msgs::msg::UntrackedProperties msg_;
};

class Init_UntrackedProperties_relative_time_of_measurement
{
public:
  Init_UntrackedProperties_relative_time_of_measurement()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UntrackedProperties_position_closest_point relative_time_of_measurement(::ibeo_msgs::msg::UntrackedProperties::_relative_time_of_measurement_type arg)
  {
    msg_.relative_time_of_measurement = std::move(arg);
    return Init_UntrackedProperties_position_closest_point(msg_);
  }

private:
  ::ibeo_msgs::msg::UntrackedProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::UntrackedProperties>()
{
  return ibeo_msgs::msg::builder::Init_UntrackedProperties_relative_time_of_measurement();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__BUILDER_HPP_
