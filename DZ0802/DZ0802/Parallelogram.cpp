#include "Header.h"

Parallelogram::Parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B)
{
    name = "Параллелограмм";
    if (!check()) throw std::domain_error("Ошибка создания фигуры. Причина: Cтороны и углы не попарно равны");
}
bool Parallelogram::check()
{
    if (Quadrangle::check())
    {
        if (a == b && c == d && A == C && B == D)
        {
            return true;
        }
        return false;
    }
    return false;
}