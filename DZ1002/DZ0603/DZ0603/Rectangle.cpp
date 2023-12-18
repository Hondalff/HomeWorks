#include "Header.h"

Rectangle::Rectangle(double a, double b) : Quadrangle(a, b, a, b, 90, 90, 90, 90)
{
    name = "прямоугольник";
}
bool Rectangle::check()
{
    if (Quadrangle::check())
    {
        if (a == c && b == d && A == B == C == D == 90)
        {
            return true;
        }
    }
    return false;
}