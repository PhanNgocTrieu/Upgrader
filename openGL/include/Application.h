#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include "gui_common.h"

namespace gui
{
    class Application
    {
        public:
            Application();
            ~Application(){}
            void initialize();
            void createWindow(uint32_t height, uint32_t width, const char *screenName);
            void run();

        protected:
            GLFWwindow *m_window;
    };
};

#endif // __APPLICATION_H__