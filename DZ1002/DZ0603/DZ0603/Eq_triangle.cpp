#include "Header.h"

Eq_triangle::Eq_triangle(double a) : Triangle(a, a, a, 60, 60, 60)
{
    name = "равносторонний треугольник ";
}
bool Eq_triangle::check()
{
    if (Eq_triangle::check())
    {
        if (a == c == b && A == B == C == 60)
        {
            return true;
        }
    }
    return false;
}