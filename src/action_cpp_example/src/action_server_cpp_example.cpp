// This example shows how to create action server node in ROS2 cpp.
// class ActionServerExample performs action when action is requested.
// Action requires goal, result and feedback interfaces.
// Action server has handle_goal(), handle_accept() and handle_cancel() functions.
//
// handle_goal()
// handle_goal() is called when action request is arrived.
// handle_goal() takes 2 arguments, uuid and goal interface.
// handle_goal() returns rclcpp_action::GoalResponse, REJECT or ACCEPT_AND_EXECUTE.
// rclcpp_action::GoalResponse::REJECT means that action request is rejected and is not going to execute action
// rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE means that action request is accepted and is going to execute action
//
// handle_cancel()
// handle_cancel() is called when action cancel request is arrived while action is running.
// handle_cancel() stops action and returns rclcpp_action::CancelResponse::ACCEPT.
// rclcpp_action::CancelResponse::ACCEPT means that action cancel request is accepted.
//
// handle_accept()
// handle_accept() is called when action request is accepted.
// handle_accept() creates a single thread for execute() that needs to be independently running,
// and calls execute().
//
// execute()
// execute() is conducted in a single thread not to bother other processes.
// execute() is what action server does upon action request from client.
// execute() sets feedback message and publishes it to action client.
// execute() sets result message.
// execute() publishes result to action client when action is finished and rclcpp is still running.
//
// main()
// action server node uses rclcpp::spin() since it keeps running until quit is called.
// main() requires rclcpp::init(), rclcpp::spin() and rclcpp::shutdown().

// "rclcpp/rclcpp.hpp" is essential to create ROS2 node inherited rclcpp::Node
#include "rclcpp/rclcpp.hpp"
// "rclcpp/rclcpp.hpp" is essential to create ROS2 action node
#include "rclcpp_action/rclcpp_action.hpp"
// ROS2 node should publish or subscribe interfaces. Pure data types are not allowed to be topic.
// "interfaces/msg/example.hpp" is topic interface.
#include "interfaces/action/example.hpp"

class ActionServerExample : public rclcpp::Node{
private:
  // action_server_ is used for node registration and action performances
  rclcpp_action::Server<interfaces::action::Example>::SharedPtr action_server_;

  // handle_goal() is called when action is requested by action client.
  rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const interfaces::action::Example::Goal> goal){
    // add this line to remove 'unused warning'
    (void)uuid;

    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Received goal request '%s'", goal->goal.c_str());

    // action reject condition
    // In certain condition, action request is able to be rejected by action server.
    if (goal->goal.c_str() == NULL){
      // if action request is rejected, return rclcpp_action::GoalResponse::REJECT;
      return rclcpp_action::GoalResponse::REJECT;
    }

    // if action request is not rejected, return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  // When action is canceled while running, handle_cancel() is called
  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Example>> goal_handle){
    // add this line to remove 'unused warning'
    (void)goal_handle;

    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");

    // action cancel request is accepeted
    // return rclcpp_action::CancelResponse::ACCEPT
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  // handle_accept is called when action request is accepted.
  void handle_accept(const std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Example>> goal_handle){
    // create a single thread for execute() and run execute() independently
    std::thread{std::bind(&ActionServerExample::execute, this, std::placeholders::_1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Example>> goal_handle){
    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Executing goal");

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
        result->result = "Action canceled";

        // print ROS2 log messesage
        // RCLCPP_INFO(this->get_logger(), "formatted log message");
        RCLCPP_INFO(this->get_logger(), "Action canceled");

        // publish result to action client with cancel
        goal_handle->canceled(result);

        // finish execute
        return;
      }
      // set feedback messesage
      feedback->feedback = "Feedback " + std::to_string(i);

      // print ROS2 log messesage
      // RCLCPP_INFO(this->get_logger(), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Publish feedback '%s'", feedback->feedback.c_str());

      // publish feedback to action client
      goal_handle->publish_feedback(feedback);

      // wait until publish rate comes
      loop_rate.sleep();
    }

    // check ROS2 communication
    if (rclcpp::ok()) {
      // set result message
      result->result = "Action finished";

      // print ROS2 log message
      // RCLCPP_INFO(this->get_logger(), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Action succeeded");

      // publish result to action client with success
      goal_handle->succeed(result);
    }
  }
public:
  // construct ActionServerExample class
  ActionServerExample(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
   : Node("Action_Server", options){
     // create action server using rclcpp_action::create_server with interfaces, action name and handlers
     // rclcpp::create_server takes at least 4 interfaces(base, clock, logging, waitables),
     // action name and 3 handler functions (goal cancel, accept).
     this->action_server_ = rclcpp_action::create_server<interfaces::action::Example>(
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

     // print ROS2 log messesage
     // RCLCPP_INFO(this->get_logger, "formatted log message");
     RCLCPP_INFO(this->get_logger(), "Action server starts running");
  }
};

int main(int argc, char** argv){
  // initialize ROS2 communication
  rclcpp::init(argc, argv);

  // action server node keeps running
  rclcpp::spin(std::make_shared<ActionServerExample>());

  // shutdown ROS2 node
  rclcpp::shutdown();

  return 0;
}
