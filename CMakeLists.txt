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
        "Proyecto 1/Estudiante.cpp")
