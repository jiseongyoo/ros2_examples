from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='pubsub_cpp_example',
            node_executable='pub_cpp',
            node_name='Publisher'
        ),
        Node(
            package='service_cpp_example',
            node_executable='service_server_cpp',
            node_name='Service_Server'
        ),
        Node(
            package='action_cpp_example',
            node_executable='action_server_cpp',
            node_name='Action_Server'
        ),
        Node(
            package='param_cpp_example',
            node_executable='param_server_cpp',
            node_name='Parameter_Server'
        )
    ])
