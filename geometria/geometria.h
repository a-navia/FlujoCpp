#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {
    class Circulo {
    public:
        Circulo(double r) : radio(r) {}
        double calcularArea() const;
        double calcularPerimetro() const;
    private:
        double radio;
    };

    class Triangulo {
    public:
        Triangulo(double b, double h) : base(b), altura(h) {}
        double calcularArea() const;
        double calcularPerimetro() const; // Assuming you want to calculate the perimeter of a specific type of triangle
    private:
        double base;
        double altura;
    };

    class Cuadrado {
    public:
        Cuadrado(double l) : lado(l) {}
        double calcularArea() const;
        double calcularPerimetro() const;
    private:
        double lado;
    };
}

#endif // GEOMETRIA_H