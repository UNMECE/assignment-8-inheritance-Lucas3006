#ifndef FIELD_H
#define FIELD_H

#include <iostream>

class Field {
protected:
    double value[3];

public:
    Field();
    Field(double x, double y, double z);
    Field(const Field &other);
    void printMagnitude() const;
    virtual ~Field() {}
};

#endif

