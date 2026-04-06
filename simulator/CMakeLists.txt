add_library(${PROJECT_NAME}_simulator STATIC
    engine/dummy.cpp
)

target_include_directories(${PROJECT_NAME}_simulator PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_features(${PROJECT_NAME}_simulator PUBLIC cxx_std_20)

target_compile_options(${PROJECT_NAME}_simulator PUBLIC
    -Wall
    -Wextra
    -Wpedantic
)

add_executable(${PROJECT_NAME}_app 
    main.cpp
)

target_link_libraries(${PROJECT_NAME}_app PRIVATE 
                    ${PROJECT_NAME}_simulator
                    ${PROJECT_NAME}_core
)