# CMake generated Testfile for 
# Source directory: /home/jiseongyoo/ros2_examples/src/pub_sub_example
# Build directory: /home/jiseongyoo/ros2_examples/build/pub_sub_example
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/home/jiseongyoo/ros2_examples/build/pub_sub_example/test_results/pub_sub_example/lint_cmake.xunit.xml" "--package-name" "pub_sub_example" "--output-file" "/home/jiseongyoo/ros2_examples/build/pub_sub_example/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/home/jiseongyoo/ros2_examples/build/pub_sub_example/test_results/pub_sub_example/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/jiseongyoo/ros2_examples/src/pub_sub_example")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/home/jiseongyoo/ros2_examples/build/pub_sub_example/test_results/pub_sub_example/xmllint.xunit.xml" "--package-name" "pub_sub_example" "--output-file" "/home/jiseongyoo/ros2_examples/build/pub_sub_example/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/home/jiseongyoo/ros2_examples/build/pub_sub_example/test_results/pub_sub_example/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/jiseongyoo/ros2_examples/src/pub_sub_example")
