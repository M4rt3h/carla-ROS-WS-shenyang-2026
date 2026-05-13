// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/IbeoDataHeader.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_IbeoDataHeader_stamp
{
public:
  explicit Init_IbeoDataHeader_stamp(::ibeo_msgs::msg::IbeoDataHeader & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::IbeoDataHeader stamp(::ibeo_msgs::msg::IbeoDataHeader::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::IbeoDataHeader msg_;
};

class Init_IbeoDataHeader_data_type_id
{
public:
  explicit Init_IbeoDataHeader_data_type_id(::ibeo_msgs::msg::IbeoDataHeader & msg)
  : msg_(msg)
  {}
  Init_IbeoDataHeader_stamp data_type_id(::ibeo_msgs::msg::IbeoDataHeader::_data_type_id_type arg)
  {
    msg_.data_type_id = std::move(arg);
    return Init_IbeoDataHeader_stamp(msg_);
  }

private:
  ::ibeo_msgs::msg::IbeoDataHeader msg_;
};

class Init_IbeoDataHeader_device_id
{
public:
  explicit Init_IbeoDataHeader_device_id(::ibeo_msgs::msg::IbeoDataHeader & msg)
  : msg_(msg)
  {}
  Init_IbeoDataHeader_data_type_id device_id(::ibeo_msgs::msg::IbeoDataHeader::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_IbeoDataHeader_data_type_id(msg_);
  }

private:
  ::ibeo_msgs::msg::IbeoDataHeader msg_;
};

class Init_IbeoDataHeader_message_size
{
public:
  explicit Init_IbeoDataHeader_message_size(::ibeo_msgs::msg::IbeoDataHeader & msg)
  : msg_(msg)
  {}
  Init_IbeoDataHeader_device_id message_size(::ibeo_msgs::msg::IbeoDataHeader::_message_size_type arg)
  {
    msg_.message_size = std::move(arg);
    return Init_IbeoDataHeader_device_id(msg_);
  }

private:
  ::ibeo_msgs::msg::IbeoDataHeader msg_;
};

class Init_IbeoDataHeader_previous_message_size
{
public:
  Init_IbeoDataHeader_previous_message_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IbeoDataHeader_message_size previous_message_size(::ibeo_msgs::msg::IbeoDataHeader::_previous_message_size_type arg)
  {
    msg_.previous_message_size = std::move(arg);
    return Init_IbeoDataHeader_message_size(msg_);
  }

private:
  ::ibeo_msgs::msg::IbeoDataHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::IbeoDataHeader>()
{
  return ibeo_msgs::msg::builder::Init_IbeoDataHeader_previous_message_size();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__BUILDER_HPP_
