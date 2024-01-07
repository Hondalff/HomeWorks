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
    int distance; // проходимое растояние

    // Конструктор
    Transport(int status, int speed, int timeRest, int timeToRest, int reductionRate, std::string nameTransport, int distance) : status(status), speed(speed), timeRest(timeRest), timeToRest(timeToRest), reductionRate(reductionRate), nameTransport(nameTransport), distance(distance){};

public:

    virtual void PrintInfo() // вывод информации на консоль об объекте.
    {
        std::cout << "Status: " << status << std::endl;
        std::cout << "Speed: " << speed << std::endl;
        std::cout << "Time Rest: " << timeRest<< std::endl;
        std::cout << "Time to Rest: " << timeToRest << std::endl;
        std::cout << "Reduction Rate: " << reductionRate << std::endl;
        std::cout << "Name Transport: " << nameTransport << std::endl;
        std::cout << "distance: " << distance << std::endl;
        std::cout << std::endl;
    }

};

class GroundTransport : public Transport // Наземный транспорт, от которого они будут наследоваться 
{
protected:
    

public:
    GroundTransport(int speed, int timeRest, int timeToRest, std::string nameTransport, int distance) : Transport(Ground, speed, timeRest, timeToRest, 0, nameTransport, distance) {};
};

class AirTransport : public Transport // воздушный транспорт, от которого они будут наследоваться 
{
protected:

public:
    AirTransport(int speed, int reductionRate, std::string nameTransport, int distance) : Transport(Air, speed, 0, 0, reductionRate, nameTransport, distance) {};
};

// наземный
class Camel : public GroundTransport  // Верблюд
{
private:
    int countRate = 0;
    int time = 0;
public:
    Camel(int distance) : GroundTransport(10, 5, 30, "Верблюд", distance) {};

    void printdistance()
    {
        countRate = distance / (speed * timeToRest);
        time = distance / speed;
        if (countRate >= 2)
        {
            time += 5 + (8 * (countRate - 1));
        }
        else if (countRate == 1)
        {
            time += 5;
        }
        std::cout << "Time: " << time << std::endl;
    }
};
class FastCamel : public GroundTransport  // Верблюд-быстроход
{
private:
    int countRate = 0;
public:
    FastCamel(int distance) : GroundTransport(40, 5, 10, "Верблюд-быстроход", distance) {};
};
class Centaur : public GroundTransport  // Кентавр
{
private:
    
public:
    Centaur(int distance) : GroundTransport(15, 2, 8, "Кентавр", distance) {};
};
class TerrainBoots : public GroundTransport  // Ботинки-вездеходы
{
private:
    int countRate = 0;
public:
    TerrainBoots(int distance) : GroundTransport(6, 10, 60, "Ботинки-вездеходы", distance) {};
};

// Воздушный
class AirplaneCarpet : public AirTransport  // Верблюд
{
private:
    
public:
    AirplaneCarpet(int distance) : AirTransport(10, 0, "Ковёр-самолёт", distance)
    {
        if (distance < 1000) { Transport::reductionRate = 0; }
        else if (distance < 5000) { Transport::reductionRate = 3; }
        else if (distance < 10000) { Transport::reductionRate = 10; }
        else if (distance >= 10000) { Transport::reductionRate = 5; }
    };

};
class Eagle : public AirTransport  // Орёл
{
private:
    
public:
    Eagle(int distance) :AirTransport(8, 6, "Орёл", distance) {};
};
class Broom : public AirTransport  // Метла
{
private:
    
public:
    Broom(int distance) :AirTransport(20, 0, "Метла", distance)
    {
        Transport::reductionRate = distance / 1000;
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
    //Carpet.PrintInfo();

    Camel Camel(distance);
    Camel.PrintInfo();
    Camel.printdistance();

    Broom broom(distance);
    //broom.PrintInfo();
}
