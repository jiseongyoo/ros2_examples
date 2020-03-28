#ifndef COMPOSITION_CPP_EXAMPLE__PARAMETER_SERVER_CPP_EXAMPLE_HPP_
#define COMPOSITION_CPP_EXAMPLE__PARAMETER_SERVER_CPP_EXAMPLE_HPP_

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node.
#include "rclcpp/rclcpp.hpp"

namespace component{
  class ParameterServerExample : public rclcpp::Node{
  public:
    ParameterServerExample(const rclcpp::NodeOptions & options);
  };
}

#endif
