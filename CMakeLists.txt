cmake_minimum_required(VERSION 3.17)
project(CS2301_HW3 C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(CS2301_HW3
        src/CS2301_HW3.c
        src/LinkedList.c
        src/LinkedList.h
        src/production.c
        src/production.h
        src/tests.c
        src/tests.h
        src/TMSName.h src/BingoCard.c src/BingoCard.h src/marker.c src/marker.h)
