#include "geometria.h"

namespace Geometria {
    double Cuadrado::calcularArea() const {
        return lado * lado;
    }

    double Cuadrado::calcularPerimetro() const {
        return 4 * lado;
    }
}