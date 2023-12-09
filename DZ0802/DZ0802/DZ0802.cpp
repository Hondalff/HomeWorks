#include "Header.h"

void print_info(Figure* f)
{
    f->print();
}

int main()
{
    setlocale(LC_ALL, "Russian");

    try { Triangle triangle(10, 20, 30, 50, 60, 70);  print_info(&triangle); }
    catch (std::exception& e) { std::cout << e.what() << std::endl; }

    try { R_triangle r_tri(10, 20, 30, 50, 60); print_info(&r_tri);}
    catch (std::exception& e) { std::cout << e.what() << std::endl; }

    try { I_triangle i_triangle(10, 20, 50, 60); print_info(&i_triangle);}
    catch (std::exception& e) { std::cout << e.what() << std::endl; }

    try { Eq_triangle eq_triangle(30); print_info(&eq_triangle);}
    catch (std::exception& e) { std::cout << e.what() << std::endl; }

    try { Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80); print_info(&quadrangle);}
    catch (std::exception& e) { std::cout << e.what() << std::endl; }

    try { Rectangle rectangle(10, 20); print_info(&rectangle);}
    catch (std::exception& e) { std::cout << e.what() << std::endl; }

    try { Square square(20); print_info(&square);}
    catch (std::exception& e) { std::cout << e.what() << std::endl; }

    try { Parallelogram parallelogram(20, 30, 30, 40); print_info(&parallelogram);}
    catch (std::exception& e) { std::cout << e.what() << std::endl; }

    try { Rhombus rhombus(30, 30, 40); print_info(&rhombus);}
    catch (std::exception& e) { std::cout << e.what() << std::endl; } 
       

    return 0;
}