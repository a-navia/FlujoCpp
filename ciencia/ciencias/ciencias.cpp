#include "ciencias.h"
#include "../fisica/fisica.h"
#include "../matematicas/matematicas.h"

namespace Ciencias {
    double energiaDesdeMasa(double masa) {
        return Fisica::calcularEnergia(masa);
    }

    double diagonalPentagono(double lado) {
        return Matematicas::calcularDiagonalPentagono(lado);
    }
}
