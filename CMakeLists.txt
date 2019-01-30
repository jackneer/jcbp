cmake_minimum_required(VERSION 3.7)

include("cmake/HunterGate.cmake")

HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.23.91.tar.gz"
    SHA1 "b0fbc542ed5190811beadbd6162422013a5dd3a0"
)

set (PROJECT_NAME "jcbp")

project (${PROJECT_NAME})

# hunter_add_package(Boost)
# find_package(Boost REQUIRED)
# include_directories( ${Boost_INCLUDE_DIRS} )

file(GLOB SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

# target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})