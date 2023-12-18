#include <iostream>
#include "Greeter.h"

int main()
{
    setlocale(LC_ALL, "ru");

    MyLib::Greeter Greeter;
    std::string name = "none";

    std::cout << "Введите имя: ";
    std::cin >> name;

    Greeter.print_text(name);

    return 0;
}
