file(GLOB_RECURSE SRC *.h *.hpp *.cpp)

add_library(mvcApplication_lib ${SRC})

target_include_directories(mvcApplication_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
