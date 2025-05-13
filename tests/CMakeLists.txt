cmake_minimum_required(VERSION 4.0.0)

# Add test executable
add_executable(test_hello test_hello.c)
target_link_libraries(test_hello PRIVATE hello_lib)
target_include_directories(test_hello PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../lib)

# Add tests to CTest
add_test(NAME HelloTest COMMAND test_hello)

# You can add more test cases here
# add_test(NAME AnotherTest COMMAND test_hello --specific-test)

# Optional: Set properties for tests
set_tests_properties(HelloTest PROPERTIES
  PASS_REGULAR_EXPRESSION "All tests passed!"
  FAIL_REGULAR_EXPRESSION "Test failed:"
  TIMEOUT 10  # Timeout in seconds
)
