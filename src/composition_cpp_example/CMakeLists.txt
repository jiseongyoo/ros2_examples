# declare minimum cmake version and project name
cmake_minimum_required(VERSION 3.5)
project(composition_cpp_example)

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
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(interfaces REQUIRED)

# This package must include directories "include",
# since hpp files in "include" will be used.
include_directories(include)

# add components libraries
add_library(component_publisher_cpp SHARED src/publisher_cpp_example.cpp)
add_library(component_subscriber_cpp SHARED src/subscriber_cpp_example.cpp)
add_library(component_service_server_cpp SHARED src/service_server_cpp_example.cpp)
add_library(component_service_client_cpp SHARED src/service_client_cpp_example.cpp)
add_library(component_action_server_cpp SHARED src/action_server_cpp_example.cpp)
add_library(component_action_client_cpp SHARED src/action_client_cpp_example.cpp)
add_library(component_parameter_server_cpp SHARED src/parameter_server_cpp_example.cpp)
add_library(component_parameter_client_cpp SHARED src/parameter_client_cpp_example.cpp)

# add components target dependencies
ament_target_dependencies(component_publisher_cpp rclcpp rclcpp_components interfaces)
ament_target_dependencies(component_subscriber_cpp rclcpp rclcpp_components interfaces)
ament_target_dependencies(component_service_server_cpp rclcpp rclcpp_components interfaces)
ament_target_dependencies(component_service_client_cpp rclcpp rclcpp_components interfaces)
ament_target_dependencies(component_action_server_cpp rclcpp rclcpp_action rclcpp_components interfaces)
ament_target_dependencies(component_action_client_cpp rclcpp rclcpp_action rclcpp_components interfaces)
ament_target_dependencies(component_parameter_server_cpp rclcpp rclcpp_components interfaces)
ament_target_dependencies(component_parameter_client_cpp rclcpp rclcpp_components interfaces)

# register component node
rclcpp_components_register_nodes(component_publisher_cpp "component::PublisherExample")
rclcpp_components_register_nodes(component_subscriber_cpp "component::SubscriberExample")
rclcpp_components_register_nodes(component_service_server_cpp "component::ServiceServerExample")
rclcpp_components_register_nodes(component_service_client_cpp "component::ServiceClientExample")
rclcpp_components_register_nodes(component_action_server_cpp "component::ActionServerExample")
rclcpp_components_register_nodes(component_action_client_cpp "component::ActionClientExample")
rclcpp_components_register_nodes(component_parameter_server_cpp "component::ParameterServerExample")
rclcpp_components_register_nodes(component_parameter_client_cpp "component::ParameterClientExample")


# add component_container
# add to executable, add linked libraries, add dependencies
add_executable(component_container src/component_container.cpp)
target_link_libraries(component_container
  component_publisher_cpp
  component_subscriber_cpp
  component_service_server_cpp
  component_service_client_cpp
  component_action_server_cpp
  component_action_client_cpp
  component_parameter_server_cpp
  component_parameter_client_cpp
)
ament_target_dependencies(component_container rclcpp)

# register libraries to package
# install(TARGETS <node1> <node2> ... LIBRARY lib)
install(TARGETS
  component_publisher_cpp
  component_subscriber_cpp
  component_service_server_cpp
  component_service_client_cpp
  component_action_server_cpp
  component_action_client_cpp
  component_parameter_server_cpp
  component_parameter_client_cpp
  LIBRARY DESTINATION lib
)

# register nodes to package
# install(TARGETS <node1> <node2> ... DESTINATION lib/${PROJECT_NAME})
install(TARGETS
  component_container
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
