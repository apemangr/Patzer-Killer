cmake_minimum_required(VERSION 3.0)

project(PatzerKiller)

add_library(PKLib main.c init.c bitboard.c)

add_executable(PatzerKiller main.c init.c bitboard.c)
