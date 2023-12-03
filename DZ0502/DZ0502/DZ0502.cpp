#include <iostream>

class Figure
{
public:
    virtual bool check() = 0;
    virtual void print() = 0;
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
    virtual bool check()
    {
        int a = A + B + C;
        if (a == 180)
        {
            return true;
        }
        return false;
    }
    virtual void print()
    {
        std::cout << name << ": " << std::endl;
        if (check())
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: 3" << std::endl;
        std::cout << "Стороны: " << "a: " << a << " b: " << b << " c: " << c << std::endl;
        std::cout << "углы: " << "A: " << A << " B: " << B << " C: " << C << std::endl;
        std::cout << std::endl;
    }
};

class R_triangle : public Triangle
{
public:
    R_triangle(double a, double b, double c, double A, double B) : Triangle(a,b,c,A,B,90)
    {
        name = "прямоугольный треугольник";
    }
    virtual bool check()
    {
        if (Triangle::check())
        {
            if (this ->C == 90)
            {
                return true;
            }
        }
        return false;
    }

};

class I_triangle : public Triangle
{
public:
    I_triangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A)
    {
        name = "равнобедренный треугольник";
    }
    virtual bool check()
    {
        if (Triangle::check())
        {
            if (a == c && A == C)
            {
                return true;
            }
        }
        return false;
    }

};

class Eq_triangle : public Triangle
{
public:
    Eq_triangle(double a) : Triangle(a, a, a, 60, 60, 60)
    {
        name = "равносторонний треугольник ";
    }
    virtual bool check()
    {
        if (Triangle::check())
        {
            if (a == c == b && A == B == C == 60)
            {
                return true;
            }
        }
        return false;
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
        if (check())
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: 4" << std::endl;
        std::cout << "Стороны: " << "a: " << a << " b: " << b << " c: " << c << " d: " << d << std::endl;
        std::cout << "углы: " << "A: " << A << " B: " << B << " C: " << C << " D: " << D << std::endl;
        std::cout << std::endl;

    }
    virtual bool check()
    {
        int a = A + B + C + D;
        if (a == 360)
        {
            return true;
        }
        return false;
    }
};

class Rhombus : public Quadrangle
{
public:
    Rhombus(double a, double A, double B) : Quadrangle(a, a, a, a, A, B, A, B)
    {
        name = "Ромб";
    }
    virtual bool check()
    {
        if (Quadrangle::check())
        {
            if (a == b == c == d && A == C && B == D)
            {
                return true;
            }
        }
        return false;
    }
};

class Square : public Rhombus
{
public:
    Square(double a) : Rhombus(a,90, 90)
    {
        name = "Квадрат";
    }
    virtual bool check()
    {
        if (Rhombus::check())
        {
            if (a==b==c==d && A==B==C==D==90)
            {
                return true;
            }
        }
        return false;
    }
};

class Rectangle : public Quadrangle
{
public:
    Rectangle(double a, double b) : Quadrangle(a, b, a, b, 90, 90, 90, 90)
    {
        name = "прямоугольник";
    }
    virtual bool check()
    {
        if (Quadrangle::check())
        {
            if (a == c && b == d && A == B == C == D == 90)
            {
                return true;
            }
        }
        return false;
    }
};


class Parallelogram : public Quadrangle
{
public:
    Parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B)
    {
        name = "Параллелограмм";
    }
    virtual bool check()
    {
        if (Quadrangle::check())
        {
            if (a == b && c == d && A == C && B == D)
            {
                return true;
            }
        }
        return false;
    }
};


void print_info(Figure* f)
{
    f->print();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle triangle(10,20,30,50,60,70);
    R_triangle r_tri(10,20,30,50,60);
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