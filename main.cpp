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




    // MATH ENGINE BASIC TESTING

    // VECTOR CLASS BEGIN:
    //VECTORS:
    // These vector values are just for testing! Final version will be seperated out of main.cpp into reusable classes.
    glm::vec3 vec1(1.0f, 2.0f, 3.0f);
    glm::vec3 vec2(4.0f, 5.0f, 6.0f);

    // ADDITION BEGIN:
    // Add the vectors together
    glm::vec3 result = vec1 + vec2;
    // Print out the result
    std::cout << "Vector addition result: " << result.x << ", " << result.y << ", " << result.z << std::endl;
    // ADDITION END.

    // SUBTRACTION BEGIN:
    // Subtract the vectors
    glm::vec3 result_subtraction = vec1 - vec2;
    // Print out the result
    std::cout << "Vector subtraction result: " << result_subtraction.x << ", " << result_subtraction.y << ", " << result_subtraction.z << std::endl;
    // SUBTRACTION END:

    //DOT PRODUCT BEGIN:
    // Calculate the dot product of the vectors
    float dot_product = glm::dot(vec1, vec2);
    // Print out the result
    std::cout << "Dot product result: " << dot_product << std::endl;
    //DOT PRODUCT END.

    // CROSS PRODUCT BEGIN:
    // Calculate the cross product of the vectors
    glm::vec3 cross_product = glm::cross(vec1, vec2);
    // Print out the result
    std::cout << "Cross product result: " << cross_product.x << ", " << cross_product.y << ", " << cross_product.z << std::endl;
    // CROSS PRODUCT END.

    // VECTOR CLASS END.

    // MATRIX CLASS BEGIN:

    // I need to look into the mathematics before starting this.
    // Do I need to do just rotation, or translation and scaling as well? Yes as per below.

    // I need to do:
    // - Transform (rotation, or translation and scaling (not needed for rendering but may as well get it out the way))
    // - Invert (just invert)
    // - Transpose (just transpose)
    // - Identity (just identity)


    // MATRIX CLASS END.




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
