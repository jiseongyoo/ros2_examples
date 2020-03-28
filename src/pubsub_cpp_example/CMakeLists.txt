# declare minimum cmake version and project name
cmake_minimum_required(VERSION 3.5)
project(pubsub_cpp_example)

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
add_executable(pub_cpp src/pub_cpp_example.cpp)
add_executable(sub_cpp src/sub_cpp_example.cpp)

# declare dependendies of nodes
# ament_target_dependencies(<node-name> <dependency1> <dependency2> ...)
ament_target_dependencies(pub_cpp rclcpp interfaces)
ament_target_dependencies(sub_cpp rclcpp interfaces)

# register nodes to package
# install(TARGETS <node1> <node2> ... DESTINATION lib/${PROJECT_NAME})
install(TARGETS
  pub_cpp
  sub_cpp
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
