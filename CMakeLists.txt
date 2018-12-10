cmake_minimum_required(VERSION 3.12)
project(studyCppPrimer)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(ch01)

add_executable(studyCppPrimer
        ch01/p6.cpp
    README.md )
add_executable(1.2_hwk
        ch01/1.2_hwk.cpp)
add_executable(1.6_hwk
        ch01/1.6_hwk.cpp)
add_executable(1.8_hwk
        ch01/1.8_hwk.cpp)
add_executable(1.12_hwk
        ch01/1.12_hwk.cpp)
add_executable(add c++_primer_5th/1/add.cc)
add_executable(2.1_hwk ch02/2.1_2.2_hwk.cpp)
add_executable(2.3_hwk ch02/2.3_hwk.cpp)