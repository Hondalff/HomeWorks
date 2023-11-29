#include <iostream>
#include <Windows.h>
#include "Header.h"




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    bool close = true;
    bool useFirst = false;
    std::string text;
    int num1 = 0;

    std::cout << "Добро пожаловать! " << std::endl;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> text;

    if (text == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> num1;
    }

    Counter count(num1);

    while (close)
    {
        std::cout << "\nВведите команду ('+', '-', '=' или 'x'): ";
        std::cin >> text;

        if (text == "+") { count.Add(); }
        else if (text == "-") { count.Divide(); }
        else if (text == "=") { count.Info(); }
        else if (text == "х") { close = false; }
    }
    return 0;
}