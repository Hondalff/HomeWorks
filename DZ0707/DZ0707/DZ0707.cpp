#include <iostream>
#define MODE 1

void add()
{
    int a, b;
    std::cout << "Введите число 1: ";
    std::cin >> a;

    std::cout << "Введите число 2: ";
    std::cin >> b;

    std::cout << "Результат сложения: " << a + b << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
#ifdef MODE
#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    add();
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;

#endif // MODE == 0
#else
#error "MODE не определена. Определите её!"
#endif // MODE


}