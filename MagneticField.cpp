#include "MagneticField.h"
#include <cmath>

MagneticField::MagneticField(double x, double y, double z) : Field(x, y, z), calculatedField(0.0) {}

void MagneticField::computeMagneticField(double I, double r) {
    calculatedField = I / (2 * M_PI * r * MU_0);
}

MagneticField MagneticField::operator+(const MagneticField &other) const {
    return MagneticField(value[0] + other.value[0],
                         value[1] + other.value[1],
                         value[2] + other.value[2]);
}

std::ostream &operator<<(std::ostream &out, const MagneticField &b) {
    out << "(" << b.value[0] << ", " << b.value[1] << ", " << b.value[2] << ")";
    return out;
}

