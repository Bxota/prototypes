cmake_minimum_required(VERSION 3.10)
project(CoucouApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use pkg-config to find SDL2 and SDL2_ttf
include(FindPkgConfig)
pkg_check_modules(SDL2 REQUIRED sdl2)
pkg_check_modules(SDL2_TTF REQUIRED SDL2_ttf)

# Add executable
add_executable(CoucouApp main.cpp)

# Include and link
target_include_directories(CoucouApp PRIVATE ${SDL2_INCLUDE_DIRS} ${SDL2_TTF_INCLUDE_DIRS})
target_link_directories(CoucouApp PRIVATE ${SDL2_LIBRARY_DIRS} ${SDL2_TTF_LIBRARY_DIRS})
target_link_libraries(CoucouApp PRIVATE ${SDL2_LIBRARIES} ${SDL2_TTF_LIBRARIES}) 