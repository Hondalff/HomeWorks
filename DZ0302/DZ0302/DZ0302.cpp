#include <iostream>


class Counter
{
private:
    int count = 0;
public:
    int get_count() { return count; }
    int set_count(int value) { count = value; return count; }

    int Add() { return count++; }
    int Divide() { return count--; }
    void Info() { std::cout << count; }
    bool Exit() { return true; }
};

void StateProg(bool& close)
{
    char text;
    int num1;
    Counter count;

    std::cout << "Добро пожаловать! " << std::endl;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: " ;
    std::cin >> text;

    if (text == 'да')
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> num1;
        count.set_count(num1);
    }
    
    std::cout << "\nВведите команду ('+', '-', '=' или 'x'): ";
    std::cin >> text;

    if(text == '+') { count.Add(); }
    else if (text == '-') { count.Divide(); }
    else if (text == '=') { count.Info(); }
    else if (text == 'x') { close = false; }

  

}

int main()
{
    setlocale(LC_ALL, "Russian");
    bool close = true;
    

    while (close)
    {
        StateProg(close);
        system("PAUSE");
        system("cls");
    }
    return 0;
}