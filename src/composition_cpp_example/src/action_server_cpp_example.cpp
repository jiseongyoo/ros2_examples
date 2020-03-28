#include "composition_cpp_example/action_server_cpp_example.hpp"

namespace component{
  // handle_goal() is called when action is requested by action client.
  rclcpp_action::GoalResponse ActionServerExample::handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const interfaces::action::Example::Goal> goal){
    // add this line to remove 'unused warning'
    (void)uuid;

    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Action '/action' : requested");

    // action reject condition
    // In certain condition, action request is able to be rejected by action server.
    if (!goal->goal.c_str()){
      // if action request is rejected, return rclcpp_action::GoalResponse::REJECT;
      return rclcpp_action::GoalResponse::REJECT;
    }

    // if action request is not rejected, return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  // When action is canceled while running, handle_cancel() is called
  rclcpp_action::CancelResponse ActionServerExample::handle_cancel(
      const std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Example>> goal_handle){
    // add this line to remove 'unused warning'
    (void)goal_handle;

    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Action '/action' : canceled");

    // action cancel request is accepeted
    // return rclcpp_action::CancelResponse::ACCEPT
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  // handle_accept is called when action request is accepted.
  void ActionServerExample::handle_accept(
    const std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Example>> goal_handle){
    // create a single thread for execute() and run execute() independently
    std::thread{std::bind(&ActionServerExample::execute, this, std::placeholders::_1), goal_handle}.detach();
  }

  // execute is called when handle_accept() runs a thread for action
  void ActionServerExample::execute(
    const std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Example>> goal_handle){
    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Action '/action' : executed");

    // create goal, result, feedback shared pointer
    // goal handle needs to be constant because it shouldn't be changed programmatically.
    const auto goal = goal_handle->get_goal();
    auto result = std::make_shared<interfaces::action::Example::Result>();
    auto feedback = std::make_shared<interfaces::action::Example::Feedback>();

    // set loop_rate because feedback will be published in 10 Hz
    // if feedback is published too fast, action client occasionally misses feedback messages.
    rclcpp::Rate loop_rate(10);

    // send feedback 10 times.
    for (int i = 0; (i < 10) && rclcpp::ok(); ++i){
      // check if action request is canceled
      if (goal_handle->is_canceling()){
        // set result message
        result->result = "canceled";

        // print ROS2 log messesage
        // RCLCPP_INFO(this->get_logger(), "formatted log message");
        RCLCPP_INFO(this->get_logger(), "Action '/action' : canceled");

        // publish result to action client with cancel
        goal_handle->canceled(result);

        // finish execute
        return;
      }
      // set feedback messesage
      feedback->feedback = "Feedback " + std::to_string(i);

      // publish feedback to action client
      goal_handle->publish_feedback(feedback);

      // print ROS2 log messesage
      // RCLCPP_INFO(this->get_logger(), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Action '/action' : feedback -> %s", feedback->feedback.c_str());

      // wait until publish rate comes
      loop_rate.sleep();
    }

    // check ROS2 communication
    if (rclcpp::ok()) {
      // set result message
      result->result = "finished";

      // publish result to action client with success
      goal_handle->succeed(result);

      // print ROS2 log message
      // RCLCPP_INFO(this->get_logger(), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Action '/action' : %s", result->result.c_str());
    }
  }

  ActionServerExample::ActionServerExample(const rclcpp::NodeOptions & options)
    : Node("action_server", options){
    // create action server using rclcpp_action::create_server with interfaces, action name and handlers
    // rclcpp::Node doesn't have create_server
    // rclcpp::create_server takes at least 4 interfaces(base, clock, logging, waitables),
    // action name and 3 handler functions (goal cancel, accept).
    action_server_ = rclcpp_action::create_server<interfaces::action::Example>(
    // 4 interfaces for action server creation
    this->get_node_base_interface(),
    this->get_node_clock_interface(),
    this->get_node_logging_interface(),
    this->get_node_waitables_interface(),
    // action name
    "action",
    // 3 handler functions for action server creation
    std::bind(&ActionServerExample::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
    std::bind(&ActionServerExample::handle_cancel, this, std::placeholders::_1),
    std::bind(&ActionServerExample::handle_accept, this, std::placeholders::_1)
    );
  }
}

// include register_node_macro.hpp to create register node macro
#include "rclcpp_components/register_node_macro.hpp"
// create macro for node register to thread executor
RCLCPP_COMPONENTS_REGISTER_NODE(component::ActionServerExample)
