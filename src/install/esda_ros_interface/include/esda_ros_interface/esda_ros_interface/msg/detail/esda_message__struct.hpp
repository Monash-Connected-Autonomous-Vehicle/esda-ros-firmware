// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from esda_ros_interface:msg/EsdaMessage.idl
// generated code does not contain a copyright notice

#ifndef ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__STRUCT_HPP_
#define ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__esda_ros_interface__msg__EsdaMessage __attribute__((deprecated))
#else
# define DEPRECATED__esda_ros_interface__msg__EsdaMessage __declspec(deprecated)
#endif

namespace esda_ros_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsdaMessage_
{
  using Type = EsdaMessage_<ContainerAllocator>;

  explicit EsdaMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_vel_right = 0.0;
      this->current_vel_left = 0.0;
      this->steering_angle = 0.0;
      this->auto_mode = false;
      this->estop = false;
    }
  }

  explicit EsdaMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_vel_right = 0.0;
      this->current_vel_left = 0.0;
      this->steering_angle = 0.0;
      this->auto_mode = false;
      this->estop = false;
    }
  }

  // field types and members
  using _current_vel_right_type =
    double;
  _current_vel_right_type current_vel_right;
  using _current_vel_left_type =
    double;
  _current_vel_left_type current_vel_left;
  using _steering_angle_type =
    double;
  _steering_angle_type steering_angle;
  using _auto_mode_type =
    bool;
  _auto_mode_type auto_mode;
  using _estop_type =
    bool;
  _estop_type estop;

  // setters for named parameter idiom
  Type & set__current_vel_right(
    const double & _arg)
  {
    this->current_vel_right = _arg;
    return *this;
  }
  Type & set__current_vel_left(
    const double & _arg)
  {
    this->current_vel_left = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const double & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }
  Type & set__auto_mode(
    const bool & _arg)
  {
    this->auto_mode = _arg;
    return *this;
  }
  Type & set__estop(
    const bool & _arg)
  {
    this->estop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    esda_ros_interface::msg::EsdaMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const esda_ros_interface::msg::EsdaMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<esda_ros_interface::msg::EsdaMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<esda_ros_interface::msg::EsdaMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      esda_ros_interface::msg::EsdaMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<esda_ros_interface::msg::EsdaMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      esda_ros_interface::msg::EsdaMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<esda_ros_interface::msg::EsdaMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<esda_ros_interface::msg::EsdaMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<esda_ros_interface::msg::EsdaMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__esda_ros_interface__msg__EsdaMessage
    std::shared_ptr<esda_ros_interface::msg::EsdaMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__esda_ros_interface__msg__EsdaMessage
    std::shared_ptr<esda_ros_interface::msg::EsdaMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsdaMessage_ & other) const
  {
    if (this->current_vel_right != other.current_vel_right) {
      return false;
    }
    if (this->current_vel_left != other.current_vel_left) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    if (this->auto_mode != other.auto_mode) {
      return false;
    }
    if (this->estop != other.estop) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsdaMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsdaMessage_

// alias to use template instance with default allocator
using EsdaMessage =
  esda_ros_interface::msg::EsdaMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace esda_ros_interface

#endif  // ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__STRUCT_HPP_
