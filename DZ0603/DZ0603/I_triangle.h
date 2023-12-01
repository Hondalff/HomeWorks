#pragma once
#include "Header.h"

class I_triangle : public Triangle
{
public:
    I_triangle(double a, double b, double A, double B);
    bool check();
};

