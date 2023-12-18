#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "ru");

	std::string name = "none";

	std::cout << "Введите имя: ";
	std::cin >> name;

	std::cout << "Здравствуйте, " << name << "!" << std::endl;

	return 0;
}