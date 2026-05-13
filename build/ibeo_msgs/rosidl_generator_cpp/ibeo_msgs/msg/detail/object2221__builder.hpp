// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/Object2221.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2221__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2221__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/object2221__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_Object2221_contour_point_list
{
public:
  explicit Init_Object2221_contour_point_list(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::Object2221 contour_point_list(::ibeo_msgs::msg::Object2221::_contour_point_list_type arg)
  {
    msg_.contour_point_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_number_of_contour_points
{
public:
  explicit Init_Object2221_number_of_contour_points(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_contour_point_list number_of_contour_points(::ibeo_msgs::msg::Object2221::_number_of_contour_points_type arg)
  {
    msg_.number_of_contour_points = std::move(arg);
    return Init_Object2221_contour_point_list(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_classification_certainty
{
public:
  explicit Init_Object2221_classification_certainty(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_number_of_contour_points classification_certainty(::ibeo_msgs::msg::Object2221::_classification_certainty_type arg)
  {
    msg_.classification_certainty = std::move(arg);
    return Init_Object2221_number_of_contour_points(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_classification_age
{
public:
  explicit Init_Object2221_classification_age(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_classification_certainty classification_age(::ibeo_msgs::msg::Object2221::_classification_age_type arg)
  {
    msg_.classification_age = std::move(arg);
    return Init_Object2221_classification_certainty(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_classification
{
public:
  explicit Init_Object2221_classification(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_classification_age classification(::ibeo_msgs::msg::Object2221::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_Object2221_classification_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_relative_velocity
{
public:
  explicit Init_Object2221_relative_velocity(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_classification relative_velocity(::ibeo_msgs::msg::Object2221::_relative_velocity_type arg)
  {
    msg_.relative_velocity = std::move(arg);
    return Init_Object2221_classification(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_absolute_velocity_sigma
{
public:
  explicit Init_Object2221_absolute_velocity_sigma(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_relative_velocity absolute_velocity_sigma(::ibeo_msgs::msg::Object2221::_absolute_velocity_sigma_type arg)
  {
    msg_.absolute_velocity_sigma = std::move(arg);
    return Init_Object2221_relative_velocity(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_absolute_velocity
{
public:
  explicit Init_Object2221_absolute_velocity(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_absolute_velocity_sigma absolute_velocity(::ibeo_msgs::msg::Object2221::_absolute_velocity_type arg)
  {
    msg_.absolute_velocity = std::move(arg);
    return Init_Object2221_absolute_velocity_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_object_box_orientation
{
public:
  explicit Init_Object2221_object_box_orientation(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_absolute_velocity object_box_orientation(::ibeo_msgs::msg::Object2221::_object_box_orientation_type arg)
  {
    msg_.object_box_orientation = std::move(arg);
    return Init_Object2221_absolute_velocity(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_object_box_size
{
public:
  explicit Init_Object2221_object_box_size(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_object_box_orientation object_box_size(::ibeo_msgs::msg::Object2221::_object_box_size_type arg)
  {
    msg_.object_box_size = std::move(arg);
    return Init_Object2221_object_box_orientation(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_object_box_center
{
public:
  explicit Init_Object2221_object_box_center(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_object_box_size object_box_center(::ibeo_msgs::msg::Object2221::_object_box_center_type arg)
  {
    msg_.object_box_center = std::move(arg);
    return Init_Object2221_object_box_size(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_bounding_box_length
{
public:
  explicit Init_Object2221_bounding_box_length(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_object_box_center bounding_box_length(::ibeo_msgs::msg::Object2221::_bounding_box_length_type arg)
  {
    msg_.bounding_box_length = std::move(arg);
    return Init_Object2221_object_box_center(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_bounding_box_width
{
public:
  explicit Init_Object2221_bounding_box_width(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_bounding_box_length bounding_box_width(::ibeo_msgs::msg::Object2221::_bounding_box_width_type arg)
  {
    msg_.bounding_box_width = std::move(arg);
    return Init_Object2221_bounding_box_length(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_bounding_box_center
{
public:
  explicit Init_Object2221_bounding_box_center(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_bounding_box_width bounding_box_center(::ibeo_msgs::msg::Object2221::_bounding_box_center_type arg)
  {
    msg_.bounding_box_center = std::move(arg);
    return Init_Object2221_bounding_box_width(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_closest_point
{
public:
  explicit Init_Object2221_closest_point(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_bounding_box_center closest_point(::ibeo_msgs::msg::Object2221::_closest_point_type arg)
  {
    msg_.closest_point = std::move(arg);
    return Init_Object2221_bounding_box_center(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_reference_point_sigma
{
public:
  explicit Init_Object2221_reference_point_sigma(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_closest_point reference_point_sigma(::ibeo_msgs::msg::Object2221::_reference_point_sigma_type arg)
  {
    msg_.reference_point_sigma = std::move(arg);
    return Init_Object2221_closest_point(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_reference_point
{
public:
  explicit Init_Object2221_reference_point(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_reference_point_sigma reference_point(::ibeo_msgs::msg::Object2221::_reference_point_type arg)
  {
    msg_.reference_point = std::move(arg);
    return Init_Object2221_reference_point_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_relative_timestamp
{
public:
  explicit Init_Object2221_relative_timestamp(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_reference_point relative_timestamp(::ibeo_msgs::msg::Object2221::_relative_timestamp_type arg)
  {
    msg_.relative_timestamp = std::move(arg);
    return Init_Object2221_reference_point(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_prediction_age
{
public:
  explicit Init_Object2221_prediction_age(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_relative_timestamp prediction_age(::ibeo_msgs::msg::Object2221::_prediction_age_type arg)
  {
    msg_.prediction_age = std::move(arg);
    return Init_Object2221_relative_timestamp(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_age
{
public:
  explicit Init_Object2221_age(::ibeo_msgs::msg::Object2221 & msg)
  : msg_(msg)
  {}
  Init_Object2221_prediction_age age(::ibeo_msgs::msg::Object2221::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Object2221_prediction_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

class Init_Object2221_id
{
public:
  Init_Object2221_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object2221_age id(::ibeo_msgs::msg::Object2221::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object2221_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2221 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::Object2221>()
{
  return ibeo_msgs::msg::builder::Init_Object2221_id();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2221__BUILDER_HPP_
