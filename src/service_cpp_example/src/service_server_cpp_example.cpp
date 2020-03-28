// This example shows how to create service node in ROS2 cpp.
// std::shared_ptr service_node performs service when service is requested.
// service node requires service_callback() function.
//
// service_callback()
// service_callback() is what service node does when service is requested.
// service_callback() requires request and response interface.
// service_callback() takes request and response as arguments, and returns void.
//
// main()
// service node uses rclcpp::spin() since it keeps running until quit is called.
// main() requires rclcpp::init(), rclcpp::spin() and rclcpp::shutdown().

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node inherited rclcpp::Node
#include "rclcpp/rclcpp.hpp"
// ROS2 node should publish or subscribe interfaces. Pure data types are not allowed to be topic.
// "interfaces/msg/example.hpp" is topic interface.
#include "interfaces/srv/example.hpp"

class ServiceServerExample : public rclcpp::Node{
private:
  // serviece_server_
  rclcpp::Service<interfaces::srv::Example>::SharedPtr service_server_;

  // service_callback() is conducted when service is requested.
  // service_callback() takes request and response interface as arguments.
  void service_callback(const std::shared_ptr<interfaces::srv::Example::Request> request,
                              std::shared_ptr<interfaces::srv::Example::Response> response){
    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger, "formatted log message");
    RCLCPP_INFO(rclcpp::get_logger("Service Server"), "Service is requested '%s'", request->request.c_str());

    // set response fields
    response->response = "Service responsed";

    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger, "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Service is responsed '%s'", response->response.c_str());
  }
public:
  ServiceServerExample() : Node("Service_Server"){
    // create service server node with node name, topic name and topic_callback
    // create_service<interface>("service name", std::bind(service_callback, this, std::placeholders))
    this->service_server_ = this->create_service<interfaces::srv::Example>(
      "service",
      std::bind(&ServiceServerExample::service_callback, this, std::placeholders::_1, std::placeholders::_2));

    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger, "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Service server starts");
  }
};


int main(int argc, char** argv){
  // initialize communications
  rclcpp::init(argc, argv);

  // service_server node keeps running
  rclcpp::spin(std::make_shared<ServiceServerExample>());

  // shutdown ROS2 node
  rclcpp::shutdown();

  return 0;
}
