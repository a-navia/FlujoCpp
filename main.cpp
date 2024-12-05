#include <iostream>
#include "matematicas/matematicas.h"
#include "geometria/geometria.h"
#include "ciencia/ciencias/ciencias.h"

int main() {
    //Ej1 uso de namespace
    int num;
    std::cout << "Introduce un numero: ";
    std::cin >> num;
    std::cout << "El numero introducido es: " << num << std::endl;

    matematicas::Matematicas mat;
    std::cout << "La suma de 5 + 5 es: " << mat.suma(5, 5) << std::endl;
    std::cout << "La resta de 5 - 5 es: " << mat.resta(5, 5) << std::endl;
//Ej2 Namespace archivos diferentes
    Geometria::Circulo circulo(7.0);
    Geometria::Triangulo triangulo(5.0, 10.0);
    Geometria::Cuadrado cuadrado(4.0);
//Ej3 namespace relacion  con clases
    std::cout << "Area del circulo: " << circulo.calcularArea() << std::endl;
    std::cout << "Perimetro del circulo: " << circulo.calcularPerimetro() << std::endl;

    std::cout << "Area del triangulo: " << triangulo.calcularArea() << std::endl;
    std::cout << "Perimetro del triangulo: " << triangulo.calcularPerimetro() << std::endl;

    std::cout << "Area del cuadrado: " << cuadrado.calcularArea() << std::endl;
    std::cout << "Perimetro del cuadrado: " << cuadrado.calcularPerimetro() << std::endl;
//ej4 subnamespace
    double masa;
    std::cout << "Introduce la masa en kilogramos: ";
    std::cin >> masa;

    double energia = Ciencias::energiaDesdeMasa(masa);
    std::cout << "La energia equivalente es: " << energia << " julios" << std::endl;

    double lado;
    std::cout << "Introduce el lado del pentagono: ";
    std::cin >> lado;

    double diagonal = Ciencias::diagonalPentagono(lado);
    std::cout << "La longitud de la diagonal del pentagono es: " << diagonal << " unidades" << std::endl;
//ej5 STL

    return 0;
}