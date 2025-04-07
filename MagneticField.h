#ifndef MAGNETIC_FIELD_H
#define MAGNETIC_FIELD_H

#include "Field.h"
#include <math.h>

const double MU_0 = 4 * M_PI * 1e-7;

class MagneticField : public Field {
private:
    double calculatedField;

public:
    MagneticField(double x, double y, double z);
    void computeMagneticField(double I, double r);
    MagneticField operator+(const MagneticField &other) const;
    friend std::ostream &operator<<(std::ostream &out, const MagneticField &b);
};

#endif

