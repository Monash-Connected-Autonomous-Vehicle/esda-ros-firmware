// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from esda_ros_interface:msg/EsdaMessage.idl
// generated code does not contain a copyright notice

#ifndef ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__TRAITS_HPP_
#define ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "esda_ros_interface/msg/detail/esda_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace esda_ros_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const EsdaMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_vel_right
  {
    out << "current_vel_right: ";
    rosidl_generator_traits::value_to_yaml(msg.current_vel_right, out);
    out << ", ";
  }

  // member: current_vel_left
  {
    out << "current_vel_left: ";
    rosidl_generator_traits::value_to_yaml(msg.current_vel_left, out);
    out << ", ";
  }

  // member: steering_angle
  {
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
    out << ", ";
  }

  // member: auto_mode
  {
    out << "auto_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_mode, out);
    out << ", ";
  }

  // member: estop
  {
    out << "estop: ";
    rosidl_generator_traits::value_to_yaml(msg.estop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EsdaMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_vel_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_vel_right: ";
    rosidl_generator_traits::value_to_yaml(msg.current_vel_right, out);
    out << "\n";
  }

  // member: current_vel_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_vel_left: ";
    rosidl_generator_traits::value_to_yaml(msg.current_vel_left, out);
    out << "\n";
  }

  // member: steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
    out << "\n";
  }

  // member: auto_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_mode, out);
    out << "\n";
  }

  // member: estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop: ";
    rosidl_generator_traits::value_to_yaml(msg.estop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EsdaMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace esda_ros_interface

namespace rosidl_generator_traits
{

[[deprecated("use esda_ros_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const esda_ros_interface::msg::EsdaMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  esda_ros_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use esda_ros_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const esda_ros_interface::msg::EsdaMessage & msg)
{
  return esda_ros_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<esda_ros_interface::msg::EsdaMessage>()
{
  return "esda_ros_interface::msg::EsdaMessage";
}

template<>
inline const char * name<esda_ros_interface::msg::EsdaMessage>()
{
  return "esda_ros_interface/msg/EsdaMessage";
}

template<>
struct has_fixed_size<esda_ros_interface::msg::EsdaMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<esda_ros_interface::msg::EsdaMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<esda_ros_interface::msg::EsdaMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__TRAITS_HPP_
