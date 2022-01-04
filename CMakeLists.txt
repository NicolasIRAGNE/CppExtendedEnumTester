cmake_minimum_required(VERSION 3.17)

project(CppExtendedEnumTester LANGUAGES CXX)
add_compile_definitions(__cpp_lib_format=201907L)

include(FetchContent)

FetchContent_Declare(
    CppExtendedEnum
    GIT_REPOSITORY https://github.com/NicolasIRAGNE/CppExtendedEnum.git
    GIT_TAG niragne/develop
    BUILD_COMMAND ""
    CONFIGURE_COMMAND ""
)

Fetchcontent_Makeavailable(CppExtendedEnum)

set(ENUMS
    ${CMAKE_CURRENT_LIST_DIR}/enums/capitals.json
    ${CMAKE_CURRENT_LIST_DIR}/enums/names.json
)

add_executable(CppExtendedEnumTester)

include(${cppextendedenum_SOURCE_DIR}/EnumGenerator.cmake)

target_sources(CppExtendedEnumTester
    PRIVATE
        src/main.cpp
)

Generate_Enum(${ENUMS})
target_link_libraries(CppExtendedEnumTester CppExtendedEnumTester::capitals CppExtendedEnumTester::names)
set_property(TARGET CppExtendedEnumTester PROPERTY CXX_STANDARD 20)