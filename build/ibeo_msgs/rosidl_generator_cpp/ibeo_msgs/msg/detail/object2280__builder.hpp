// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/Object2280.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2280__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2280__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/object2280__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_Object2280_contour_point_list
{
public:
  explicit Init_Object2280_contour_point_list(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::Object2280 contour_point_list(::ibeo_msgs::msg::Object2280::_contour_point_list_type arg)
  {
    msg_.contour_point_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_object_existence_measurement
{
public:
  explicit Init_Object2280_object_existence_measurement(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_contour_point_list object_existence_measurement(::ibeo_msgs::msg::Object2280::_object_existence_measurement_type arg)
  {
    msg_.object_existence_measurement = std::move(arg);
    return Init_Object2280_contour_point_list(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_object_priority
{
public:
  explicit Init_Object2280_object_priority(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_object_existence_measurement object_priority(::ibeo_msgs::msg::Object2280::_object_priority_type arg)
  {
    msg_.object_priority = std::move(arg);
    return Init_Object2280_object_existence_measurement(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_reference_point_position_correction_coefficient
{
public:
  explicit Init_Object2280_reference_point_position_correction_coefficient(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_object_priority reference_point_position_correction_coefficient(::ibeo_msgs::msg::Object2280::_reference_point_position_correction_coefficient_type arg)
  {
    msg_.reference_point_position_correction_coefficient = std::move(arg);
    return Init_Object2280_object_priority(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_reference_point_coordinate_sigma
{
public:
  explicit Init_Object2280_reference_point_coordinate_sigma(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_reference_point_position_correction_coefficient reference_point_coordinate_sigma(::ibeo_msgs::msg::Object2280::_reference_point_coordinate_sigma_type arg)
  {
    msg_.reference_point_coordinate_sigma = std::move(arg);
    return Init_Object2280_reference_point_position_correction_coefficient(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_reference_point_coordinate
{
public:
  explicit Init_Object2280_reference_point_coordinate(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_reference_point_coordinate_sigma reference_point_coordinate(::ibeo_msgs::msg::Object2280::_reference_point_coordinate_type arg)
  {
    msg_.reference_point_coordinate = std::move(arg);
    return Init_Object2280_reference_point_coordinate_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_reference_point_location
{
public:
  explicit Init_Object2280_reference_point_location(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_reference_point_coordinate reference_point_location(::ibeo_msgs::msg::Object2280::_reference_point_location_type arg)
  {
    msg_.reference_point_location = std::move(arg);
    return Init_Object2280_reference_point_coordinate(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_closest_point_index
{
public:
  explicit Init_Object2280_closest_point_index(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_reference_point_location closest_point_index(::ibeo_msgs::msg::Object2280::_closest_point_index_type arg)
  {
    msg_.closest_point_index = std::move(arg);
    return Init_Object2280_reference_point_location(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_number_of_contour_points
{
public:
  explicit Init_Object2280_number_of_contour_points(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_closest_point_index number_of_contour_points(::ibeo_msgs::msg::Object2280::_number_of_contour_points_type arg)
  {
    msg_.number_of_contour_points = std::move(arg);
    return Init_Object2280_closest_point_index(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_absolute_velocity_sigma
{
public:
  explicit Init_Object2280_absolute_velocity_sigma(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_number_of_contour_points absolute_velocity_sigma(::ibeo_msgs::msg::Object2280::_absolute_velocity_sigma_type arg)
  {
    msg_.absolute_velocity_sigma = std::move(arg);
    return Init_Object2280_number_of_contour_points(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_absolute_velocity
{
public:
  explicit Init_Object2280_absolute_velocity(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_absolute_velocity_sigma absolute_velocity(::ibeo_msgs::msg::Object2280::_absolute_velocity_type arg)
  {
    msg_.absolute_velocity = std::move(arg);
    return Init_Object2280_absolute_velocity_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_relative_velocity_sigma
{
public:
  explicit Init_Object2280_relative_velocity_sigma(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_absolute_velocity relative_velocity_sigma(::ibeo_msgs::msg::Object2280::_relative_velocity_sigma_type arg)
  {
    msg_.relative_velocity_sigma = std::move(arg);
    return Init_Object2280_absolute_velocity(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_relative_velocity
{
public:
  explicit Init_Object2280_relative_velocity(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_relative_velocity_sigma relative_velocity(::ibeo_msgs::msg::Object2280::_relative_velocity_type arg)
  {
    msg_.relative_velocity = std::move(arg);
    return Init_Object2280_relative_velocity_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_object_box_orientation_angle_sigma
{
public:
  explicit Init_Object2280_object_box_orientation_angle_sigma(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_relative_velocity object_box_orientation_angle_sigma(::ibeo_msgs::msg::Object2280::_object_box_orientation_angle_sigma_type arg)
  {
    msg_.object_box_orientation_angle_sigma = std::move(arg);
    return Init_Object2280_relative_velocity(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_object_box_orientation_angle
{
public:
  explicit Init_Object2280_object_box_orientation_angle(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_object_box_orientation_angle_sigma object_box_orientation_angle(::ibeo_msgs::msg::Object2280::_object_box_orientation_angle_type arg)
  {
    msg_.object_box_orientation_angle = std::move(arg);
    return Init_Object2280_object_box_orientation_angle_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_object_box_size
{
public:
  explicit Init_Object2280_object_box_size(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_object_box_orientation_angle object_box_size(::ibeo_msgs::msg::Object2280::_object_box_size_type arg)
  {
    msg_.object_box_size = std::move(arg);
    return Init_Object2280_object_box_orientation_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_object_box_center_sigma
{
public:
  explicit Init_Object2280_object_box_center_sigma(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_object_box_size object_box_center_sigma(::ibeo_msgs::msg::Object2280::_object_box_center_sigma_type arg)
  {
    msg_.object_box_center_sigma = std::move(arg);
    return Init_Object2280_object_box_size(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_object_box_center
{
public:
  explicit Init_Object2280_object_box_center(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_object_box_center_sigma object_box_center(::ibeo_msgs::msg::Object2280::_object_box_center_type arg)
  {
    msg_.object_box_center = std::move(arg);
    return Init_Object2280_object_box_center_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_classification_age
{
public:
  explicit Init_Object2280_classification_age(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_object_box_center classification_age(::ibeo_msgs::msg::Object2280::_classification_age_type arg)
  {
    msg_.classification_age = std::move(arg);
    return Init_Object2280_object_box_center(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_classification_certainty
{
public:
  explicit Init_Object2280_classification_certainty(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_classification_age classification_certainty(::ibeo_msgs::msg::Object2280::_classification_certainty_type arg)
  {
    msg_.classification_certainty = std::move(arg);
    return Init_Object2280_classification_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_classification
{
public:
  explicit Init_Object2280_classification(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_classification_certainty classification(::ibeo_msgs::msg::Object2280::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_Object2280_classification_certainty(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_object_prediction_age
{
public:
  explicit Init_Object2280_object_prediction_age(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_classification object_prediction_age(::ibeo_msgs::msg::Object2280::_object_prediction_age_type arg)
  {
    msg_.object_prediction_age = std::move(arg);
    return Init_Object2280_classification(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_timestamp
{
public:
  explicit Init_Object2280_timestamp(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_object_prediction_age timestamp(::ibeo_msgs::msg::Object2280::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Object2280_object_prediction_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_object_age
{
public:
  explicit Init_Object2280_object_age(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_timestamp object_age(::ibeo_msgs::msg::Object2280::_object_age_type arg)
  {
    msg_.object_age = std::move(arg);
    return Init_Object2280_timestamp(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_motion_model_validated
{
public:
  explicit Init_Object2280_motion_model_validated(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_object_age motion_model_validated(::ibeo_msgs::msg::Object2280::_motion_model_validated_type arg)
  {
    msg_.motion_model_validated = std::move(arg);
    return Init_Object2280_object_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_mobility_of_dyn_object_detected
{
public:
  explicit Init_Object2280_mobility_of_dyn_object_detected(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_motion_model_validated mobility_of_dyn_object_detected(::ibeo_msgs::msg::Object2280::_mobility_of_dyn_object_detected_type arg)
  {
    msg_.mobility_of_dyn_object_detected = std::move(arg);
    return Init_Object2280_motion_model_validated(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_tracking_model
{
public:
  explicit Init_Object2280_tracking_model(::ibeo_msgs::msg::Object2280 & msg)
  : msg_(msg)
  {}
  Init_Object2280_mobility_of_dyn_object_detected tracking_model(::ibeo_msgs::msg::Object2280::_tracking_model_type arg)
  {
    msg_.tracking_model = std::move(arg);
    return Init_Object2280_mobility_of_dyn_object_detected(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

class Init_Object2280_id
{
public:
  Init_Object2280_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object2280_tracking_model id(::ibeo_msgs::msg::Object2280::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object2280_tracking_model(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2280 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::Object2280>()
{
  return ibeo_msgs::msg::builder::Init_Object2280_id();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2280__BUILDER_HPP_
