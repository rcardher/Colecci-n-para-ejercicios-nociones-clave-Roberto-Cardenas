//
// Created by Roberto C on 31/10/24.
//

#include <iostream>
#include "funciones.h"
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))


int main() {
    std::cout << "Hola Mundo!" << std::endl;
    std::cout << "El resultado de la suma de 2 y 5 es: " << suma(2,5) << std::endl;
    std::cout << "El area del circulo es: " << AREA_CIRCULO(5) << " cmˆ2" << std::endl;
    return 0;
}
