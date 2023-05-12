cmake_minimum_required(VERSION 3.21.1)
project(LearnSTL)

set(CMAKE_CXX_STANDARD 17)

include_directories(Utils)

add_executable(LearnSTL Vector/1_VectorInit.cpp Utils/Utils.h Utils/Utils.cpp)
add_executable(2_VectorAssignment Vector/2_VectorAssignment.cpp Utils/Utils.h Utils/Utils.cpp)
add_executable(3_VectorSize Vector/3_VectorSize.cpp Utils/Utils.h Utils/Utils.cpp)
add_executable(4_VectorVisit Vector/4_VectorVisit.cpp Utils/Utils.h Utils/Utils.cpp)
add_executable(5_VectorOperation Vector/5_VectorOperation.cpp Utils/Utils.h Utils/Utils.cpp)
add_executable(6_VectorIterator Vector/6_VectorIterator.cpp Utils/Utils.h Utils/Utils.cpp)
add_executable(1_Deque Deque/1_DequeInit.cpp Utils/Utils.h Utils/Utils.cpp)
