project(calc)

add_executable(calcexec main.cpp calculator.h calculator.cpp)
add_library(calclib STATIC calculator.h calculator.cpp)
