// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__TRAITS_HPP_

#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg2__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const delphi_mrr_msgs::msg::VehicleStateMsg2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: fsm_yaw_rate_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsm_yaw_rate_valid: ";
    value_to_yaml(msg.fsm_yaw_rate_valid, out);
    out << "\n";
  }

  // member: fsm_yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsm_yaw_rate: ";
    value_to_yaml(msg.fsm_yaw_rate, out);
    out << "\n";
  }

  // member: can_vehicle_index_4fa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_vehicle_index_4fa: ";
    value_to_yaml(msg.can_vehicle_index_4fa, out);
    out << "\n";
  }

  // member: fsm_vehicle_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsm_vehicle_velocity: ";
    value_to_yaml(msg.fsm_vehicle_velocity, out);
    out << "\n";
  }

  // member: can_steering_whl_angle_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_steering_whl_angle_qf: ";
    value_to_yaml(msg.can_steering_whl_angle_qf, out);
    out << "\n";
  }

  // member: fsm_vehicle_velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsm_vehicle_velocity_valid: ";
    value_to_yaml(msg.fsm_vehicle_velocity_valid, out);
    out << "\n";
  }

  // member: can_steering_whl_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_steering_whl_angle: ";
    value_to_yaml(msg.can_steering_whl_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_mrr_msgs::msg::VehicleStateMsg2 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::VehicleStateMsg2>()
{
  return "delphi_mrr_msgs::msg::VehicleStateMsg2";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::VehicleStateMsg2>()
{
  return "delphi_mrr_msgs/msg/VehicleStateMsg2";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::VehicleStateMsg2>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::VehicleStateMsg2>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::VehicleStateMsg2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__TRAITS_HPP_
