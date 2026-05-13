// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__TRAITS_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__TRAITS_HPP_

#include "delphi_srr_msgs/msg/detail/srr_status2__struct.hpp"
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
  const delphi_srr_msgs::msg::SrrStatus2 & msg,
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

  // member: can_tx_alignment_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_alignment_status: ";
    value_to_yaml(msg.can_tx_alignment_status, out);
    out << "\n";
  }

  // member: can_tx_comm_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_comm_error: ";
    value_to_yaml(msg.can_tx_comm_error, out);
    out << "\n";
  }

  // member: can_tx_steering_angle_sign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_steering_angle_sign: ";
    value_to_yaml(msg.can_tx_steering_angle_sign, out);
    out << "\n";
  }

  // member: can_tx_yaw_rate_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_yaw_rate_bias: ";
    value_to_yaml(msg.can_tx_yaw_rate_bias, out);
    out << "\n";
  }

  // member: can_tx_veh_spd_comp_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_veh_spd_comp_factor: ";
    value_to_yaml(msg.can_tx_veh_spd_comp_factor, out);
    out << "\n";
  }

  // member: can_tx_sw_version_dsp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_sw_version_dsp: ";
    value_to_yaml(msg.can_tx_sw_version_dsp, out);
    out << "\n";
  }

  // member: can_tx_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_temperature: ";
    value_to_yaml(msg.can_tx_temperature, out);
    out << "\n";
  }

  // member: can_tx_range_perf_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_range_perf_error: ";
    value_to_yaml(msg.can_tx_range_perf_error, out);
    out << "\n";
  }

  // member: can_tx_overheat_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_overheat_error: ";
    value_to_yaml(msg.can_tx_overheat_error, out);
    out << "\n";
  }

  // member: can_tx_internal_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_internal_error: ";
    value_to_yaml(msg.can_tx_internal_error, out);
    out << "\n";
  }

  // member: can_tx_xcvr_operational
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_xcvr_operational: ";
    value_to_yaml(msg.can_tx_xcvr_operational, out);
    out << "\n";
  }

  // member: can_tx_steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_steering_angle: ";
    value_to_yaml(msg.can_tx_steering_angle, out);
    out << "\n";
  }

  // member: can_tx_rolling_count_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_rolling_count_2: ";
    value_to_yaml(msg.can_tx_rolling_count_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_srr_msgs::msg::SrrStatus2 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_srr_msgs::msg::SrrStatus2>()
{
  return "delphi_srr_msgs::msg::SrrStatus2";
}

template<>
inline const char * name<delphi_srr_msgs::msg::SrrStatus2>()
{
  return "delphi_srr_msgs/msg/SrrStatus2";
}

template<>
struct has_fixed_size<delphi_srr_msgs::msg::SrrStatus2>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_srr_msgs::msg::SrrStatus2>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_srr_msgs::msg::SrrStatus2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__TRAITS_HPP_
