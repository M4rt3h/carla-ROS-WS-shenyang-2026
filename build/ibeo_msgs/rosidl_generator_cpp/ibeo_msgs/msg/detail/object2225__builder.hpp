// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/Object2225.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2225__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2225__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/object2225__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_Object2225_contour_point_list
{
public:
  explicit Init_Object2225_contour_point_list(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::Object2225 contour_point_list(::ibeo_msgs::msg::Object2225::_contour_point_list_type arg)
  {
    msg_.contour_point_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_closest_point_index
{
public:
  explicit Init_Object2225_closest_point_index(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_contour_point_list closest_point_index(::ibeo_msgs::msg::Object2225::_closest_point_index_type arg)
  {
    msg_.closest_point_index = std::move(arg);
    return Init_Object2225_contour_point_list(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_number_of_contour_points
{
public:
  explicit Init_Object2225_number_of_contour_points(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_closest_point_index number_of_contour_points(::ibeo_msgs::msg::Object2225::_number_of_contour_points_type arg)
  {
    msg_.number_of_contour_points = std::move(arg);
    return Init_Object2225_closest_point_index(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_absolute_velocity_sigma
{
public:
  explicit Init_Object2225_absolute_velocity_sigma(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_number_of_contour_points absolute_velocity_sigma(::ibeo_msgs::msg::Object2225::_absolute_velocity_sigma_type arg)
  {
    msg_.absolute_velocity_sigma = std::move(arg);
    return Init_Object2225_number_of_contour_points(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_absolute_velocity
{
public:
  explicit Init_Object2225_absolute_velocity(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_absolute_velocity_sigma absolute_velocity(::ibeo_msgs::msg::Object2225::_absolute_velocity_type arg)
  {
    msg_.absolute_velocity = std::move(arg);
    return Init_Object2225_absolute_velocity_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_relative_velocity_sigma
{
public:
  explicit Init_Object2225_relative_velocity_sigma(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_absolute_velocity relative_velocity_sigma(::ibeo_msgs::msg::Object2225::_relative_velocity_sigma_type arg)
  {
    msg_.relative_velocity_sigma = std::move(arg);
    return Init_Object2225_absolute_velocity(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_relative_velocity
{
public:
  explicit Init_Object2225_relative_velocity(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_relative_velocity_sigma relative_velocity(::ibeo_msgs::msg::Object2225::_relative_velocity_type arg)
  {
    msg_.relative_velocity = std::move(arg);
    return Init_Object2225_relative_velocity_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_yaw_angle
{
public:
  explicit Init_Object2225_yaw_angle(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_relative_velocity yaw_angle(::ibeo_msgs::msg::Object2225::_yaw_angle_type arg)
  {
    msg_.yaw_angle = std::move(arg);
    return Init_Object2225_relative_velocity(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_object_box_size
{
public:
  explicit Init_Object2225_object_box_size(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_yaw_angle object_box_size(::ibeo_msgs::msg::Object2225::_object_box_size_type arg)
  {
    msg_.object_box_size = std::move(arg);
    return Init_Object2225_yaw_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_object_box_center_sigma
{
public:
  explicit Init_Object2225_object_box_center_sigma(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_object_box_size object_box_center_sigma(::ibeo_msgs::msg::Object2225::_object_box_center_sigma_type arg)
  {
    msg_.object_box_center_sigma = std::move(arg);
    return Init_Object2225_object_box_size(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_object_box_center
{
public:
  explicit Init_Object2225_object_box_center(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_object_box_center_sigma object_box_center(::ibeo_msgs::msg::Object2225::_object_box_center_type arg)
  {
    msg_.object_box_center = std::move(arg);
    return Init_Object2225_object_box_center_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_bounding_box_size
{
public:
  explicit Init_Object2225_bounding_box_size(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_object_box_center bounding_box_size(::ibeo_msgs::msg::Object2225::_bounding_box_size_type arg)
  {
    msg_.bounding_box_size = std::move(arg);
    return Init_Object2225_object_box_center(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_bounding_box_center
{
public:
  explicit Init_Object2225_bounding_box_center(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_bounding_box_size bounding_box_center(::ibeo_msgs::msg::Object2225::_bounding_box_center_type arg)
  {
    msg_.bounding_box_center = std::move(arg);
    return Init_Object2225_bounding_box_size(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_classification_age
{
public:
  explicit Init_Object2225_classification_age(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_bounding_box_center classification_age(::ibeo_msgs::msg::Object2225::_classification_age_type arg)
  {
    msg_.classification_age = std::move(arg);
    return Init_Object2225_bounding_box_center(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_classification_certainty
{
public:
  explicit Init_Object2225_classification_certainty(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_classification_age classification_certainty(::ibeo_msgs::msg::Object2225::_classification_certainty_type arg)
  {
    msg_.classification_certainty = std::move(arg);
    return Init_Object2225_classification_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_classification
{
public:
  explicit Init_Object2225_classification(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_classification_certainty classification(::ibeo_msgs::msg::Object2225::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_Object2225_classification_certainty(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_hidden_status_age
{
public:
  explicit Init_Object2225_hidden_status_age(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_classification hidden_status_age(::ibeo_msgs::msg::Object2225::_hidden_status_age_type arg)
  {
    msg_.hidden_status_age = std::move(arg);
    return Init_Object2225_classification(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_timestamp
{
public:
  explicit Init_Object2225_timestamp(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_hidden_status_age timestamp(::ibeo_msgs::msg::Object2225::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Object2225_hidden_status_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_age
{
public:
  explicit Init_Object2225_age(::ibeo_msgs::msg::Object2225 & msg)
  : msg_(msg)
  {}
  Init_Object2225_timestamp age(::ibeo_msgs::msg::Object2225::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Object2225_timestamp(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

class Init_Object2225_id
{
public:
  Init_Object2225_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object2225_age id(::ibeo_msgs::msg::Object2225::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object2225_age(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2225 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::Object2225>()
{
  return ibeo_msgs::msg::builder::Init_Object2225_id();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2225__BUILDER_HPP_
