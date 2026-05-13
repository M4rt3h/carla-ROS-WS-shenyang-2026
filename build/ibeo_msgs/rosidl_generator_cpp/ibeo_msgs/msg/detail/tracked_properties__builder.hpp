// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/TrackedProperties.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/tracked_properties__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedProperties_contour_point_list
{
public:
  explicit Init_TrackedProperties_contour_point_list(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::TrackedProperties contour_point_list(::ibeo_msgs::msg::TrackedProperties::_contour_point_list_type arg)
  {
    msg_.contour_point_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_number_of_contour_points
{
public:
  explicit Init_TrackedProperties_number_of_contour_points(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_contour_point_list number_of_contour_points(::ibeo_msgs::msg::TrackedProperties::_number_of_contour_points_type arg)
  {
    msg_.number_of_contour_points = std::move(arg);
    return Init_TrackedProperties_contour_point_list(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_yaw_rate_sigma
{
public:
  explicit Init_TrackedProperties_yaw_rate_sigma(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_number_of_contour_points yaw_rate_sigma(::ibeo_msgs::msg::TrackedProperties::_yaw_rate_sigma_type arg)
  {
    msg_.yaw_rate_sigma = std::move(arg);
    return Init_TrackedProperties_number_of_contour_points(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_yaw_rate
{
public:
  explicit Init_TrackedProperties_yaw_rate(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_yaw_rate_sigma yaw_rate(::ibeo_msgs::msg::TrackedProperties::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_TrackedProperties_yaw_rate_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_acceleration_sigma
{
public:
  explicit Init_TrackedProperties_acceleration_sigma(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_yaw_rate acceleration_sigma(::ibeo_msgs::msg::TrackedProperties::_acceleration_sigma_type arg)
  {
    msg_.acceleration_sigma = std::move(arg);
    return Init_TrackedProperties_yaw_rate(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_acceleration
{
public:
  explicit Init_TrackedProperties_acceleration(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_acceleration_sigma acceleration(::ibeo_msgs::msg::TrackedProperties::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_TrackedProperties_acceleration_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_velocity_sigma
{
public:
  explicit Init_TrackedProperties_velocity_sigma(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_acceleration velocity_sigma(::ibeo_msgs::msg::TrackedProperties::_velocity_sigma_type arg)
  {
    msg_.velocity_sigma = std::move(arg);
    return Init_TrackedProperties_acceleration(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_velocity
{
public:
  explicit Init_TrackedProperties_velocity(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_velocity_sigma velocity(::ibeo_msgs::msg::TrackedProperties::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TrackedProperties_velocity_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_tracking_point_coordinate_sigma
{
public:
  explicit Init_TrackedProperties_tracking_point_coordinate_sigma(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_velocity tracking_point_coordinate_sigma(::ibeo_msgs::msg::TrackedProperties::_tracking_point_coordinate_sigma_type arg)
  {
    msg_.tracking_point_coordinate_sigma = std::move(arg);
    return Init_TrackedProperties_velocity(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_tracking_point_coordinate
{
public:
  explicit Init_TrackedProperties_tracking_point_coordinate(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_tracking_point_coordinate_sigma tracking_point_coordinate(::ibeo_msgs::msg::TrackedProperties::_tracking_point_coordinate_type arg)
  {
    msg_.tracking_point_coordinate = std::move(arg);
    return Init_TrackedProperties_tracking_point_coordinate_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_tracking_point_location
{
public:
  explicit Init_TrackedProperties_tracking_point_location(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_tracking_point_coordinate tracking_point_location(::ibeo_msgs::msg::TrackedProperties::_tracking_point_location_type arg)
  {
    msg_.tracking_point_location = std::move(arg);
    return Init_TrackedProperties_tracking_point_coordinate(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_object_box_orientation_sigma
{
public:
  explicit Init_TrackedProperties_object_box_orientation_sigma(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_tracking_point_location object_box_orientation_sigma(::ibeo_msgs::msg::TrackedProperties::_object_box_orientation_sigma_type arg)
  {
    msg_.object_box_orientation_sigma = std::move(arg);
    return Init_TrackedProperties_tracking_point_location(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_object_box_orientation
{
public:
  explicit Init_TrackedProperties_object_box_orientation(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_object_box_orientation_sigma object_box_orientation(::ibeo_msgs::msg::TrackedProperties::_object_box_orientation_type arg)
  {
    msg_.object_box_orientation = std::move(arg);
    return Init_TrackedProperties_object_box_orientation_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_object_box_size_sigma
{
public:
  explicit Init_TrackedProperties_object_box_size_sigma(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_object_box_orientation object_box_size_sigma(::ibeo_msgs::msg::TrackedProperties::_object_box_size_sigma_type arg)
  {
    msg_.object_box_size_sigma = std::move(arg);
    return Init_TrackedProperties_object_box_orientation(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_object_box_size
{
public:
  explicit Init_TrackedProperties_object_box_size(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_object_box_size_sigma object_box_size(::ibeo_msgs::msg::TrackedProperties::_object_box_size_type arg)
  {
    msg_.object_box_size = std::move(arg);
    return Init_TrackedProperties_object_box_size_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_classification_age
{
public:
  explicit Init_TrackedProperties_classification_age(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_object_box_size classification_age(::ibeo_msgs::msg::TrackedProperties::_classification_age_type arg)
  {
    msg_.classification_age = std::move(arg);
    return Init_TrackedProperties_object_box_size(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_classification
{
public:
  explicit Init_TrackedProperties_classification(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_classification_age classification(::ibeo_msgs::msg::TrackedProperties::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_TrackedProperties_classification_age(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_relative_velocity_sigma
{
public:
  explicit Init_TrackedProperties_relative_velocity_sigma(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_classification relative_velocity_sigma(::ibeo_msgs::msg::TrackedProperties::_relative_velocity_sigma_type arg)
  {
    msg_.relative_velocity_sigma = std::move(arg);
    return Init_TrackedProperties_classification(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_relative_velocity
{
public:
  explicit Init_TrackedProperties_relative_velocity(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_relative_velocity_sigma relative_velocity(::ibeo_msgs::msg::TrackedProperties::_relative_velocity_type arg)
  {
    msg_.relative_velocity = std::move(arg);
    return Init_TrackedProperties_relative_velocity_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_position_closest_point
{
public:
  explicit Init_TrackedProperties_position_closest_point(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_relative_velocity position_closest_point(::ibeo_msgs::msg::TrackedProperties::_position_closest_point_type arg)
  {
    msg_.position_closest_point = std::move(arg);
    return Init_TrackedProperties_relative_velocity(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_relative_time_of_measure
{
public:
  explicit Init_TrackedProperties_relative_time_of_measure(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_position_closest_point relative_time_of_measure(::ibeo_msgs::msg::TrackedProperties::_relative_time_of_measure_type arg)
  {
    msg_.relative_time_of_measure = std::move(arg);
    return Init_TrackedProperties_position_closest_point(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_dynamic_property
{
public:
  explicit Init_TrackedProperties_dynamic_property(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_relative_time_of_measure dynamic_property(::ibeo_msgs::msg::TrackedProperties::_dynamic_property_type arg)
  {
    msg_.dynamic_property = std::move(arg);
    return Init_TrackedProperties_relative_time_of_measure(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_object_phase
{
public:
  explicit Init_TrackedProperties_object_phase(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_dynamic_property object_phase(::ibeo_msgs::msg::TrackedProperties::_object_phase_type arg)
  {
    msg_.object_phase = std::move(arg);
    return Init_TrackedProperties_dynamic_property(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_hidden_status_age
{
public:
  explicit Init_TrackedProperties_hidden_status_age(::ibeo_msgs::msg::TrackedProperties & msg)
  : msg_(msg)
  {}
  Init_TrackedProperties_object_phase hidden_status_age(::ibeo_msgs::msg::TrackedProperties::_hidden_status_age_type arg)
  {
    msg_.hidden_status_age = std::move(arg);
    return Init_TrackedProperties_object_phase(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

class Init_TrackedProperties_object_age
{
public:
  Init_TrackedProperties_object_age()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedProperties_hidden_status_age object_age(::ibeo_msgs::msg::TrackedProperties::_object_age_type arg)
  {
    msg_.object_age = std::move(arg);
    return Init_TrackedProperties_hidden_status_age(msg_);
  }

private:
  ::ibeo_msgs::msg::TrackedProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::TrackedProperties>()
{
  return ibeo_msgs::msg::builder::Init_TrackedProperties_object_age();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__BUILDER_HPP_
