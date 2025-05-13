cmake_minimum_required(VERSION 4.0.2)
project(HelloProject C)

# Enable testing
enable_testing()

# Add library
add_library(hello_lib STATIC lib/hello_lib.c)
target_include_directories(hello_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# Add executable
add_executable(hello_app src/hello_lib.c)
target_link_libraries(hello_app PRIVATE hello_lib)

# Add tests directory
add_subdirectory(tests)
