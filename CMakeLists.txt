cmake_minimum_required(VERSION 3.16)

project(WMS LANGUAGES CXX)

#set(CMAKE_CXX_STANDARD 20)

add_subdirectory(core)
add_subdirectory(simulator)
add_subdirectory(tests)

#add_subdirectory(api)
#add_subdirectory(tools)
#add_subdirectory(ui)

enable_testing()