# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)


# define the project name
project(Programmentwurf VERSION 1.0 LANGUAGES C)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -pedantic)


# add a library for the functions
add_library(uni_library STATIC
src/developer_group.c
src/developer.c)

# add the includes to the library
target_include_directories(uni_library PUBLIC include)

# add an executabel and assign files to it
add_executable(library_ex_exec src/main.c)
# add the include directory
target_include_directories(library_ex_exec PUBLIC include)
# link the library
target_link_libraries(library_ex_exec PRIVATE  uni_library)

