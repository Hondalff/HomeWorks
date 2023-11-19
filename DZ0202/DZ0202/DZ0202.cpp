#include <iostream>
#include <string>

enum class Programm
{
    CreateData = 1,
    NewBalance,
    Info,
    close
};

struct Person
{
    int accountNumber = 0;
    std::string firstName = "NoName";
    float balanceMoney = 0;
};

void StateProg(bool& close, Person& pers)
{
    int players;

    std::cout << "Добро пожаловать в аккаунт! " << std::endl;
    std::cout << "Выберете интересующий пункт." << std::endl;
    std::cout << std::endl;
    std::cout << "1. Изменить данные." << std::endl;
    std::cout << "2. Изменить баланс." << std::endl;
    std::cout << "3. Вывести данные о счёте." << std::endl;
    std::cout << "4. Выход." << std::endl;
    std::cin >> players;

    Programm prog = static_cast<Programm>(players);    
    
    switch (prog)
    {
    case Programm::CreateData:
        std::cout << "Измените данные: " << std::endl;

        std::cout << "Номер аккаунта: ";
        std::cin >> pers.accountNumber;
        std::cout << std::endl;

        std::cout << "Имя: ";
        std::cin >> pers.firstName;
        std::cout << std::endl;

        std::cout << "Баланс денег: ";
        std::cin >> pers.balanceMoney;
        std::cout << std::endl;
        break;

    case Programm::NewBalance:
        std::cout << "текущий баланс: " << pers.balanceMoney << std::endl;
        std::cout << "Новый баланс денег: ";
        std::cin >> pers.balanceMoney;
        std::cout << std::endl;
        break;

    case Programm::Info:
        std::cout << "Номер аккаунта: " << pers.accountNumber << std::endl;
        std::cout << "Имя: " << pers.firstName << std::endl;
        std::cout << "Баланс денег: " << pers.balanceMoney << std::endl;
        break;

    case Programm::close:
        close = false;
        break;

    default:
        close = true;
        break;
    }
    

}

int main()
{
    setlocale(LC_ALL, "Russian");
    bool close = true;
    Person pers;

    while (close)
    {
        StateProg(close, pers);
        system("PAUSE");
        system("cls");
    }

}