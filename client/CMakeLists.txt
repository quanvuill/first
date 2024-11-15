#message("CMAKE_SOURCE_DIR is:${CMAKE_SOURCE_DIR}")

aux_source_directory(${CMAKE_SOURCE_DIR}/lib SRC_LIST)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(cli cli.c ${SRC_LIST}) 

