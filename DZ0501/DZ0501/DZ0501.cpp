#include <iostream>

class Figure
{
public:
    
    int get_sides_count()
    {
        return sides_count;
    }
    std::string get_Name()
    {
        return name;
    }
    void print()
    {
        std::cout << name << ": " << sides_count << std::endl;
    }

protected:
    std::string name = "Фигура";
    int sides_count = 0;
};


class Triangle : public Figure
{
public:
    Triangle()
    {
        name = "Треугольник";
        sides_count = 3;
    }
private:
};

class Quadrangle : public Figure
{
public:
    Quadrangle()
    {
        name = "Четырёхугольник";
        sides_count = 4;
    }
private:
};



int main()
{
    setlocale(LC_ALL, "Russian");
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон" << std::endl;

    figure.print();
    triangle.print();
    quadrangle.print();

    return 0;
}
