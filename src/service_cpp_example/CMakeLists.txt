# declare minimum cmake version and project name
cmake_minimum_required(VERSION 3.5)
project(service_cpp_example)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(interfaces REQUIRED)

# add executables of nodes
# add_executable(<node-name> <relative-path-of-source-code>)
add_executable(service_server_cpp src/service_server_cpp_example.cpp)
add_executable(service_client_cpp src/service_client_cpp_example.cpp)

# declare dependendies of nodes
# ament_target_dependencies(<node-name> <dependency1> <dependency2> ...)
ament_target_dependencies(service_server_cpp rclcpp interfaces)
ament_target_dependencies(service_client_cpp rclcpp interfaces)

# register nodes to package
# install(TARGETS <node1> <node2> ... DESTINATION lib/${PROJECT_NAME})
install(TARGETS
  service_server_cpp
  service_client_cpp
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
