#include <iostream>
#include <string>

enum class Programm
{
    CreateData = 1,
    Info,
    close
};

struct Adress
{
    std::string city = "NoCity";
    std::string street = "NoStreet";
    int house = 0;
    int apartment = 0;
    int index = 0;
};

void StateProg(bool& close, Adress& adres)
{
    int players;

    std::cout << "Добро пожаловать! " << std::endl;
    std::cout << "Выберете интересующий пункт." << std::endl;
    std::cout << std::endl;
    std::cout << "1. Изменить данные." << std::endl;
    std::cout << "2. Вывести данные." << std::endl;
    std::cout << "3. Выход." << std::endl;
    std::cin >> players;

    Programm prog = static_cast<Programm>(players);

    switch (prog)
    {
    case Programm::CreateData:
        std::cout << "Измените данные: " << std::endl;

        std::cout << "Город: ";
        std::cin >> adres.city;
        std::cout << std::endl;

        std::cout << "Улица: ";
        std::cin >> adres.street;
        std::cout << std::endl;

        std::cout << "Номер дома: ";
        std::cin >> adres.house;
        std::cout << std::endl;

        std::cout << "Номер квартиры: ";
        std::cin >> adres.apartment;
        std::cout << std::endl;

        std::cout << "Почтовый индекс: ";
        std::cin >> adres.index;
        std::cout << std::endl;
        break;
    
    case Programm::Info:
        std::cout << "Город: " << adres.city << std::endl;
        std::cout << "Улица: " << adres.street<< std::endl;
        std::cout << "Номер дома: " << adres.house<< std::endl;
        std::cout << "Номер квартиры: " << adres.apartment<< std::endl;
        std::cout << "Почтовый индекс: " << adres.index << std::endl;
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
    Adress adres;

    while (close)
    {
        StateProg(close, adres);
        system("PAUSE");
        system("cls");
    }
    return 0;
}