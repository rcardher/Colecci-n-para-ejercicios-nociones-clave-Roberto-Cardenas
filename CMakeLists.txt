cmake_minimum_required(VERSION 3.29)
project(Colecci_n_para_ejercicios_nociones_clave_Roberto_Cardenas)

set(CMAKE_CXX_STANDARD 14)

include_directories("Proyecto 1")

add_executable(Colecci_n_para_ejercicios_nociones_clave_Roberto_Cardenas
    "Proyecto 1/main.cpp"
    "Proyecto 1/main.h"
        "Proyecto 1/Persona.cpp"
        "Proyecto 1/Persona.h"
        "Proyecto 1/Estudiante.h"
        "Proyecto 1/Estudiante.cpp"
        "Proyecto 2/main.h")

       add_executable(Proyecto_2
               "Proyecto 2/main.h"
               "Proyecto 2/main.cpp"
               "Proyecto 2/nuevo.cpp"
               "Proyecto 2/funciones.cpp"

       )

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
target_link_libraries(Proyecto_2 PRIVATE fmt::fmt)

add_library(matematicas STATIC "Proyecto 2/matematicas.cpp")
target_link_libraries(Proyecto_2 PRIVATE matematicas)
add_library(matematicas_ SHARED "Proyecto 2/matematicas.cpp")
target_link_libraries(Proyecto_2 PRIVATE)



