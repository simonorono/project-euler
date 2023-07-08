cmake_minimum_required(VERSION 3.25)
project(project_euler C)

set(CMAKE_C_STANDARD 23)

foreach (N RANGE 1 10)
    add_executable("${N}" "ex${N}.c")
endforeach ()
