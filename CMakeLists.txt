cmake_minimum_required(VERSION 3.20)
project(graviTengine)
find_package(OpenGL REQUIRED)

set(ALL_LIBS
        ${OPENGL_LIBRARY}
        glfw
        )


include_directories(
        external/AntTweakBar-1.16/include/
        external/glfw-3.1.2/include/
        external/glm-0.9.7.1/
        external/glew-1.13.0/include/
        external/assimp-3.0.1270/include/
        external/bullet-2.81-rev2613/src/
        .
)
add_executable(graviTengine
        src/graphics/window.cpp
        src/graphics/window.h
        main.cpp)
target_link_libraries(graviTengine
        ${ALL_LIBS}
        )
