cmake_minimum_required(VERSION 3.25)
project(project_euler C)

set(CMAKE_C_STANDARD 23)

file(GLOB EX1_9 src/problems/1-9/*.c)
file(GLOB EX10_19 src/problems/10-19/*.c)
add_executable(pe src/pe.c ${EX1_9} ${EX10_19})
