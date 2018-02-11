include_directories(${Objectify_SOURCE_DIR}/inc)
link_directories(${Objectify_SOURCE_DIR}/src)

add_executable(main main.c)
target_link_libraries(main objectify)
