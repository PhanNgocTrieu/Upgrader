add_executable(example main.cpp)
target_compile_options(example PRIVATE -std=c++11 -Wall)
target_link_libraries(example libOpenGL ${CMAKE_THREAD_LIBS_INIT})
target_include_directories(example PRIVATE ../include)