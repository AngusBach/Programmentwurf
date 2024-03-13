# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)


# define the project name
project(Programmentwurf VERSION 1.0 LANGUAGES C)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)


# add some compile options
add_compile_options(-Wall -Wextra -pedantic)

# add the library for developer
add_library(libraries_developer_lib STATIC src/developer.c)
# add the includes to the library
target_include_directories(libraries_developer_lib PUBLIC include)

# add the library for developer_group
add_library(libraries_developer_group_lib SHARED src/developer_group.c)
# add the includes to the library
target_include_directories(libraries_developer_group_lib PUBLIC include)

# add an executabel and assign files to it
add_executable(libraries_ex_exec src/main.c)
# add the include directories
target_include_directories(libraries_ex_exec PUBLIC include)
# link bouth libraries
target_link_libraries(libraries_ex_exec PRIVATE  
    libraries_developer_lib 
    libraries_developer_group_lib)
