#include "composition_cpp_example/action_client_cpp_example.hpp"

namespace component{
    void ActionClientExample::goal_response_callback(
      std::shared_future<rclcpp_action::ClientGoalHandle<interfaces::action::Example>::SharedPtr> future){
      // get response of action server against action request.
      // handle_goal() function in action server returns result of boolean,
      // rclcpp_action::GoalResponse::REJECT or ACCEPT_AND_EXECUTE.
      // REJECT is FALSE, ACCEPT_AND_EXECUTE is TRUE.
      auto goal_handle = future.get();
      if (!goal_handle){
        // print ROS2 log messesage
        // RCLCPP_INFO(this->get_logger(), "formatted log message");
        RCLCPP_ERROR(this->get_logger(), "Action '/action' : rejected");

        // resume the timer_ to call timer_callback().
        timer_ = create_wall_timer(std::chrono::seconds(1),std::bind(&ActionClientExample::timer_callback, this));
      }
      else
        RCLCPP_INFO(this->get_logger(), "Action '/action' : accepted");
    }

    // result_callback() is called when action result is arrived from action server.
    // action server sends result of action, and result_callback() takes it as argument.
    void ActionClientExample::result_callback(
      const rclcpp_action::ClientGoalHandle<interfaces::action::Example>::WrappedResult & result){
      // print different ROS2 log messege as action result.
      switch (result.code){
        // action is succeded.
        case rclcpp_action::ResultCode::SUCCEEDED:
          RCLCPP_INFO(this->get_logger(), "Action '/action' : result -> %s", result.result->result.c_str());
          break;
        // action is aborted.
        case rclcpp_action::ResultCode::ABORTED:
          RCLCPP_ERROR(this->get_logger(), "Action '/action' : aborted");
          return;
        // action is canceled.
        case rclcpp_action::ResultCode::CANCELED:
          RCLCPP_ERROR(this->get_logger(), "Action '/action' : canceled");
          return;
        // unknown action result code is returned.
        default:
          RCLCPP_ERROR(this->get_logger(), "Action '/action' : unknown result code");
          return;
      }

      // resume the timer_ to call timer_callback()
      timer_ = create_wall_timer(std::chrono::seconds(1),std::bind(&ActionClientExample::timer_callback, this));
    }

    // define what action client does when feedback is arrived from action server.
    void ActionClientExample::feedback_callback(
      rclcpp_action::ClientGoalHandle<interfaces::action::Example>::SharedPtr,
      const std::shared_ptr<const interfaces::action::Example::Feedback> feedback){
      // print ROS2 log messesage
      // RCLCPP_INFO(this->get_logger(), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Action '/action' : feedback -> %s", feedback->feedback.c_str());
    }

    // timer_callback() is called 1 second after the latest action result
    void ActionClientExample::timer_callback(){
      // stop timer to prevent from requesting action again
      timer_->cancel();

      // check if action server is running and wait.
      while (!action_client_->wait_for_action_server(std::chrono::seconds(1))) {
        if (!rclcpp::ok()) {
          // if rclcpp is not running, print ROS2 log message and finish program
          // RCLCPP_ERROR(rclcpp::get_logger(), "formatted log message");
          RCLCPP_ERROR(this->get_logger(), "Action '/action' : interrupted");
          return;
        }
        // print ROS2 log messesage
        // RCLCPP_INFO(rclcpp::get_logger(), "formatted log message");
        RCLCPP_INFO(this->get_logger(), "Action '/action' : not available");
      }

      // create and set goal interface of action
      auto goal = interfaces::action::Example::Goal();
      goal.goal = "goal";

      // In case of this example, ActionClientExample node will be added to executor and spinned.
      // When sync_send_request() is used, it tries to spin the node and waits for response.
      // However, this node is already being spinned and ROS2 eloquent does not support recursive spin of nodes.
      // Therefore, at this time async_send_request() should be used.
      // async_send_request() sends request to action server
      //
      action_client_->async_send_goal(goal, send_goal_options);
      RCLCPP_INFO(this->get_logger(), "Action '/action' : %s", goal.goal.c_str());
    }

    ActionClientExample::ActionClientExample(const rclcpp::NodeOptions & options)
      : Node("action_client", options){
      action_client_ = rclcpp_action::create_client<interfaces::action::Example>(
        this->get_node_base_interface(),
        this->get_node_graph_interface(),
        this->get_node_logging_interface(),
        this->get_node_waitables_interface(),
        // action name
        "action"
      );

      // create send_goal_options for action request and bind it with 3 callback functions
      // send_goal_options has goal_response_callback, result_callback and feedback_callback fields.
      // goal_response_callback(), result_callback(), feedback_callback() are required.
      // Each callback function will be called as action server responses.
      // if a callback function requires arguments, std::bind method should take std::placeholders::_1
      // std::placeholders::_1 is used when timer_callback takes 1 argument
      // std::placeholders::_1, std::placeholders::_2 is used when timer_callback takes 2 arguments
      send_goal_options = rclcpp_action::Client<interfaces::action::Example>::SendGoalOptions();
      send_goal_options.goal_response_callback = std::bind(&ActionClientExample::goal_response_callback, this, std::placeholders::_1);
      send_goal_options.result_callback = std::bind(&ActionClientExample::result_callback, this, std::placeholders::_1);
      send_goal_options.feedback_callback = std::bind(&ActionClientExample::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);

      // create timer with action request rate, binded timer_callback and the notde
      // timer_ = create_wall_timer(publish-rate, std::bind(&timer_callback, this));
      // if timer_callback requires arguments, std::bind method should take std::placeholders::_1
      // std::placeholders::_1 is used when timer_callback takes 1 argument
      // std::placeholders::_1, std::placeholders::_2 is used when timer_callback takes 2 arguments
      timer_ = create_wall_timer(std::chrono::seconds(1),std::bind(&ActionClientExample::timer_callback, this));
    }
}

// include register_node_macro.hpp to create register node macro
#include "rclcpp_components/register_node_macro.hpp"
// create macro for node register to thread executor
RCLCPP_COMPONENTS_REGISTER_NODE(component::ActionClientExample)
