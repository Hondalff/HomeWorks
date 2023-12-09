#include "Header.h"

Rectangle::Rectangle(double a, double b) : Quadrangle(a, b, a, b, 90, 90, 90, 90)
{
    name = "прямоугольник";
    if (!check()) throw Error("Ошибка создания фигуры. Причина: не попарно равны");
}
bool Rectangle::check()
{
    if (Quadrangle::check())
    {
        if (a == c && b == d && A == B == C == D == 90)
        {
            return true;
        }
        return false;
    }
    return false;
}