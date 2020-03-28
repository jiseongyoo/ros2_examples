// This example shows how to create component of publisher node in ROS2 cpp.
// class PublisherExample publilshes topic, 'topic', every 1s.
// Component publisher node requires timer_, publisher_ and timer_callback() member.
// This cpp file doesn't include main(), but includes register_node_macro() instead.
//
// timer_
// timer_ manages publish rate and call timer_callback method.
// timer_ requires publish rate and callback function.
// timer_ is created by 'this->create_wall_timer(...)'.
//
// publisher_
// publisher_ performs publishing of messages.
// publisher_ requires topic type, topic name and message queue size.
// publisher_ is created by 'this->create_publisher<interface>(...)'.
//
// timer_callback()
// timer_callback() is what publisher node does every publish rate.
// timer_callback() requires message setting and publishing message.
// timer_callback() takes and returns void.
//
// RCLCPP_COMPONENTS_REGISTER_NODE(component::PublisherExample)
// RCLCPP_COMPONENTS_REGISTER_NODE is a macro registering node to thread executor.
// This macro is defined in register_node_macro.hpp,
// so "rclcpp_components/register_node_macro.hpp" must be included.

#include "composition_cpp_example/publisher_cpp_example.hpp"

namespace component{
  // timer_callback() is conducted to periodically publish messages
  void PublisherExample::timer_callback(){
    // create message and set message data
    auto message = interfaces::msg::Example();
    message.message = "string message";

    // publish message
    publisher_->publish(message);

    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger, "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Publilshed '%s' : %s", publisher_->get_topic_name() , message.message.c_str());

  }

  PublisherExample::PublisherExample(const rclcpp::NodeOptions & options)
    : Node("publisher", options) {
      // create publisher with message type, topic name and queue size of message publish
      // publisher_ = this->create_publisher<topic-type>(topic-name, queue-size);
      publisher_ = create_publisher<interfaces::msg::Example>("pubsub", 10);

      // create timer with publish rate, binded timer_callback and the notde
      // timer_ = this->create_wall_timer(publish-rate, std::bind(&timer_callback, this));
      // if timer_callback requires arguments, std::bind method should take std::placeholders::_1
      // std::placeholders::_1 is used when timer_callback takes 1 argument
      // std::placeholders::_1, std::placeholders::_2 is used when timer_callback takes 2 arguments
      timer_ = create_wall_timer(std::chrono::seconds(1), std::bind(&PublisherExample::timer_callback, this));
   }
}

// include register_node_macro.hpp to create register node macro
#include "rclcpp_components/register_node_macro.hpp"
// create macro for node register to thread executor
RCLCPP_COMPONENTS_REGISTER_NODE(component::PublisherExample)
