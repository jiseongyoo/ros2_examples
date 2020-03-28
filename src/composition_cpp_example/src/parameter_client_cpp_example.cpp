// This example shows how to set and get parameters in another node in ROS2 cpp.
// class ParemeterClientExample sets parameter, "parameter" in parameter server node.
// When client calls set_paremeters() and parameter_get(), it requests service
// to the node having parameters and waits until server response.
// int count_ is used to change paramter value, and keep increasing as set_parameters is called.
//
// timer_callback()
// timer_callback() shows how parameter client node sends request to parameter server.
// timer_callback() should set parameter values.
// timer_callback() takes request and response as arguments, and returns void.
//
// RCLCPP_COMPONENTS_REGISTER_NODE(component::PublisherExample)
// RCLCPP_COMPONENTS_REGISTER_NODE is a macro registering node to thread executor.
// This macro is defined in register_node_macro.hpp,
// so "rclcpp_components/register_node_macro.hpp" must be included.

#include "composition_cpp_example/parameter_client_cpp_example.hpp"

namespace component{
  void ParameterClientExample::timer_callback(){
    // stop timer_ to prevent from calling timer_callback90 again.
    timer_->cancel();

    // parameter_client_ connects parameter server and client using Asynchronized commmunication.
    parameter_client_ = std::make_shared<rclcpp::AsyncParametersClient>(this, "parameter_server");

    // check if parameter server is available, and wait
    while (!parameter_client_->wait_for_service(std::chrono::seconds(1))){
      if (!rclcpp::ok()){
        // if rclcpp is not running, print ROS2 log message and finish program
        // RCLCPP_ERROR(rclcpp::get_logger("name"), "formatted log message");
        RCLCPP_ERROR(this->get_logger(), "Parameter '/parameter' : interruped");
        return;
      }
      // print ROS2 log messesage
      // RCLCPP_INFO(rclcpp::get_logger("name"), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Parameter '/parameter' : not available");
    }

    // In case of this example, ParameterClientExample node will be added to executor and spinned.
    // When SyncParametersClient is used, it tries to spin the node and waits for response.
    // However, this node is already being spinned and ROS2 eloquent does not support recursive spin of nodes.
    // Therefore, at this time AsyncParametersClient should be used.
    // set_parameters() sends request to parameter server
    // and set_parameter_callback is called when set_parameters response is arrived.
    //
    auto set_parameter_callback = [this](std::shared_future<std::vector<rcl_interfaces::msg::SetParametersResult>> set_parameter_result) {
      // set_parameter_result includes boolean successful and string reason.
      // When set_parameters() is successful, successful is TRUE and reason is NULL.
      // When set_parameters() is unsuccessful, successful is FALSE and reason is reason of failure.
      for (auto & result : set_parameter_result.get()){
        if (result.successful)
          RCLCPP_INFO(this->get_logger(), "Parameter '/parameter': successful");
        else
          RCLCPP_ERROR(this->get_logger(), "Parameter '/parameter': failed -> %s", result.reason.c_str());
      }
    };
    // request parameter setting and conduct set_parameer_callback when response is arrivaed.
    parameter_client_->set_parameters({rclcpp::Parameter("parameter", ++count_)}, set_parameter_callback);

    /*
    // tried this part
    // But when get_parameters({}).get() is called outside of callback, problem is occured.
    // Program doesn't go further and cannot be terminated by ctrl+c.
    parameter_client_->set_parameters({rclcpp::Parameter("parameter", ++count_)});
    auto param = parameter_client_->get_parameters({"parameter"}).get();
    RCLCPP_INFO(this->get_logger(), "Parameter '%s': ", param[0].get_name(), param[0].get_parameter_value());
    */

    // resume the timer_ to call timer_callback()
    timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&ParameterClientExample::timer_callback, this));
  }

  ParameterClientExample::ParameterClientExample(const rclcpp::NodeOptions & options)
    : Node("parameter_client", options), count_(0){
    // set timer_ to start calling timer_callback() periodically.
    timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&ParameterClientExample::timer_callback, this));
  }
}

// include register_node_macro.hpp to create register node macro
#include "rclcpp_components/register_node_macro.hpp"
// create macro for node register to thread executor
RCLCPP_COMPONENTS_REGISTER_NODE(component::ParameterClientExample)
