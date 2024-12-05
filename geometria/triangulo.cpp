#include "geometria.h"

namespace Geometria {
    double Triangulo::calcularArea() const {
        return (base * altura) / 2;
    }

    double Triangulo::calcularPerimetro() const {
        return 3 * base;
    }
}