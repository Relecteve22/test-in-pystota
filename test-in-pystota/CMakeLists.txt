cmake_minimum_required(VERSION 3.10)
project(test-in-pystota)

add_definitions(-DMAGICKCORE_QUANTUM_DEPTH=16)
add_definitions(-DMAGICKCORE_HDRI_ENABLE=0)
find_package(ImageMagick COMPONENTS Magick++)

set(SOURCE_FILES main.cpp)

add_executable(test-in-pystota ${SOURCE_FILES})
target_include_directories(test-in-pystota PUBLIC ${ImageMagick_INCLUDE_DIRS})
target_link_libraries(test-in-pystota ${ImageMagick_LIBRARIES})
