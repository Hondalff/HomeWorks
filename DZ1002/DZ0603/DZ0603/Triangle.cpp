#include "Header.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C)
{
    name = "�����������";
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
        std::cout << "����������" << std::endl;
    }
    else
    {
        std::cout << "������������" << std::endl;
    }
    std::cout << "���������� ������: 3" << std::endl;
    std::cout << "�������: " << "a: " << a << " b: " << b << " c: " << c << std::endl;
    std::cout << "����: " << "A: " << A << " B: " << B << " C: " << C << std::endl;
    std::cout << std::endl;
}
