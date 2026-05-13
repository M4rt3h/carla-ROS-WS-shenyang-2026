// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ActuatorUniqueIdReq.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ACTUATOR_UNIQUE_ID_REQ__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ACTUATOR_UNIQUE_ID_REQ__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/actuator_unique_id_req__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorUniqueIdReq_confirm
{
public:
  explicit Init_ActuatorUniqueIdReq_confirm(::kartech_linear_actuator_msgs::msg::ActuatorUniqueIdReq & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::ActuatorUniqueIdReq confirm(::kartech_linear_actuator_msgs::msg::ActuatorUniqueIdReq::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ActuatorUniqueIdReq msg_;
};

class Init_ActuatorUniqueIdReq_header
{
public:
  Init_ActuatorUniqueIdReq_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorUniqueIdReq_confirm header(::kartech_linear_actuator_msgs::msg::ActuatorUniqueIdReq::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActuatorUniqueIdReq_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ActuatorUniqueIdReq msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::ActuatorUniqueIdReq>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_ActuatorUniqueIdReq_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ACTUATOR_UNIQUE_ID_REQ__BUILDER_HPP_
