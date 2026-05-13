// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/CameraImage.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/camera_image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraImage_image_buffer
{
public:
  explicit Init_CameraImage_image_buffer(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::CameraImage image_buffer(::ibeo_msgs::msg::CameraImage::_image_buffer_type arg)
  {
    msg_.image_buffer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_compressed_size
{
public:
  explicit Init_CameraImage_compressed_size(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  Init_CameraImage_image_buffer compressed_size(::ibeo_msgs::msg::CameraImage::_compressed_size_type arg)
  {
    msg_.compressed_size = std::move(arg);
    return Init_CameraImage_image_buffer(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_image_height
{
public:
  explicit Init_CameraImage_image_height(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  Init_CameraImage_compressed_size image_height(::ibeo_msgs::msg::CameraImage::_image_height_type arg)
  {
    msg_.image_height = std::move(arg);
    return Init_CameraImage_compressed_size(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_image_width
{
public:
  explicit Init_CameraImage_image_width(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  Init_CameraImage_image_height image_width(::ibeo_msgs::msg::CameraImage::_image_width_type arg)
  {
    msg_.image_width = std::move(arg);
    return Init_CameraImage_image_height(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_vertical_opening_angle
{
public:
  explicit Init_CameraImage_vertical_opening_angle(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  Init_CameraImage_image_width vertical_opening_angle(::ibeo_msgs::msg::CameraImage::_vertical_opening_angle_type arg)
  {
    msg_.vertical_opening_angle = std::move(arg);
    return Init_CameraImage_image_width(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_horizontal_opening_angle
{
public:
  explicit Init_CameraImage_horizontal_opening_angle(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  Init_CameraImage_vertical_opening_angle horizontal_opening_angle(::ibeo_msgs::msg::CameraImage::_horizontal_opening_angle_type arg)
  {
    msg_.horizontal_opening_angle = std::move(arg);
    return Init_CameraImage_vertical_opening_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_mounting_position
{
public:
  explicit Init_CameraImage_mounting_position(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  Init_CameraImage_horizontal_opening_angle mounting_position(::ibeo_msgs::msg::CameraImage::_mounting_position_type arg)
  {
    msg_.mounting_position = std::move(arg);
    return Init_CameraImage_horizontal_opening_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_device_id
{
public:
  explicit Init_CameraImage_device_id(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  Init_CameraImage_mounting_position device_id(::ibeo_msgs::msg::CameraImage::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_CameraImage_mounting_position(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_timestamp
{
public:
  explicit Init_CameraImage_timestamp(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  Init_CameraImage_device_id timestamp(::ibeo_msgs::msg::CameraImage::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CameraImage_device_id(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_us_since_power_on
{
public:
  explicit Init_CameraImage_us_since_power_on(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  Init_CameraImage_timestamp us_since_power_on(::ibeo_msgs::msg::CameraImage::_us_since_power_on_type arg)
  {
    msg_.us_since_power_on = std::move(arg);
    return Init_CameraImage_timestamp(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_image_format
{
public:
  explicit Init_CameraImage_image_format(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  Init_CameraImage_us_since_power_on image_format(::ibeo_msgs::msg::CameraImage::_image_format_type arg)
  {
    msg_.image_format = std::move(arg);
    return Init_CameraImage_us_since_power_on(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_ibeo_header
{
public:
  explicit Init_CameraImage_ibeo_header(::ibeo_msgs::msg::CameraImage & msg)
  : msg_(msg)
  {}
  Init_CameraImage_image_format ibeo_header(::ibeo_msgs::msg::CameraImage::_ibeo_header_type arg)
  {
    msg_.ibeo_header = std::move(arg);
    return Init_CameraImage_image_format(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

class Init_CameraImage_header
{
public:
  Init_CameraImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraImage_ibeo_header header(::ibeo_msgs::msg::CameraImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraImage_ibeo_header(msg_);
  }

private:
  ::ibeo_msgs::msg::CameraImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::CameraImage>()
{
  return ibeo_msgs::msg::builder::Init_CameraImage_header();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__BUILDER_HPP_
