#include "gui_common.h"

// Is called whenever a key is pressed/released via GLFW
void key_callback(GLFWwindow *window, int key, int scancode, int action, int mode)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, GL_TRUE);
    }
}

/**
 * @brief Another way
 *
 */
void keyPressHandle(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        std::cout << "Escape Function" << std::endl;
        glfwSetWindowShouldClose(window, GL_TRUE);
    }
}

// Is called whenever a mouse button is pressed/released via GLFW
void onPressScreen(GLFWwindow *window, int button, int action, int modifier)
{
    if (action == GLFW_PRESS && button == GLFW_MOUSE_BUTTON_1)
    {
        double xPos = 0.0;
        double yPos = 0.0;
        glfwGetCursorPos(window, &xPos, &yPos);

        std::cout << "xPos: " << xPos << " - yPos: " << yPos << std::endl;
    }
}

void framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
    // Viewport - tells openGL the size of the rendering window so OpenGL knows how we want to display the data and coordinates with respect to the window
    glViewport(0, 0, width, height);
}


const char* shaderContext = " #version 140 core\n"
"layout  (location = 0) in vec3 aPos;\n"
"void main()\n"
"{\n"
"    gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
"}\0";

int main(int argc, char **argv)
{

    // Initializing the glfw libraries
    glfwInit();

    // Initializing the version of glfw - version 3.3
    glfwInitHint(GLFW_VERSION_MAJOR, 3);
    glfwInitHint(GLFW_VERSION_MINOR, 3);
    glfwInitHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create an window object - holds all the windowing data and is required by most of GLFW's other functions.
    GLFWwindow *window = glfwCreateWindow(800, 600, "LearnOpenGL", nullptr, nullptr);
    if (window == nullptr)
    { // Could not create a window
        std::cout << "Failed to create a window!" << std::endl;
        glfwTerminate();
        return -1;
    }

    // Register the callback function when window resize of frame
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    glfwMakeContextCurrent(window);
    
    // glViewport(0, 0, 800, 600);

    // The vertex
    
    float vertices[] = {
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.0f, 0.5f, 0.0f
    };

    // Vertex buffer object
    unsigned int VBO;
    glGenBuffers(1, &VBO);
    // Bind VBO to the target of buffer (GL_ARRAY_BUFFER)
    glBindBuffer(GL_ARRAY_BUFFER, VBO);

    // Copy the previously defined vertex data into the buffer's memory
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    // State for checking shader
    int success;
    // log infor of shader if error case!
    char* logInfo = new char[512];


    // Create a shader programming
    unsigned int vertexShader;

    vertexShader = glCreateShader(GL_VERTEX_SHADER);

    // attach the shader source code to the shader object and compile the shader
    glShaderSource(vertexShader, 1, &shaderContext, nullptr);
    glCompileShader(vertexShader);
    
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);

    if (!success) {
        glGetShaderInfoLog(vertexShader, 512, nullptr, logInfo);
        std::cout << "ERROR:SHADER::VERTEX::COMPILATION_FAILED\n" << logInfo << std::endl;
    }


    // Rendering the loop
    while (!glfwWindowShouldClose(window))
    { // checks at the start of each loop iteration if GLFW has been instructed to close

        // Input 
        keyPressHandle(window);

        /**
         * @brief Rendering commands
         */

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        // We can clear the screen’s color buffer using glClear where we pass in buffer bits to specify which buffer we would like to clear
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap the color buffer
        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    glfwTerminate();
    return 0;
}