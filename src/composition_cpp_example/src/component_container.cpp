// This example shows how to create SingleThreadedExecutor.
// SingleThreadedExecutor is a class of rclcpp::executors::SingleThreadedExecutor.
// It spins nodes added to the executor altogether.
// The nodes in the executor are able to communicate with each other and other nodes.
// Nodes are able to be added by calling exec.add_node() function of SingleThreadedExecutor.
// After adding nodes, exec.spin() spins all the nodes.

// "rclcpp/rclcpp.hpp" includes SingleThreadedExecutor class.
#include "rclcpp/rclcpp.hpp"

// Include all the hpp files of nodes that are wanted to be added to executor.
#include "composition_cpp_example/publisher_cpp_example.hpp"
#include "composition_cpp_example/subscriber_cpp_example.hpp"
#include "composition_cpp_example/service_server_cpp_example.hpp"
#include "composition_cpp_example/service_client_cpp_example.hpp"
#include "composition_cpp_example/action_server_cpp_example.hpp"
#include "composition_cpp_example/action_client_cpp_example.hpp"
#include "composition_cpp_example/parameter_server_cpp_example.hpp"
#include "composition_cpp_example/parameter_client_cpp_example.hpp"

int main(int argc, char** argv){
  // initialize ROS2 communication
  rclcpp::init(argc, argv);

  // create single thread executor
  rclcpp::executors::SingleThreadedExecutor exec;
  rclcpp::NodeOptions options;

  // create ROS2 nodes
  auto pub = std::make_shared<component::PublisherExample>(options);
  auto sub = std::make_shared<component::SubscriberExample>(options);
  auto srv_srv = std::make_shared<component::ServiceServerExample>(options);
  auto srv_cli = std::make_shared<component::ServiceClientExample>(options);
  auto act_srv = std::make_shared<component::ActionServerExample>(options);
  auto act_cli = std::make_shared<component::ActionClientExample>(options);
  auto param_srv = std::make_shared<component::ParameterServerExample>(options);
  auto param_cli = std::make_shared<component::ParameterClientExample>(options);

  // add nodes to executor
  exec.add_node(pub); RCLCPP_INFO(pub->get_logger(), "[%s] is added to executor", pub->get_name());
  exec.add_node(sub); RCLCPP_INFO(pub->get_logger(), "[%s] is added to executor", sub->get_name());
  exec.add_node(srv_srv); RCLCPP_INFO(srv_srv->get_logger(), "[%s] is added to executor", srv_srv->get_name());
  exec.add_node(srv_cli); RCLCPP_INFO(srv_cli->get_logger(), "[%s] is added to executor", srv_cli->get_name());
  exec.add_node(act_srv); RCLCPP_INFO(act_srv->get_logger(), "[%s] is added to executor", act_srv->get_name());
  exec.add_node(act_cli); RCLCPP_INFO(act_cli->get_logger(), "[%s] is added to executor", act_cli->get_name());
  exec.add_node(param_srv); RCLCPP_INFO(param_srv->get_logger(), "[%s] is added to executor", param_srv->get_name());
  exec.add_node(param_cli); RCLCPP_INFO(param_cli->get_logger(), "[%s] is added to executor", param_cli->get_name());

  // spin executor
  exec.spin();

  // shutdown ROS2 communication
  rclcpp::shutdown();

  return 0;
}
