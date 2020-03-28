// This example shows how to create component of publisher node in ROS2 cpp.
// class SubscriberExample subscribes topic, 'topic'.
// Component subscriber node requires subscriber_ and topic_callback() member.
// This cpp file doesn't include main(), but includes register_node_macro() instead.
//
// subscriber_
// subscriber_ performs subscribing of messages.
// subscriber_ requires topic type, topic name, message queue size and topic_callback().
// subscriber_ is created by 'this->create_subscription<interface>(...)'.
//
// topic_callback()
// topic_callback() is what subscriber node does when message is published.
// topic_callback() takes SharedPtr of message as argument and returns void.
//
// RCLCPP_COMPONENTS_REGISTER_NODE(component::SubscriberExample)
// RCLCPP_COMPONENTS_REGISTER_NODE is a macro registering node to thread executor.
// This macro is defined in register_node_macro.hpp,
// so "rclcpp_components/register_node_macro.hpp" must be included.

#include "composition_cpp_example/subscriber_cpp_example.hpp"

namespace component{
  // topic_callback() is conducted whenever publisher publish message
  // topic_callback() takes published message as argument
  void SubscriberExample::topic_callback(const interfaces::msg::Example::SharedPtr message){
    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger, "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Subscribed '%s' : %s", subscriber_->get_topic_name(), message->message.c_str());
  }

  SubscriberExample::SubscriberExample(const rclcpp::NodeOptions & options)
    : Node("subscriber", options){
    // create subscriber with message type, topic name and queue size of message subscription
    // subscriber_ = this->create_subscription<topic-type>(topic-name, queue-size,
    // std::bind(&topic_callback, this, std::placeholders::_1));
    // if topic_callback requires arguments, std::bind method should take std::placeholders::_1
    // std::placeholders::_1 is used when timer_callback takes 1 argument
    // std::placeholders::_1, std::placeholders::_2 is used when timer_callback takes 2 arguments
    subscriber_ = this->create_subscription<interfaces::msg::Example>("pubsub", 10,
      std::bind(&SubscriberExample::topic_callback, this, std::placeholders::_1));
  }
}

// include register_node_macro.hpp to create register node macro
#include "rclcpp_components/register_node_macro.hpp"
// create macro for node register to thread executor
RCLCPP_COMPONENTS_REGISTER_NODE(component::SubscriberExample)
