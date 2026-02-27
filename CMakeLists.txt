cmake_minimum_required(VERSION 3.14)

project(PipBoy LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(
  ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/FTXUI.git
  GIT_TAG main
)

FetchContent_MakeAvailable(ftxui)

add_executable(pipboy Pip-Boy-Init.cpp)

target_link_libraries(pipboy
  ftxui::screen
  ftxui::dom
  ftxui::component
)