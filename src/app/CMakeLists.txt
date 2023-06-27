file(GLOB_RECURSE SRC *.h *.hpp *.cpp)

add_executable(mvcApplication ${SRC})

target_include_directories(mvcApplication PRIVATE
	../library
)

target_link_libraries(mvcApplication PRIVATE
	mvcApplication_lib
)
