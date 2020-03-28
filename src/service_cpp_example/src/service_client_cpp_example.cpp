// This example shows how to create service client node in ROS2 cpp.
// std::shared_ptr<rclcpp::Node> node requests service.
// Service client node requires to set request interface fields before request service.
//
// main()
// service client node doesn't uses rclcpp::spin() since it requests service and endes when response is arrived.
// main() requires rclcpp::init(), service creation, service request, service arrival and rclcpp::shutdown().


// <chrono> is essential to use std::chrono_literals for counting service waiting time
#include <chrono>

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node inherited rclcpp::Node
#include "rclcpp/rclcpp.hpp"
// ROS2 node should have service interfaces. Pure data types are not allowed to be topic.
// "interfaces/srv/example.hpp" is service interface.
#include "interfaces/srv/example.hpp"

class ServiceClientExample : public rclcpp::Node{
private:
  rclcpp::Client<interfaces::srv::Example>::SharedPtr service_client_;

public:
  void send_request(){
    // create request interface and set fields
    auto request = std::make_shared<interfaces::srv::Example::Request>();
    request->request = "Service requested";

    // check if service server is running and wait for 1 second
    while (!service_client_->wait_for_service(std::chrono::seconds(1))) {
      if (!rclcpp::ok()) {
        // if rclcpp is not running, print ROS2 log message and finish program
        // RCLCPP_ERROR(rclcpp::get_logger("name"), "formatted log message");
        RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
        return;
      }
      // print ROS2 log messesage
      // RCLCPP_INFO(rclcpp::get_logger("name"), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Service not available, waiting again...");
    }

    // print ROS2 log messesage
    // RCLCPP_INFO(rclcpp::get_logger("name"), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Request service '%s'", request->request.c_str());

    // create response that gets service response
    auto response = service_client_->async_send_request(request);

    // spin node until service response is arrived, and check success.
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), response) == rclcpp::executor::FutureReturnCode::SUCCESS){
      // if service response is successed to get arrived, print ROS2 log message
      // RCLCPP_INFO(rclcpp::get_logger("name"), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Response arrived '%s'", response.get()->response.c_str());
    } else {
      // if service response is failed to get arrived, print ROS2 log message
      // RCLCPP_ERROR(rclcpp::get_logger("name"), "formatted log message");
      RCLCPP_ERROR(this->get_logger(), "Failed to call service add_three_ints");    // CHANGE
    }
  }

  ServiceClientExample() : Node("Service_Client"){
    // create service client node with node name and topic name
    // std::shared_ptr<rclcpp::Node> service_server = rclcpp::Node::make_shared("node-name");
    // service_server->create_service<interfaces::srv::Example>("topic-name", &service_callback);
    this->service_client_ = this->create_client<interfaces::srv::Example>("service");
  }
};

int main(int argc, char** argv){
  // initialize communications
  rclcpp::init(argc, argv);

  // send service request to service server
  ServiceClientExample().send_request();

  // shutdown ROS2 node
  rclcpp::shutdown();

  return 0;
}
