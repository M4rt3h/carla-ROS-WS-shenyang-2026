// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus6.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status6__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrStatus6 & msg,
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

  // member: supply_1p8v_a2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_1p8v_a2d: ";
    value_to_yaml(msg.supply_1p8v_a2d, out);
    out << "\n";
  }

  // member: supply_n5v_a2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_n5v_a2d: ";
    value_to_yaml(msg.supply_n5v_a2d, out);
    out << "\n";
  }

  // member: wave_diff_a2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wave_diff_a2d: ";
    value_to_yaml(msg.wave_diff_a2d, out);
    out << "\n";
  }

  // member: sw_version_dsp_3rd_byte
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw_version_dsp_3rd_byte: ";
    value_to_yaml(msg.sw_version_dsp_3rd_byte, out);
    out << "\n";
  }

  // member: vertical_align_updated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_align_updated: ";
    value_to_yaml(msg.vertical_align_updated, out);
    out << "\n";
  }

  // member: system_power_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_power_mode: ";
    value_to_yaml(msg.system_power_mode, out);
    out << "\n";
  }

  // member: found_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "found_target: ";
    value_to_yaml(msg.found_target, out);
    out << "\n";
  }

  // member: recommend_unconverge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recommend_unconverge: ";
    value_to_yaml(msg.recommend_unconverge, out);
    out << "\n";
  }

  // member: factory_align_status_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "factory_align_status_1: ";
    value_to_yaml(msg.factory_align_status_1, out);
    out << "\n";
  }

  // member: factory_align_status_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "factory_align_status_2: ";
    value_to_yaml(msg.factory_align_status_2, out);
    out << "\n";
  }

  // member: factory_misalignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "factory_misalignment: ";
    value_to_yaml(msg.factory_misalignment, out);
    out << "\n";
  }

  // member: serv_align_updates_done
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serv_align_updates_done: ";
    value_to_yaml(msg.serv_align_updates_done, out);
    out << "\n";
  }

  // member: vertical_misalignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_misalignment: ";
    value_to_yaml(msg.vertical_misalignment, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrStatus6 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrStatus6>()
{
  return "delphi_esr_msgs::msg::EsrStatus6";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrStatus6>()
{
  return "delphi_esr_msgs/msg/EsrStatus6";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrStatus6>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrStatus6>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrStatus6>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__TRAITS_HPP_
