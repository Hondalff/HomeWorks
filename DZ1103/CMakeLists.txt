cmake_minimum_required(VERSION 3.22.0)
project(DZ1103)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(Text SHARED Text.cpp Text.h)
add_executable(DZ_File DZ1102.cpp)
target_link_libraries(DZ_File Text)