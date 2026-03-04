cmake_minimum_required(VERSION 3.14)
project(PipBoy LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
  ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/FTXUI.git
  GIT_TAG main
)

FetchContent_MakeAvailable(ftxui)

add_executable(pipboy
  src/Initial-Menu.cpp
  src/Pip-Boy-Init.cpp
 "src/Initial-Menu.h")

target_include_directories(pipboy PRIVATE include)

target_link_libraries(pipboy
  ftxui::screen
  ftxui::dom
  ftxui::component
)