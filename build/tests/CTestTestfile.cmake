# CMake generated Testfile for 
# Source directory: /Users/veck.hsiao/Desktop/CMake/hello_ctest/tests
# Build directory: /Users/veck.hsiao/Desktop/CMake/hello_ctest/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[HelloTest]=] "/Users/veck.hsiao/Desktop/CMake/hello_ctest/build/tests/test_hello")
set_tests_properties([=[HelloTest]=] PROPERTIES  FAIL_REGULAR_EXPRESSION "Test failed:" PASS_REGULAR_EXPRESSION "All tests passed!" TIMEOUT "10" _BACKTRACE_TRIPLES "/Users/veck.hsiao/Desktop/CMake/hello_ctest/tests/CMakeLists.txt;9;add_test;/Users/veck.hsiao/Desktop/CMake/hello_ctest/tests/CMakeLists.txt;0;")
