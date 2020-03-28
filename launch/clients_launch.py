from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='pubsub_cpp_example',
            node_executable='sub_cpp',
            node_name='Subscriber'
        ),
        Node(
            package='service_cpp_example',
            node_executable='service_client_cpp',
            node_name='Service_Client'
        ),
        Node(
            package='action_cpp_example',
            node_executable='action_client_cpp',
            node_name='Action_Client'
        ),
        Node(
            package='param_cpp_example',
            node_executable='param_client_cpp',
            node_name='Param_Client'
        )
    ])
