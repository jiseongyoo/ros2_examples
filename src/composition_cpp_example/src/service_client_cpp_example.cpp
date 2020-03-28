// This example shows how to create component of service client node in ROS2 cpp.
// std::shared_ptr service_client_node requests service.
// service client node requires send_request() function.
//
// send_request()
// send_request() shows how service client node sends request to service server.
// send_request() should set request fields of service interface.
// send_request() takes request and response as arguments, and returns void.
//
// RCLCPP_COMPONENTS_REGISTER_NODE(component::ServiceCleintExample)
// RCLCPP_COMPONENTS_REGISTER_NODE is a macro registering node to thread executor.
// This macro is defined in register_node_macro.hpp,
// so "rclcpp_components/register_node_macro.hpp" must be included.

#include "composition_cpp_example/service_client_cpp_example.hpp"

namespace component{
  void ServiceClientExample::send_request(){
    // stop timer_ running to prevent from requesting service again
    timer_->cancel();

    // create request interface and set fields
    auto request = std::make_shared<interfaces::srv::Example::Request>();
    request->request = "Service request";

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

    // In case of this example, ServiceClientExample node will be added to executor and spinned.
    // When sync_send_request() is used, it tries to spin the node and waits for response.
    // However, this node is already being spinned and ROS2 eloquent does not support recursive spin of nodes.
    // Therefore, at this time async_send_request() should be used.
    // async_send_request() sends request to service server
    // and response_received_callback is called when service response is arrived.
    //
    auto response_received_callback = [this](rclcpp::Client<interfaces::srv::Example>::SharedFuture result) {
      // print ROS2 log messesage
      // RCLCPP_INFO(this->get_logger("name"), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Service responsed '%s' : %s", service_client_->get_service_name(), result.get()->response.c_str());
      // create wall_timer again and resume service request
      timer_ = create_wall_timer(std::chrono::seconds(1), std::bind(&ServiceClientExample::send_request,this));
    };
    auto future_result = service_client_->async_send_request(request, response_received_callback);
    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger("name"), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Service requested '%s' : %s", service_client_->get_service_name(), request->request.c_str());
  }

  ServiceClientExample::ServiceClientExample(const rclcpp::NodeOptions & options)
    : Node("service_client", options){
    // create service client node with node name and topic name
    // std::shared_ptr<rclcpp::Node> service_server = rclcpp::Node::make_shared("node-name");
    // service_server->create_service<interfaces::srv::Example>("topic-name", &service_callback);
    service_client_ = create_client<interfaces::srv::Example>("service");

    // create timer with publish rate, binded timer_callback and the notde
    // timer_ = create_wall_timer(publish-rate, std::bind(&timer_callback, this));
    // if timer_callback requires arguments, std::bind method should take std::placeholders::_1
    // std::placeholders::_1 is used when timer_callback takes 1 argument
    // std::placeholders::_1, std::placeholders::_2 is used when timer_callback takes 2 arguments
    timer_ = create_wall_timer(std::chrono::seconds(1), std::bind(&ServiceClientExample::send_request,this));
  }
}

// include register_node_macro.hpp to create register node macro
#include "rclcpp_components/register_node_macro.hpp"
// create macro for node register to thread executor
RCLCPP_COMPONENTS_REGISTER_NODE(component::ServiceClientExample)
