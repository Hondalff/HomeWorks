#include "I_triangle.h"

I_triangle::I_triangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A)
{
    name = "равнобедренный треугольник";
}

bool I_triangle::check()
{
    if (I_triangle::check())
    {
        if (a == c && A == C)
        {
            return true;
        }
    }
    return false;
}