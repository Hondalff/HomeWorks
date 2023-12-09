#include "Header.h"

I_triangle::I_triangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A)
{
    name = "�������������� �����������";
    if (!check()) throw std::domain_error("������ �������� ������. �������: ������� � ���� �� �����");
}

bool I_triangle::check()
{
    if (Triangle::check())
    {
        if (a == c && A == C)
        {
            return true;
        }
        return false;
    }
    return false;
}