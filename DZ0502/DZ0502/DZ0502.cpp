#include <iostream>

class Figure
{
public:

    void print_1()
    {
        std::cout << name << ": " << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n " << std::endl;
    }
    void print_2()
    {
        std::cout << name << ": " << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d="<< d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << d << "\n " << std::endl;
    }

protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string name;
    int sides_count;

    Figure()
    {
        a = b = c = d = 0;
        A = B = C = D = 0;
        name = "Фигура";
        sides_count = 0;
    }
};


class Triangle : public Figure
{
public:
    Triangle()
    {
        name = "Треугольник";
        a = 10; b = 20; c = 30;
        A = 50; B = 60; C = 70;
    }
private:
};

class R_triangle : public Figure
{
public:
    R_triangle()
    {
        name = "Прямоугольный треугольник";
        a = 10; b = 20; c = 30;
        A = 50; B = 60; C = 90;
    }
private:
};

class I_triangle : public Figure
{
public:
    I_triangle()
    {
        name = "Равнобедренный треугольник";
        a = 10; b = 20; c = 10;
        A = 50; B = 60; C = 50;
    }
private:
};

class Eq_triangle : public Figure
{
public:
    Eq_triangle()
    {
        name = "Равносторонний треугольник:";
        a = 30; b = 30; c = 30;
        A = 60; B = 60; C = 60;
    }
private:
};

class Quadrangle : public Figure
{
public:
    Quadrangle()
    {
        name = "Четырёхугольник:";
        a = 10; b = 20; c = 30; d = 40;
        A = 50; B = 60; C = 70; D = 80;
    }
private:
};

class Rectangle : public Figure
{
public:
    Rectangle()
    {
        name = "Прямоугольник:";
        a = 10; b = 20; c = 10; d = 20;
        A = 90; B = 90; C = 90; D = 90;
    }
private:
};

class Square : public Figure
{
public:
    Square()
    {
        name = "Квадрат:";
        a = 20; b = 20; c = 20; d = 20;
        A = 90; B = 90; C = 90; D = 90;
    }
private:
};

class Parallelogram : public Figure
{
public:
    Parallelogram()
    {
        name = "Параллелограмм:";
        a = 20; b = 30; c = 20; d = 30;
        A = 30; B = 40; C = 30; D = 40;
    }
private:
};

class Rhombus : public Figure
{
public:
    Rhombus()
    {
        name = "Ромб:";
        a = 30; b = 30; c = 30; d = 30;
        A = 30; B = 40; C = 30; D = 40;
    }
private:
};



int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle triangle;
    R_triangle R_triangle;
    I_triangle I_triangle;
    Eq_triangle Eq_triangle;
    Quadrangle Quadrangle;
    Rectangle Rectangle;
    Square Square;
    Parallelogram Parallelogram;
    Rhombus Rhombus;



    triangle.print_1();
    R_triangle.print_1();
    I_triangle.print_1();
    Eq_triangle.print_1();
    Quadrangle.print_2();
    Rectangle.print_2();
    Square.print_2();
    Parallelogram.print_2();
    Rhombus.print_2();
  
    return 0;
}