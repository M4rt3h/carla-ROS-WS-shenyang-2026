// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ObjectData2225.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2225__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2225__TRAITS_HPP_

#include "ibeo_msgs/msg/detail/object_data2225__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__traits.hpp"
// Member 'mid_scan_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'object_list'
#include "ibeo_msgs/msg/detail/object2225__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ibeo_msgs::msg::ObjectData2225 & msg,
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

  // member: ibeo_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ibeo_header:\n";
    to_yaml(msg.ibeo_header, out, indentation + 2);
  }

  // member: mid_scan_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mid_scan_timestamp:\n";
    to_yaml(msg.mid_scan_timestamp, out, indentation + 2);
  }

  // member: number_of_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_objects: ";
    value_to_yaml(msg.number_of_objects, out);
    out << "\n";
  }

  // member: object_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_list.size() == 0) {
      out << "object_list: []\n";
    } else {
      out << "object_list:\n";
      for (auto item : msg.object_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ibeo_msgs::msg::ObjectData2225 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ibeo_msgs::msg::ObjectData2225>()
{
  return "ibeo_msgs::msg::ObjectData2225";
}

template<>
inline const char * name<ibeo_msgs::msg::ObjectData2225>()
{
  return "ibeo_msgs/msg/ObjectData2225";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ObjectData2225>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ObjectData2225>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::ObjectData2225>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2225__TRAITS_HPP_
