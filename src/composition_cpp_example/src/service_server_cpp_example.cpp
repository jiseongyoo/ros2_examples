// This example shows how to create component of service server node in ROS2 cpp.
// std::shared_ptr service_server_node performs service when service is requested.
// service node requires service_callback() function.
//
// service_callback()
// service_callback() is what service node does when service is requested.
// service_callback() requires request and response interface.
// service_callback() takes request and response as arguments, and returns void.
//
// RCLCPP_COMPONENTS_REGISTER_NODE(component::ServiceServerExample)
// RCLCPP_COMPONENTS_REGISTER_NODE is a macro registering node to thread executor.
// This macro is defined in register_node_macro.hpp,
// so "rclcpp_components/register_node_macro.hpp" must be included.

#include "composition_cpp_example/service_server_cpp_example.hpp"

namespace component{
  void ServiceServerExample::service_callback(
    const std::shared_ptr<interfaces::srv::Example::Request> request,
    std::shared_ptr<interfaces::srv::Example::Response> response){
    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger, "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Service requested '%s' : %s", service_server_->get_service_name(), request->request.c_str());

    // set response fields
    response->response = "Service responsed";

    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger, "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Service responsed '%s' : %s", service_server_->get_service_name(), response->response.c_str());
  }

  ServiceServerExample::ServiceServerExample(const rclcpp::NodeOptions & options)
  : Node("service_server", options){
    // create service server node with node name, topic name and topic_callback
    // create_service<interface>("service name", std::bind(service_callback, this, std::placeholders))
    this->service_server_ = this->create_service<interfaces::srv::Example>("service",
      std::bind(&ServiceServerExample::service_callback, this, std::placeholders::_1, std::placeholders::_2));
  }
}

// include register_node_macro.hpp to create register node macro
#include "rclcpp_components/register_node_macro.hpp"
// create macro for node register to thread executor
RCLCPP_COMPONENTS_REGISTER_NODE(component::ServiceServerExample)
