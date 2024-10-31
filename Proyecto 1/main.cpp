//
// Created by Roberto C on 31/10/24.
//

#include "main.h"
#include <iostream>
#include "Persona.h"

int suma(int a, int b) {
    return a + b;
}
int g = 20;

int main() {
    std::cout << "Hola Mundo!" << std::endl;
    std::cout <<"La suma es:" << suma(5,3) << std::endl;
    std::cout <<"Valor de g antes de la función suma:"<<g<<std::endl;
    std::cout <<"La suma es:"<<suma(5,3) << std::endl;
    std::cout <<"Valor de g despues de la función suma:"<<g<<std::endl;

    Persona persona1;
    persona1.setNombre("Roberto");
    persona1.setEdad(18);
    persona1.setGenero("Masculino");
    std::cout << "Nombre: " << persona1.getNombre() << std::endl;
    std::cout << "Edad: " << persona1.getEdad() << std::endl;
    std::cout << "Genero: " << persona1.getGenero() << std::endl;
    return 0;
}

