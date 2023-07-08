cmake_minimum_required(VERSION 3.25)
project(project_euler C)

set(CMAKE_C_STANDARD 23)

file(GLOB EX1_10 src/problems/1-9/*.c)
add_executable(pe src/pe.c ${EX1_10})
