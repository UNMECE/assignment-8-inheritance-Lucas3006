#include "ElectricField.h"
#include <cmath>

ElectricField::ElectricField(double x, double y, double z) : Field(x, y, z), calculatedField(0.0) {}

void ElectricField::computeElectricField(double Q, double r) {
    calculatedField = Q / (4 * M_PI * EPSILON_0 * r * r);
}

ElectricField ElectricField::operator+(const ElectricField &other) const {
    return ElectricField(value[0] + other.value[0],
                         value[1] + other.value[1],
                         value[2] + other.value[2]);
}

std::ostream &operator<<(std::ostream &out, const ElectricField &e) {
    out << "(" << e.value[0] << ", " << e.value[1] << ", " << e.value[2] << ")";
    return out;
}

