// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ConfigureOutputsPwmFreqCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_PWM_FREQ_CMD__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_PWM_FREQ_CMD__TRAITS_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_pwm_freq_cmd__struct.hpp"
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
  const kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd & msg,
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

  // member: confirm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confirm: ";
    value_to_yaml(msg.confirm, out);
    out << "\n";
  }

  // member: min_pwm_pct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_pwm_pct: ";
    value_to_yaml(msg.min_pwm_pct, out);
    out << "\n";
  }

  // member: max_pwm_pct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_pwm_pct: ";
    value_to_yaml(msg.max_pwm_pct, out);
    out << "\n";
  }

  // member: pwm_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_freq: ";
    value_to_yaml(msg.pwm_freq, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd>()
{
  return "kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd>()
{
  return "kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_PWM_FREQ_CMD__TRAITS_HPP_
