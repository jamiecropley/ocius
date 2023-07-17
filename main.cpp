#include <iostream>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

/* The below code will change at some point, the window will change to a separate file as a class,
 the below code is more for testing at this point. */

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "ocius", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Print OpenGL version information and confirm window has opened in terminal. */
    const GLubyte* version = glGetString(GL_VERSION);
    std::cout << "- Window has opened." << std::endl;
    std::cout << "- OpenGL version: " << version << std::endl;

    // Define two vectors
    glm::vec3 vec1(1.0f, 2.0f, 3.0f);
    glm::vec3 vec2(4.0f, 5.0f, 6.0f);

    // Add the vectors together
    glm::vec3 result = vec1 + vec2;

    // Print out the result
    std::cout << "Vector addition result: " << result.x << ", " << result.y << ", " << result.z << std::endl;

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
