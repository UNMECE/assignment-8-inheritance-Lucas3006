#include "ElectricField.h"
#include "MagneticField.h"
#include <iostream>

int main() {
    ElectricField e1(0, 1e5, 1e3);
    ElectricField e2(2e4, 3e5, 5e2);
    MagneticField b1(0.01, 0.02, 0.03);
    MagneticField b2(0.04, 0.05, 0.06);

    std::cout << e1 << "\n";
    std::cout << b1 << "\n";

    e1.computeElectricField(1e-6, 0.1);
    b1.computeMagneticField(5, 0.1);

    ElectricField e3 = e1 + e2;
    MagneticField b3 = b1 + b2;

    std::cout << e3 << "\n";
    std::cout << b3 << "\n";

    return 0;
}

