#pragma once
#include "Header.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(double a, double b, double A, double B);
    bool check();
};