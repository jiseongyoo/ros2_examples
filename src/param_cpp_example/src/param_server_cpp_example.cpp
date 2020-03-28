// This example shows how to create parameter in ROS2 cpp.
// Parameters belong to nodes and don't have fixed data type.
// Data type of parameters are determined by value.
// Declaration of parameters in a node is simply done by declare_parameter()
//
// main()
// parameter server node uses rclcpp::spin() since it keeps running until quit is called.
// main() requires rclcpp::init(), rclcpp::spin() and rclcpp::shutdown().

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node inherited rclcpp::Node
#include "rclcpp/rclcpp.hpp"

class ParameterServerExample : public rclcpp::Node{
public:
  ParameterServerExample() : Node("Parameter_Server"){
    // declare parameter with parameter name and set to value.
    this->declare_parameter("param1", 0);
    // print ROS2 log message
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "param1 is declared");

    // declare parameter with parameter name and not set any value.
    this->declare_parameter("param2");
    // print ROS2 log message
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "param2 is declared");

    // undeclare parameter.
    this->undeclare_parameter("param2");
    // print ROS2 log message
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "param2 is undeclared");

    // print ROS2 log message
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Parameter server starts running");
  }
};

int main(int argc, char** argv){
  // initialize communication
  rclcpp::init(argc, argv);

  // parameter server node keeps running
  rclcpp::spin(std::make_shared<ParameterServerExample>());

  // shutdown ROS2 node
  rclcpp::shutdown();

  return 0;
}
