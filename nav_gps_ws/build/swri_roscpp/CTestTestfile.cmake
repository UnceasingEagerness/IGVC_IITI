# CMake generated Testfile for 
# Source directory: /home/ivdc/igvc2025/nav_gps_ws/src/marti_common/swri_roscpp
# Build directory: /home/ivdc/igvc2025/nav_gps_ws/build/swri_roscpp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(topic_service_test_server "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ivdc/igvc2025/nav_gps_ws/build/swri_roscpp/test_results/swri_roscpp/topic_service_test_server.gtest.xml" "--package-name" "swri_roscpp" "--output-file" "/home/ivdc/igvc2025/nav_gps_ws/build/swri_roscpp/ament_cmake_gtest/topic_service_test_server.txt" "--command" "/home/ivdc/igvc2025/nav_gps_ws/build/swri_roscpp/topic_service_test_server" "--gtest_output=xml:/home/ivdc/igvc2025/nav_gps_ws/build/swri_roscpp/test_results/swri_roscpp/topic_service_test_server.gtest.xml")
set_tests_properties(topic_service_test_server PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ivdc/igvc2025/nav_gps_ws/build/swri_roscpp/topic_service_test_server" TIMEOUT "60" WORKING_DIRECTORY "/home/ivdc/igvc2025/nav_gps_ws/build/swri_roscpp" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ivdc/igvc2025/nav_gps_ws/src/marti_common/swri_roscpp/cmake/swri_roscpp-test.cmake;57;ament_add_gtest;/home/ivdc/igvc2025/nav_gps_ws/src/marti_common/swri_roscpp/cmake/swri_roscpp-test.cmake;0;;/home/ivdc/igvc2025/nav_gps_ws/src/marti_common/swri_roscpp/CMakeLists.txt;52;include;/home/ivdc/igvc2025/nav_gps_ws/src/marti_common/swri_roscpp/CMakeLists.txt;0;")
subdirs("swri_roscpp_test__py")
subdirs("gtest")
