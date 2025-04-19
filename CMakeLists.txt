cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Use C++17 or whatever version you prefer
set(CMAKE_CXX_STANDARD 17)

# Include your source
include_directories(include)

# Add source files
# add_library(my_code src/my_code.cpp)

# GoogleTest setup
# Replace /usr/local with `brew --prefix` output if needed
include_directories(/usr/local/include)
link_directories(/usr/local/lib)

# Add test
add_executable(runTests 
        test/test_my_code.cpp
        src/my_code.cpp
)
target_link_libraries(runTests gtest gtest_main)
