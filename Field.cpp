#include "Field.h"

Field::Field() {
    value[0] = value[1] = value[2] = 0.0;
}

Field::Field(double x, double y, double z) {
    value[0] = x;
    value[1] = y;
    value[2] = z;
}

Field::Field(const Field &other) {
    value[0] = other.value[0];
    value[1] = other.value[1];
    value[2] = other.value[2];
}

void Field::printMagnitude() const {
    std::cout << "(" << value[0] << ", " << value[1] << ", " << value[2] << ")\n";
}

