// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ObjectData2271.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2271__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2271__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/object_data2271__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectData2271_object_list
{
public:
  explicit Init_ObjectData2271_object_list(::ibeo_msgs::msg::ObjectData2271 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ObjectData2271 object_list(::ibeo_msgs::msg::ObjectData2271::_object_list_type arg)
  {
    msg_.object_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ObjectData2271 msg_;
};

class Init_ObjectData2271_number_of_objects
{
public:
  explicit Init_ObjectData2271_number_of_objects(::ibeo_msgs::msg::ObjectData2271 & msg)
  : msg_(msg)
  {}
  Init_ObjectData2271_object_list number_of_objects(::ibeo_msgs::msg::ObjectData2271::_number_of_objects_type arg)
  {
    msg_.number_of_objects = std::move(arg);
    return Init_ObjectData2271_object_list(msg_);
  }

private:
  ::ibeo_msgs::msg::ObjectData2271 msg_;
};

class Init_ObjectData2271_scan_number
{
public:
  explicit Init_ObjectData2271_scan_number(::ibeo_msgs::msg::ObjectData2271 & msg)
  : msg_(msg)
  {}
  Init_ObjectData2271_number_of_objects scan_number(::ibeo_msgs::msg::ObjectData2271::_scan_number_type arg)
  {
    msg_.scan_number = std::move(arg);
    return Init_ObjectData2271_number_of_objects(msg_);
  }

private:
  ::ibeo_msgs::msg::ObjectData2271 msg_;
};

class Init_ObjectData2271_start_scan_timestamp
{
public:
  explicit Init_ObjectData2271_start_scan_timestamp(::ibeo_msgs::msg::ObjectData2271 & msg)
  : msg_(msg)
  {}
  Init_ObjectData2271_scan_number start_scan_timestamp(::ibeo_msgs::msg::ObjectData2271::_start_scan_timestamp_type arg)
  {
    msg_.start_scan_timestamp = std::move(arg);
    return Init_ObjectData2271_scan_number(msg_);
  }

private:
  ::ibeo_msgs::msg::ObjectData2271 msg_;
};

class Init_ObjectData2271_ibeo_header
{
public:
  explicit Init_ObjectData2271_ibeo_header(::ibeo_msgs::msg::ObjectData2271 & msg)
  : msg_(msg)
  {}
  Init_ObjectData2271_start_scan_timestamp ibeo_header(::ibeo_msgs::msg::ObjectData2271::_ibeo_header_type arg)
  {
    msg_.ibeo_header = std::move(arg);
    return Init_ObjectData2271_start_scan_timestamp(msg_);
  }

private:
  ::ibeo_msgs::msg::ObjectData2271 msg_;
};

class Init_ObjectData2271_header
{
public:
  Init_ObjectData2271_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectData2271_ibeo_header header(::ibeo_msgs::msg::ObjectData2271::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectData2271_ibeo_header(msg_);
  }

private:
  ::ibeo_msgs::msg::ObjectData2271 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ObjectData2271>()
{
  return ibeo_msgs::msg::builder::Init_ObjectData2271_header();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2271__BUILDER_HPP_
