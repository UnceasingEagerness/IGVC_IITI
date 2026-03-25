# CMake generated Testfile for 
# Source directory: /home/ivdc/igvc2025/nav_gps_ws/src/marti_common/swri_image_util
# Build directory: /home/ivdc/igvc2025/nav_gps_ws/build/swri_image_util
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_geometry_util "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ivdc/igvc2025/nav_gps_ws/build/swri_image_util/test_results/swri_image_util/test_geometry_util.gtest.xml" "--package-name" "swri_image_util" "--output-file" "/home/ivdc/igvc2025/nav_gps_ws/build/swri_image_util/ament_cmake_gtest/test_geometry_util.txt" "--command" "/home/ivdc/igvc2025/nav_gps_ws/build/swri_image_util/test_geometry_util" "--gtest_output=xml:/home/ivdc/igvc2025/nav_gps_ws/build/swri_image_util/test_results/swri_image_util/test_geometry_util.gtest.xml")
set_tests_properties(test_geometry_util PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ivdc/igvc2025/nav_gps_ws/build/swri_image_util/test_geometry_util" TIMEOUT "60" WORKING_DIRECTORY "/home/ivdc/igvc2025/nav_gps_ws/build/swri_image_util" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ivdc/igvc2025/nav_gps_ws/src/marti_common/swri_image_util/CMakeLists.txt;97;ament_add_gtest;/home/ivdc/igvc2025/nav_gps_ws/src/marti_common/swri_image_util/CMakeLists.txt;0;")
subdirs("gtest")
