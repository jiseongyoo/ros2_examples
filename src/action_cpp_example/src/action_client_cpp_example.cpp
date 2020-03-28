// This example shows how to create action client node in ROS2 cpp.
// class ActionClientExample requests action to action server.
// Action client requires send_goal_options, action_client_ and callback functions.
// Action client has goal_response_callback(), result_callback(), feedback_callback() and send_goal() functions.
//
// goal_response_callback()
// goal_response_callback() is called when action server responses to action request.
// goal_response_callback() takes 1 argument, future.
// future.get() returns boolean, TRUE or FALSE.
// future.get() TRUE means that action request is accepted and action is not going to execute action.
// future.get() FALSE means that action request is rejected.
//
// result_callback()
// result_callback() is called when action server sends result after action.
// result_callback() takes 1 argument, result.
//
// feedback_callback()
// feedback_callback() is called when action server sends feedback during action.
// feedback_callback() takes 1 argument, feedback.
//
// send_goal()
// send_goal() chckes if action server is available and wait until available.
// send_gaol() sends action request with goal interface and send_goal_options.
//
// main()
// action client node uses rclcpp::spin() since it keeps running until action is done.
// main() requires rclcpp::init(), rclcpp::spin() and rclcpp::shutdown().

// <chrono> is used for counting service waiting time
#include <chrono>
// "rclcpp/rclcpp.hpp" is essential to create ROS2 node inherited rclcpp::Node
#include "rclcpp/rclcpp.hpp"
// "rclcpp/rclcpp.hpp" is essential to create ROS2 action node
#include "rclcpp_action/rclcpp_action.hpp"
// ROS2 node should publish or subscribe interfaces. Pure data types are not allowed to be topic.
// "interfaces/msg/example.hpp" is topic interface.
#include "interfaces/action/example.hpp"

class ActionClientExample : public rclcpp::Node{
private:
  // send_goal_options is used for binding callback functions of action client.
  rclcpp_action::Client<interfaces::action::Example>::SendGoalOptions send_goal_options;
  // action_client_ is used for node registration and action request
  rclcpp_action::Client<interfaces::action::Example>::SharedPtr action_client_;

  // goal_response_callback() is called when action server responses against action request.
  void goal_response_callback(std::shared_future<rclcpp_action::ClientGoalHandle<interfaces::action::Example>::SharedPtr> future){
    // check if action server accepted action request or not.
    if (!future.get()){
      // when action request is rejected by action server.
      // print ROS2 log messesage
      // RCLCPP_INFO(this->get_logger(), "formatted log message");
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
    }
    else{
      // When action request was accepted by action server.
      // print ROS2 log messesage
      // RCLCPP_INFO(this->get_logger(), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
    }
  }

  // result_callback() is called when action server send result of action.
  void result_callback(const rclcpp_action::ClientGoalHandle<interfaces::action::Example>::WrappedResult & result){
    // check result code to know if action is successfully performed by action server.
    switch (result.code){
      // action was successfully performed.
      case rclcpp_action::ResultCode::SUCCEEDED:
        // print ROS2 log messesage
        // RCLCPP_INFO(this->get_logger(), "formatted log message");
        RCLCPP_INFO(this->get_logger(), "Goal was succeeded");
        break;
      // action was aborted.
      case rclcpp_action::ResultCode::ABORTED:
        // print ROS2 log messesage
        // RCLCPP_INFO(this->get_logger(), "formatted log message");
        RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
        return;
      // action was canceled.
      case rclcpp_action::ResultCode::CANCELED:
        // print ROS2 log messesage
        // RCLCPP_INFO(this->get_logger(), "formatted log message");
        RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
        return;
      // Unknown result code is returned.
      default:
        // print ROS2 log messesage
        // RCLCPP_INFO(this->get_logger(), "formatted log message");
        RCLCPP_ERROR(this->get_logger(), "Unknown result code");
        return;
    }

    // print ROS2 log messesage with result message
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Action result arrived '%s'", result.result->result.c_str());
  }

  // feedback_callback() is called when action server sends feedback to action client.
  void feedback_callback(rclcpp_action::ClientGoalHandle<interfaces::action::Example>::SharedPtr,
                          const std::shared_ptr<const interfaces::action::Example::Feedback> feedback){
    // print ROS2 log messesage with feedback message
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Action feedback arrived '%s'", feedback->feedback.c_str());
  }
public:
  // send_goal() sends goal to action server and requests action.
  void send_goal(){
    // check if action server is available, and wait until action server is available
    while (!this->action_client_->wait_for_action_server(std::chrono::seconds(1))){
      if (!rclcpp::ok()) {
        // if rclcpp is not running, print ROS2 log message and finish program
        // RCLCPP_ERROR(this->get_logger(), "formatted log message");
        RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the action. Exiting.");
        return;
      }
      // print ROS2 log messesage
      // RCLCPP_INFO(this->get_logger(), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Action is not available, waiting again...");
    }

    // create goal interface and set fields
    auto goal = interfaces::action::Example::Goal();
    goal.goal = "Action goal";

    // print ROS2 log messesage
    // RCLCPP_INFO(this->get_logger(), "formatted log message");
    RCLCPP_INFO(this->get_logger(), "Sending goal '%s'", goal.goal.c_str());

    // send action request with goal and send_goal_options
    this->action_client_->async_send_goal(goal, send_goal_options);
  }

  ActionClientExample(const rclcpp::NodeOptions & node_options = rclcpp::NodeOptions())
   : Node("Action_Client", node_options){
     // create action client with action interface
     this->action_client_ = rclcpp_action::create_client<interfaces::action::Example>(
       // 4 interfaces for action client creation
       this->get_node_base_interface(),
       this->get_node_graph_interface(),
       this->get_node_logging_interface(),
       this->get_node_waitables_interface(),
       // actio name
       "action"
     );

     // create send_goal_options and bind callback functions of action client
     send_goal_options = rclcpp_action::Client<interfaces::action::Example>::SendGoalOptions();
     send_goal_options.goal_response_callback = std::bind(&ActionClientExample::goal_response_callback, this, std::placeholders::_1);
     send_goal_options.result_callback = std::bind(&ActionClientExample::result_callback, this, std::placeholders::_1);
     send_goal_options.feedback_callback = std::bind(&ActionClientExample::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
   }
};

int main(int argc, char** argv){
  // initialize communications
  rclcpp::init(argc, argv);

  // action client node runs
  ActionClientExample().send_goal();

  // shutdown ROS2 node
  rclcpp::shutdown();

  return 0;
}
