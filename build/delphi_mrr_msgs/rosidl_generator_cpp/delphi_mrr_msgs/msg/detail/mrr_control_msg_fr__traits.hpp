// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgFR.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__TRAITS_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_fr__struct.hpp"
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
  const delphi_mrr_msgs::msg::MrrControlMsgFR & msg,
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

  // member: can_sensitivity_profile_select
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_sensitivity_profile_select: ";
    value_to_yaml(msg.can_sensitivity_profile_select, out);
    out << "\n";
  }

  // member: can_stop_frequency_frml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_stop_frequency_frml: ";
    value_to_yaml(msg.can_stop_frequency_frml, out);
    out << "\n";
  }

  // member: can_stop_frequency_frll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_stop_frequency_frll: ";
    value_to_yaml(msg.can_stop_frequency_frll, out);
    out << "\n";
  }

  // member: can_prp_factor_frml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_prp_factor_frml: ";
    value_to_yaml(msg.can_prp_factor_frml, out);
    out << "\n";
  }

  // member: can_prp_factor_frll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_prp_factor_frll: ";
    value_to_yaml(msg.can_prp_factor_frll, out);
    out << "\n";
  }

  // member: can_desired_sweep_bw_frml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_desired_sweep_bw_frml: ";
    value_to_yaml(msg.can_desired_sweep_bw_frml, out);
    out << "\n";
  }

  // member: can_desired_sweep_bw_frll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_desired_sweep_bw_frll: ";
    value_to_yaml(msg.can_desired_sweep_bw_frll, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_mrr_msgs::msg::MrrControlMsgFR & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::MrrControlMsgFR>()
{
  return "delphi_mrr_msgs::msg::MrrControlMsgFR";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::MrrControlMsgFR>()
{
  return "delphi_mrr_msgs/msg/MrrControlMsgFR";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::MrrControlMsgFR>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::MrrControlMsgFR>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::MrrControlMsgFR>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__TRAITS_HPP_
