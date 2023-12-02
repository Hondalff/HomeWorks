#include <iostream>
#define SUB(x,y) ((x) - (y))

int main()
{
    setlocale(LC_ALL, "Russian");
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}
