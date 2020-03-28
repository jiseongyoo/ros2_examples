// This example shows how to create parameters in node in ROS2 cpp.
// class ParemeterServerExample declares parameter, "parameter".
// Parameter is able to be simply created by using declare_parameter().
//
// RCLCPP_COMPONENTS_REGISTER_NODE(component::PublisherExample)
// RCLCPP_COMPONENTS_REGISTER_NODE is a macro registering node to thread executor.
// This macro is defined in register_node_macro.hpp,
// so "rclcpp_components/register_node_macro.hpp" must be included.

#include "composition_cpp_example/parameter_server_cpp_example.hpp"

namespace component{
  ParameterServerExample::ParameterServerExample(const rclcpp::NodeOptions & options)
    : Node("parameter_server", options){
    // declare parameter in node
    this->declare_parameter("parameter", 0);
  }
}

// include register_node_macro.hpp to create register node macro
#include "rclcpp_components/register_node_macro.hpp"
// create macro for node register to thread executor
RCLCPP_COMPONENTS_REGISTER_NODE(component::ParameterServerExample)
