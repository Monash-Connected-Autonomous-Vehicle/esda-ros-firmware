// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from esda_ros_interface:msg/EsdaMessage.idl
// generated code does not contain a copyright notice

#ifndef ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "esda_ros_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "esda_ros_interface/msg/detail/esda_message__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace esda_ros_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_esda_ros_interface
cdr_serialize(
  const esda_ros_interface::msg::EsdaMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_esda_ros_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  esda_ros_interface::msg::EsdaMessage & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_esda_ros_interface
get_serialized_size(
  const esda_ros_interface::msg::EsdaMessage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_esda_ros_interface
max_serialized_size_EsdaMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace esda_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_esda_ros_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, esda_ros_interface, msg, EsdaMessage)();

#ifdef __cplusplus
}
#endif

#endif  // ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
