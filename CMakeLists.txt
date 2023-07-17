cmake_minimum_required(VERSION 3.25)
project(ocius)

set(CMAKE_CXX_STANDARD 23)

# Find glfw3
find_package(glfw3 CONFIG REQUIRED)

# Find OpenGL
find_package(OpenGL REQUIRED)

add_executable(ocius main.cpp)

# Link glfw3 and OpenGL to the executable
target_link_libraries(ocius PRIVATE glfw OpenGL::GL)
