// This example shows how to set and get parameters in ROS2 cpp.
// Parameter client sets parameters in parameter server node.
// Parameter client requires parameter_set() function.
//
// parameter_set()
// parameter_set() is called to set parameter value in parameter server node.
// Data type of parameter depends on parameter value and get changed as set.
// When parameters are set, result array containing successful and reason is returned.
// successful field in result array is boolean, and it is TRUE when parameter is successfully set.
// reason field in result array is reason of parameter set failure.
//
// main()
// parameter client node doesn't uses rclcpp::spin() since it set parameter and then finishes.
// main() requires rclcpp::init(), constructor ParameterClientExample() and rclcpp::shutdown().

// <chrono> is used for counting parameter server waiting time
#include <chrono>
// "rclcpp/rclcpp.hpp" is essential to create ROS2 node inherited rclcpp::Node
#include "rclcpp/rclcpp.hpp"

class ParameterClientExample : public rclcpp::Node{
private:
  // parameter_client__ is used for node registration and parameter set and get.
  std::shared_ptr<rclcpp::SyncParametersClient> parameter_client_;
public:
  // parameter_set() is called to set parameters with value
  template<typename T>
  void parameter_set(const std::string &node_name, const std::string &parameter_name, const T value_){
    // Synchronize parameter client with node having target parameter.
    // std::make_shared<rclcpp::SyncParametersClient> takes 2 arguments, this node and parameter server name.
    parameter_client_ = std::make_shared<rclcpp::SyncParametersClient>(this, node_name);

    // check if parameter server is available, and wait until parameter server is available
    while (!parameter_client_->wait_for_service(std::chrono::seconds(1))){
      if (!rclcpp::ok()){
        // if rclcpp is not running, print ROS2 log message and finish program
        // RCLCPP_ERROR(this->get_logger(), "formatted log message");
        RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service, Exiting.");
        // finishes function call
        return;
      }
      // print ROS2 log message
      // RCLCPP_INFO(this->get_logger(), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Service is not available, waiting again...");
    }

    // set_parameters() sets parameters and returns set_parameter_result array.
    auto set_parameter_result = parameter_client_->set_parameters({rclcpp::Parameter(parameter_name, value_)});
    // check if parameter setting is successful or not.
    if (!set_parameter_result[0].successful){
      // if set_parameters() failed to set parameters
      // print ROS2 log message with parameter name and reason.
      // RCLCPP_ERROR(this->get_logger(), "formatted log message");
      RCLCPP_ERROR(this->get_logger(), "Failed to set '%s': %s",
        // get parameter name in string.
        parameter_client_->get_parameters({parameter_name})[0].get_name().c_str(),
        // get reason of parameter setting failure.
        set_parameter_result[0].reason.c_str());
    }
    else{
      // if set_parameters() successe to set parameters
      // print ROS2 log message with parameter name and reason.
      // RCLCPP_ERROR(this->get_logger(), "formatted log message");
      RCLCPP_INFO(this->get_logger(), "Successed to set '%s' : %s, %s",
          // get parameter name in string.
          parameter_client_->get_parameters({parameter_name})[0].get_name().c_str(),
          // get parameter value in string.
          parameter_client_->get_parameters({parameter_name})[0].value_to_string().c_str()
      );
    }
  }

  // create ParameterClientExample instance
  ParameterClientExample() : Node("Parameter_Client"){}
};

int main(int argc, char** argv){
  // initialize ROS2 communication
  rclcpp::init(argc, argv);

  // set parameters
  ParameterClientExample().parameter_set("Parameter_Server", "param1", 10);

  rclcpp::shutdown();

  return 0;
}
