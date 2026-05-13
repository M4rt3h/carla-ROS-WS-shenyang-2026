// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rviz_2d_overlay_msgs:msg/OverlayText.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__BUILDER_HPP_
#define RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__BUILDER_HPP_

#include "rviz_2d_overlay_msgs/msg/detail/overlay_text__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rviz_2d_overlay_msgs
{

namespace msg
{

namespace builder
{

class Init_OverlayText_text
{
public:
  explicit Init_OverlayText_text(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  ::rviz_2d_overlay_msgs::msg::OverlayText text(::rviz_2d_overlay_msgs::msg::OverlayText::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_fg_color
{
public:
  explicit Init_OverlayText_fg_color(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  Init_OverlayText_text fg_color(::rviz_2d_overlay_msgs::msg::OverlayText::_fg_color_type arg)
  {
    msg_.fg_color = std::move(arg);
    return Init_OverlayText_text(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_font
{
public:
  explicit Init_OverlayText_font(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  Init_OverlayText_fg_color font(::rviz_2d_overlay_msgs::msg::OverlayText::_font_type arg)
  {
    msg_.font = std::move(arg);
    return Init_OverlayText_fg_color(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_text_size
{
public:
  explicit Init_OverlayText_text_size(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  Init_OverlayText_font text_size(::rviz_2d_overlay_msgs::msg::OverlayText::_text_size_type arg)
  {
    msg_.text_size = std::move(arg);
    return Init_OverlayText_font(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_line_width
{
public:
  explicit Init_OverlayText_line_width(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  Init_OverlayText_text_size line_width(::rviz_2d_overlay_msgs::msg::OverlayText::_line_width_type arg)
  {
    msg_.line_width = std::move(arg);
    return Init_OverlayText_text_size(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_bg_color
{
public:
  explicit Init_OverlayText_bg_color(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  Init_OverlayText_line_width bg_color(::rviz_2d_overlay_msgs::msg::OverlayText::_bg_color_type arg)
  {
    msg_.bg_color = std::move(arg);
    return Init_OverlayText_line_width(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_vertical_alignment
{
public:
  explicit Init_OverlayText_vertical_alignment(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  Init_OverlayText_bg_color vertical_alignment(::rviz_2d_overlay_msgs::msg::OverlayText::_vertical_alignment_type arg)
  {
    msg_.vertical_alignment = std::move(arg);
    return Init_OverlayText_bg_color(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_horizontal_alignment
{
public:
  explicit Init_OverlayText_horizontal_alignment(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  Init_OverlayText_vertical_alignment horizontal_alignment(::rviz_2d_overlay_msgs::msg::OverlayText::_horizontal_alignment_type arg)
  {
    msg_.horizontal_alignment = std::move(arg);
    return Init_OverlayText_vertical_alignment(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_vertical_distance
{
public:
  explicit Init_OverlayText_vertical_distance(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  Init_OverlayText_horizontal_alignment vertical_distance(::rviz_2d_overlay_msgs::msg::OverlayText::_vertical_distance_type arg)
  {
    msg_.vertical_distance = std::move(arg);
    return Init_OverlayText_horizontal_alignment(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_horizontal_distance
{
public:
  explicit Init_OverlayText_horizontal_distance(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  Init_OverlayText_vertical_distance horizontal_distance(::rviz_2d_overlay_msgs::msg::OverlayText::_horizontal_distance_type arg)
  {
    msg_.horizontal_distance = std::move(arg);
    return Init_OverlayText_vertical_distance(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_height
{
public:
  explicit Init_OverlayText_height(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  Init_OverlayText_horizontal_distance height(::rviz_2d_overlay_msgs::msg::OverlayText::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_OverlayText_horizontal_distance(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_width
{
public:
  explicit Init_OverlayText_width(::rviz_2d_overlay_msgs::msg::OverlayText & msg)
  : msg_(msg)
  {}
  Init_OverlayText_height width(::rviz_2d_overlay_msgs::msg::OverlayText::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_OverlayText_height(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

class Init_OverlayText_action
{
public:
  Init_OverlayText_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverlayText_width action(::rviz_2d_overlay_msgs::msg::OverlayText::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_OverlayText_width(msg_);
  }

private:
  ::rviz_2d_overlay_msgs::msg::OverlayText msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rviz_2d_overlay_msgs::msg::OverlayText>()
{
  return rviz_2d_overlay_msgs::msg::builder::Init_OverlayText_action();
}

}  // namespace rviz_2d_overlay_msgs

#endif  // RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__BUILDER_HPP_
