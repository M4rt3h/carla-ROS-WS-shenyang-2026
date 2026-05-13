// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusTempVolt.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__TRAITS_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_status_temp_volt__struct.hpp"
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
  const delphi_mrr_msgs::msg::MrrStatusTempVolt & msg,
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

  // member: can_batt_volts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_batt_volts: ";
    value_to_yaml(msg.can_batt_volts, out);
    out << "\n";
  }

  // member: can_1_25_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_1_25_v: ";
    value_to_yaml(msg.can_1_25_v, out);
    out << "\n";
  }

  // member: can_5_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_5_v: ";
    value_to_yaml(msg.can_5_v, out);
    out << "\n";
  }

  // member: can_3_3_v_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_3_3_v_raw: ";
    value_to_yaml(msg.can_3_3_v_raw, out);
    out << "\n";
  }

  // member: can_3_3_v_dac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_3_3_v_dac: ";
    value_to_yaml(msg.can_3_3_v_dac, out);
    out << "\n";
  }

  // member: can_mmic_temp1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_mmic_temp1: ";
    value_to_yaml(msg.can_mmic_temp1, out);
    out << "\n";
  }

  // member: can_processor_thermistor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_processor_thermistor: ";
    value_to_yaml(msg.can_processor_thermistor, out);
    out << "\n";
  }

  // member: can_processor_temp1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_processor_temp1: ";
    value_to_yaml(msg.can_processor_temp1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_mrr_msgs::msg::MrrStatusTempVolt & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::MrrStatusTempVolt>()
{
  return "delphi_mrr_msgs::msg::MrrStatusTempVolt";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::MrrStatusTempVolt>()
{
  return "delphi_mrr_msgs/msg/MrrStatusTempVolt";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::MrrStatusTempVolt>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::MrrStatusTempVolt>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::MrrStatusTempVolt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__TRAITS_HPP_
