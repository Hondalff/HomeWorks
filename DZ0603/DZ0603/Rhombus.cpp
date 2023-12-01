#include "Rhombus.h"

Rhombus::Rhombus(double a, double A, double B) : Quadrangle(a, a, a, a, A, B, A, B)
{
    name = "Ромб";
}
bool Rhombus::check()
{
    if (Quadrangle::check())
    {
        if (a == b == c == d && A == C && B == D)
        {
            return true;
        }
    }
    return false;
}