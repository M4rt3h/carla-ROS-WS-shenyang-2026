// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_srr_msgs:msg/SrrFeatureAlert.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__TRAITS_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__TRAITS_HPP_

#include "delphi_srr_msgs/msg/detail/srr_feature_alert__struct.hpp"
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
  const delphi_srr_msgs::msg::SrrFeatureAlert & msg,
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

  // member: lcma_blis_ignored_track_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lcma_blis_ignored_track_id: ";
    value_to_yaml(msg.lcma_blis_ignored_track_id, out);
    out << "\n";
  }

  // member: lcma_blis_track_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lcma_blis_track_id: ";
    value_to_yaml(msg.lcma_blis_track_id, out);
    out << "\n";
  }

  // member: lcma_cvw_ttc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lcma_cvw_ttc: ";
    value_to_yaml(msg.lcma_cvw_ttc, out);
    out << "\n";
  }

  // member: cta_ttc_alert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cta_ttc_alert: ";
    value_to_yaml(msg.cta_ttc_alert, out);
    out << "\n";
  }

  // member: cta_selected_track_ttc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cta_selected_track_ttc: ";
    value_to_yaml(msg.cta_selected_track_ttc, out);
    out << "\n";
  }

  // member: cta_selected_track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cta_selected_track: ";
    value_to_yaml(msg.cta_selected_track, out);
    out << "\n";
  }

  // member: cta_alert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cta_alert: ";
    value_to_yaml(msg.cta_alert, out);
    out << "\n";
  }

  // member: cta_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cta_active: ";
    value_to_yaml(msg.cta_active, out);
    out << "\n";
  }

  // member: lcma_cvw_cipv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lcma_cvw_cipv: ";
    value_to_yaml(msg.lcma_cvw_cipv, out);
    out << "\n";
  }

  // member: lcma_cvw_alert_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lcma_cvw_alert_state: ";
    value_to_yaml(msg.lcma_cvw_alert_state, out);
    out << "\n";
  }

  // member: lcma_blis_alert_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lcma_blis_alert_state: ";
    value_to_yaml(msg.lcma_blis_alert_state, out);
    out << "\n";
  }

  // member: lcma_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lcma_active: ";
    value_to_yaml(msg.lcma_active, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_srr_msgs::msg::SrrFeatureAlert & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_srr_msgs::msg::SrrFeatureAlert>()
{
  return "delphi_srr_msgs::msg::SrrFeatureAlert";
}

template<>
inline const char * name<delphi_srr_msgs::msg::SrrFeatureAlert>()
{
  return "delphi_srr_msgs/msg/SrrFeatureAlert";
}

template<>
struct has_fixed_size<delphi_srr_msgs::msg::SrrFeatureAlert>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_srr_msgs::msg::SrrFeatureAlert>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_srr_msgs::msg::SrrFeatureAlert>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__TRAITS_HPP_
