// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__TRAITS_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__TRAITS_HPP_

#include "delphi_srr_msgs/msg/detail/srr_status4__struct.hpp"
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
  const delphi_srr_msgs::msg::SrrStatus4 & msg,
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

  // member: can_tx_sw_version_host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_sw_version_host: ";
    value_to_yaml(msg.can_tx_sw_version_host, out);
    out << "\n";
  }

  // member: can_tx_path_id_blis_ignore
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_path_id_blis_ignore: ";
    value_to_yaml(msg.can_tx_path_id_blis_ignore, out);
    out << "\n";
  }

  // member: can_tx_path_id_blis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_path_id_blis: ";
    value_to_yaml(msg.can_tx_path_id_blis, out);
    out << "\n";
  }

  // member: can_tx_angle_misalignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_angle_misalignment: ";
    value_to_yaml(msg.can_tx_angle_misalignment, out);
    out << "\n";
  }

  // member: can_tx_auto_align_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_auto_align_angle: ";
    value_to_yaml(msg.can_tx_auto_align_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_srr_msgs::msg::SrrStatus4 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_srr_msgs::msg::SrrStatus4>()
{
  return "delphi_srr_msgs::msg::SrrStatus4";
}

template<>
inline const char * name<delphi_srr_msgs::msg::SrrStatus4>()
{
  return "delphi_srr_msgs/msg/SrrStatus4";
}

template<>
struct has_fixed_size<delphi_srr_msgs::msg::SrrStatus4>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_srr_msgs::msg::SrrStatus4>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_srr_msgs::msg::SrrStatus4>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__TRAITS_HPP_
