#include "Header.h"

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D)
{
    name = "Четырехугольник";
    if (!check()) throw Error("Ошибка создания фигуры. Причина: сумма углов не равна 360") ;
}
void Quadrangle::print()
{
    std::cout << name << ": " << std::endl;
    if (check())
    {
        std::cout << "Правильная" << std::endl;
    }
    else
    {
        std::cout << "Неправильная" << std::endl;
    }
    std::cout << "Количество сторон: 4" << std::endl;
    std::cout << "Стороны: " << "a: " << a << " b: " << b << " c: " << c << " d: " << d << std::endl;
    std::cout << "углы: " << "A: " << A << " B: " << B << " C: " << C << " D: " << D << std::endl;
    std::cout << std::endl;
}
bool Quadrangle::check()
{
    int a = A + B + C + D;
    if (a == 360)
    {
        return true;
    }
    return false;
}