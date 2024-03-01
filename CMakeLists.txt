cmake_minimum_required(VERSION 3.25)
project(ocius)

set(CMAKE_CXX_STANDARD 23)

# Find glfw3, is managed by conan but via CLion Plugin, Conan installed system level using a default profile.
find_package(glfw3 CONFIG REQUIRED)

# Find OpenGL, is installed at system level
find_package(OpenGL REQUIRED)

# Find glm, is managed by conan but via CLion Plugin, Conan installed system level using a default profile.
find_package(glm CONFIG REQUIRED)

# Add your executable
add_executable(ocius main.cpp)

# Link glfw3, OpenGL, and glm to the executable
target_link_libraries(ocius PRIVATE glfw OpenGL::GL glm::glm)