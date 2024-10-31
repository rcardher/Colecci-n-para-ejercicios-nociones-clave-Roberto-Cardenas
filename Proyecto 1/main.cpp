//
// Created by Roberto C on 31/10/24.
//

#include "main.h"
#include <iostream>

int suma(int a, int b) {
    return a + b;
}
int g = 20;

int main() {
    std::cout << "Hola Mundo!" << std::endl;
    std::cout <<"La suma es:" << suma(5,3) << std::endl;
    std::cout<<"Valor de g antes de la función suma:"<<g<<std::endl;
    return 0;
}
