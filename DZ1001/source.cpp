#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "ru");

	std::string name = "none";

	std::cout << "������� ���: ";
	std::cin >> name;

	std::cout << "������������, " << name << "!" << std::endl;

	return 0;
}