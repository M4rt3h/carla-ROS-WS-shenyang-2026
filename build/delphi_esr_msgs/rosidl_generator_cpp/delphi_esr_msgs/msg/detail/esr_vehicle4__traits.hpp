// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_vehicle4__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrVehicle4 & msg,
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

  // member: fac_align_cmd_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_align_cmd_1: ";
    value_to_yaml(msg.fac_align_cmd_1, out);
    out << "\n";
  }

  // member: fac_align_cmd_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_align_cmd_2: ";
    value_to_yaml(msg.fac_align_cmd_2, out);
    out << "\n";
  }

  // member: fac_align_max_nt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_align_max_nt: ";
    value_to_yaml(msg.fac_align_max_nt, out);
    out << "\n";
  }

  // member: fac_align_samp_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_align_samp_req: ";
    value_to_yaml(msg.fac_align_samp_req, out);
    out << "\n";
  }

  // member: fac_tgt_mtg_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_mtg_offset: ";
    value_to_yaml(msg.fac_tgt_mtg_offset, out);
    out << "\n";
  }

  // member: fac_tgt_mtg_space_hor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_mtg_space_hor: ";
    value_to_yaml(msg.fac_tgt_mtg_space_hor, out);
    out << "\n";
  }

  // member: fac_tgt_mtg_space_ver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_mtg_space_ver: ";
    value_to_yaml(msg.fac_tgt_mtg_space_ver, out);
    out << "\n";
  }

  // member: fac_tgt_range_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_range_1: ";
    value_to_yaml(msg.fac_tgt_range_1, out);
    out << "\n";
  }

  // member: fac_tgt_range_r2m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_range_r2m: ";
    value_to_yaml(msg.fac_tgt_range_r2m, out);
    out << "\n";
  }

  // member: fac_tgt_range_m2t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_range_m2t: ";
    value_to_yaml(msg.fac_tgt_range_m2t, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrVehicle4 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrVehicle4>()
{
  return "delphi_esr_msgs::msg::EsrVehicle4";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrVehicle4>()
{
  return "delphi_esr_msgs/msg/EsrVehicle4";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrVehicle4>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrVehicle4>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrVehicle4>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__TRAITS_HPP_
