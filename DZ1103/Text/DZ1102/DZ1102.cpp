#include <iostream>
#include "Text.h"

int main()
{
    setlocale(LC_ALL, "ru");
    std::string name = "none";
    Text::Leaver leaver;

    std::cout << "Введите имя: ";
    std::cin >> name;

    leaver.leave(name);

    return 0;
}
