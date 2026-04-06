add_library(${PROJECT_NAME}_core STATIC 
            domain/dummy.cpp
)

target_include_directories(${PROJECT_NAME}_core PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_features(${PROJECT_NAME}_core PUBLIC cxx_std_20)

target_compile_options(${PROJECT_NAME}_core PUBLIC
    -Wall
    -Wextra
    -Wpedantic
)

