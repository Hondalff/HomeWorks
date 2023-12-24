#include "Header.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C)
{
    name = "Треугольник";
}

bool Triangle::check()
{
    int a = A + B + C;
    if (a == 180)
    {
        return true;
    }
    return false;
}

void Triangle::print()
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
    std::cout << "Количество сторон: 3" << std::endl;
    std::cout << "Стороны: " << "a: " << a << " b: " << b << " c: " << c << std::endl;
    std::cout << "углы: " << "A: " << A << " B: " << B << " C: " << C << std::endl;
    std::cout << std::endl;
}
