#include <iostream>
#include <string>


enum Seasons
{
January = 1,
February,
March,
April,
May,
June,
July,
August,
September,
October,
November,
December
};

int CheckMonts(int numberSeason)
{
        std::cout << "введите номер месяца: ";
        std::cin >> numberSeason;
        Seasons season = static_cast<Seasons>(numberSeason);


        if(numberSeason > 0 && numberSeason < 13)
        {
            switch (season)
            {
            case Seasons::January:
                std::cout << "Январь" << std::endl;
                break;
            case Seasons::February:
                std::cout << "Февраль" << std::endl;
                break;
            case Seasons::March:
                std::cout << "Март" << std::endl;
                break;
            case Seasons::April:
                std::cout << "Апрель" << std::endl;
                break;
            case Seasons::May:
                std::cout << "Май" << std::endl;
                break;
            case Seasons::June:
                std::cout << "Июнь" << std::endl;
                break;
            case Seasons::July:
                std::cout << "Июль" << std::endl;
                break;
            case Seasons::August:
                std::cout << "Август" << std::endl;
                break;
            case Seasons::September:
                std::cout << "Сентябрь" << std::endl;
                break;
            case Seasons::October:
                std::cout << "Октябрь" << std::endl;
                break;
            case Seasons::November:
                std::cout << "Ноябрь" << std::endl;
                break;
            case Seasons::December:
                std::cout << "Декабрь" << std::endl;
                break;
            }
        }
        
    if (numberSeason > 12 || numberSeason < 0)
    {
        std::cout << "Не правильный номер" << std::endl;
    }
    if (numberSeason == 0) 
    {
        std::cout << "До свидания!";
        return 0;        
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    int numberSeason = 0;
   
    while (true)
    {
       numberSeason = CheckMonts(numberSeason);
       if (numberSeason == 0) { break; }
    }
    
    return 0;
}