cmake_minimum_required (VERSION 2.8)

project(opencv101)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(hello 	hello.cpp)
add_executable(mat1 	mat1.cpp)
add_executable(mat2 	mat2.cpp)
add_executable(mat3 	mat3.cpp)
add_executable(mat4 	mat4.cpp)
add_executable(mat5 	mat5.cpp)
add_executable(mat6 	mat6.cpp)

target_link_libraries(hello 	${OpenCV_LIBS})
target_link_libraries(mat1 	${OpenCV_LIBS})
target_link_libraries(mat2 	${OpenCV_LIBS})
target_link_libraries(mat3 	${OpenCV_LIBS})
target_link_libraries(mat4 	${OpenCV_LIBS})
target_link_libraries(mat5 	${OpenCV_LIBS})
target_link_libraries(mat6 	${OpenCV_LIBS})

