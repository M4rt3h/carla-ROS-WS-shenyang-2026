// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__TRAITS_HPP_

#include "delphi_mrr_msgs/msg/detail/active_fault_latched2__struct.hpp"
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
  const delphi_mrr_msgs::msg::ActiveFaultLatched2 & msg,
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

  // member: ipma_pcan_data_range_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ipma_pcan_data_range_check: ";
    value_to_yaml(msg.ipma_pcan_data_range_check, out);
    out << "\n";
  }

  // member: ipma_pcan_missing_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ipma_pcan_missing_msg: ";
    value_to_yaml(msg.ipma_pcan_missing_msg, out);
    out << "\n";
  }

  // member: vin_signal_compare_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin_signal_compare_failure: ";
    value_to_yaml(msg.vin_signal_compare_failure, out);
    out << "\n";
  }

  // member: module_not_configured_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module_not_configured_error: ";
    value_to_yaml(msg.module_not_configured_error, out);
    out << "\n";
  }

  // member: car_cfg_not_configured_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_cfg_not_configured_error: ";
    value_to_yaml(msg.car_cfg_not_configured_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_mrr_msgs::msg::ActiveFaultLatched2 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::ActiveFaultLatched2>()
{
  return "delphi_mrr_msgs::msg::ActiveFaultLatched2";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::ActiveFaultLatched2>()
{
  return "delphi_mrr_msgs/msg/ActiveFaultLatched2";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::ActiveFaultLatched2>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::ActiveFaultLatched2>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::ActiveFaultLatched2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__TRAITS_HPP_
