#ifndef COMPOSITION_CPP_EXAMPLE__SUBSCRIBER_CPP_EXAMPLE_HPP_
#define COMPOSITION_CPP_EXAMPLE__SUBSCRIBER_CPP_EXAMPLE_HPP_

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node.
#include "rclcpp/rclcpp.hpp"
// ROS2 node should publish or subscribe interfaces. Pure data types are not allowed to be topic.
// "interfaces/msg/example.hpp" is topic interface.
#include "interfaces/msg/example.hpp"

namespace component{
  class SubscriberExample : public rclcpp::Node{
  private:
    // subscriber_ is used for node registration and subscribing messages
    rclcpp::Subscription<interfaces::msg::Example>::SharedPtr subscriber_;

    // topic_callback() is called when publisher publish message
    void topic_callback(const interfaces::msg::Example::SharedPtr message);
  public:
    SubscriberExample(const rclcpp::NodeOptions & options);
  };
}

#endif
