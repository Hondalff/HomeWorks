#include "Square.h"

Square::Square(double a) : Rhombus(a, 90, 90)
{
    name = " вадрат";
}
bool Square::check()
{
    if (Rhombus::check())
    {
        if (a == b == c == d && A == B == C == D == 90)
        {
            return true;
        }
    }
    return false;
}