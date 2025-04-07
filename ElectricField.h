#ifndef ELECTRIC_FIELD_H
#define ELECTRIC_FIELD_H

#include "Field.h"

const double EPSILON_0 = 8.854e-12;

class ElectricField : public Field {
private:
    double calculatedField;

public:
    ElectricField(double x, double y, double z);
    void computeElectricField(double Q, double r);
    ElectricField operator+(const ElectricField &other) const;
    friend std::ostream &operator<<(std::ostream &out, const ElectricField &e);
};

#endif

