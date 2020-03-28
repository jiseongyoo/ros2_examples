#ifndef COMPOSITION_CPP_EXAMPLE__ACTION_SERVER_CPP_EXAMPLE_HPP_
#define COMPOSITION_CPP_EXAMPLE__ACTION_SERVER_CPP_EXAMPLE_HPP_

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node.
#include "rclcpp/rclcpp.hpp"
// "rclcpp_action/rclcpp_action.hpp" is essential to create ROS2 action node.
#include "rclcpp_action/rclcpp_action.hpp"
// ROS2 action node should use interfaces. Pure data types are not allowed to be action.
// Action interface has goal, result and feedback sections.
// "interfaces/action/example.hpp" is action interface.
#include "interfaces/action/example.hpp"

namespace component{
  class ActionServerExample : public rclcpp::Node{
  private:
    // action_server_ is used for node registration and action performances.
    rclcpp_action::Server<interfaces::action::Example>::SharedPtr action_server_;

    // handle_goal() is called when action is requested by action client.
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid,
      std::shared_ptr<const interfaces::action::Example::Goal> goal);

    // handle_cancel() is called when action is canceled while running.
    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Example>> goal_handle);

    // handle_accept() is called when action request is accepted.
    void handle_accept(
      const std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Example>> goal_handle);

    // execute() is called when handle_accept() runs a thread for action.
    void execute(const std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Example>> goal_handle);
  public:
    ActionServerExample(const rclcpp::NodeOptions & options);
  };
}

#endif
