cmake_minimum_required(VERSION 3.8)
project(esda_ros_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)


set(msg_files
  "msg/EsdaMessage.msg"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
)

include_directories(
  include
  ${rclcpp_INCLUDE_DIRS}
)

add_executable(esda_serial_to_pc src/esda_serial_to_pc.cpp)
ament_target_dependencies(esda_serial_to_pc
  rclcpp
  rclcpp_components
  std_msgs
)

rclcpp_components_register_node(
  esda_serial_to_pc
  PLUGIN "esda_serial_to_pc::ROS2ToSerialBridge"
  EXECUTABLE esda_serial_to_pc_node
)

rosidl_target_interfaces(esda_serial_to_pc
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

install(TARGETS
    esda_serial_to_pc
  DESTINATION lib/${PROJECT_NAME})

ament_export_dependencies(rosidl_default_runtime)

ament_package()
