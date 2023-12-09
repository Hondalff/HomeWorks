#include "Header.h"

Eq_triangle::Eq_triangle(double a) : Triangle(a, a, a, 60, 60, 60)
{
    name = "�������������� ����������� ";
    if (!check()) throw Error("������ �������� ������. �������: ��� ������� �� �����, ��� ���� �� �����");
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