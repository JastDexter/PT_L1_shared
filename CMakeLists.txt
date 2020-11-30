cmake_minimum_required(VERSION 3.17)
project(PT_L1_shared)

set(CMAKE_CXX_STANDARD 14)

add_library(PT_L1_shared SHARED 2elemminsum.cpp 2elemminsum.h)