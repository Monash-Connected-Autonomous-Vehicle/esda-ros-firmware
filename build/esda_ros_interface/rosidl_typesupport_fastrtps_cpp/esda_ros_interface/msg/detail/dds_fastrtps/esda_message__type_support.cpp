// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from esda_ros_interface:msg/EsdaMessage.idl
// generated code does not contain a copyright notice
#include "esda_ros_interface/msg/detail/esda_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "esda_ros_interface/msg/detail/esda_message__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: current_vel_right
  cdr << ros_message.current_vel_right;
  // Member: current_vel_left
  cdr << ros_message.current_vel_left;
  // Member: steering_angle
  cdr << ros_message.steering_angle;
  // Member: auto_mode
  cdr << (ros_message.auto_mode ? true : false);
  // Member: estop
  cdr << (ros_message.estop ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_esda_ros_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  esda_ros_interface::msg::EsdaMessage & ros_message)
{
  // Member: current_vel_right
  cdr >> ros_message.current_vel_right;

  // Member: current_vel_left
  cdr >> ros_message.current_vel_left;

  // Member: steering_angle
  cdr >> ros_message.steering_angle;

  // Member: auto_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.auto_mode = tmp ? true : false;
  }

  // Member: estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.estop = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_esda_ros_interface
get_serialized_size(
  const esda_ros_interface::msg::EsdaMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: current_vel_right
  {
    size_t item_size = sizeof(ros_message.current_vel_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_vel_left
  {
    size_t item_size = sizeof(ros_message.current_vel_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_angle
  {
    size_t item_size = sizeof(ros_message.steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_mode
  {
    size_t item_size = sizeof(ros_message.auto_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: estop
  {
    size_t item_size = sizeof(ros_message.estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_esda_ros_interface
max_serialized_size_EsdaMessage(
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


  // Member: current_vel_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current_vel_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steering_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: auto_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: estop
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
    using DataType = esda_ros_interface::msg::EsdaMessage;
    is_plain =
      (
      offsetof(DataType, estop) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EsdaMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const esda_ros_interface::msg::EsdaMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsdaMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<esda_ros_interface::msg::EsdaMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsdaMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const esda_ros_interface::msg::EsdaMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsdaMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EsdaMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EsdaMessage__callbacks = {
  "esda_ros_interface::msg",
  "EsdaMessage",
  _EsdaMessage__cdr_serialize,
  _EsdaMessage__cdr_deserialize,
  _EsdaMessage__get_serialized_size,
  _EsdaMessage__max_serialized_size
};

static rosidl_message_type_support_t _EsdaMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsdaMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace esda_ros_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_esda_ros_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<esda_ros_interface::msg::EsdaMessage>()
{
  return &esda_ros_interface::msg::typesupport_fastrtps_cpp::_EsdaMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, esda_ros_interface, msg, EsdaMessage)() {
  return &esda_ros_interface::msg::typesupport_fastrtps_cpp::_EsdaMessage__handle;
}

#ifdef __cplusplus
}
#endif
