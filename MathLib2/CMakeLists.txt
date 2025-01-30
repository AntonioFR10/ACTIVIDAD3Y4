cmake_minimum_required(VERSION 3.30)
project(MathLib)

set(CMAKE_CXX_STANDARD 17)

# Archivos fuente
set(SOURCES
    main.cpp
    BasicMath.cpp
    AdvancedMath.cpp
)

add_executable(MathLib ${SOURCES})

# Opciones
option(ENABLE_TESTING "Enable unit testing" ON)

# Descarga GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Pruebas unitarias
if(ENABLE_TESTING)
    enable_testing()
    add_executable(test_suite tests/BasicMathTests.cpp tests/AdvancedMathTests.cpp)
    target_link_libraries(test_suite PRIVATE gtest gtest_main)
    add_test(NAME AllTests COMMAND test_suite)
endif()
