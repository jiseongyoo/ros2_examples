#ifndef COMPOSITION_CPP_EXAMPLE__PARAMETER_CLIENT_CPP_EXAMPLE_HPP_
#define COMPOSITION_CPP_EXAMPLE__PARAMETER_CLIENT_CPP_EXAMPLE_HPP_

// <chrono> is essential to use std::chrono_literals for counting parameter setting time.
#include <chrono>
// "rclcpp/rclcpp.hpp" is essential to create ROS2 node.
#include "rclcpp/rclcpp.hpp"

namespace component{
  class ParameterClientExample : public rclcpp::Node{
  private:
    // parameter_client_ is used for connecting to parameter server and requesting parameter set and get.
    std::shared_ptr<rclcpp::AsyncParametersClient> parameter_client_;
    // timer_ manages request sending to parameter server periodically.
    rclcpp::TimerBase::SharedPtr timer_;
    // count_ is value to set parameter.
    int count_;

    // timer_callback() is called when the time comes to request parameter set.
    void timer_callback();
  public:
    ParameterClientExample(const rclcpp::NodeOptions & options);
  };
}

#endif
