#include "Header.h"

Eq_triangle::Eq_triangle(double a) : Triangle(a, a, a, 60, 60, 60)
{
    name = "равносторонний треугольник ";
    if (!check()) throw Error("Ошибка создания фигуры. Причина: все стороны не равны, все углы не равны");
}
bool Eq_triangle::check()
{
    if (Triangle::check())
    {
        if (a == c == b && A == B == C == 60)
        {
            return true;
        }
        return false;
    }
    return false;
}