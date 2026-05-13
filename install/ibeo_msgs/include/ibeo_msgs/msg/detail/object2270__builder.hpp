// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/Object2270.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2270__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2270__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/object2270__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_Object2270_contour_point_list
{
public:
  explicit Init_Object2270_contour_point_list(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::Object2270 contour_point_list(::ibeo_msgs::msg::Object2270::_contour_point_list_type arg)
  {
    msg_.contour_point_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_number_of_contour_points
{
public:
  explicit Init_Object2270_number_of_contour_points(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_contour_point_list number_of_contour_points(::ibeo_msgs::msg::Object2270::_number_of_contour_points_type arg)
  {
    msg_.number_of_contour_points = std::move(arg);
    return Init_Object2270_contour_point_list(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_classification_confidence
{
public:
  explicit Init_Object2270_classification_confidence(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_number_of_contour_points classification_confidence(::ibeo_msgs::msg::Object2270::_classification_confidence_type arg)
  {
    msg_.classification_confidence = std::move(arg);
    return Init_Object2270_number_of_contour_points(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_classification_age
{
public:
  explicit Init_Object2270_classification_age(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_classification_confidence classification_age(::ibeo_msgs::msg::Object2270::_classification_age_type arg)
  {
    msg_.classification_age = std::move(arg);
    return Init_Object2270_classification_confidence(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_track_valid
{
public:
  explicit Init_Object2270_track_valid(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_classification_age track_valid(::ibeo_msgs::msg::Object2270::_track_valid_type arg)
  {
    msg_.track_valid = std::move(arg);
    return Init_Object2270_classification_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_mobile_detected
{
public:
  explicit Init_Object2270_mobile_detected(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_track_valid mobile_detected(::ibeo_msgs::msg::Object2270::_mobile_detected_type arg)
  {
    msg_.mobile_detected = std::move(arg);
    return Init_Object2270_track_valid(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_tracking_model
{
public:
  explicit Init_Object2270_tracking_model(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_mobile_detected tracking_model(::ibeo_msgs::msg::Object2270::_tracking_model_type arg)
  {
    msg_.tracking_model = std::move(arg);
    return Init_Object2270_mobile_detected(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_classification
{
public:
  explicit Init_Object2270_classification(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_tracking_model classification(::ibeo_msgs::msg::Object2270::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_Object2270_tracking_model(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_relative_velocity_sigma_y
{
public:
  explicit Init_Object2270_relative_velocity_sigma_y(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_classification relative_velocity_sigma_y(::ibeo_msgs::msg::Object2270::_relative_velocity_sigma_y_type arg)
  {
    msg_.relative_velocity_sigma_y = std::move(arg);
    return Init_Object2270_classification(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_relative_velocity_sigma_x
{
public:
  explicit Init_Object2270_relative_velocity_sigma_x(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_relative_velocity_sigma_y relative_velocity_sigma_x(::ibeo_msgs::msg::Object2270::_relative_velocity_sigma_x_type arg)
  {
    msg_.relative_velocity_sigma_x = std::move(arg);
    return Init_Object2270_relative_velocity_sigma_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_relative_velocity_y
{
public:
  explicit Init_Object2270_relative_velocity_y(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_relative_velocity_sigma_x relative_velocity_y(::ibeo_msgs::msg::Object2270::_relative_velocity_y_type arg)
  {
    msg_.relative_velocity_y = std::move(arg);
    return Init_Object2270_relative_velocity_sigma_x(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_relative_velocity_x
{
public:
  explicit Init_Object2270_relative_velocity_x(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_relative_velocity_y relative_velocity_x(::ibeo_msgs::msg::Object2270::_relative_velocity_x_type arg)
  {
    msg_.relative_velocity_x = std::move(arg);
    return Init_Object2270_relative_velocity_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_absolute_velocity_sigma_y
{
public:
  explicit Init_Object2270_absolute_velocity_sigma_y(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_relative_velocity_x absolute_velocity_sigma_y(::ibeo_msgs::msg::Object2270::_absolute_velocity_sigma_y_type arg)
  {
    msg_.absolute_velocity_sigma_y = std::move(arg);
    return Init_Object2270_relative_velocity_x(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_absolute_velocity_sigma_x
{
public:
  explicit Init_Object2270_absolute_velocity_sigma_x(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_absolute_velocity_sigma_y absolute_velocity_sigma_x(::ibeo_msgs::msg::Object2270::_absolute_velocity_sigma_x_type arg)
  {
    msg_.absolute_velocity_sigma_x = std::move(arg);
    return Init_Object2270_absolute_velocity_sigma_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_absolute_velocity_y
{
public:
  explicit Init_Object2270_absolute_velocity_y(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_absolute_velocity_sigma_x absolute_velocity_y(::ibeo_msgs::msg::Object2270::_absolute_velocity_y_type arg)
  {
    msg_.absolute_velocity_y = std::move(arg);
    return Init_Object2270_absolute_velocity_sigma_x(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_absolute_velocity_x
{
public:
  explicit Init_Object2270_absolute_velocity_x(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_absolute_velocity_y absolute_velocity_x(::ibeo_msgs::msg::Object2270::_absolute_velocity_x_type arg)
  {
    msg_.absolute_velocity_x = std::move(arg);
    return Init_Object2270_absolute_velocity_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_object_box_orientation_angle_sigma
{
public:
  explicit Init_Object2270_object_box_orientation_angle_sigma(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_absolute_velocity_x object_box_orientation_angle_sigma(::ibeo_msgs::msg::Object2270::_object_box_orientation_angle_sigma_type arg)
  {
    msg_.object_box_orientation_angle_sigma = std::move(arg);
    return Init_Object2270_absolute_velocity_x(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_object_box_orientation_angle
{
public:
  explicit Init_Object2270_object_box_orientation_angle(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_object_box_orientation_angle_sigma object_box_orientation_angle(::ibeo_msgs::msg::Object2270::_object_box_orientation_angle_type arg)
  {
    msg_.object_box_orientation_angle = std::move(arg);
    return Init_Object2270_object_box_orientation_angle_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_object_box_width
{
public:
  explicit Init_Object2270_object_box_width(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_object_box_orientation_angle object_box_width(::ibeo_msgs::msg::Object2270::_object_box_width_type arg)
  {
    msg_.object_box_width = std::move(arg);
    return Init_Object2270_object_box_orientation_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_object_box_length
{
public:
  explicit Init_Object2270_object_box_length(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_object_box_width object_box_length(::ibeo_msgs::msg::Object2270::_object_box_length_type arg)
  {
    msg_.object_box_length = std::move(arg);
    return Init_Object2270_object_box_width(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_contour_points_cog_y
{
public:
  explicit Init_Object2270_contour_points_cog_y(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_object_box_length contour_points_cog_y(::ibeo_msgs::msg::Object2270::_contour_points_cog_y_type arg)
  {
    msg_.contour_points_cog_y = std::move(arg);
    return Init_Object2270_object_box_length(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_contour_points_cog_x
{
public:
  explicit Init_Object2270_contour_points_cog_x(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_contour_points_cog_y contour_points_cog_x(::ibeo_msgs::msg::Object2270::_contour_points_cog_x_type arg)
  {
    msg_.contour_points_cog_x = std::move(arg);
    return Init_Object2270_contour_points_cog_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_reference_point_position_sigma_y
{
public:
  explicit Init_Object2270_reference_point_position_sigma_y(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_contour_points_cog_x reference_point_position_sigma_y(::ibeo_msgs::msg::Object2270::_reference_point_position_sigma_y_type arg)
  {
    msg_.reference_point_position_sigma_y = std::move(arg);
    return Init_Object2270_contour_points_cog_x(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_reference_point_position_sigma_x
{
public:
  explicit Init_Object2270_reference_point_position_sigma_x(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_reference_point_position_sigma_y reference_point_position_sigma_x(::ibeo_msgs::msg::Object2270::_reference_point_position_sigma_x_type arg)
  {
    msg_.reference_point_position_sigma_x = std::move(arg);
    return Init_Object2270_reference_point_position_sigma_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_reference_point_position_y
{
public:
  explicit Init_Object2270_reference_point_position_y(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_reference_point_position_sigma_x reference_point_position_y(::ibeo_msgs::msg::Object2270::_reference_point_position_y_type arg)
  {
    msg_.reference_point_position_y = std::move(arg);
    return Init_Object2270_reference_point_position_sigma_x(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_reference_point_position_x
{
public:
  explicit Init_Object2270_reference_point_position_x(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_reference_point_position_y reference_point_position_x(::ibeo_msgs::msg::Object2270::_reference_point_position_x_type arg)
  {
    msg_.reference_point_position_x = std::move(arg);
    return Init_Object2270_reference_point_position_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_reference_point_location
{
public:
  explicit Init_Object2270_reference_point_location(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_reference_point_position_x reference_point_location(::ibeo_msgs::msg::Object2270::_reference_point_location_type arg)
  {
    msg_.reference_point_location = std::move(arg);
    return Init_Object2270_reference_point_position_x(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_relative_moment_of_measurement
{
public:
  explicit Init_Object2270_relative_moment_of_measurement(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_reference_point_location relative_moment_of_measurement(::ibeo_msgs::msg::Object2270::_relative_moment_of_measurement_type arg)
  {
    msg_.relative_moment_of_measurement = std::move(arg);
    return Init_Object2270_reference_point_location(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_prediction_age
{
public:
  explicit Init_Object2270_prediction_age(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_relative_moment_of_measurement prediction_age(::ibeo_msgs::msg::Object2270::_prediction_age_type arg)
  {
    msg_.prediction_age = std::move(arg);
    return Init_Object2270_relative_moment_of_measurement(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_age
{
public:
  explicit Init_Object2270_age(::ibeo_msgs::msg::Object2270 & msg)
  : msg_(msg)
  {}
  Init_Object2270_prediction_age age(::ibeo_msgs::msg::Object2270::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Object2270_prediction_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

class Init_Object2270_id
{
public:
  Init_Object2270_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object2270_age id(::ibeo_msgs::msg::Object2270::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object2270_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2270 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::Object2270>()
{
  return ibeo_msgs::msg::builder::Init_Object2270_id();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2270__BUILDER_HPP_
