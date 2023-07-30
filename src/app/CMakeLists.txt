file(GLOB_RECURSE SRC *.h *.hpp *.cpp)

add_executable(mvcApplication ${SRC})

target_link_libraries(mvcApplication PRIVATE
	mvcApplication_lib
)
