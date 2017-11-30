cmake_minimum_required(VERSION 3.8)
project(RouterC)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Mensaje.cpp Mensaje.h Tabla.cpp Tabla.h Server.cpp Server.h Client.cpp Client.h)
find_package(Threads)
add_executable(RouterC ${SOURCE_FILES})
target_link_libraries(RouterC ${CMAKE_THREAD_LIBS_INIT})