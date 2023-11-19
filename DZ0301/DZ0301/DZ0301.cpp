#include <iostream>
#include <string>


class Calculator
{
private:
    double num1 = 0;
    double num2 = 0;

public:
    
    double add() { return num1 + num2; }
    double multiply() { return num1 * num2; }
    double subtract_1_2(){ return num1 - num2; }
    double subtract_2_1() { return num2 - num1; }
    double divide_1_2() { return num1 / num2; }
    double divide_2_1() { return num2 / num1; }
    bool set_num1(double num1)
    {
        if (num1 == 0) { return false; }
        this->num1 = num1;
        return true;
    }
    bool set_num2(double num2)
    {
        if (num2 == 0) { return false; }
        this->num2 = num2;
        return true;
    }
};




int main()
{
    setlocale(LC_ALL,"Russian");
    Calculator calc;
    double num1 = 0, num2 = 0;
    bool tr1 = false, tr2 = false;
    
    while (true)
    {
        while (!tr1)
        {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            tr1 = calc.set_num1(num1);
           
        }
        while (!tr2)
        {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            tr2 = calc.set_num2(num2);
        }
        

        std::cout << "num1 + num2 = " << calc.add() << std::endl;
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;

        system("PAUSE");
        system("cls");
        tr1 = false;
        tr2 = false;

    }
    return 0;
}