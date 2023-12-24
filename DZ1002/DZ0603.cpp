#include "Header.h"

void print_info(Figure* f)
{
    f->print();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    R_triangle r_tri(10, 20, 30, 50, 60);
    I_triangle i_triangle(10, 20, 50, 60);
    Eq_triangle eq_triangle(30);
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_info(&triangle);
    print_info(&r_tri);
    print_info(&i_triangle);
    print_info(&eq_triangle);
    print_info(&quadrangle);
    print_info(&rectangle);
    print_info(&square);
    print_info(&parallelogram);
    print_info(&rhombus);

    return 0;
}