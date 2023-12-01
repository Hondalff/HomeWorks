#include "R_triangle.h"

    R_triangle::R_triangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90)
    {
        name = "прямоугольный треугольник";
    }
    bool R_triangle::check()
    {
        if (R_triangle::check())
        {
            if (this->C == 90)
            {
                return true;
            }
        }
        return false;
    }