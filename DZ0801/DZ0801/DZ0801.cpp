#include <iostream>
#include <exception>


int function(std::string str, int forbidden_length, bool* work_prog)
{
    if (str.length() == forbidden_length)
    {
        *work_prog = false;
        throw std::invalid_argument("Вы ввели слово запретной длины! До свидания");
    }
    return str.length();
}

int main()
{
    setlocale(LC_ALL, "ru");
    std::string player_string;
    int stop_length;
    bool work_prog = true;

    std::cout << "Введите запретную длину: ";
    std::cin >> stop_length;

    while (work_prog)
    {
        try
        {
            std::cout << "Введите слово: ";
            std::cin >> player_string;
            std::cout << std::endl;
            std::cout << function(player_string, stop_length,&work_prog) << std::endl;
        }
        catch (const std::exception& bad_length)
        {
            std::cout << bad_length.what() << std::endl;
        }
    }    
}