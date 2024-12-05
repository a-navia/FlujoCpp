#include <iostream>
#include <fstream>
#include "matematicas/matematicas.h"
#include "geometria/geometria.h"
#include "ciencia/ciencias/ciencias.h"

int main() {
    std::ifstream file;
    file.open("C:/Users/navia/Documents/GitHub/FlujoCpp/example.txt");
    if (!file) {
        std::cerr << "No se pudo abrir el archivo.\n";
    } else {
        std::cout << "El archivo se abrió correctamente.\n";
        file.close();

        std::ofstream outFile("C:/Users/navia/Documents/GitHub/FlujoCpp/example.txt");

        //Ej1 uso de namespace
        int num;
        std::cout << "Introduce un numero: ";
        std::cin >> num;
        outFile << "El numero introducido es: " << num << std::endl;

        matematicas::Matematicas mat;
        outFile << "La suma de 5 + 5 es: " << mat.suma(5, 5) << std::endl;
        outFile << "La resta de 5 - 5 es: " << mat.resta(5, 5) << std::endl;

        //Ej2 Namespace archivos diferentes
        Geometria::Circulo circulo(7.0);
        Geometria::Triangulo triangulo(5.0, 10.0);
        Geometria::Cuadrado cuadrado(4.0);

        //Ej3 namespace relacion con clases
        outFile << "Area del circulo: " << circulo.calcularArea() << std::endl;
        outFile << "Perimetro del circulo: " << circulo.calcularPerimetro() << std::endl;

        outFile << "Area del triangulo: " << triangulo.calcularArea() << std::endl;
        outFile << "Perimetro del triangulo: " << triangulo.calcularPerimetro() << std::endl;

        outFile << "Area del cuadrado: " << cuadrado.calcularArea() << std::endl;
        outFile << "Perimetro del cuadrado: " << cuadrado.calcularPerimetro() << std::endl;

        //ej4 subnamespace
        double masa;
        std::cout << "Introduce la masa en kilogramos: ";
        std::cin >> masa;

        double energia = Ciencias::energiaDesdeMasa(masa);
        outFile << "La energia equivalente es: " << energia << " julios" << std::endl;

        double lado;
        std::cout << "Introduce el lado del pentagono: ";
        std::cin >> lado;

        double diagonal = Ciencias::diagonalPentagono(lado);
        outFile << "La longitud de la diagonal del pentagono es: " << diagonal << " unidades" << std::endl;

        outFile.close();
    }
    return 0;
}