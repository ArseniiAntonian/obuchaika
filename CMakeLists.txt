cmake_minimum_required(VERSION 3.26)
project(obuchaika)

set(CMAKE_CXX_STANDARD 14)

include_directories(matematika)

add_executable(obuchaika
        matematika/main.cpp
        matematika/menu.hpp
        matematika/menu_functions.cpp
        matematika/menu_functions.hpp
        matematika/menu_items.cpp
        matematika/menu_items.hpp)
