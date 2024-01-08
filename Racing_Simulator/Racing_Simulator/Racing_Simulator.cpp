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
    std::string nameTransport;  // имя транспорта
    int speed;  // Скорость
    int distance; // проходимое растояние

    // Конструктор
    Transport(int status, std::string nameTransport, int speed, int distance)  : status(status), nameTransport(nameTransport), speed(speed), distance(distance) {};

public:

    virtual void PrintInfo() // вывод информации на консоль об объекте.
    {
        std::cout << "Status: " << status << std::endl;
        std::cout << "Speed: " << speed << std::endl;
        std::cout << "Name Transport: " << nameTransport << std::endl;
        std::cout << "distance: " << distance << std::endl;
        std::cout << std::endl;
    }

};

class GroundTransport : public Transport // Наземный транспорт, от которого они будут наследоваться 
{
protected:
    int timeToRest; // время до отдыха
    int countRate = 0;
    int time = 0;

    int TimePassage()
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

    }

public:
    GroundTransport(std::string nameTransport, int speed, int timeToRest, int distance) : Transport(Ground, nameTransport, speed, distance ) 
    {
        this->timeToRest = timeToRest;
    };

};

class AirTransport : public Transport // воздушный транспорт, от которого они будут наследоваться 
{
protected:
    int reductionRate; // коэффициент сокращения растояния (Воздушные)

public:
    AirTransport(std::string nameTransport, int speed, int reductionRate, int distance) : Transport(Air, nameTransport, speed, distance) {};
};

// наземный
class Camel : public GroundTransport  // Верблюд
{
private:
    int time = 0;
public:
    Camel(int distance) : GroundTransport("Верблюд", 10, 30, distance) {};

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
    }
};
class FastCamel : public GroundTransport  // Верблюд-быстроход
{
private:
    int countRate = 0;
public:
    FastCamel(int distance) : GroundTransport("Верблюд-быстроход", 40, 10,distance) {};
};
class Centaur : public GroundTransport  // Кентавр
{
private:
    
public:
    Centaur(int distance) : GroundTransport("Кентавр", 15, 8, distance) {};
};
class TerrainBoots : public GroundTransport  // Ботинки-вездеходы
{
private:
    int countRate = 0;
public:
    TerrainBoots(int distance) : GroundTransport("Ботинки-вездеходы", 6, 60, distance) {};
};

// Воздушный
class AirplaneCarpet : public AirTransport  // Верблюд
{
private:
    
public:
    AirplaneCarpet(int distance) : AirTransport("Ковёр-самолёт", 10, 0, distance)
    {
        if (distance < 1000) { AirTransport::reductionRate = 0; }
        else if (distance < 5000) { AirTransport::reductionRate = 3; }
        else if (distance < 10000) { AirTransport::reductionRate = 10; }
        else if (distance >= 10000) { AirTransport::reductionRate = 5; }
    };

};
class Eagle : public AirTransport  // Орёл
{
private:
    
public:
    Eagle(int distance) :AirTransport("Орёл", 8, 6, distance) {};
};
class Broom : public AirTransport  // Метла
{
private:
    
public:
    Broom(int distance) :AirTransport("Метла", 20, 0, distance)
    {
        AirTransport::reductionRate = distance / 1000;
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
