cmake_minimum_required(VERSION 3.8)
project(esda_ros_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp REQUIRED)

set(msg_files
  "msg/EsdaMessage.msg"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
)



add_executable(esda_serial_to_pc src/esda_serial_to_pc.cpp)
ament_target_dependencies(esda_serial_to_pc rclcpp)

rosidl_target_interfaces(esda_serial_to_pc
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

install(TARGETS
    esda_serial_to_pc
  DESTINATION lib/${PROJECT_NAME})

ament_export_dependencies(rosidl_default_runtime)

ament_package()
