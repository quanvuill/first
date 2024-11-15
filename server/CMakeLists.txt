#message("CMAKE_SOURCE_DIR is:${CMAKE_SOURCE_DIR}")

aux_source_directory(${CMAKE_SOURCE_DIR}/lib SRC_LIST)

include_directories(${CMAKE_SOURCE_DIR}/include)

#get_directory_property(out_var INCLUDE_DIRECTORIES)
#message("include dir is:${out_var}")

add_executable(serv serv.c ${SRC_LIST}) 

