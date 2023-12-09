#include "Header.h"

    R_triangle::R_triangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90)
    {
        name = "прямоугольный треугольник";
        if (!check()) throw Error("Ошибка создания фигуры. Причина: (угол C не равен 90");
    }
    bool R_triangle::check()
    {
        if (Triangle::check())
        {
            if (this->C == 90)
            {
                return true;
            }
            return false;
        }
        return false;
    }