// This example shows how to create subscriber node in ROS2 cpp.
// class SubscriberExample subscribes topic, 'topic', when publisher node publishes message.
// Subscriber node requires subscriber_ and topic_callback member.
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
// main()
// subscriber node uses rclcpp::spin() since it keeps running until quit is called.
// main() requires rclcpp::init(), rclcpp::spin() and rclcpp::shutdown().


// "rclcpp/rclcpp.hpp" is essential to create ROS2 node inherited rclcpp::Node
#include "rclcpp/rclcpp.hpp"
// ROS2 node should publish or subscribe interfaces. Pure data types are not allowed to be topic.
// "interfaces/msg/example.hpp" is topic interface.
#include "interfaces/msg/example.hpp"

// declare subscriber class inherited rclcpp::Node
// rclcpp::Node includes methods for ROS2 node
class SubscriberExample : public rclcpp::Node{
private:
  // subscriber_ is used for node registration and subscribing messages
  rclcpp::Subscription<interfaces::msg::Example>::SharedPtr subscriber_;

  // topic_callback() is conducted whenever publisher publish message
  // topic_callback() takes published message as argument
  void topic_callback(const interfaces::msg::Example::SharedPtr message){
    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger, "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Subscribed '%s'", message->message.c_str());
  }
public:
  SubscriberExample() : Node("Subscriber"){
    // create subscriber with message type, topic name and queue size of message subscription
    // subscriber_ = this->create_subscription<topic-type>(topic-name, queue-size,
    // std::bind(&topic_callback, this, std::placeholders::_1));
    // if topic_callback requires arguments, std::bind method should take std::placeholders::_1
    // std::placeholders::_1 is used when timer_callback takes 1 argument
    // std::placeholders::_1, std::placeholders::_2 is used when timer_callback takes 2 arguments
    subscriber_ = this->create_subscription<interfaces::msg::Example>("topic", 10,
      std::bind(&SubscriberExample::topic_callback, this, std::placeholders::_1));
  }
};

int main(int argc, char** argv){
  // initialize communications
  rclcpp::init(argc, argv);

  // publisher node keeps running
  rclcpp::spin(std::make_shared<SubscriberExample>());

  // shutdown ROS2 node
  rclcpp::shutdown();

  return 0;
}
