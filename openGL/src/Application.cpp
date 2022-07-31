#include "Application.h"

namespace gui
{
    Application::Application()
    {
        m_window = nullptr;
    }

    void Application::initialize()
    {
        glfwInit();
        glfwWindowHint(GLFW_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    }

    void Application::createWindow(uint32_t height, uint32_t width, const char *title)
    {
        m_window = glfwCreateWindow(width, height, title, nullptr, nullptr);
        if (m_window == nullptr)
        {
            std::cout << "Failed to create GLFW window" << std::endl;
            glfwTerminate();
            return;
        }
    }

    void Application::run()
    {
        glfwMakeContextCurrent(m_window);
        while (!glfwWindowShouldClose(m_window))
        {
            glClearColor(0, 0, 0, 0);
            /* Swap front and back buffers */
            glfwSwapBuffers(m_window);

            /* Poll for and process events */
            glfwPollEvents();
        }

        glfwTerminate();
    }
}