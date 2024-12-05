//
// Created by navia on 5/12/2024.
//

#include "fisica.h"

namespace Fisica {
        double calcularEnergia(double masa) {
            return masa * VELOCIDAD_DE_LA_LUZ * VELOCIDAD_DE_LA_LUZ;
        }
}
