#include <iostream>
#include <string>

enum StatusTransport // Список определяющий вид транспорта
{
    Ground = 1,
    Air = 2
};

class Transport  // базовый класс, от которого наследуются остальные
{
protected:
    int status; // Вид транспорта
    int speed;  // Скорость
    int timeRest;  // Время отдыха
    int timeToRest; // время до отдыха
    int reductionRate; // коэффициент сокращения растояния (Воздушные)
    std::string nameTransport;  // имя транспорта

    // Конструктор
    Transport(int status, int speed, int timeRest, int timeToRest, int reductionRate, std::string nameTransport) : status(status), speed(speed), timeRest(timeRest), timeToRest(timeToRest), reductionRate(reductionRate), nameTransport(nameTransport){};

public:
    virtual void PrintInfo() // вывод информации на консоль об объекте.
    {
        std::cout << "Status: " << status << std::endl;
        std::cout << "Speed: " << speed << std::endl;
        std::cout << "Time Rest: " << timeRest<< std::endl;
        std::cout << "Time to Rest: " << timeToRest << std::endl;
        std::cout << "Reduction Rate: " << reductionRate << std::endl;
        std::cout << "Name Transport: " << nameTransport << std::endl;
        std::cout << std::endl;
    }

};

class GroundTransport : public Transport // Наземный транспорт, от которого они будут наследоваться 
{
protected:
    

public:
    GroundTransport(int speed, int timeRest, int timeToRest, std::string nameTransport) : Transport(Ground, speed, timeRest, timeToRest, 0, nameTransport) {};
};

class AirTransport : public Transport // воздушный транспорт, от которого они будут наследоваться 
{
protected:

public:
    AirTransport(int speed, int reductionRate, std::string nameTransport) : Transport(Air, speed, 0, 0, reductionRate, nameTransport) {};
};

class Camel : public GroundTransport  // Верблюд
{
private:
    int countRate = 0;
public:
    Camel() : GroundTransport(10, 5, 30, "Верблюд") {};
};
class FastCamel : public GroundTransport  // Верблюд-быстроход
{
private:
    int countRate = 0;
public:
    FastCamel() : GroundTransport(40, 5, 10, "Верблюд-быстроход") {};
};
class Centaur : public GroundTransport  // Кентавр
{
private:
    
public:
    Centaur() : GroundTransport(15, 2, 8, "Кентавр") {};
};
class TerrainBoots : public GroundTransport  // Ботинки-вездеходы
{
private:
    int countRate = 0;
public:
    TerrainBoots() : GroundTransport(6, 10, 60, "Ботинки-вездеходы") {};
};


class AirplaneCarpet : public AirTransport  // Верблюд
{
private:
    int reductionRate = 0;
public:
    AirplaneCarpet(int distance) : AirTransport(10, reductionRate, "Ковёр-самолёт")
    {
        if (distance < 1000) { reductionRate = 0; }
        else if (distance < 5000) { reductionRate = 3; }
        else if (distance < 10000) { reductionRate = 10; }
        else if (distance >= 10000) { reductionRate = 5; }
    };
};
class Eagle : public AirTransport  // Орёл
{
private:
    
public:
    Eagle() :AirTransport(8, 6, "Орёл") {};
};
class Broom : public AirTransport  // Метла
{
private:
    int reductionRate;
public:
    Broom(int distance) :AirTransport(20, reductionRate, "Метла")
    {
        reductionRate = distance / 1000;
    };
};



int main()
{
    setlocale(LC_ALL, "ru");
    int distance = 0;

    std::cout << "Введите ркастояние: ";
    std::cin >> distance;
    std::cout << std::endl;

    AirplaneCarpet Carpet(distance);
    Carpet.PrintInfo();

}
