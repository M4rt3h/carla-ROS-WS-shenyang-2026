// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusSwVersion.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__TRAITS_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_status_sw_version__struct.hpp"
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
  const delphi_mrr_msgs::msg::MrrStatusSwVersion & msg,
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

  // member: can_pbl_field_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_pbl_field_revision: ";
    value_to_yaml(msg.can_pbl_field_revision, out);
    out << "\n";
  }

  // member: can_pbl_promote_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_pbl_promote_revision: ";
    value_to_yaml(msg.can_pbl_promote_revision, out);
    out << "\n";
  }

  // member: can_sw_field_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_sw_field_revision: ";
    value_to_yaml(msg.can_sw_field_revision, out);
    out << "\n";
  }

  // member: can_sw_promote_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_sw_promote_revision: ";
    value_to_yaml(msg.can_sw_promote_revision, out);
    out << "\n";
  }

  // member: can_sw_release_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_sw_release_revision: ";
    value_to_yaml(msg.can_sw_release_revision, out);
    out << "\n";
  }

  // member: can_pbl_release_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_pbl_release_revision: ";
    value_to_yaml(msg.can_pbl_release_revision, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_mrr_msgs::msg::MrrStatusSwVersion & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::MrrStatusSwVersion>()
{
  return "delphi_mrr_msgs::msg::MrrStatusSwVersion";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::MrrStatusSwVersion>()
{
  return "delphi_mrr_msgs/msg/MrrStatusSwVersion";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::MrrStatusSwVersion>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::MrrStatusSwVersion>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::MrrStatusSwVersion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__TRAITS_HPP_
