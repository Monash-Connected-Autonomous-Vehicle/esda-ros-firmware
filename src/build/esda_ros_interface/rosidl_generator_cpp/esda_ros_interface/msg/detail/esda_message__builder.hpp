// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from esda_ros_interface:msg/EsdaMessage.idl
// generated code does not contain a copyright notice

#ifndef ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__BUILDER_HPP_
#define ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "esda_ros_interface/msg/detail/esda_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace esda_ros_interface
{

namespace msg
{

namespace builder
{

class Init_EsdaMessage_estop
{
public:
  explicit Init_EsdaMessage_estop(::esda_ros_interface::msg::EsdaMessage & msg)
  : msg_(msg)
  {}
  ::esda_ros_interface::msg::EsdaMessage estop(::esda_ros_interface::msg::EsdaMessage::_estop_type arg)
  {
    msg_.estop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::esda_ros_interface::msg::EsdaMessage msg_;
};

class Init_EsdaMessage_auto_mode
{
public:
  explicit Init_EsdaMessage_auto_mode(::esda_ros_interface::msg::EsdaMessage & msg)
  : msg_(msg)
  {}
  Init_EsdaMessage_estop auto_mode(::esda_ros_interface::msg::EsdaMessage::_auto_mode_type arg)
  {
    msg_.auto_mode = std::move(arg);
    return Init_EsdaMessage_estop(msg_);
  }

private:
  ::esda_ros_interface::msg::EsdaMessage msg_;
};

class Init_EsdaMessage_steering_angle
{
public:
  explicit Init_EsdaMessage_steering_angle(::esda_ros_interface::msg::EsdaMessage & msg)
  : msg_(msg)
  {}
  Init_EsdaMessage_auto_mode steering_angle(::esda_ros_interface::msg::EsdaMessage::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_EsdaMessage_auto_mode(msg_);
  }

private:
  ::esda_ros_interface::msg::EsdaMessage msg_;
};

class Init_EsdaMessage_current_vel_left
{
public:
  explicit Init_EsdaMessage_current_vel_left(::esda_ros_interface::msg::EsdaMessage & msg)
  : msg_(msg)
  {}
  Init_EsdaMessage_steering_angle current_vel_left(::esda_ros_interface::msg::EsdaMessage::_current_vel_left_type arg)
  {
    msg_.current_vel_left = std::move(arg);
    return Init_EsdaMessage_steering_angle(msg_);
  }

private:
  ::esda_ros_interface::msg::EsdaMessage msg_;
};

class Init_EsdaMessage_current_vel_right
{
public:
  Init_EsdaMessage_current_vel_right()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsdaMessage_current_vel_left current_vel_right(::esda_ros_interface::msg::EsdaMessage::_current_vel_right_type arg)
  {
    msg_.current_vel_right = std::move(arg);
    return Init_EsdaMessage_current_vel_left(msg_);
  }

private:
  ::esda_ros_interface::msg::EsdaMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::esda_ros_interface::msg::EsdaMessage>()
{
  return esda_ros_interface::msg::builder::Init_EsdaMessage_current_vel_right();
}

}  // namespace esda_ros_interface

#endif  // ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__BUILDER_HPP_
