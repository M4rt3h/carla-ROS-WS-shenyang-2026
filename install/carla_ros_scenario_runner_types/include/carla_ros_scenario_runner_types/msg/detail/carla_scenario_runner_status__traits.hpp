// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioRunnerStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__TRAITS_HPP_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__TRAITS_HPP_

#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario_runner_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus>()
{
  return "carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus";
}

template<>
inline const char * name<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus>()
{
  return "carla_ros_scenario_runner_types/msg/CarlaScenarioRunnerStatus";
}

template<>
struct has_fixed_size<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__TRAITS_HPP_
