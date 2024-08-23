// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from esda_ros_interface:msg/EsdaMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "esda_ros_interface/msg/detail/esda_message__rosidl_typesupport_introspection_c.h"
#include "esda_ros_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "esda_ros_interface/msg/detail/esda_message__functions.h"
#include "esda_ros_interface/msg/detail/esda_message__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  esda_ros_interface__msg__EsdaMessage__init(message_memory);
}

void esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_fini_function(void * message_memory)
{
  esda_ros_interface__msg__EsdaMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_message_member_array[5] = {
  {
    "current_vel_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(esda_ros_interface__msg__EsdaMessage, current_vel_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_vel_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(esda_ros_interface__msg__EsdaMessage, current_vel_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(esda_ros_interface__msg__EsdaMessage, steering_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(esda_ros_interface__msg__EsdaMessage, auto_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(esda_ros_interface__msg__EsdaMessage, estop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_message_members = {
  "esda_ros_interface__msg",  // message namespace
  "EsdaMessage",  // message name
  5,  // number of fields
  sizeof(esda_ros_interface__msg__EsdaMessage),
  esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_message_member_array,  // message members
  esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_message_type_support_handle = {
  0,
  &esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_esda_ros_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, esda_ros_interface, msg, EsdaMessage)() {
  if (!esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_message_type_support_handle.typesupport_identifier) {
    esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &esda_ros_interface__msg__EsdaMessage__rosidl_typesupport_introspection_c__EsdaMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
