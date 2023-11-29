#include <iostream>
#include "Header.h"




int main()
{
    setlocale(LC_ALL, "Russian");
    
    int a, b, c;

    std::cout << "Hello" << std::endl;

    while (true)
    {
        std::cout << "number 1: ";
        std::cin >> a;
        std::cout << "number 2: ";
        std::cin >> b;
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> c;
        if (c == 1)
        {
            std::cout << add(a, b);
        }
        else if (c == 2)
        {
            std::cout << sub(a, b);
        }
        else if (c == 3)
        {
            std::cout << mult(a, b);
        }
        else if (c == 4)
        {
            std::cout << division(a, b);
        }
        else if (c == 5)
        {
            std::cout << degree(a, b);
        }
        break;
    }

}
