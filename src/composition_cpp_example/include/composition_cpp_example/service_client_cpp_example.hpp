#ifndef COMPOSITION_CPP_EXAMPLE__SERVICE_CLIENT_CPP_EXAMPLE_HPP_
#define COMPOSITION_CPP_EXAMPLE__SERVICE_CLIENT_CPP_EXAMPLE_HPP_

// <chrono> is essential to use std::chrono_literals for counting service request time.
#include <chrono>

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node inherited rclcpp::Node
#include "rclcpp/rclcpp.hpp"
// ROS2 service node should use interfaces. Pure data types are not allowed to be action.
// Service interface has request and response sections.
// "interfaces/srv/example.hpp" is action interface.
#include "interfaces/srv/example.hpp"

namespace component{
  class ServiceClientExample : public rclcpp::Node{
  private:
    // service_client_ is used for connecting to service server and requesting service.
    rclcpp::Client<interfaces::srv::Example>::SharedPtr service_client_;
    // timer_ manages request sending to service server periodically.
    rclcpp::TimerBase::SharedPtr timer_;
    // send_request() is called when the time comes to request service.
    void send_request();
  public:
    ServiceClientExample(const rclcpp::NodeOptions & options);
  };
}

#endif
