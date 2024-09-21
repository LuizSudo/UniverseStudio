cmake_minimum_required(VERSION 3.22)
project(universestudio)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./export)

# glfw
set(GLFW_BUILD_DOCS OFF CACHE BOOL "GLFW build documentation" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "GLFW build documentation" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "GLFW build documentation" FORCE)

add_subdirectory(include/glfw)

# assimp
set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build shared libraries" FORCE)
set(ASSIMP_BUILD_TESTS OFF CACHE BOOL "Assimp build tests" FORCE)
set(ASSIMP_INSTALL OFF CACHE BOOL "Assimp install" FORCE)
set(ASSIMP_INSTALL_PDB OFF CACHE BOOL "Assimp install PDB" FORCE)
add_subdirectory(include/assimp)

# ImGUI
set(IMGUI_DIR include/imgui)

set(IMGUI_SOURCES
  ${IMGUI_DIR}/imgui.cpp
  ${IMGUI_DIR}/imgui_demo.cpp
  ${IMGUI_DIR}/imgui_draw.cpp
  ${IMGUI_DIR}/imgui_tables.cpp
  ${IMGUI_DIR}/imgui_widgets.cpp
  ${IMGUI_DIR}/backends/imgui_impl_glfw.cpp
  ${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp
)

include_directories(include/ include/glad include/glfw include/glm include/assimp include/assimp/build/include)

set(SOURCE_FILES src/main.cpp src/ncp/Simulation.cpp src/ncp/Vec3.cpp src/glad.c src/Mesh.cpp src/Model.cpp src/Skybox.cpp src/Shader.cpp src/stb_image.cpp src/Entity.cpp src/EntityManager.cpp src/Callback.cpp src/Camera.cpp src/Cubemap.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${IMGUI_SOURCES})

target_link_libraries(${PROJECT_NAME} glfw ${GLFW_LIBRARIES})
target_link_libraries(${PROJECT_NAME} assimp)

add_custom_target(copy_resources ALL
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${PROJECT_SOURCE_DIR}/res
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/build
        COMMENT "Copying resources into build directory")

add_dependencies(${PROJECT_NAME} copy_resources)
