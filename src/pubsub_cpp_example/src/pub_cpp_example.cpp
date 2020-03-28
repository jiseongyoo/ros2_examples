// This example shows how to create publisher node in ROS2 cpp.
// class PublisherExample publilshes topic, 'topic', every 500ms.
// Publisher node requires timer_, publisher_ and timer_callback() member.
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
// main()
// publisher node uses rclcpp::spin() since it keeps running until quit is called.
// main() requires rclcpp::init(), rclcpp::spin() and rclcpp::shutdown().


// <chrono> is essential to use std::chrono_literals for publish rate setting
#include <chrono>

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node inherited rclcpp::Node
#include "rclcpp/rclcpp.hpp"
// ROS2 node should publish or subscribe interfaces. Pure data types are not allowed to be topic.
// "interfaces/msg/example.hpp" is topic interface.
#include "interfaces/msg/example.hpp"

// std::chrono_literals has operator ""ms, ""ns, ""us
using namespace std::chrono_literals;

// declare publilsher class inherited rclcpp::Node
// rclcpp::Node includes methods for ROS2 node
class PublisherExample : public rclcpp::Node {
private:
  // timer_ is used for setting and counting publish rate
  rclcpp::TimerBase::SharedPtr timer_;
  // publisher_ is used for node registration and publishing messages
  rclcpp::Publisher<interfaces::msg::Example>::SharedPtr publisher_;

  // timer_callback() is conducted to periodically publish messages
  void timer_callback(){
    // create message and set message data
    auto message = interfaces::msg::Example();
    message.message = "Publishing string";

    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger, "formatted log message");
    RCLCPP_INFO(this->get_logger(), "%s", message.message.c_str());

    // publish message
    publisher_->publish(message);
  }

public:
  PublisherExample() : Node("Publisher"){
    // create publisher with message type, topic name and queue size of message publish
    // publisher_ = this->create_publisher<topic-type>(topic-name, queue-size);
    publisher_ = this->create_publisher<interfaces::msg::Example>("topic", 10);

    // create timer with publish rate, binded timer_callback and the notde
    // timer_ = this->create_wall_timer(publish-rate, std::bind(&timer_callback, this));
    // if timer_callback requires arguments, std::bind method should take std::placeholders::_1
    // std::placeholders::_1 is used when timer_callback takes 1 argument
    // std::placeholders::_1, std::placeholders::_2 is used when timer_callback takes 2 arguments
    timer_ = this->create_wall_timer(500ms, std::bind(&PublisherExample::timer_callback, this));
  }
};

int main(int argc, char** argv){
  // initialize communications
  rclcpp::init(argc, argv);

  // publisher node keeps running
  rclcpp::spin(std::make_shared<PublisherExample>());

  // shutdown ROS2 node
  rclcpp::shutdown();

  return 0;
}
