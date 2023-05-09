cmake_minimum_required(VERSION 3.21.1)
project(LearnSTL)

set(CMAKE_CXX_STANDARD 17)

include_directories(Utils)

add_executable(LearnSTL 1_VectorInit.cpp Utils/Utils.h Utils/Utils.cpp)
add_executable(2_VectorAssignment 2_VectorAssignment.cpp Utils/Utils.h Utils/Utils.cpp)
add_executable(3_VectorSize 3_VectorSize.cpp Utils/Utils.h Utils/Utils.cpp)
add_executable(4_VectorVisit 4_VectorVisit.cpp Utils/Utils.h Utils/Utils.cpp)
add_executable(5_VectorOperation 5_VectorOperation.cpp Utils/Utils.h Utils/Utils.cpp)
