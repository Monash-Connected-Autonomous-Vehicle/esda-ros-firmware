// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from esda_ros_interface:msg/EsdaMessage.idl
// generated code does not contain a copyright notice

#ifndef ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__STRUCT_H_
#define ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EsdaMessage in the package esda_ros_interface.
typedef struct esda_ros_interface__msg__EsdaMessage
{
  double current_vel_right;
  double current_vel_left;
  double steering_angle;
  bool auto_mode;
  bool estop;
} esda_ros_interface__msg__EsdaMessage;

// Struct for a sequence of esda_ros_interface__msg__EsdaMessage.
typedef struct esda_ros_interface__msg__EsdaMessage__Sequence
{
  esda_ros_interface__msg__EsdaMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} esda_ros_interface__msg__EsdaMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__STRUCT_H_
