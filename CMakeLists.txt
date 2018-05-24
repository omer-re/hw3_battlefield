cmake_minimum_required(VERSION 3.9)
project(hw3_battlefield C)

set(CMAKE_C_STANDARD 99)

add_executable(hw3_battlefield
        main.c
        APC.c
        APC.h
        Battlefield.c
        Battlefield.h
        defs.h
        List.c
        List.h
        parse_example.c
        Soldier.h
        Soldier.c
        Squad.c
        Squad.h
        WarZone.c
        WarZone.h)