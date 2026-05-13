// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusRadar.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__TRAITS_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_status_radar__struct.hpp"
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
  const delphi_mrr_msgs::msg::MrrStatusRadar & msg,
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

  // member: can_interference_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_interference_type: ";
    value_to_yaml(msg.can_interference_type, out);
    out << "\n";
  }

  // member: can_recommend_unconverge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_recommend_unconverge: ";
    value_to_yaml(msg.can_recommend_unconverge, out);
    out << "\n";
  }

  // member: can_blockage_sidelobe_filter_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_blockage_sidelobe_filter_val: ";
    value_to_yaml(msg.can_blockage_sidelobe_filter_val, out);
    out << "\n";
  }

  // member: can_radar_align_incomplete
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_align_incomplete: ";
    value_to_yaml(msg.can_radar_align_incomplete, out);
    out << "\n";
  }

  // member: can_blockage_sidelobe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_blockage_sidelobe: ";
    value_to_yaml(msg.can_blockage_sidelobe, out);
    out << "\n";
  }

  // member: can_blockage_mnr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_blockage_mnr: ";
    value_to_yaml(msg.can_blockage_mnr, out);
    out << "\n";
  }

  // member: can_radar_ext_cond_nok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_ext_cond_nok: ";
    value_to_yaml(msg.can_radar_ext_cond_nok, out);
    out << "\n";
  }

  // member: can_radar_align_out_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_align_out_range: ";
    value_to_yaml(msg.can_radar_align_out_range, out);
    out << "\n";
  }

  // member: can_radar_align_not_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_align_not_start: ";
    value_to_yaml(msg.can_radar_align_not_start, out);
    out << "\n";
  }

  // member: can_radar_overheat_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_overheat_error: ";
    value_to_yaml(msg.can_radar_overheat_error, out);
    out << "\n";
  }

  // member: can_radar_not_op
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_not_op: ";
    value_to_yaml(msg.can_radar_not_op, out);
    out << "\n";
  }

  // member: can_xcvr_operational
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_xcvr_operational: ";
    value_to_yaml(msg.can_xcvr_operational, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_mrr_msgs::msg::MrrStatusRadar & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::MrrStatusRadar>()
{
  return "delphi_mrr_msgs::msg::MrrStatusRadar";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::MrrStatusRadar>()
{
  return "delphi_mrr_msgs/msg/MrrStatusRadar";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::MrrStatusRadar>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::MrrStatusRadar>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::MrrStatusRadar>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__TRAITS_HPP_
