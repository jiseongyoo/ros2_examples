#ifndef COMPOSITION_CPP_EXAMPLE__ACTION_CLIENT_CPP_EXAMPLE_HPP_
#define COMPOSITION_CPP_EXAMPLE__ACTION_CLIENT_CPP_EXAMPLE_HPP_

// <chrono> is essential to use std::chrono_literals for counting action request time.
#include <chrono>

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node.
#include "rclcpp/rclcpp.hpp"
// "rclcpp_action/rclcpp_action.hpp" is essential to create ROS2 action node.
#include "rclcpp_action/rclcpp_action.hpp"
// ROS2 action node should use interfaces. Pure data types are not allowed to be action.
// Action interface has goal, result and feedback sections.
// "interfaces/action/example.hpp" is action interface.
#include "interfaces/action/example.hpp"

namespace component{
  class ActionClientExample : public rclcpp::Node{
  private:
    // action_client_ is used for connecting to action server and requesting action.
    rclcpp_action::Client<interfaces::action::Example>::SharedPtr action_client_;
    // timer_ manages request sending to action server periodically.
    rclcpp::TimerBase::SharedPtr timer_;
    // send_goal_options bind callback functions
    rclcpp_action::Client<interfaces::action::Example>::SendGoalOptions send_goal_options;

    // goal_response_callback() is called when action server responses against action request.
    void goal_response_callback(
      std::shared_future<rclcpp_action::ClientGoalHandle<interfaces::action::Example>::SharedPtr> future);
    // result_callback() is called when action server sends result to action client.
    void result_callback(
      const rclcpp_action::ClientGoalHandle<interfaces::action::Example>::WrappedResult & result);
    // feedback_callback() is called when action server sends feedback to action client.
    void feedback_callback(
      rclcpp_action::ClientGoalHandle<interfaces::action::Example>::SharedPtr,
      const std::shared_ptr<const interfaces::action::Example::Feedback> feedback);
    // timer_callback() is called when the time comes to request action.
    void timer_callback();
  public:
    ActionClientExample(const rclcpp::NodeOptions & node_options);
  };
}

#endif
