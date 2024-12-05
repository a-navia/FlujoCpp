//
// Created by navia on 5/12/2024.
//

#include <iostream>
#include "matematicas/matematicas.h"

int main() {
    int num;
    std::cout << "Introduce un numero: ";
    std::cin >> num;
    std::cout << "El numero introducido es: " << num << std::endl;

    matematicas::Matematicas mat;
    std::cout << "La suma de 5 + 5 es: " << mat.suma(5, 5) << std::endl;
    std::cout << "La resta de 5 - 5 es: " << mat.resta(5, 5) << std::endl;
    return 0;
}