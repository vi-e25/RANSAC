cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

SET(OpenCV_STATIC OFF)
find_package( OpenCV REQUIRED )
include_directories(include/ ${OpenCV_INCLUDE_DIRS})

project(Ransachomography)
file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")

add_executable(Ransachomography ${SOURCE_FILES} src/test.cpp include/test.h src/linearmodel.cpp include/linearmodel.h src/ransac.cpp include/ransac.h include/utils.h include/homography.h src/homography.cpp src/ransachomography.cpp include/ransachomography.h src/mergeimages.cpp include/mergeimages.h)
target_link_libraries(Ransachomography ${OpenCV_LIBS} )