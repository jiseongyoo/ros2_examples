#ifndef COMPOSITION_CPP_EXAMPLE__PUBLISHER_CPP_EXAMPLE_HPP_
#define COMPOSITION_CPP_EXAMPLE__PUBLISHER_CPP_EXAMPLE_HPP_

// <chrono> is essential to use std::chrono_literals for publish rate setting
#include <chrono>

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node.
#include "rclcpp/rclcpp.hpp"
// ROS2 node should publish or subscribe interfaces. Pure data types are not allowed to be topic.
// "interfaces/msg/example.hpp" is topic interface.
#include "interfaces/msg/example.hpp"

namespace component{
  class PublisherExample : public rclcpp::Node{
  private:
    // publisher_ is used for node registration and publishing messages
    rclcpp::Publisher<interfaces::msg::Example>::SharedPtr publisher_;

    // timer_ is used for setting and counting publish rate
    rclcpp::TimerBase::SharedPtr timer_;

    // timer_callback() is called to periodically publish messages
    void timer_callback();
  public:
    PublisherExample(const rclcpp::NodeOptions & options);
  };
} // namespace component

#endif
