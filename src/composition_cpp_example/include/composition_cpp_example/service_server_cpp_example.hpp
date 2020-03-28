#ifndef COMPOSITION_CPP_EXAMPLE__SERVICE_SERVER_CPP_EXAMPLE_HPP_
#define COMPOSITION_CPP_EXAMPLE__SERVICE_SERVER_CPP_EXAMPLE_HPP_

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node.
#include "rclcpp/rclcpp.hpp"
// ROS2 service node should use interfaces. Pure data types are not allowed to be action.
// Service interface has request and response sections.
// "interfaces/srv/example.hpp" is action interface.
#include "interfaces/srv/example.hpp"

namespace component{
  class ServiceServerExample : public rclcpp::Node{
  private:
    // service_server_ is used for node registration and service performances.
    rclcpp::Service<interfaces::srv::Example>::SharedPtr service_server_;
    // service_callback() is called when service is requested by service client.
    void service_callback(const std::shared_ptr<interfaces::srv::Example::Request> request,
                                std::shared_ptr<interfaces::srv::Example::Response> response);
  public:
    ServiceServerExample(const rclcpp::NodeOptions & options);
  };
}

#endif
