#pragma once
#include "Header.h"

class R_triangle : public Triangle
{
public:
    R_triangle(double a, double b, double c, double A, double B);
    bool check();
};