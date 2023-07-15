cmake_minimum_required(VERSION 3.25)
project(ocius)


# Find glfw3
find_package(glfw3 CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 23)

add_executable(ocius main.cpp)

# Link glfw3 to the executable
target_link_libraries(ocius PRIVATE glfw)