
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

class Adress // класс адрес, который хранит в себе данные
{
public:

	Adress()
	{
		city = street = "None";
		home = apartment = 0;
	}
	Adress(std::string _city, std::string _street, int _home, int _apartment) : city(_city), street(_street), home(_home), apartment(_apartment) {}

	std::string OutputAdress()
	{
		return info = city + ", " + street + ", " + std::to_string(home) + ", " + std::to_string(apartment);
	}

	std::string GetCity()
	{
		return city;
	}

private:
	std::string city, street, info;
	int home, apartment;
};

void sort(Adress* arr, int SIZE)
{

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (arr[i].GetCity() > arr[j].GetCity())
			{
				Adress temp = arr[j];
				
			}
		}
	}

}

int main()
{
	setlocale(LC_ALL, "Russian");

	int SIZE; // переменная для записи количества адрессов и измерение размера массива
	std::string city, street;
	int home, apartment;

	std::ifstream in_file("G:\\Code_Project\\HomeWorks\\DZ0402\\DZ0402\\in.txt"); // открытие вайла in
	std::ofstream out_file("G:\\Code_Project\\HomeWorks\\DZ0402\\DZ0402\\out.txt"); //открытие файла out

	if (in_file.is_open())
	{
		std::cout << "File is open \n" << std::endl;
		in_file >> SIZE;

		Adress* arr = new Adress[SIZE]; // Создание динамического массива объектов

		for (int i = 0; i < SIZE; i++) // цикл для записи из файла в массив
		{
			in_file >> city;
			in_file >> street;
			in_file >> home;
			in_file >> apartment;

			arr[i] = Adress(city, street, home, apartment);
		}

		sort(arr, SIZE);

		out_file << SIZE << std::endl;

		for (int j = SIZE; j < SIZE; j++) // выводим адрес 
		{
			out_file << arr[j].OutputAdress() << std::endl;
		}

		delete[] arr; // удаление массива
	}
	else
	{
		std::cout << "Not Open" << std::endl;
	}

	in_file.close(); // закрытие файлов
	out_file.close();

	return 0;
}
