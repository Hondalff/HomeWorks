#include <iostream>
#include <string>

namespace MyArray
{
    int*** Aded_Arr(int& depth, int& rows, int& cols) {
        int*** arr = new int** [depth];
        for (int i = 0; i < depth; ++i)
        {
            arr[i] = new int* [rows];
            for (int j = 0; j < rows; ++j)
            {
                arr[i][j] = new int[cols];
            }
        }
        return arr;
    }
    void Delete_Arr(int*** arr, int& depth, int& rows)
    {
        for (int i = 0; i < depth; ++i)
        {
            for (int j = 0; j < rows; ++j)
            {
                delete[] arr[i][j];
                arr[i][j] = nullptr;
            }
            delete[] arr[i];
            arr[i] = nullptr;
        }
        delete[] arr;
        arr = nullptr;
    }
    void Print_Arr(int*** arr, int& depth, int& rows, int& cols)
    {
        for (int i = 0; i < depth; ++i)
        {
            for (int j = 0; j < rows; ++j)
            {
                for (int k = 0; k < cols; ++k)
                {
                    std::cout << arr[i][j][k] << "\t";
                }
                std::cout << std::endl;
            }
            std::cout << std::endl;
            std::cout << std::endl;
        }
    }
    void Min_Max(int*** arr, int& depth, int& rows, int& cols)
    {
        int Min = arr[0][0][0];
        int Max = arr[0][0][0];

        for (int i = 0; i < depth; ++i)
        {
            for (int j = 0; j < rows; ++j)
            {
                for (int k = 0; k < cols; ++k)
                {
                    if (arr[i][j][k] < Min)
                    {
                        Min = arr[i][j][k];
                    }
                    if (arr[i][j][k] > Max)
                    {
                        Max = arr[i][j][k];
                    }
                }
            }
        }

        std::cout << "Min: " << Min << std::endl;
        std::cout << "Max: " << Max << std::endl;

    }
    void Fill_Arr(int*** arr, int& depth, int& rows, int& cols, int& range)
    {
        srand(time(NULL));
        for (int i = 0; i < depth; ++i)
        {
            for (int j = 0; j < rows; ++j)
            {
                for (int k = 0; k < cols; ++k)
                {
                    arr[i][j][k] = rand() % range;
                }
            }
        }
    }
    void Random_Num(int& depth, int& rows, int& cols, int& range)
    {
        srand(time(NULL));
        depth = rand() % 1 + 2;
        rows = rand() % 1 + 2;
        cols = rand() % 1 + 4;
        range = rand() % 900 + 100;
    }
    int* AddOneArray(int const size)
    {
        int* array = new int[size];
        return array;
    }
    void DeletOneArray(int* array, int const size)
    {
        delete[] array;
        array = nullptr;
    }
    void FillOneArray(int* array, int const size)
    {
        srand(time(NULL));
        for (int i = 0; i < size; ++i)
        {
            array[i] = rand() % 100;
        }
    }
    void PrintOneArray(int* array, int const size)
    {
        for (int i = 0; i < size; ++i)
        {
            std::cout << array[i] << "\t";
        }
        std::cout << std::endl;
    }
    void CopyOneArray(int* array_01, int* array_02, int const size)
    {
        for (int i = 0; i < size; i++)
        {
            array_01[i] = array_02[i];
        }
    }
    void PushBackArray(int*& array, int& sizeArr, int const value)
    {
        int* newArray = new int[sizeArr + 1];
        for (int i = 0; i < sizeArr; i++)
        {
            newArray[i] = array[i];
        }
        DeletOneArray(array, sizeArr);
        newArray[sizeArr] = value;
        sizeArr++;
        array = newArray;
    }
    void PushBeginArray(int*& array, int& sizeArr, int const value)
    {
        int* newArray = new int[++sizeArr];
        for (int i = 1; i < sizeArr; i++)
        {
            newArray[i] = array[i - 1];
        }
        DeletOneArray(array, sizeArr);
        newArray[0] = value;
        array = newArray;
    }
    void DeleteBackArray(int*& array, int& sizeArr)
    {
        int* newArray = new int[--sizeArr];
        for (int i = 0; i < sizeArr; i++)
        {
            newArray[i] = array[i];
        }
        DeletOneArray(array, sizeArr);
        array = newArray;
    }
    void DeleteBeginArray(int*& array, int& sizeArr, int rage)
    {
        if (rage == 0)
        {
            return;
        }
        int* newArray = new int[sizeArr - 1];
        for (int i = 0; i < sizeArr; i++)
        {
            newArray[i] = array[i + 1];
        }
        DeletOneArray(array, sizeArr);
        sizeArr--;
        array = newArray;
        return DeleteBeginArray(array, sizeArr, --rage);
    }
    void PushMiddleArray(int*& array, int& sizeArr, int const value, int element)
    {
        int* newArray = new int[++sizeArr];
        for (int i = 0; i < sizeArr; i++)
        {
            if (i == element - 1)
            {
                newArray[i] = value;
            }
            else if (i > element - 1)
            {
                newArray[i] = array[i - 1];
            }
            else
            {
                newArray[i] = array[i];
            }

        }
        DeletOneArray(array, sizeArr);
        array = newArray;
    }
    void DeleteMiddleArray(int*& array, int& sizeArr, int element)
    {
        int* newArray = new int[--sizeArr];
        for (int i = 0; i < sizeArr; i++)
        {
            if (i >= element - 1)
            {
                newArray[i] = array[i + 1];
            }

            else
            {
                newArray[i] = array[i];
            }

        }
        DeletOneArray(array, sizeArr);
        array = newArray;
    }
    int length(const char* str)
    {
        int counter = 0;

        while (str[counter] != '\0')
        {
            counter++;
        }

        return counter;

    }
    std::string GetDataPC()
    {
        return "Info from my PC";
    }
    void ShowInfo(std::string(*info)())
    {
        std::cout << info() << std::endl;
    }
}
class Human
{
public:
    Human() {};
    Human(int Years, std::string name)
    {
        this->age = 2024 - Years;
        this->name = name;
        
    };
   
    int GetAgeHuman() { return age; }
    std::string GetNameHuman() { return name; }

    void PrintInfo()
    {
        std::cout << "Имя: " << name << "\nВозраст: " << age << std::endl;
    }
   
    ~Human() {};

private:
    int age = 0;
    int years = 0;
    std::string name = "None";

    bool CheckWeapon() { return false; }
};

int main() {
    setlocale(LC_ALL, "ru");
    
    Human Human01(1998, "Dima");
    Human01.PrintInfo();
    


    return 0;
}