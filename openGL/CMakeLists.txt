cmake_minimum_required(VERSION 3.0.0)
project(libOpenGL VERSION 0.1.0)

find_package(Boost ${BOOST_VERSION} REQUIRED COMPONENTS log program_options)
find_package(PkgConfig REQUIRED)
find_package(glfw3 REQUIRED)

set(OpenGL_GL_PREFERENCE LEGACY)

find_package(OpenGL REQUIRED)

pkg_check_modules(OPENGL REQUIRED glesv2)

set(THREADS_PREFER_PTHREAD_FLAG TRUE)

set (APP_SRC src/Application.cpp)

add_library(libOpenGL STATIC ${APP_SRC})
# add_executable(openGLProject main.cpp)

target_compile_options(libOpenGL PRIVATE -std=c++11 -Wall ${OPENGL_CFLAGS} ${GLFW_CFLAGS}) 
target_include_directories(libOpenGL PRIVATE ${OPENGL_INCLUDE_DIRS}  ${GLFW_INCLUDE_DIRS} 
        include
        #../logger/include
)

target_link_libraries(libOpenGL    #liblogger 
                                        Boost::log 
                                        Boost::program_options 
                                        glfw 
                                        OpenGL::GL 
                                        ${CMAKE_THREAD_LIBS_INIT} 
                                        ${OPENGL_LIBRARIES} 
                                        ${GLFW_LIBRARIES})

link_libraries(libOpenGL  ${OPENGL_gl_LIBRARY} glfw)

#target_include_directories(app PRIVATE ../include)

add_subdirectory(examples)