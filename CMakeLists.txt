cmake_minimum_required(VERSION 3.5)
project(FloracideGame)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

# Fetch SFML (requires git installed)
include(FetchContent)
FetchContent_Declare(
    SFML 
    GIT_REPOSITORY https://github.com/SFML/SFML.git 
    GIT_TAG 3.1.0
)

FetchContent_MakeAvailable(SFML)

# File Management
set(SOURCE_FILES 
    src/main.cpp 
    src/Game.h 
    src/Game.cpp

    src/Managers/ResourceManager.h 
    src/Managers/ResourceManager.cpp 
    src/Managers/InputManager.h 
    src/Managers/InputManager.cpp 

    src/Level/Level.h 
    src/Level/Level.cpp 
    src/Level/Room.h 
    src/Level/Room.cpp 
    src/Level/TileMap.h 
    src/Level/TileMap.cpp 

    src/Entities/GameObject.h 
    src/Entities/GameObject.cpp 
    src/Entities/Entity.h 
    src/Entities/Entity.cpp 
    src/Entities/Player.h 
    src/Entities/Player.cpp 
)
add_executable(FloracideGame ${SOURCE_FILES})

target_link_libraries(FloracideGame PRIVATE SFML::System SFML::Window SFML::Graphics)
target_compile_features(FloracideGame PRIVATE cxx_std_20)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/Content/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Content/)