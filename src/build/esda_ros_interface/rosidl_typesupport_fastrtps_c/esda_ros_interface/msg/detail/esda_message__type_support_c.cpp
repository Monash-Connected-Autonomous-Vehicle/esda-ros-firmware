// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from esda_ros_interface:msg/EsdaMessage.idl
// generated code does not contain a copyright notice
#include "esda_ros_interface/msg/detail/esda_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "esda_ros_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "esda_ros_interface/msg/detail/esda_message__struct.h"
#include "esda_ros_interface/msg/detail/esda_message__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _EsdaMessage__ros_msg_type = esda_ros_interface__msg__EsdaMessage;

static bool _EsdaMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsdaMessage__ros_msg_type * ros_message = static_cast<const _EsdaMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: current_vel_right
  {
    cdr << ros_message->current_vel_right;
  }

  // Field name: current_vel_left
  {
    cdr << ros_message->current_vel_left;
  }

  // Field name: steering_angle
  {
    cdr << ros_message->steering_angle;
  }

  // Field name: auto_mode
  {
    cdr << (ros_message->auto_mode ? true : false);
  }

  // Field name: estop
  {
    cdr << (ros_message->estop ? true : false);
  }

  return true;
}

static bool _EsdaMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsdaMessage__ros_msg_type * ros_message = static_cast<_EsdaMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: current_vel_right
  {
    cdr >> ros_message->current_vel_right;
  }

  // Field name: current_vel_left
  {
    cdr >> ros_message->current_vel_left;
  }

  // Field name: steering_angle
  {
    cdr >> ros_message->steering_angle;
  }

  // Field name: auto_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_mode = tmp ? true : false;
  }

  // Field name: estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->estop = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_esda_ros_interface
size_t get_serialized_size_esda_ros_interface__msg__EsdaMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsdaMessage__ros_msg_type * ros_message = static_cast<const _EsdaMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current_vel_right
  {
    size_t item_size = sizeof(ros_message->current_vel_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_vel_left
  {
    size_t item_size = sizeof(ros_message->current_vel_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle
  {
    size_t item_size = sizeof(ros_message->steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_mode
  {
    size_t item_size = sizeof(ros_message->auto_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estop
  {
    size_t item_size = sizeof(ros_message->estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsdaMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_esda_ros_interface__msg__EsdaMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_esda_ros_interface
size_t max_serialized_size_esda_ros_interface__msg__EsdaMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: current_vel_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_vel_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: auto_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: estop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = esda_ros_interface__msg__EsdaMessage;
    is_plain =
      (
      offsetof(DataType, estop) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EsdaMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_esda_ros_interface__msg__EsdaMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EsdaMessage = {
  "esda_ros_interface::msg",
  "EsdaMessage",
  _EsdaMessage__cdr_serialize,
  _EsdaMessage__cdr_deserialize,
  _EsdaMessage__get_serialized_size,
  _EsdaMessage__max_serialized_size
};

static rosidl_message_type_support_t _EsdaMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsdaMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, esda_ros_interface, msg, EsdaMessage)() {
  return &_EsdaMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
