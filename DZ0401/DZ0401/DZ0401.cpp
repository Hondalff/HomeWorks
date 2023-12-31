﻿
#include <iostream>
#include <string>
#include <fstream>

class Adress // класс адрес, который хранит в себе данные
{
public:
	
	Adress()
	{
		city = street = "None";		
		home = apartment = 0;
	}
	Adress(std::string _city, std::string _street, int _home, int _apartment) : city(_city), street(_street), home(_home), apartment(_apartment){}

	std::string OutputAdress()
	{
		return info = city + ", " + street + ", " + std::to_string(home) + ", " + std::to_string(apartment);
	}

private:
	std::string city, street, info;
	int home, apartment;
};

int main()
{
    setlocale(LC_ALL, "Russian");	

	int SIZE; // переменная для записи количества адрессов и измерение размера массива
	std::string city, street;
	int home, apartment;

	std::ifstream in_file("G:\\Code_Project\\HomeWorks\\DZ0401\\DZ0401\\in.txt"); // открытие вайла in
	std::ofstream out_file("G:\\Code_Project\\HomeWorks\\DZ0401\\DZ0401\\out.txt"); //открытие файла out

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

		out_file << SIZE << std::endl;

		for (int j = SIZE-1; j > -1; j--) // выводим адрес в файл в обратном порядке.
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
