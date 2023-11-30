#include <iostream>

class Figure
{
public:
      
protected:
    std::string name;
};


class Triangle : public Figure
{
protected:
    double a, b, c;
    double A, B, C;
public:
    Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C)
    {
        name = "Треугольник";
    }
   
    virtual void print()
    {
        std::cout << name << ": " << std::endl;
        std::cout << "Количество сторон: 3" << std::endl;
        std::cout << "Стороны: " << "a: " << a << " b: " << b << " c: " << c << std::endl;
        std::cout << "углы: " << "A: " << A << " B: " << B << " C: " << C << std::endl;
      
    }
};

class R_triangle : public Triangle
{
public:
    R_triangle(double a, double b, double c, double A, double B, double C) : Triangle(a,b,c,A,B,90)
    {
        name = "прямоугольный треугольник";
    }

};

class I_triangle : public Triangle
{
public:
    I_triangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A)
    {
        name = "равнобедренный треугольник";
    }
};

class Eq_triangle : public Triangle
{
public:
    Eq_triangle(double a) : Triangle(a, a, a, 60, 60, 60)
    {
        name = "равносторонний треугольник ";
    }
};

class Quadrangle : public Figure
{
protected:
    double a, b, c, d;
    double A, B, C, D;
public:
    Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D)
    {
        name = "Четырехугольник";
    }
    virtual void print()
    {
        std::cout << name << ": " << std::endl;
        std::cout << "Количество сторон: 3" << std::endl;
        std::cout << "Стороны: " << "a: " << a << " b: " << b << " c: " << c << " d: " << d << std::endl;
        std::cout << "углы: " << "A: " << A << " B: " << B << " C: " << C << " D: " << D << std::endl;

    }
};

class Rhombus : public Quadrangle
{
public:
    Rhombus(double a, double A, double B) : Quadrangle(a, a, a, a, A, B, A, B)
    {
        name = "Ромб";
    }
};

class Square : public Rhombus
{
public:
    Square(double a) : Rhombus(a,90, 90)
    {
        name = "Квадрат";
    }
};

class Rectangle : public Quadrangle
{
public:
    Rectangle(double a, double b) : Quadrangle(a, b, a, b, 90, 90, 90, 90)
    {
        name = "прямоугольник";
    }
};


class Parallelogram : public Quadrangle
{
public:
    Parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B)
    {
        name = "Параллелограмм";
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle triangle(10,20,30,50,60,70);
    R_triangle r_triangle();
    
   
    triangle.print();
   
  
    return 0;
}