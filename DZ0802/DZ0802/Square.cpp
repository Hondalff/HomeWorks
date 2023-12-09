#include "Header.h"

Square::Square(double a) : Rhombus(a, 90, 90)
{
    name = "Квадрат";
    if (!check()) throw Error("Ошибка создания фигуры. Причина: все углы не равны 90");
}
bool Square::check()
{
    if (Rhombus::check())
    {
        if (a == b == c == d && A == B == C == D == 90)
        {
            return true;
        }
        return false;
    }
    return false;
}