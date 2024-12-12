#include <iostream>
#include <fstream>
#include <sstream>
#include "matematicas/matematicas.h"
#include "geometria/geometria.h"
#include "ciencia/ciencias/ciencias.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Por favor, proporciona un argumento de texto para guardar en el archivo.\n";
        return 1;
    }
//hace falta dar la direccion del archivo
    std::ofstream file("C:/Users/navia/Documents/GitHub/FlujoCpp/command_line_input.txt");
    if (!file) {
        std::cerr << "No se pudo abrir el archivo para guardar el texto del argumento.\n";
        return 1;
    }

    file << argv[1];
    std::cout << "El texto del argumento se guardó correctamente en 'command_line_input.txt'.\n";
    file.close();

    std::ifstream inFile;
    inFile.open("C:/Users/navia/Documents/GitHub/FlujoCpp/example.txt");
    if (!inFile) {
        std::cerr << "No se pudo abrir el archivo 'example.txt'.\n";
    } else {
        std::cout << "El archivo 'example.txt' se abrió correctamente.\n";
        inFile.close();

        std::ofstream outFile("C:/Users/navia/Documents/GitHub/FlujoCpp/example.txt", std::ios::app);

        // Ej1 uso de namespace
        int num;
        std::cout << "Introduce un numero: ";
        std::cin >> num;
        outFile << "El numero introducido es: " << num << std::endl;

        matematicas::Matematicas mat;
        outFile << "La suma de 5 + 5 es: " << mat.suma(5, 5) << std::endl;
        outFile << "La resta de 5 - 5 es: " << mat.resta(5, 5) << std::endl;

        // Ej2 Namespace archivos diferentes
        Geometria::Circulo circulo(7.0);
        Geometria::Triangulo triangulo(5.0, 10.0);
        Geometria::Cuadrado cuadrado(4.0);

        // Ej3 namespace relacion con clases
        outFile << "Area del circulo: " << circulo.calcularArea() << std::endl;
        outFile << "Perimetro del circulo: " << circulo.calcularPerimetro() << std::endl;

        outFile << "Area del triangulo: " << triangulo.calcularArea() << std::endl;
        outFile << "Perimetro del triangulo: " << triangulo.calcularPerimetro() << std::endl;

        outFile << "Area del cuadrado: " << cuadrado.calcularArea() << std::endl;
        outFile << "Perimetro del cuadrado: " << cuadrado.calcularPerimetro() << std::endl;

        // Ej4 subnamespace
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

        // ej 5 Flujo de cadenas
        std::string text;
        std::cout << "Ingresa un texto: ";
        std::cin.ignore(); // Clear the newline character left in the input buffer
        std::getline(std::cin, text);

        std::stringstream ss(text);
        std::string line;
        while (std::getline(ss, line)) {
            std::cout << line << std::endl;
            outFile << line << std::endl;
        }

        outFile.close();
    }

    return 0;
}
