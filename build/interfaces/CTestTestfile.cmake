# CMake generated Testfile for 
# Source directory: /home/jiseongyoo/ros2_examples/src/interfaces
# Build directory: /home/jiseongyoo/ros2_examples/build/interfaces
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/home/jiseongyoo/ros2_examples/build/interfaces/test_results/interfaces/lint_cmake.xunit.xml" "--package-name" "interfaces" "--output-file" "/home/jiseongyoo/ros2_examples/build/interfaces/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/home/jiseongyoo/ros2_examples/build/interfaces/test_results/interfaces/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/jiseongyoo/ros2_examples/src/interfaces")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/home/jiseongyoo/ros2_examples/build/interfaces/test_results/interfaces/xmllint.xunit.xml" "--package-name" "interfaces" "--output-file" "/home/jiseongyoo/ros2_examples/build/interfaces/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/home/jiseongyoo/ros2_examples/build/interfaces/test_results/interfaces/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/jiseongyoo/ros2_examples/src/interfaces")
subdirs("interfaces__py")
