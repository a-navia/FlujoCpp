#include "geometria.h"
#include <cmath>

namespace Geometria {
    double Circulo::calcularArea() const {
        return M_PI * radio * radio;
    }

    double Circulo::calcularPerimetro() const {
        return 2 * M_PI * radio;
    }
}