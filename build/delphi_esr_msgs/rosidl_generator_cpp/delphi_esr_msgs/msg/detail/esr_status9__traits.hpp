// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus9.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status9__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrStatus9 & msg,
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

  // member: canmsg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "canmsg: ";
    value_to_yaml(msg.canmsg, out);
    out << "\n";
  }

  // member: avg_pwr_cwblkg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avg_pwr_cwblkg: ";
    value_to_yaml(msg.avg_pwr_cwblkg, out);
    out << "\n";
  }

  // member: sideslip_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sideslip_angle: ";
    value_to_yaml(msg.sideslip_angle, out);
    out << "\n";
  }

  // member: serial_num_3rd_byte
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_num_3rd_byte: ";
    value_to_yaml(msg.serial_num_3rd_byte, out);
    out << "\n";
  }

  // member: water_spray_target_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "water_spray_target_id: ";
    value_to_yaml(msg.water_spray_target_id, out);
    out << "\n";
  }

  // member: filtered_xohp_acc_cipv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtered_xohp_acc_cipv: ";
    value_to_yaml(msg.filtered_xohp_acc_cipv, out);
    out << "\n";
  }

  // member: path_id_acc_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_id_acc_2: ";
    value_to_yaml(msg.path_id_acc_2, out);
    out << "\n";
  }

  // member: path_id_acc_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_id_acc_3: ";
    value_to_yaml(msg.path_id_acc_3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrStatus9 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrStatus9>()
{
  return "delphi_esr_msgs::msg::EsrStatus9";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrStatus9>()
{
  return "delphi_esr_msgs/msg/EsrStatus9";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrStatus9>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrStatus9>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrStatus9>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__TRAITS_HPP_
